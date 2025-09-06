#include "Render.h"
#include "./ZeroGUI/ZeroGUI.h"
#include "Utils.h"
#include "Ready.h"
int Render::width = 0;
int Render::height = 0;

// 定义常用颜色常量
namespace Colors
{
    const FLinearColor Green = FLinearColor{0.0f, 1.0f, 0.0f, 1.0f};  // 绿色
    const FLinearColor Red = FLinearColor{1.0f, 0.0f, 0.0f, 1.0f};    // 红色
    const FLinearColor Blue = FLinearColor{0.0f, 0.0f, 1.0f, 1.0f};   // 蓝色
    const FLinearColor Yellow = FLinearColor{1.0f, 1.0f, 0.0f, 1.0f}; // 黄色
    const FLinearColor Purple = FLinearColor{1.0f, 0.0f, 1.0f, 1.0f}; // 紫色
    const FLinearColor Orange = FLinearColor{1.0f, 0.5f, 0.0f, 1.0f}; // 橙色
    const FLinearColor White = FLinearColor{1.0f, 1.0f, 1.0f, 1.0f};  // 白色
}
namespace Menu
{
    FVector2D pos{100, 100};
    void ESPTick()
    {
    }
    void DebugTick()
    {
        char Tip_ActorNum[32];

        ZeroGUI::TextLeft("调试板块", FVector2D{50, 5}, FLinearColor{1.f, 1.f, 1.f, 1.f}, true);
        ZeroGUI::PushNextElementY(20.0f);
        TArray<AActor *> Actors = GETREFERENCE(TArray<AActor *>, Config::gWorld->PersistentLevel, 0x98);
        DEBUG_LOG("[Ready]Actors=%p", &Actors);
        sprintf_s(Tip_ActorNum, skCrypt("Actor数量: %d"), Actors.Num());
        ZeroGUI::Text(Tip_ActorNum);
        if (ZeroGUI::Button(skCrypt("Dump Actors"), FVector2D{100, 25}))
        {
            // 打开文件准备写入
            FILE *file = nullptr;
            fopen_s(&file, skCrypt("Actors.csv"), "w");

            if (file)
            {
                fprintf(file, skCrypt("Index,SuperClass,ClassName,FullName,Address\n"));
                for (int i = 0; i < Actors.Num(); i++)
                {
                    if (Actors.IsValidIndex(i) && Actors[i] > 0)
                    {
                        fprintf(file, "%d,%s,%s,%s,%p\n",
                                Actors[i]->Index,
                                Actors[i]->Class->Super->GetFullName().c_str(),
                                Actors[i]->Class->GetFullName().c_str(),
                                Actors[i]->GetName().c_str(),
                                Actors[i]);
                    }
                }
                // 关闭文件
                fclose(file);
            }
        }
    }
    void Tick()
    {
        static bool menu_opened = false;
        if (GetAsyncKeyState(VK_INSERT) & 1)
            menu_opened = !menu_opened; // Our menu key
        if (ZeroGUI::Window(skCrypt("ReadyOrNot内置作弊"), &pos, FVector2D{500.0f, 400.0f}, menu_opened))
        {
            static int tab = 0;
            if (ZeroGUI::ButtonTab(skCrypt("透视板块"), FVector2D{110, 25}, tab == 0))
                tab = 0;
            if (ZeroGUI::ButtonTab(skCrypt("ESP板块"), FVector2D{110, 25}, tab == 1))
                tab = 1;
            if (ZeroGUI::ButtonTab(skCrypt("调试板块"), FVector2D{110, 25}, tab == 6))
                tab = 6;
            if (tab == 0)
                ESPTick();
            else if (tab == 6)
                DebugTick();
        }

        ZeroGUI::Render(); // Custom Render. I use it for drawing Combobox and ColorPicker over the menu
        ZeroGUI::Draw_Cursor(menu_opened);
    }
} // namespace Menu

