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

// 0x170 (0x170 - 0x0)
// Function BP_ClueFlare.BP_ClueFlare_C.ExecuteUbergraph_BP_ClueFlare
struct ABP_ClueFlare_C_ExecuteUbergraph_BP_ClueFlare_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DBA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_AddActorLocalOffset_SweepHitResult;    // 0x70(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


