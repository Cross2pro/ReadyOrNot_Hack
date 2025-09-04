#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x440 - 0x410)
// WidgetBlueprintGeneratedClass W_COOPDeathScreen.W_COOPDeathScreen_C
class UW_COOPDeathScreen_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_InputActionButton_C*                btn_Spectate;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            YouAreDeadText;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSpectateButtonClicked;                           // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        AliveOfficers;                                     // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DeadOfficers;                                      // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_COOPDeathScreen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_OnActivated();
	void BndEvt__W_COOPDeathScreen_btn_Spectate_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_W_COOPDeathScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetRenderOpacity_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, double CallFunc_FInterpTo_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, float CallFunc_GetRenderOpacity_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1);
	void OnSpectateButtonClicked__DelegateSignature();
};

}