namespace ESP
{
    // 通用屏幕投影函数
    bool ProjectToScreen(AActor *Actor, FVector2D &ScreenLocation, float &Distance)
    {
        if (!Actor->RootComponent)
            return false;

        FVector EntityLocation = Actor->RootComponent->RelativeLocation;

        // 投影世界坐标到屏幕坐标
        Config::LocalPlayer->PlayerController->ProjectWorldLocationToScreen(EntityLocation, &ScreenLocation, false);

        // 检查坐标是否在屏幕范围内
        if (ScreenLocation.X < 0 || ScreenLocation.X > Render::width || ScreenLocation.Y < 0 || ScreenLocation.Y > Render::height)
            return false;

        // 计算距离
        if (Config::LocalPlayer->PlayerController->Pawn->RootComponent->AttachParent)
        {
            Distance = DIST(Config::LocalPlayer->PlayerController->Pawn->RootComponent->AttachParent->RelativeLocation, EntityLocation);
        }
        else
        {
            Distance = DIST(Config::LocalPlayer->PlayerController->Pawn->RootComponent->RelativeLocation, EntityLocation);
        }

        return true;
    }

    // 添加绘制血条函数
    void DrawHealthBar(FVector2D ScreenLocation, float HealthPercentage, float Distance, FLinearColor BarColor = Colors::Green)
    {
        // 基础血条宽度和高度
        float BaseWidth = 100.0f;
        float BaseHeight = 8.0f;

        // 根据距离缩放血条大小（近大远小）
        float ScaleFactor = 65.0f / (Distance + 10.0f); // 防止距离为0时除以0
        float BarWidth = BaseWidth * ScaleFactor;
        float BarHeight = BaseHeight * ScaleFactor;

        // 确保血条不会太小
        BarWidth = (BarWidth < 20.0f) ? 20.0f : BarWidth;
        BarHeight = (BarHeight < 3.0f) ? 3.0f : BarHeight;

        // 血条位置（在名称下方）
        float BarX = ScreenLocation.X - (BarWidth / 2);
        float BarY = ScreenLocation.Y + 15.0f; // 往下偏移一点

        // 绘制血条背景（灰色）
        ZeroGUI::drawFilledRect(
            FVector2D{BarX, BarY},
            BarWidth,
            BarHeight,
            FLinearColor{0.2f, 0.2f, 0.2f, 0.8f});

        // 绘制当前血量（颜色根据血量变化）
        FLinearColor CurrentColor = BarColor;
        if (HealthPercentage < 0.3f)
        {
            CurrentColor = Colors::Red; // 血量低于30%时显示红色
        }
        else if (HealthPercentage < 0.7f)
        {
            CurrentColor = Colors::Orange; // 血量低于70%时显示橙色
        }

        // 绘制当前血量条
        ZeroGUI::drawFilledRect(
            FVector2D{BarX, BarY},
            BarWidth * HealthPercentage,
            BarHeight,
            CurrentColor);
    }

