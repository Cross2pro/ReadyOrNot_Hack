#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3D0 - 0x348)
// AnimBlueprintGeneratedClass ANIMBP_M590.ANIMBP_M590_C
class UANIMBP_M590_C : public UAnimInstance
{
public:
	uint8                                        Pad_2DB6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x388(0x48)(None)

	static class UClass* StaticClass();
	static class UANIMBP_M590_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_M590(int32 EntryPoint);
};

}


