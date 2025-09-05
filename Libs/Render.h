#pragma once
#include "../SDK.hpp"
#include "Config.h"
class Render
{
public:
    static int width, height;
    static void Init(Config* config = nullptr);
    static void PostRenderCallback(SDK::UGameViewportClient* ViewPortClient, SDK::UCanvas* Canvas);
    static void SetWRLDOffset(uintptr_t offset);
    

};