    void CyberneticsTick(AActor *Actor)
    {
        FLinearColor CurrentColor = Colors::White;
        float Distance = 0;
        char HealthStatus[10] = "";
        char ArrestStatus[10] = "";
        char Name[10] = "";
        char display[32] = "";
        if (Actor->IsA(Ready::readyCharactorClass))
        {
            if (Actor->IsA(Ready::suspectClass))
            {
                CurrentColor = Colors::Red;
                strcpy(Name, "罪犯");
            }

            if (Actor->IsA(Ready::civilianClass))
            {
                strcpy(Name, "平民");
                CurrentColor = Colors::Green;
            }
            
            ReadyStruct::AReadyOrNotCharacter *suspect = (ReadyStruct::AReadyOrNotCharacter *)Actor;
            switch (suspect->CharacterHealth->HealthStatus)
            {
            case ReadyStruct::EPlayerHealthStatus::HS_Healthy:
                strcpy(HealthStatus, "健康");
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_Injured:
                strcpy(HealthStatus, "受伤");
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_Downed:
                strcpy(HealthStatus, "击倒");
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_Incapacitated:
                strcpy(HealthStatus, "无意识");
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_Dead:
                strcpy(HealthStatus, "死亡");
                return;
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_Arrested:
                strcpy(HealthStatus, "拘捕");
                break;
            case ReadyStruct::EPlayerHealthStatus::HS_NotAvailable:
                break;
            default:
                break;
            }
            if(suspect->bArrestComplete | suspect->bArrestedAsRagdoll| suspect->bArrestedAsRagdoll_Flipped |suspect->bIsBeingArrested){
                strcpy(ArrestStatus, "[已逮捕]");
            }
            FVector2D ScreenLocation;

            if (ProjectToScreen(Actor, ScreenLocation, Distance))
            {
                sprintf_s(display, "%s %s %s %.2f米", ArrestStatus,Name, HealthStatus, Distance);
                ZeroGUI::TextLeft(display, FVector2D{ScreenLocation.X, ScreenLocation.Y - 15}, CurrentColor, true);
            }
        }
    }
    void TrapTick(AActor *Actor)
    {

        if (Actor->IsA(Ready::trapActorAttachedToDoorClass))
        {
            FVector2D ScreenLocation;
            float Distance = 0;
            char display[32] = "";
            if (Actor->GetAttachParentActor()!=nullptr){
            if (ProjectToScreen(Actor->GetAttachParentActor(), ScreenLocation, Distance))
            {
                sprintf_s(display, "门后陷阱%.2f米",Distance);
                ZeroGUI::TextLeft(display, FVector2D{ScreenLocation.X, ScreenLocation.Y - 15}, Colors::Orange, true);
            }
            }

        }
    }
    void Tick(AActor *Actor)
    {
        CyberneticsTick(Actor);
        TrapTick(Actor);
    }
} // namespace ESP

void Render::Init(Config *config)
{
    if (config == nullptr)
    {
        config = &Config::GetInstance();
    }
    // 注册PostRender回调到Config系统
    config->SetPostRenderCallback(PostRenderCallback);
}

void Render::PostRenderCallback(SDK::UGameViewportClient *ViewPortClient, SDK::UCanvas *Canvas)
{
    if (!Canvas)
        return;

    // 获取最新的游戏世界指针
    if (Config::gameBase && Config::WRLD_OFFSET)
    {

        Config::gWorld = *reinterpret_cast<SDK::UWorld **>(Config::gameBase + Config::WRLD_OFFSET);
        if (Config::gWorld && Config::gWorld->OwningGameInstance && Config::gWorld->OwningGameInstance->LocalPlayers.Num() > 0)
        {
            Config::LocalPlayer = Config::gWorld->OwningGameInstance->LocalPlayers[0];
            if (Config::LocalPlayer && Config::LocalPlayer->PlayerController)
            {
                Config::LocalPlayer->PlayerController->GetViewportSize(&width, &height);
            }
            else
            {
                return;
            }
        }
        else
        {
            // 如果世界指针无效，直接返回
            return;
        }
    }
    else
    {
        // 如果gameBase或WRLD_OFFSET无效，直接返回
        return;
    }

    // 在这里实现ESP等渲染功能
    ZeroGUI::SetupCanvas(Canvas);
    ZeroGUI::Input::Handle();
    // 示例：绘制文本
    ZeroGUI::TextLeft("ReadyOrNot内置作弊", FVector2D{50, 5}, FLinearColor{1.f, 1.f, 1.f, 1.f}, true);

    // 判断是否是游戏内玩家界面
    if (Config::LocalPlayer && Config::LocalPlayer->PlayerController && Config::LocalPlayer->PlayerController->IsA(Ready::readyPlayerControllerClass))
    {
        // 检查PlayerController类型
        // if(LocalPlayer->PlayerController->IsA(CLASS_ConZPlayerController)){
        Menu::Tick();
        TArray<AActor *> Actors = GETREFERENCE(TArray<AActor *>, Config::gWorld->PersistentLevel, 0x98);
        for (int i = 0; i < Actors.Num(); i++)
        {
            if (Actors[i] != nullptr && Actors[i]->Index > 0)
            {
                ESP::Tick(Actors[i]);
            }
        }
        //     Feature::Tick();
        // }

        // 临时示例：在屏幕上绘制一些基本信息
        // 这里可以添加你的ESP、菜单等功能
    }
}