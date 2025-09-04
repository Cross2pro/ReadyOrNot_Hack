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

// 0x14 (0x14 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.ShouldSocketBeConsidered
struct UUASAimAssistComponent_ShouldSocketBeConsidered_Params
{
public:
	struct FUASAimAssistTargetData               TargetData;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetWeaponBulletSpawnLocation
struct UUASAimAssistComponent_SetWeaponBulletSpawnLocation_Params
{
public:
	struct FVector                               BulletSpawnLocation;                               // 0x0(0x18)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetWeaponAimPoint
struct UUASAimAssistComponent_SetWeaponAimPoint_Params
{
public:
	struct FVector2D                             AimPoint;                                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetScopeSizeFactor
struct UUASAimAssistComponent_SetScopeSizeFactor_Params
{
public:
	float                                        SizeFactor;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetMouseActive
struct UUASAimAssistComponent_SetMouseActive_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetEnableZoneScaling
struct UUASAimAssistComponent_SetEnableZoneScaling_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetEnableStickiness
struct UUASAimAssistComponent_SetEnableStickiness_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetEnableSnapToTarget
struct UUASAimAssistComponent_SetEnableSnapToTarget_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetEnableMagnetism
struct UUASAimAssistComponent_SetEnableMagnetism_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetEnableAutoAim
struct UUASAimAssistComponent_SetEnableAutoAim_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetDrawWeights
struct UUASAimAssistComponent_SetDrawWeights_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetDrawSockets
struct UUASAimAssistComponent_SetDrawSockets_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetDrawCrosshair
struct UUASAimAssistComponent_SetDrawCrosshair_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetDrawCircles
struct UUASAimAssistComponent_SetDrawCircles_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetDrawAimBox
struct UUASAimAssistComponent_SetDrawAimBox_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistDataAsset
struct UUASAimAssistComponent_SetAimAssistDataAsset_Params
{
public:
	class UUASAimAssistConfigDataAsset*          DataAsset;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.OnTargetDestroyed
struct UUASAimAssistComponent_OnTargetDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.IsAnimationBlocking
struct UUASAimAssistComponent_IsAnimationBlocking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetRotationToCrosshairDirection
struct UUASAimAssistComponent_GetRotationToCrosshairDirection_Params
{
public:
	struct FVector                               From;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TraceProfileName;                                  // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToRotateToTarget;                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetMouseActive
struct UUASAimAssistComponent_GetMouseActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetEnableZoneScaling
struct UUASAimAssistComponent_GetEnableZoneScaling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetEnableStickiness
struct UUASAimAssistComponent_GetEnableStickiness_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetEnableSnapToTarget
struct UUASAimAssistComponent_GetEnableSnapToTarget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetEnableMagnetism
struct UUASAimAssistComponent_GetEnableMagnetism_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetEnableAutoAim
struct UUASAimAssistComponent_GetEnableAutoAim_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetDrawWeights
struct UUASAimAssistComponent_GetDrawWeights_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetDrawSockets
struct UUASAimAssistComponent_GetDrawSockets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetDrawCrosshair
struct UUASAimAssistComponent_GetDrawCrosshair_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetDrawCircles
struct UUASAimAssistComponent_GetDrawCircles_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetDrawAimBox
struct UUASAimAssistComponent_GetDrawAimBox_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetCrosshairPosition
struct UUASAimAssistComponent_GetCrosshairPosition_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetControlMultipliers
struct UUASAimAssistComponent_GetControlMultipliers_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.CalculateSocketWeight
struct UUASAimAssistComponent_CalculateSocketWeight_Params
{
public:
	struct FUASAimAssistTargetData               TargetData;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.CalculateSocketDistance
struct UUASAimAssistComponent_CalculateSocketDistance_Params
{
public:
	struct FUASAimAssistTargetData               TargetData;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.ShouldConsiderWeight
struct UUASAimAssistTargetComponent_ShouldConsiderWeight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.ShouldAlwaysBlockTrace
struct UUASAimAssistTargetComponent_ShouldAlwaysBlockTrace_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.Init
struct UUASAimAssistTargetComponent_Init_Params
{
public:
	class UMeshComponent*                        Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.GetWeightLabel
struct UUASAimAssistTargetComponent_GetWeightLabel_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.GetWeightByState
struct UUASAimAssistTargetComponent_GetWeightByState_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.GetMoveSpeed
struct UUASAimAssistTargetComponent_GetMoveSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


