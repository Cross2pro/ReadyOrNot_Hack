#include "main.h"
#include <windows.h>
#include <iostream>
#include "SDK.hpp"
#include "Libs/Config.h"
#include "Libs/Render.h"
// DLL入口点
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        DEBUG_LOG("[Ready]加载DLL");

        Config::GetInstance().Init();
        Render::Init();
        break;
    case DLL_THREAD_ATTACH:
        // 新线程创建时调用
        break;
    case DLL_THREAD_DETACH:
        // 线程结束时调用
        break;
    case DLL_PROCESS_DETACH:
        // DLL被卸载时调用
        std::cout << "ReadyOrNot Hack DLL unloaded!" << std::endl;
        break;
    }
    return TRUE;
}

// 导出函数实现
extern "C" {
    DLL_EXPORT bool InitializeHack() {
        // 初始化hack功能
        return true;
    }

    DLL_EXPORT void CleanupHack() {
        // 清理hack功能
    }

    DLL_EXPORT const char* GetHackVersion() {
        return "1.0.0";
    }

    DLL_EXPORT bool IsHackActive() {
        // 检查hack是否激活
        return true;
    }
}