#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F8 (0xB40 - 0x348)
// AnimBlueprintGeneratedClass ANIMBP_NVG.ANIMBP_NVG_C
class UANIMBP_NVG_C : public UAnimInstance
{
public:
	uint8                                        Pad_2677[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x388(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x3D0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x4F8(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x620(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x640(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x660(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x680(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x7A8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x8D0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x9F8(0x128)(None)
	bool                                         bActive;                                           // 0xB20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideMesh;                                         // 0xB21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NVGTransformAlpha;                                 // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsThirdPersonMesh;                                // 0xB30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANightvisionGoggles*                   NVG;                                               // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_NVG_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetPlayerCharacter(class APlayerCharacter** PlayerCharacter, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_NVG_AnimGraphNode_ModifyBone_4369C15F4C1308D1A6E87DB0C364A0F1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_HideFPMesh();
	void AnimNotify_ShowFPMesh();
	void ExecuteUbergraph_ANIMBP_NVG(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ANightvisionGoggles* K2Node_DynamicCast_AsNightvision_Goggles, bool K2Node_DynamicCast_bSuccess, double CallFunc_Conv_BoolToDouble_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1);
};

}


