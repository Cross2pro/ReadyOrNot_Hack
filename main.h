#ifndef MAIN_H
#define MAIN_H

#ifdef BUILDING_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif



#ifdef __cplusplus
extern "C" {
#endif

// 导出函数声明
DLL_EXPORT bool InitializeHack();
DLL_EXPORT void CleanupHack();
DLL_EXPORT const char* GetHackVersion();
DLL_EXPORT bool IsHackActive();

#ifdef __cplusplus
}
#endif

#endif // MAIN_H