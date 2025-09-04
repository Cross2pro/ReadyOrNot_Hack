#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x18B8 - 0x18B0)
// BlueprintGeneratedClass BP_Primary_Mossberg590Mv2.BP_Primary_Mossberg590Mv2_C
class ABP_Primary_Mossberg590Mv2_C : public ABaseMagazineWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x18B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Primary_Mossberg590Mv2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Primary_Mossberg590Mv2(int32 EntryPoint);
};

}


