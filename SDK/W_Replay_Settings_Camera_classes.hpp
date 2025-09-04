#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x469 - 0x410)
// WidgetBlueprintGeneratedClass W_Replay_Settings_Camera.W_Replay_Settings_Camera_C
class UW_Replay_Settings_Camera_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Spinbox_C*                          Spinbox_CameraRoll;                                // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_LookSensitivity;                           // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Camera;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ActivePanel;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocus;                                      // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHighlightedOptionDirty;                          // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AReplayCameraPawn*                     ReplayCameraPawn;                                  // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUpdatingValues;                                  // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Replay_Settings_Camera_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void SetDefaults(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1);
	void UpdateLookSensitivity(bool CallFunc_IsValid_ReturnValue, double CallFunc_SetValue_Value_ImplicitCast);
	void UpdateCameraRoll(bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_SetValue_Value_ImplicitCast);
	class UWidget* NavApplySpinboxDelta(enum class EUINavigation Navigation, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EUINavigation Temp_byte_Variable, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, double Value);
	void ChangePage(class FName PageName);
	void InitializeCurrentValues();
	void BP_OnActivated();
	void SetInputMode(bool IsGamepad);
	void OnSpinboxHovered(class UCommonButtonBase* Button);
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(double Value);
	void ExecuteUbergraph_W_Replay_Settings_Camera(int32 EntryPoint, class FName K2Node_Event_PageName, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsGamepad, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, double K2Node_ComponentBoundEvent_Value_1, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, double K2Node_ComponentBoundEvent_Value, float CallFunc_MakeRotator_Roll_ImplicitCast, float K2Node_VariableSet_Sensitivity_ImplicitCast);
	void OnHighlightedOptionDirty__DelegateSignature(bool ValueDirty);
};

}


