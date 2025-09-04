#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x18B8 - 0x18B0)
// BlueprintGeneratedClass BP_Secondary_TRP.BP_Secondary_TRP_C
class ABP_Secondary_TRP_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x18B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Secondary_TRP_C* GetDefaultObj();

	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_BP_Secondary_TRP(int32 EntryPoint);
};

}


