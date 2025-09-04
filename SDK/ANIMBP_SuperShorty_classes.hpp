#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x438 - 0x370)
// AnimBlueprintGeneratedClass ANIMBP_SuperShorty.ANIMBP_SuperShorty_C
class UANIMBP_SuperShorty_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x388(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3A8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x3F0(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_SuperShorty_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_PrimeShellRack();
	void AnimNotify_FinishShellLoad();
	void ExecuteUbergraph_ANIMBP_SuperShorty(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShotgun* K2Node_DynamicCast_AsShotgun, bool K2Node_DynamicCast_bSuccess, class AShotgun* K2Node_DynamicCast_AsShotgun_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UShellRackShellComponent* CallFunc_Array_Get_Item, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


