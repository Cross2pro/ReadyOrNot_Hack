#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xD40 - 0xD28)
// BlueprintGeneratedClass BP_MenuController.BP_MenuController_C
class ABP_MenuController_C : public AReadyOrNotPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               UI_PartyPanel;                                     // 0xD30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ReplaySystemWidget;                                // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MenuController_C* GetDefaultObj();

	void ExecuteUbergraph_BP_MenuController(int32 EntryPoint);
};

}


