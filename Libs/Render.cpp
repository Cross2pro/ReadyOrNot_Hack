#include "Render.h"
#include "./ZeroGUI/ZeroGUI.h"

// 静态成员变量定义
SDK::UWorld* Render::WRLD = nullptr;
SDK::ULocalPlayer* Render::LocalPlayer = nullptr;
uintptr_t Render::gameBase = 0;
uintptr_t Render::WRLD_OFFSET = 0;
int Render::width = 0;
int Render::height = 0;

void Render::Init(Config* config)
{
    if(config == nullptr)
    {
        config=&Config::GetInstance();
    }
    // 获取游戏基址
    gameBase = config->gameBase;
    
    WRLD_OFFSET = config->WRLD_OFFSET;
    
    
    // 注册PostRender回调到Config系统
    config->SetPostRenderCallback(PostRenderCallback);
}

void Render::SetWRLDOffset(uintptr_t offset)
{
    WRLD_OFFSET = offset;
}

void Render::PostRenderCallback(SDK::UGameViewportClient* ViewPortClient, SDK::UCanvas* Canvas)
{
    if (!Canvas) return;

    // 获取最新的游戏世界指针
    if (gameBase && WRLD_OFFSET) {
        WRLD = *reinterpret_cast<SDK::UWorld**>(gameBase + WRLD_OFFSET);
        if (WRLD && WRLD->OwningGameInstance && WRLD->OwningGameInstance->LocalPlayers.Num() > 0) {
            LocalPlayer = WRLD->OwningGameInstance->LocalPlayers[0];
            if (LocalPlayer && LocalPlayer->PlayerController) {
                LocalPlayer->PlayerController->GetViewportSize(&width, &height);
            }
        } else {
            // 如果世界指针无效，直接返回
            return;
        }
    } else {
        // 如果gameBase或WRLD_OFFSET无效，直接返回
        return;
    }

    // 在这里实现ESP等渲染功能
    ZeroGUI::SetupCanvas(Canvas);
    ZeroGUI::Input::Handle();
    // 示例：绘制文本
    ZeroGUI::TextLeft("ReadyOrNot内置作弊", FVector2D{ 50,5 }, FLinearColor{ 1.f, 1.f, 1.f, 1.f }, true);
    
    // 判断是否是游戏内玩家界面
    if (LocalPlayer && LocalPlayer->PlayerController) {
        // 检查PlayerController类型
        // if(LocalPlayer->PlayerController->IsA(CLASS_ConZPlayerController)){
        //     Menu::Tick();
        //     Feature::Tick();
        // }
        
        // 临时示例：在屏幕上绘制一些基本信息
        // 这里可以添加你的ESP、菜单等功能
    }
}