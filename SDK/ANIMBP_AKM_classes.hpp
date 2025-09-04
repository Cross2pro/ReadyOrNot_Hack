#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3F0 - 0x370)
// AnimBlueprintGeneratedClass ANIMBP_AKM.ANIMBP_AKM_C
class UANIMBP_AKM_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x388(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3D0(0x20)(None)

	static class UClass* StaticClass();
	static class UANIMBP_AKM_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ANIMBP_AKM(int32 EntryPoint);
};

}


