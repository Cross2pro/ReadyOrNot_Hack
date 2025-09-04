#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x360 (0x6D0 - 0x370)
// AnimBlueprintGeneratedClass ABP_WP_GA51.ABP_WP_GA51_C
class UABP_WP_GA51_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x388(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3A8(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x3F0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x518(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x538(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x558(0x128)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x680(0x40)(None)
	bool                                         bIsSemi;                                           // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_370E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Mag01Alpha;                                        // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_WP_GA51_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_GA51_AnimGraphNode_ModifyBone_FF7246B14BF6EFDC4C5E9489CA56EE3B();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_DropSpeedReloadMagazine();
	void AnimNotify_ShowMag();
	void ExecuteUbergraph_ABP_WP_GA51(int32 EntryPoint, float K2Node_Event_DeltaTimeX, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast);
};

}


