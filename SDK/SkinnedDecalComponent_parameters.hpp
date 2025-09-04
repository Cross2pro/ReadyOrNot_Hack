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
// Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
struct USkinnedDecalInstance_GetSampler_Params
{
public:
	class USkinnedDecalSampler*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
struct USkinnedDecalSampler_UpdateInstance_Params
{
public:
	class USkinnedDecalInstance*                 Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecalFromData
struct USkinnedDecalSampler_SpawnDecalFromData_Params
{
public:
	struct FSkinnedDecalData                     Data;                                              // 0x0(0x90)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
struct USkinnedDecalSampler_SpawnDecal_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x48(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubUV;                                             // 0x4C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x50(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDisplacement;                               // 0x54(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x58(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupComponentMaterials
struct USkinnedDecalSampler_SetupComponentMaterials_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SetSamplerState
struct USkinnedDecalSampler_SetSamplerState_Params
{
public:
	struct FSkinnedDecalSamplerState             State;                                             // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
struct USkinnedDecalSampler_SetMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                MeshComponent;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Child;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.SaveSampler
struct USkinnedDecalSampler_SaveSampler_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B42[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
struct USkinnedDecalSampler_RemoveDecal_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.LoadSampler
struct USkinnedDecalSampler_LoadSampler_Params
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B62[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.GetSamplerState
struct USkinnedDecalSampler_GetSamplerState_Params
{
public:
	struct FSkinnedDecalSamplerState             ReturnValue;                                       // 0x0(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
struct USkinnedDecalSampler_GetDataTarget_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
struct USkinnedDecalSampler_CloneDecals_Params
{
public:
	class USkinnedDecalSampler*                  Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


