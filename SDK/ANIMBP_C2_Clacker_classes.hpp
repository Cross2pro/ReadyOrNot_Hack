#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x668 - 0x598)
// AnimBlueprintGeneratedClass ANIMBP_C2_Clacker.ANIMBP_C2_Clacker_C
class UANIMBP_C2_Clacker_C : public UReadyOrNotAnimInstance
{
public:
	uint8                                        Pad_3427[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x5A8(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x5B0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5B8(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x5D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x620(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_C2_Clacker_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_C2_Clacker(int32 EntryPoint);
};

}


