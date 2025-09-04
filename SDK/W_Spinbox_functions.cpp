#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Spinbox.W_Spinbox_C
// (None)

class UClass* UW_Spinbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Spinbox_C");

	return Clss;
}


// W_Spinbox_C W_Spinbox.Default__W_Spinbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Spinbox_C* UW_Spinbox_C::GetDefaultObj()
{
	static class UW_Spinbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Spinbox_C*>(UW_Spinbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Spinbox.W_Spinbox_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetFocusTarget");

	Params::UW_Spinbox_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Spinbox.W_Spinbox_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BackPage");

	Params::UW_Spinbox_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Spinbox.W_Spinbox_C.IsValueDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDirty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::IsValueDirty(bool* IsDirty, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "IsValueDirty");

	Params::UW_Spinbox_C_IsValueDirty_Params Parms{};

	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDirty != nullptr)
		*IsDirty = Parms.IsDirty;

}


// Function W_Spinbox.W_Spinbox_C.UpdateInputStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::UpdateInputStyle(bool IsGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "UpdateInputStyle");

	Params::UW_Spinbox_C_UpdateInputStyle_Params Parms{};

	Parms.IsGamepad = IsGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.ClearMaxSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMaxSliderValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMinSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMinSliderValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMaxValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.ClearMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ClearMinValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.GetMaxSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaximumSliderValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMaxSliderValue(double* MaximumSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMaxSliderValue");

	Params::UW_Spinbox_C_GetMaxSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaximumSliderValue != nullptr)
		*MaximumSliderValue = Parms.MaximumSliderValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMinSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MinimumSliderValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMinSliderValue(double* MinimumSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMinSliderValue");

	Params::UW_Spinbox_C_GetMinSliderValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MinimumSliderValue != nullptr)
		*MinimumSliderValue = Parms.MinimumSliderValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMaxValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MaximumValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMaxValue(double* MaximumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMaxValue");

	Params::UW_Spinbox_C_GetMaxValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaximumValue != nullptr)
		*MaximumValue = Parms.MaximumValue;

}


// Function W_Spinbox.W_Spinbox_C.GetMinValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             MinimumValue                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::GetMinValue(double* MinimumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "GetMinValue");

	Params::UW_Spinbox_C_GetMinValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MinimumValue != nullptr)
		*MinimumValue = Parms.MinimumValue;

}


