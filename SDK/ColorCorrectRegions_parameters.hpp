#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetYaw
struct AColorCorrectionWindow_SetYaw_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetSpin
struct AColorCorrectionWindow_SetSpin_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetScale
struct AColorCorrectionWindow_SetScale_Params
{
public:
	struct FVector2D                             InScale;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetRadialOffset
struct AColorCorrectionWindow_SetRadialOffset_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetPositionalParams
struct AColorCorrectionWindow_SetPositionalParams_Params
{
public:
	struct FDisplayClusterPositionalParams       InParams;                                          // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetPitch
struct AColorCorrectionWindow_SetPitch_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetOrigin
struct AColorCorrectionWindow_SetOrigin_Params
{
public:
	struct FTransform                            InOrigin;                                          // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetLongitude
struct AColorCorrectionWindow_SetLongitude_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetLatitude
struct AColorCorrectionWindow_SetLatitude_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.SetDistanceFromCenter
struct AColorCorrectionWindow_SetDistanceFromCenter_Params
{
public:
	double                                       InValue;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetYaw
struct AColorCorrectionWindow_GetYaw_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetSpin
struct AColorCorrectionWindow_GetSpin_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetScale
struct AColorCorrectionWindow_GetScale_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetRadialOffset
struct AColorCorrectionWindow_GetRadialOffset_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetPositionalParams
struct AColorCorrectionWindow_GetPositionalParams_Params
{
public:
	struct FDisplayClusterPositionalParams       ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetPitch
struct AColorCorrectionWindow_GetPitch_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetOrigin
struct AColorCorrectionWindow_GetOrigin_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetLongitude
struct AColorCorrectionWindow_GetLongitude_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetLatitude
struct AColorCorrectionWindow_GetLatitude_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ColorCorrectRegions.ColorCorrectionWindow.GetDistanceFromCenter
struct AColorCorrectionWindow_GetDistanceFromCenter_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


