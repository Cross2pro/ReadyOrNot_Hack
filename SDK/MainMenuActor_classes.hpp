#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass MainMenuActor.MainMenuActor_C
class AMainMenuActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget;                                            // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UW_MainMenu_Overlay_C*                 MainMenuOverlay;                                   // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMainMenuActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenuActor(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_MainMenu_Overlay_C* CallFunc_Create_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_MainMenu_V3_C* K2Node_DynamicCast_AsW_Main_Menu_V3, bool K2Node_DynamicCast_bSuccess);
};

}


