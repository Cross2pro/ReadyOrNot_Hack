#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x858 (0xC48 - 0x3F0)
// AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Head.ANIMBP_Preview_Char_Head_C
class UANIMBP_Preview_Char_Head_C : public UStaticCharacterFaceAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x3F8(0x10)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x408(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x410(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x418(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x438(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x480(0x158)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x5D8(0xF0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x6C8(0x40)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_2;                       // 0x708(0x120)(None)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode;                       // 0x828(0xD0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x8F8(0xF0)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0x9E8(0x120)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0xB08(0x120)(None)
	class UPoseAsset*                            FaceRomRef;                                        // 0xC28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         FaceSequenceRef;                                   // 0xC30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Bodyref;                                           // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       LipSyncScale;                                      // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Preview_Char_Head_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Preview_Char_Head_AnimGraphNode_SequenceEvaluator_F8474E6A4D398410092ACBB9BF41F8AA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Preview_Char_Head(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_ImplicitCast);
};

}


