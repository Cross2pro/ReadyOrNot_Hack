#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Replay_Settings_Film.W_Replay_Settings_Film_C
// (None)

class UClass* UW_Replay_Settings_Film_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Replay_Settings_Film_C");

	return Clss;
}


// W_Replay_Settings_Film_C W_Replay_Settings_Film.Default__W_Replay_Settings_Film_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Replay_Settings_Film_C* UW_Replay_Settings_Film_C::GetDefaultObj()
{
	static class UW_Replay_Settings_Film_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Replay_Settings_Film_C*>(UW_Replay_Settings_Film_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "GetFocusTarget");

	Params::UW_Replay_Settings_Film_C_GetFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BackPage");

	Params::UW_Replay_Settings_Film_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.SetDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayController*           K2Node_DynamicCast_AsReplay_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ReplayControls_C*         K2Node_DynamicCast_AsW_Replay_Controls                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDefaultValue_DefaultValue_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::SetDefaults(class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_3, double CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "SetDefaults");

	Params::UW_Replay_Settings_Film_C_SetDefaults_Params Parms{};

	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Controller = K2Node_DynamicCast_AsReplay_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsW_Replay_Controls = K2Node_DynamicCast_AsW_Replay_Controls;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.CallFunc_SetDefaultValue_DefaultValue_ImplicitCast = CallFunc_SetDefaultValue_DefaultValue_ImplicitCast;
	Parms.CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1 = CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_1;
	Parms.CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2 = CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_2;
	Parms.CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_3 = CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_3;
	Parms.CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_4 = CallFunc_SetDefaultValue_DefaultValue_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.NavApplySpinboxDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUINavigation           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Spinbox_C*                K2Node_DynamicCast_AsW_Spinbox                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Replay_Settings_Film_C::NavApplySpinboxDelta(enum class EUINavigation Navigation, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EUINavigation Temp_byte_Variable, class UW_Spinbox_C* K2Node_DynamicCast_AsW_Spinbox, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "NavApplySpinboxDelta");

	Params::UW_Replay_Settings_Film_C_NavApplySpinboxDelta_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsW_Spinbox = K2Node_DynamicCast_AsW_Spinbox;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Replay_Settings_Film_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BP_GetDesiredFocusTarget");

	Params::UW_Replay_Settings_Film_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.SetSpinnerDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_Spinbox_C*                SpinnerWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::SetSpinnerDefault(class UW_Spinbox_C* SpinnerWidget, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "SetSpinnerDefault");

	Params::UW_Replay_Settings_Film_C_SetSpinnerDefault_Params Parms{};

	Parms.SpinnerWidget = SpinnerWidget;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Replay_Settings_Film_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.OnSpinboxHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::OnSpinboxHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "OnSpinboxHovered");

	Params::UW_Replay_Settings_Film_C_OnSpinboxHovered_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "SetInputMode");

	Params::UW_Replay_Settings_Film_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Shoulder_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_BlackClip_K2Node_ComponentBoundEvent_11_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Slope_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Toe_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_WhiteClip_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.InitializeCurrentValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Replay_Settings_Film_C::InitializeCurrentValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "InitializeCurrentValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "ChangePage");

	Params::UW_Replay_Settings_Film_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "Hide");

	Params::UW_Replay_Settings_Film_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Gamma_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "Reveal");

	Params::UW_Replay_Settings_Film_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Contrast_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	Params::UW_Replay_Settings_Film_C_BndEvt__W_Replay_SettingPanel_Spinbox_Saturation_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Replay_Settings_Film.W_Replay_Settings_Film_C.ExecuteUbergraph_W_Replay_Settings_Film
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_8                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReplayCameraPawn*           K2Node_DynamicCast_AsReplay_Camera_Pawn_8                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmBlackClip_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmToe_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetValue_Value_ImplicitCast_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Replay_Settings_Film_C::ExecuteUbergraph_W_Replay_Settings_Film(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button, bool K2Node_Event_IsGamepad, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, double K2Node_ComponentBoundEvent_Value_7, double K2Node_ComponentBoundEvent_Value_6, double K2Node_ComponentBoundEvent_Value_5, double K2Node_ComponentBoundEvent_Value_4, double K2Node_ComponentBoundEvent_Value_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn, bool K2Node_DynamicCast_bSuccess, class FName K2Node_Event_PageName, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_4, bool K2Node_DynamicCast_bSuccess_4, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_5, bool K2Node_DynamicCast_bSuccess_5, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, class APawn* CallFunc_GetPlayerPawn_ReturnValue_6, double K2Node_ComponentBoundEvent_Value_2, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_6, bool K2Node_DynamicCast_bSuccess_6, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double K2Node_Event_Delay, class APawn* CallFunc_GetPlayerPawn_ReturnValue_7, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_7, bool K2Node_DynamicCast_bSuccess_7, double K2Node_ComponentBoundEvent_Value_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_8, double K2Node_ComponentBoundEvent_Value, class AReplayCameraPawn* K2Node_DynamicCast_AsReplay_Camera_Pawn_8, bool K2Node_DynamicCast_bSuccess_8, const struct FVector4& CallFunc_MakeVector4_ReturnValue_2, float K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast, float K2Node_SetFieldsInStruct_FilmBlackClip_ImplicitCast, float K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast, float K2Node_SetFieldsInStruct_FilmToe_ImplicitCast, float K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast, double CallFunc_SetValue_Value_ImplicitCast_1, double CallFunc_SetValue_Value_ImplicitCast_2, double CallFunc_SetValue_Value_ImplicitCast_3, double CallFunc_SetValue_Value_ImplicitCast_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Replay_Settings_Film_C", "ExecuteUbergraph_W_Replay_Settings_Film");

	Params::UW_Replay_Settings_Film_C_ExecuteUbergraph_W_Replay_Settings_Film_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_7 = K2Node_ComponentBoundEvent_Value_7;
	Parms.K2Node_ComponentBoundEvent_Value_6 = K2Node_ComponentBoundEvent_Value_6;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn = K2Node_DynamicCast_AsReplay_Camera_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_1 = K2Node_DynamicCast_AsReplay_Camera_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_2 = K2Node_DynamicCast_AsReplay_Camera_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_3 = K2Node_DynamicCast_AsReplay_Camera_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_4 = CallFunc_GetPlayerPawn_ReturnValue_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_5 = CallFunc_GetPlayerPawn_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_4 = K2Node_DynamicCast_AsReplay_Camera_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_5 = K2Node_DynamicCast_AsReplay_Camera_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_6 = CallFunc_GetPlayerPawn_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_6 = K2Node_DynamicCast_AsReplay_Camera_Pawn_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_7 = CallFunc_GetPlayerPawn_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_7 = K2Node_DynamicCast_AsReplay_Camera_Pawn_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_8 = CallFunc_GetPlayerPawn_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_DynamicCast_AsReplay_Camera_Pawn_8 = K2Node_DynamicCast_AsReplay_Camera_Pawn_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_MakeVector4_ReturnValue_2 = CallFunc_MakeVector4_ReturnValue_2;
	Parms.K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast = K2Node_SetFieldsInStruct_FilmShoulder_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmBlackClip_ImplicitCast = K2Node_SetFieldsInStruct_FilmBlackClip_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast = K2Node_SetFieldsInStruct_FilmSlope_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmToe_ImplicitCast = K2Node_SetFieldsInStruct_FilmToe_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast = K2Node_SetFieldsInStruct_FilmWhiteClip_ImplicitCast;
	Parms.CallFunc_SetValue_Value_ImplicitCast = CallFunc_SetValue_Value_ImplicitCast;
	Parms.CallFunc_SetValue_Value_ImplicitCast_1 = CallFunc_SetValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetValue_Value_ImplicitCast_2 = CallFunc_SetValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetValue_Value_ImplicitCast_3 = CallFunc_SetValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetValue_Value_ImplicitCast_4 = CallFunc_SetValue_Value_ImplicitCast_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


