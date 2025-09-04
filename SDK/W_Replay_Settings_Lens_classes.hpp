#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x478 - 0x410)
// WidgetBlueprintGeneratedClass W_Replay_Settings_Lens.W_Replay_Settings_Lens_C
class UW_Replay_Settings_Lens_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Spinbox_C*                          Spinbox_Aperture;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_FieldOfView;                               // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_FocalDistance;                             // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Lens;                                           // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ActivePanel;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocus;                                      // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Pawn_Camera;                                       // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCineCameraComponent*                  CineCameraComponent;                               // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUpdatingValues;                                  // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F73[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHighlightedOptionDirty;                          // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Replay_Settings_Lens_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void UpdateValueFocalDistance(bool CallFunc_IsValid_ReturnValue, double CallFunc_SetValue_Value_ImplicitCast);
	void UpdateValueAperature(bool CallFunc_IsValid_ReturnValue, double CallFunc_SetValue_Value_ImplicitCast);
	void UpdateValueFieldOfView(bool CallFunc_IsValid_ReturnValue, double CallFunc_SetValue_Value_ImplicitCast);
	bool CanApplyValues(bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* NavApplySpinboxDelta(enum class EUINavigation Navigation, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EUINavigation Temp_byte_Variable, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void SetDefaults(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2);
	void InitializeValues();
	void BP_OnActivated();
	void SetInputMode(bool IsGamepad);
	void OnSpinboxHovered(class UCommonButtonBase* Button);
	void ChangePage(class FName PageName);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(double Value);
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void ExecuteUbergraph_W_Replay_Settings_Lens(int32 EntryPoint, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_1, class UCineCameraComponent* K2Node_DynamicCast_AsCine_Camera_Component, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsGamepad, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_SetInputMode_self_CastInput, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_Event_PageName, bool CallFunc_Not_PreBool_ReturnValue_2, double K2Node_ComponentBoundEvent_Value_2, double K2Node_ComponentBoundEvent_Value_1, double K2Node_ComponentBoundEvent_Value, bool CallFunc_IsValid_ReturnValue_2, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay, float K2Node_SetFieldsInStruct_ManualFocusDistance_ImplicitCast, float CallFunc_SetCurrentAperture_NewCurrentAperture_ImplicitCast, float CallFunc_SetCurrentFocalLength_InFocalLength_ImplicitCast);
	void OnHighlightedOptionDirty__DelegateSignature(bool ValueDirty);
};

}


