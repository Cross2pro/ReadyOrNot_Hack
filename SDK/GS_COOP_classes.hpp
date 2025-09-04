#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA38 - 0xA28)
// BlueprintGeneratedClass GS_COOP.GS_COOP_C
class AGS_COOP_C : public ACoopGS
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                NewVar_0;                                          // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGS_COOP_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GS_COOP(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


