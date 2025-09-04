#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC98 - 0xC90)
// BlueprintGeneratedClass MainMenu_V2.MainMenu_V2_C
class AMainMenu_V2_C : public AReadyOrNotLevelScript
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMainMenu_V2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu_V2(int32 EntryPoint);
};

}


