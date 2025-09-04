#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1928 - 0x1920)
// BlueprintGeneratedClass Device_S590_Breach_v2.Device_S590_Breach_v2_C
class ADevice_S590_Breach_v2_C : public ABreachingShotgun
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1920(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ADevice_S590_Breach_v2_C* GetDefaultObj();

	void DoReloadComplete_1();
	void ExecuteUbergraph_Device_S590_Breach_v2(int32 EntryPoint);
};

}


