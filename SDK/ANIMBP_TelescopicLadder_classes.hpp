#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x189 (0x4D1 - 0x348)
// AnimBlueprintGeneratedClass ANIMBP_TelescopicLadder.ANIMBP_TelescopicLadder_C
class UANIMBP_TelescopicLadder_C : public UAnimInstance
{
public:
	uint8                                        Pad_3793[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x9)(HasGetValueTypeHash)
	uint8                                        Pad_3797[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x368(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x370(0x8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x378(0x70)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3E8(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x458(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4A0(0x20)(None)
	bool                                         bDeploying;                                        // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3799[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RungCount;                                         // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreezeFrame;                                       // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_TelescopicLadder_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ANIMBP_TelescopicLadder(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ALadderSnapZone* K2Node_DynamicCast_AsLadder_Snap_Zone, bool K2Node_DynamicCast_bSuccess, class ATelescopicLadder* K2Node_DynamicCast_AsTelescopic_Ladder, bool K2Node_DynamicCast_bSuccess_1, double K2Node_VariableSet_RungCount_ImplicitCast, double K2Node_VariableSet_RungCount_ImplicitCast_1);
};

}


