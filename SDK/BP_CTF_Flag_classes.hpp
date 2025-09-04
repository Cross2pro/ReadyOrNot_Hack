#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass BP_CTF_Flag.BP_CTF_Flag_C
class ABP_CTF_Flag_C : public ACTF_Flag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  FlagMesh;                                          // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CTF_Flag_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ExecuteUbergraph_BP_CTF_Flag(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsBuildPirated_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


