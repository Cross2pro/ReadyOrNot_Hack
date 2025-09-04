#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1029 (0x1371 - 0x348)
// AnimBlueprintGeneratedClass ANIMBP_Preview_Char_Body.ANIMBP_Preview_Char_Body_C
class UANIMBP_Preview_Char_Body_C : public UAnimInstance
{
public:
	uint8                                        Pad_7EE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_7F0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0x370(0x280)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0x5F0(0x280)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x870(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x890(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x8B0(0x48)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_5;                        // 0x8F8(0x1A0)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_4;                        // 0xA98(0x1A0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xC38(0x48)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_3;                        // 0xC80(0x1A0)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_2;                        // 0xE20(0x1A0)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_1;                        // 0xFC0(0x1A0)(None)
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver;                          // 0x1160(0x1A0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1300(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x1320(0x48)(None)
	class UAnimSequence*                         PreviewSeqRef;                                     // 0x1368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPhysicsOn;                                      // 0x1370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Preview_Char_Body_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Preview_Char_Body(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class APreviewCharacterTemplate_C* K2Node_DynamicCast_AsPreview_Character_Template, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSimulatingPhysics_ReturnValue);
};

}


