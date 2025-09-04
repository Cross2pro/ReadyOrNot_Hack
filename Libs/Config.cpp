#include "Config.h"

// 静态成员变量定义
PostRenderCallback Config::postRenderCallback = nullptr;
void* Config::originalPostRender = nullptr;
SDK::UWorld* Config::gWorld = nullptr;
uintptr_t Config::gameBase = 0;
uintptr_t Config::moduleStart = 0;
size_t Config::moduleSize = 0;
uintptr_t Config::WRLD_OFFSET = 0;
SDK::UFont* Config::font = nullptr;
// 单例模式实现
Config& Config::GetInstance()
{
    static Config instance;
    return instance;
}

Config::Config()
{
    MODULEINFO info;
    gameBase = (uintptr_t)GetModuleHandleA(0);
    K32GetModuleInformation(GetCurrentProcess(), (HMODULE)gameBase, &info, sizeof(MODULEINFO));
    moduleStart = (uintptr_t)info.lpBaseOfDll;
    moduleSize = info.SizeOfImage;
}

Config::~Config()
{
}

SDK::UWorld *Config::GetUWorld()
{
    static uint64_t gworld_ptr = 0;
    if (!gworld_ptr)
    {
        DEBUG_LOG("[Ready]获取UWorld");
        auto base = reinterpret_cast<byte *>(moduleStart);
        DEBUG_LOG("[Ready]模块基址: %llx", moduleStart);
        DEBUG_LOG("[Ready]模块大小: %llx", moduleSize);
        // World Sig : 48 89 05 ? ? ? ? 48 8B 76 78
        static BYTE worldSig[] = {0x48, 0x89, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x76, 0x78};

        byte *worldAddress = FindSignature(base, base + moduleSize - 1, worldSig, sizeof(worldSig));
        DEBUG_LOG("[Ready]WRLD_OFFSET: %llx", worldAddress);
        if (worldAddress)
        {
            // 获取相对偏移
            int32_t relativeOffset = *reinterpret_cast<int32_t *>(worldAddress + 3);
            // 计算绝对地址：指令地址 + 指令长度 + 相对偏移
            uintptr_t targetAddress = reinterpret_cast<uintptr_t>(worldAddress) + 7 + relativeOffset;
            WRLD_OFFSET = targetAddress - gameBase;

            gWorld = *reinterpret_cast<SDK::UWorld **>(WRLD_OFFSET + gameBase);
            gworld_ptr = WRLD_OFFSET + gameBase;
            DEBUG_LOG("[Ready]WRLD_OFFSET: %llx", WRLD_OFFSET);
        }
    }
    return gWorld;
}
void Config::InitEngine(){
    font = reinterpret_cast<SDK::UFont*>(SDK::UObject::FindObject("Font Roboto.Roboto"));

    DEBUG_LOG("[Ready]font: %llx", (uintptr_t)font);
}
void Config::Init()
{
    GetUWorld();
    SDK::InitGObjects();
    InitEngine();
    if (gWorld->OwningGameInstance != nullptr &&
        gWorld->OwningGameInstance->LocalPlayers.IsValid() &&
        gWorld->OwningGameInstance->LocalPlayers.Num() > 0 &&
        gWorld->OwningGameInstance->LocalPlayers[0]->ViewportClient != nullptr)
    {
        void** ViewPortClientVTable = static_cast<void**>(gWorld->OwningGameInstance->LocalPlayers[0]->ViewportClient->Vft);
        
        // 保存原始PostRender函数指针
        originalPostRender = ViewPortClientVTable[0x70];
        
        DWORD oldProtect = 0;
        VirtualProtect(&ViewPortClientVTable[0x70], 8, PAGE_EXECUTE_READWRITE, &oldProtect);
        // 替换为我们的Hook函数
        ViewPortClientVTable[0x70] = (void*)&HookedPostRender;
        DEBUG_LOG("[Ready]HookedPostRender: %llx", (uintptr_t)&HookedPostRender);
        DEBUG_LOG("[Ready]originalPostRender: %llx", (uintptr_t)originalPostRender);
        VirtualProtect(&ViewPortClientVTable[0x70], 8, oldProtect, &oldProtect);
    }
}

// 回调管理函数实现
void Config::SetPostRenderCallback(const PostRenderCallback& callback)
{
    postRenderCallback = callback;
}

void Config::ClearPostRenderCallback()
{
    postRenderCallback = nullptr;
}

// Hook函数实现
void __stdcall Config::HookedPostRender(SDK::UGameViewportClient* ViewPortClient, SDK::UCanvas* Canvas)
{
    // 执行回调函数
    if (postRenderCallback)
    {
        try
        {
            postRenderCallback(ViewPortClient, Canvas);
        }
        catch (...)
        {
            // 捕获回调函数中的异常，防止崩溃
        }
    }
        // 调用原始PostRender函数
    if (originalPostRender)
    {
        typedef void(__stdcall* OriginalPostRenderFunc)(SDK::UGameViewportClient*, SDK::UCanvas*);
        ((OriginalPostRenderFunc)originalPostRender)(ViewPortClient, Canvas);
    }
}
