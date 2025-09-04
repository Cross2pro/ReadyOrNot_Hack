#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FA (0x542 - 0x348)
// AnimBlueprintGeneratedClass ANIMBP_Multitool.ANIMBP_Multitool_C
class UANIMBP_Multitool_C : public UAnimInstance
{
public:
	uint8                                        Pad_1CE4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_1CF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x370(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3B8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x400(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x448(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x490(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x4D8(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x520(0x20)(None)
	enum class EMultitoolFunctions               CurrentToolKit;                                    // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SecondStage;                                       // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANIMBP_Multitool_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ANIMBP_Multitool(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AMultitool* K2Node_DynamicCast_AsMultitool, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


