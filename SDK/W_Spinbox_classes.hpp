#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x1770 - 0x15F0)
// WidgetBlueprintGeneratedClass W_Spinbox.W_Spinbox_C
class UW_Spinbox_C : public UCommonSpinbox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Reset;                                         // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Gamepad;                                           // 0x1600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              GamepadView;                                       // 0x1608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Reset;                                         // 0x1610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_52;                                    // 0x1618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ResetBorder;                                       // 0x1620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpinBox*                              SpinBox_29;                                        // 0x1628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Value;                                         // 0x1630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       Value;                                             // 0x1638(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMinValue;                                       // 0x1640(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinimumValue;                                      // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaxValue;                                       // 0x1650(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaximumValue;                                      // 0x1658(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMinSliderValue;                                 // 0x1660(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinimumSliderValue;                                // 0x1668(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaxSliderValue;                                 // 0x1670(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_212A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaximumSliderValue;                                // 0x1678(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseResetButton;                                    // 0x1680(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DefaultValue;                                      // 0x1688(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x1690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                          Col_ResetDisabled;                                 // 0x16A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ResetActive;                                   // 0x16B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueCommited;                                   // 0x16C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x16D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x16E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        MinFractionalDigits;                               // 0x16F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxFractionalDigits;                               // 0x16F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysUseDeltaSnap;                                // 0x16F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2169[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Delta;                                             // 0x1700(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderExponent;                                    // 0x1708(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentValue;                                      // 0x1710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Design_Time;                                    // 0x1718(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x1719(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Gamepad;                                        // 0x171A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bValueDirty;                                       // 0x171B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_FillColor_Gamepad;                             // 0x171C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ActiveFill_Gamepad;                            // 0x172C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_BackgroundColor_Gamepad;                       // 0x173C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Col_ActiveBackgroundColor_Gamepad;                 // 0x174C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2178[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ResetButtonStyle_Disabled;                         // 0x1760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ResetButtonStyle_Enabled;                          // 0x1768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Spinbox_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void IsValueDirty(bool* IsDirty, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void UpdateInputStyle(bool IsGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void ClearMaxSliderValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMinValue();
	void GetMaxSliderValue(double* MaximumSliderValue);
	void GetMinSliderValue(double* MinimumSliderValue);
	void GetMaxValue(double* MaximumValue);
	void GetMinValue(double* MinimumValue);
	void SetMaxSliderValue(double NewValue, float CallFunc_SetMaxSliderValue_NewValue_ImplicitCast);
	void SetMinSliderValue(double NewValue, float CallFunc_SetMinSliderValue_NewValue_ImplicitCast);
	void SetMaxValue(double NewValue, float CallFunc_SetMaxValue_NewValue_ImplicitCast);
	void SetMinValue(double NewValue, float CallFunc_SetMinValue_NewValue_ImplicitCast);
	void UpdateResetButton(bool Temp_bool_Variable, bool CallFunc_IsValueDirty_IsDirty, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetDefaultValue(double DefaultValue, bool ShowResetButton, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void SetValue(double Value, double CallFunc_NormalizeToRange_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_SetValue_NewValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void UpdateValue(double Value);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature();
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void Hide(double Delay, bool Collapse);
	void Construct();
	void Reveal(double Delay);
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void BP_OnFocusReceived();
	void BP_OnFocusLost();
	void BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(class UW_Button_C* Button);
	void ExecuteUbergraph_W_Spinbox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, float K2Node_ComponentBoundEvent_InValue_1, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, float K2Node_ComponentBoundEvent_InValue, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UW_Button_C* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float K2Node_VariableSet_SliderExponent_ImplicitCast, double CallFunc_UpdateValue_Value_ImplicitCast, double K2Node_CallDelegate_InValue_ImplicitCast, float CallFunc_SetMinValue_NewValue_ImplicitCast, float CallFunc_SetMinSliderValue_NewValue_ImplicitCast, float CallFunc_SetMaxSliderValue_NewValue_ImplicitCast, float CallFunc_SetMaxValue_NewValue_ImplicitCast, float CallFunc_SetDelta_NewValue_ImplicitCast, float CallFunc_SetValue_NewValue_ImplicitCast, float CallFunc_SetValue_NewValue_ImplicitCast_1, double CallFunc_UpdateValue_Value_ImplicitCast_1);
	void OnEndSliderMovement__DelegateSignature(double InValue);
	void OnBeginSliderMovement__DelegateSignature();
	void OnValueCommited__DelegateSignature(double InValue, enum class ETextCommit CommitMethod);
	void OnValueChanged__DelegateSignature(double Value);
};

}


