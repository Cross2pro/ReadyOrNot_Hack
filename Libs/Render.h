#pragma once
#include "../SDK.hpp"
#include "Config.h"
class Render
{
public:
    static void Init(Config* config = nullptr);
    static void PostRenderCallback(SDK::UGameViewportClient* ViewPortClient, SDK::UCanvas* Canvas);
    static void SetWRLDOffset(uintptr_t offset);
    
private:
    static SDK::UWorld* WRLD;
    static SDK::ULocalPlayer* LocalPlayer;
    static uintptr_t gameBase;
    static uintptr_t WRLD_OFFSET;
    static int width, height;
};