// Function W_Spinbox.W_Spinbox_C.SetMaxSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxSliderValue_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMaxSliderValue(double NewValue, float CallFunc_SetMaxSliderValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMaxSliderValue");

	Params::UW_Spinbox_C_SetMaxSliderValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_SetMaxSliderValue_NewValue_ImplicitCast = CallFunc_SetMaxSliderValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMinSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinSliderValue_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMinSliderValue(double NewValue, float CallFunc_SetMinSliderValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMinSliderValue");

	Params::UW_Spinbox_C_SetMinSliderValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_SetMinSliderValue_NewValue_ImplicitCast = CallFunc_SetMinSliderValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMaxValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_NewValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMaxValue(double NewValue, float CallFunc_SetMaxValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMaxValue");

	Params::UW_Spinbox_C_SetMaxValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_SetMaxValue_NewValue_ImplicitCast = CallFunc_SetMaxValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetMinValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinValue_NewValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetMinValue(double NewValue, float CallFunc_SetMinValue_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetMinValue");

	Params::UW_Spinbox_C_SetMinValue_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_SetMinValue_NewValue_ImplicitCast = CallFunc_SetMinValue_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.UpdateResetButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValueDirty_IsDirty                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::UpdateResetButton(bool Temp_bool_Variable, bool CallFunc_IsValueDirty_IsDirty, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "UpdateResetButton");

	Params::UW_Spinbox_C_UpdateResetButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValueDirty_IsDirty = CallFunc_IsValueDirty_IsDirty;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DefaultValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowResetButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetDefaultValue(double DefaultValue, bool ShowResetButton, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetDefaultValue");

	Params::UW_Spinbox_C_SetDefaultValue_Params Parms{};

	Parms.DefaultValue = DefaultValue;
	Parms.ShowResetButton = ShowResetButton;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// float                              CallFunc_SetValue_NewValue_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetValue(double Value, double CallFunc_NormalizeToRange_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_SetValue_NewValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetValue");

	Params::UW_Spinbox_C_SetValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_SetValue_NewValue_ImplicitCast = CallFunc_SetValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.UpdateValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::UpdateValue(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "UpdateValue");

	Params::UW_Spinbox_C_UpdateValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_3_OnSpinBoxBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_SpinBox_29_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "Hide");

	Params::UW_Spinbox_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "Reveal");

	Params::UW_Spinbox_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "PreConstruct");

	Params::UW_Spinbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ChangePage");

	Params::UW_Spinbox_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "SetInputMode");

	Params::UW_Spinbox_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.BP_OnFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BP_OnFocusReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.BP_OnFocusLost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BP_OnFocusLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");

	Params::UW_Spinbox_C_BndEvt__W_Spinbox_btn_Reset_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.ExecuteUbergraph_W_Spinbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_SliderExponent_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateValue_Value_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_InValue_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinValue_NewValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMinSliderValue_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxSliderValue_NewValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxValue_NewValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDelta_NewValue_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_NewValue_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_NewValue_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateValue_Value_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::ExecuteUbergraph_W_Spinbox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, float K2Node_ComponentBoundEvent_InValue_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, float K2Node_ComponentBoundEvent_InValue_1, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, float K2Node_ComponentBoundEvent_InValue, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, class UW_Button_C* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float K2Node_VariableSet_SliderExponent_ImplicitCast, double CallFunc_UpdateValue_Value_ImplicitCast, double K2Node_CallDelegate_InValue_ImplicitCast, float CallFunc_SetMinValue_NewValue_ImplicitCast, float CallFunc_SetMinSliderValue_NewValue_ImplicitCast, float CallFunc_SetMaxSliderValue_NewValue_ImplicitCast, float CallFunc_SetMaxValue_NewValue_ImplicitCast, float CallFunc_SetDelta_NewValue_ImplicitCast, float CallFunc_SetValue_NewValue_ImplicitCast, float CallFunc_SetValue_NewValue_ImplicitCast_1, double CallFunc_UpdateValue_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "ExecuteUbergraph_W_Spinbox");

	Params::UW_Spinbox_C_ExecuteUbergraph_W_Spinbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_ComponentBoundEvent_InValue_2 = K2Node_ComponentBoundEvent_InValue_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_VariableSet_SliderExponent_ImplicitCast = K2Node_VariableSet_SliderExponent_ImplicitCast;
	Parms.CallFunc_UpdateValue_Value_ImplicitCast = CallFunc_UpdateValue_Value_ImplicitCast;
	Parms.K2Node_CallDelegate_InValue_ImplicitCast = K2Node_CallDelegate_InValue_ImplicitCast;
	Parms.CallFunc_SetMinValue_NewValue_ImplicitCast = CallFunc_SetMinValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetMinSliderValue_NewValue_ImplicitCast = CallFunc_SetMinSliderValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetMaxSliderValue_NewValue_ImplicitCast = CallFunc_SetMaxSliderValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetMaxValue_NewValue_ImplicitCast = CallFunc_SetMaxValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetDelta_NewValue_ImplicitCast = CallFunc_SetDelta_NewValue_ImplicitCast;
	Parms.CallFunc_SetValue_NewValue_ImplicitCast = CallFunc_SetValue_NewValue_ImplicitCast;
	Parms.CallFunc_SetValue_NewValue_ImplicitCast_1 = CallFunc_SetValue_NewValue_ImplicitCast_1;
	Parms.CallFunc_UpdateValue_Value_ImplicitCast_1 = CallFunc_UpdateValue_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnEndSliderMovement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnEndSliderMovement__DelegateSignature(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnEndSliderMovement__DelegateSignature");

	Params::UW_Spinbox_C_OnEndSliderMovement__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnBeginSliderMovement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Spinbox_C::OnBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Spinbox.W_Spinbox_C.OnValueCommited__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnValueCommited__DelegateSignature(double InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnValueCommited__DelegateSignature");

	Params::UW_Spinbox_C_OnValueCommited__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Spinbox.W_Spinbox_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Spinbox_C::OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Spinbox_C", "OnValueChanged__DelegateSignature");

	Params::UW_Spinbox_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


