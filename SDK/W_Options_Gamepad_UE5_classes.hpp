#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x480 - 0x410)
// WidgetBlueprintGeneratedClass W_Options_Gamepad_UE5.W_Options_Gamepad_UE5_C
class UW_Options_Gamepad_UE5_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_ScrollButton_C*                     btn_ControlScheme;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     btn_ControlsCommandWheel;                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_ScrollButton_C*                     btn_ControlSettings;                               // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_147;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RadioContainer_C*                   GamepadControlsTabsRadioContainer;                 // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      GamepadControlsWidgetSwitcher;                     // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_GamepadSettingsTabs;                            // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           NextGamepadTabButton;                              // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           PreviousGamepadTabButton;                          // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_GamepadCommandWheel_UE5_C*  W_Options_GamepadCommandWheel_UE5;                 // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_GamepadOptions_UE5_C*       W_Options_GamepadControls_UE5;                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Options_GamepadControlScheme_UE5_C* W_Options_GamepadControlScheme_UE5;                // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Options_Gamepad_UE5_C* GetDefaultObj();

	void GamepadSettingsPreviousTab(int32 SelectedIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_ScrollButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UCommonButtonBase* CallFunc_Array_Get_Item, bool CallFunc_GetSelected_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void GamepadSettingsNextTab(int32 SelectedIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UW_ScrollButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item, bool CallFunc_GetSelected_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GamepadSettingsSelectTab(class UW_ScrollButton_C* SelectedButton, int32 SelectedIndex, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UCommonActivatableWidget* K2Node_DynamicCast_AsCommon_Activatable_Widget, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_ScrollButton_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_ScrollButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void BndEvt__W_SettingsMenuGamepad_W_Button_K2Node_ComponentBoundEvent_117_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_SettingsMenuGamepad_PreviousGamepadTabButton_K2Node_ComponentBoundEvent_123_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BP_OnActivated();
	void OnInitialized();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void ResetDefaultsGamepad();
	void BndEvt__W_Options_Gamepad_UE5_btn_ControlsSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_ScrollButton_C* Button);
	void BndEvt__W_Options_Gamepad_UE5_btn_ControlScheme_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_ScrollButton_C* Button);
	void BndEvt__W_Options_Gamepad_UE5_btn_ControlsCommandWheel_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_ScrollButton_C* Button);
	void ExecuteUbergraph_W_Options_Gamepad_UE5(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_4, class UW_Button_C* K2Node_ComponentBoundEvent_Button_3, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, enum class ESupportedControllerType CallFunc_GetControllerType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button_1, class UW_ScrollButton_C* K2Node_ComponentBoundEvent_Button);
};

}


