#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xED0 (0x12B0 - 0x3E0)
// AnimBlueprintGeneratedClass ANIMBP_Head_Shared_Master.ANIMBP_Head_Shared_Master_C
class UANIMBP_Head_Shared_Master_C : public UReadyOrNotFaceAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x3E8(0x13)(HasGetValueTypeHash)
	uint8                                        Pad_312A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x400(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x408(0x8)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x410(0x40)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x450(0x110)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_3;                       // 0x560(0x120)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x680(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_2;                       // 0x6C8(0x120)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x7E8(0xF0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x8D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x920(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x968(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x9B0(0x80)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xA30(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0xA58(0x120)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0xB78(0x10)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xB88(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xBD0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xC18(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xD08(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xD50(0x48)(None)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode;                       // 0xD98(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xE68(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xEB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xEF8(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xF40(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0xF88(0x120)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x10A8(0x158)(ContainsInstancedReference)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1200(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1248(0x20)(None)
	bool                                         IsPlayerDead;                                      // 0x1268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3159[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EmotionWeight;                                     // 0x1270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAtAlpha;                                       // 0x1278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtLocation;                                    // 0x1280(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                BodyMeshRef;                                       // 0x1298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterEmotion                 Emotion;                                           // 0x12A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_315C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LipSyncScale;                                      // 0x12A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Head_Shared_Master_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void On_Lip_Sync_Anim_Update(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetExplicitTime_Time_ImplicitCast);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Head_Shared_Master(int32 EntryPoint, enum class ECharacterEmotion Temp_byte_Variable, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AReadyOrNotCharacter* K2Node_DynamicCast_AsReady_or_Not_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool Temp_bool_Variable, enum class ECharacterEmotion K2Node_Select_Default, double K2Node_VariableSet_EmotionWeight_ImplicitCast);
};

}


