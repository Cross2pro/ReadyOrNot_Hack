#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC98 - 0xC90)
// BlueprintGeneratedClass MainMenuV3.MainMenuV3_C
class AMainMenuV3_C : public AReadyOrNotLevelScript
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC90(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMainMenuV3_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenuV3(int32 EntryPoint);
};

}


