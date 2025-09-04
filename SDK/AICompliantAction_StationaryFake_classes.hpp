#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2B0 - 0x2A8)
// BlueprintGeneratedClass AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C
class UAICompliantAction_StationaryFake_C : public UAICompliantAction_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAICompliantAction_StationaryFake_C* GetDefaultObj();

	void EndAction_Blueprint();
	void ExecuteUbergraph_AICompliantAction_StationaryFake(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue);
};

}


