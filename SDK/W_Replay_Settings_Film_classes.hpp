#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x479 - 0x410)
// WidgetBlueprintGeneratedClass W_Replay_Settings_Film.W_Replay_Settings_Film_C
class UW_Replay_Settings_Film_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Spinbox_C*                          Spinbox_BlackClip;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Contrast;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Gamma;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Saturation;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Shoulder;                                  // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Slope;                                     // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Toe;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_WhiteClip;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Film;                                           // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ActivePanel;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocus;                                      // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Replay_Settings_Film_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled);
	void SetDefaults(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_3, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_4);
	class UWidget* NavApplySpinboxDelta(enum class EUINavigation Navigation, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EUINavigation Temp_byte_Variable, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, double Value);
	void BP_OnActivated();
	void OnSpinboxHovered(class UCommonButtonBase* Button);
	void SetInputMode(bool IsGamepad);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(double Value);
	void InitializeCurrentValues();
	void ChangePage(class FName PageName);
	void Hide(double Delay, bool Collapse);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(double Value);
	void Reveal(double Delay);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value);
	void ExecuteUbergraph_W_Replay_Settings_Film(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool K2Node_Event_IsGamepad, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, double K2Node_ComponentBoundEvent_Value_7, double K2Node_ComponentBoundEvent_Value_6, double K2Node_ComponentBoundEvent_Value_5, double K2Node_ComponentBoundEvent_Value_4, double K2Node_ComponentBoundEvent_Value_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, class FName K2Node_Event_PageName, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_4, bool K2Node_DynamicCast_bSuccess_4, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_5, bool K2Node_DynamicCast_bSuccess_5, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class APawn* CallFunc_GetPlayerPawn_ReturnValue_6, double K2Node_ComponentBoundEvent_Value_2, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_6, bool K2Node_DynamicCast_bSuccess_6, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double K2Node_Event_Delay, class APawn* CallFunc_GetPlayerPawn_ReturnValue_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_7, bool K2Node_DynamicCast_bSuccess_7, double K2Node_ComponentBoundEvent_Value_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_8, double K2Node_ComponentBoundEvent_Value, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_8, bool K2Node_DynamicCast_bSuccess_8, const struct FVector4& CallFunc_MakeVector4_ReturnValue_2, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast, float K2Node_SetFieldsInStruct_FilmBlackClip_ImplicitCast, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast_1, double CallFunc_SetValue_Value_ImplicitCast_2, double CallFunc_SetValue_Value_ImplicitCast_3, double CallFunc_SetValue_Value_ImplicitCast_4);
};

}


