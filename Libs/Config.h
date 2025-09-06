#pragma once
#include "../SDK.hpp"
#include <psapi.h>
#include "Utils.h"
#include <functional>
#include "Ready.h"

// PostRender回调函数类型定义
typedef std::function<void(SDK::UGameViewportClient*, SDK::UCanvas*)> PostRenderCallback;

class Config
{
private:
    // 单例模式私有构造函数
    Config();
    ~Config();
    
public:
    // 删除拷贝构造函数和赋值操作符
    Config(const Config&) = delete;
    Config& operator=(const Config&) = delete;
    
    // 获取单例实例
    static Config& GetInstance();
    
    // 静态成员变量 - 直接访问
    static PostRenderCallback postRenderCallback;
    static void* originalPostRender;
    static SDK::UWorld* gWorld;
    static SDK::ULocalPlayer* LocalPlayer;

    static uintptr_t gameBase;
    static uintptr_t moduleStart;
    static size_t moduleSize;
    static uintptr_t WRLD_OFFSET;
    static SDK::UFont* font;
    
    SDK::UWorld* GetUWorld();
    void Init();
    void InitEngine();
    // 回调管理函数
    static void SetPostRenderCallback(const PostRenderCallback& callback);
    static void ClearPostRenderCallback();
    
    // Hook函数
    static void __stdcall HookedPostRender(SDK::UGameViewportClient* ViewPortClient, SDK::UCanvas* Canvas);
};

