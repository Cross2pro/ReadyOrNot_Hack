#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x510 - 0x410)
// WidgetBlueprintGeneratedClass W_Replay_SettingPanel.W_Replay_SettingPanel_C
class UW_Replay_SettingPanel_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Spline_Add;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Spline_Play;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Spline_RemoveAll;                              // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Spline_RemoveLast;                             // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      CUI_WidgetSwitcher;                                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                         Drop_SplineRotation;                               // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_38;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                      Img_icon;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Aperture;                                  // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_BlackClip;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_CameraRoll;                                // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Contrast;                                  // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_FieldOfView;                               // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_FocalDistance;                             // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Gamma;                                     // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_LookSensitivity;                           // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Saturation;                                // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Shoulder;                                  // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Slope;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_SplineDuration;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_Toe;                                       // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Spinbox_C*                          Spinbox_WhiteClip;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetStack*         Stack_Settings;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PanelName;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Camera;                                         // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Film;                                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Lens;                                           // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Spline;                                         // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ActivePanel;                                       // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentFocus;                                      // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Replay_SettingPanel_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void SetActivePanel(const class FString& PanelID, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue);
	void SetPanelHeader(class UTexture2D* Icon, class FText Label);
	void OpenPanel(bool CallFunc_Not_PreBool_ReturnValue);
	void ClosePanel(class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue);
	void ToggleSplinePanel(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ToggleLensPanel(class UW_Replay_Settings_Lens_C* CallFunc_BP_AddWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus);
	void ToggleFilmPanel(class UW_Replay_Settings_Film_C* CallFunc_BP_AddWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus);
	void ToggleCameraPanel(class UW_Replay_Settings_Camera_C* CallFunc_BP_AddWidget_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> CallFunc_GetFocusTarget_self_CastInput, class UWidget* CallFunc_GetFocusTarget_Focus);
	void SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_drop_SplineRotation_K2Node_ComponentBoundEvent_32_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveLast_K2Node_ComponentBoundEvent_31_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_RemoveAll_K2Node_ComponentBoundEvent_30_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_Play_K2Node_ComponentBoundEvent_29_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_btn_Spline_Add_K2Node_ComponentBoundEvent_28_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Replay_SettingPanel_Spinbox_SplineDuration_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_CameraRoll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(double Value);
	void InitializeDefaults();
	void ChangePage(class FName PageName);
	void BndEvt__W_Replay_SettingPanel_Spinbox_LookSensitivity_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FocalDistance_K2Node_ComponentBoundEvent_21_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Aperture_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(double Value);
	void BndEvt__W_Replay_SettingPanel_Spinbox_FieldOfView_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(double Value);
	void Hide(double Delay, bool Collapse);
	void BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(double Value);
	void Reveal(double Delay);
	void SetInputMode(bool IsGamepad);
	void ExecuteUbergraph_W_Replay_SettingPanel(int32 EntryPoint, int32 CallFunc_MakeLiteralInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, double K2Node_ComponentBoundEvent_Value_11, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_3, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ReplayCameraPawn_C* K2Node_DynamicCast_AsBP_Replay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess_4, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, int32 CallFunc_Subtract_IntInt_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_2, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, double K2Node_ComponentBoundEvent_Value_10, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_4, bool K2Node_DynamicCast_bSuccess_5, double K2Node_ComponentBoundEvent_Value_9, double K2Node_ComponentBoundEvent_Value_8, double K2Node_ComponentBoundEvent_Value_12, const class FString& K2Node_ComponentBoundEvent_OptionID, double K2Node_ComponentBoundEvent_Value_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, double K2Node_ComponentBoundEvent_Value_6, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_5, bool K2Node_DynamicCast_bSuccess_6, double K2Node_ComponentBoundEvent_Value_5, class FName K2Node_Event_PageName, double K2Node_ComponentBoundEvent_Value_4, double K2Node_ComponentBoundEvent_Value_3, double K2Node_ComponentBoundEvent_Value_2, double K2Node_ComponentBoundEvent_Value_13, double K2Node_ComponentBoundEvent_Value_1, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_ComponentBoundEvent_Value, double K2Node_Event_Delay, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_7, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool K2Node_Event_IsGamepad, float K2Node_VariableSet_TotalSplineTime_ImplicitCast);
};

}


