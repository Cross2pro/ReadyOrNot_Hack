#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C
// (None)

class UClass* UW_Options_Accessibility_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Accessibility_UE5_C");

	return Clss;
}


// W_Options_Accessibility_UE5_C W_Options_Accessibility_UE5.Default__W_Options_Accessibility_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Accessibility_UE5_C* UW_Options_Accessibility_UE5_C::GetDefaultObj()
{
	static class UW_Options_Accessibility_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Accessibility_UE5_C*>(UW_Options_Accessibility_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.PopulateAccessibilitySettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EColorVisionDeficiency  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadWorldSpaceActionPrompts_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHighlightWeapons_bHighlightWeapons                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHighlightWeapons_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  CallFunc_LoadColorblindMode_ColorVisionDeficiency                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadColorblindStrength_ColorblindStrength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StagedColorblindStrength_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::PopulateAccessibilitySettings(enum class EColorVisionDeficiency Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts, bool CallFunc_LoadWorldSpaceActionPrompts_ReturnValue, bool CallFunc_LoadHighlightWeapons_bHighlightWeapons, bool CallFunc_LoadHighlightWeapons_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue, double CallFunc_SetFloatValue_NewValue, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, int32 K2Node_Select_Default, double K2Node_VariableSet_StagedColorblindStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "PopulateAccessibilitySettings");

	Params::UW_Options_Accessibility_UE5_C_PopulateAccessibilitySettings_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts = CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts;
	Parms.CallFunc_LoadWorldSpaceActionPrompts_ReturnValue = CallFunc_LoadWorldSpaceActionPrompts_ReturnValue;
	Parms.CallFunc_LoadHighlightWeapons_bHighlightWeapons = CallFunc_LoadHighlightWeapons_bHighlightWeapons;
	Parms.CallFunc_LoadHighlightWeapons_ReturnValue = CallFunc_LoadHighlightWeapons_ReturnValue;
	Parms.CallFunc_LoadColorblindMode_ColorVisionDeficiency = CallFunc_LoadColorblindMode_ColorVisionDeficiency;
	Parms.CallFunc_LoadColorblindMode_ReturnValue = CallFunc_LoadColorblindMode_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadColorblindStrength_ColorblindStrength = CallFunc_LoadColorblindStrength_ColorblindStrength;
	Parms.CallFunc_LoadColorblindStrength_ReturnValue = CallFunc_LoadColorblindStrength_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_VariableSet_StagedColorblindStrength_ImplicitCast = K2Node_VariableSet_StagedColorblindStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_Accessibility_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_Accessibility_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Accessibility_UE5_C_BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Accessibility_UE5_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Accessibility_UE5_C_BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BndEvt__W_Options_Accessibility_UE5_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::BndEvt__W_Options_Accessibility_UE5_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BndEvt__W_Options_Accessibility_UE5_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Accessibility_UE5_C_BndEvt__W_Options_Accessibility_UE5_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Accessibility_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Accessibility_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.ResetDefaultAccessibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Accessibility_UE5_C::ResetDefaultAccessibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "ResetDefaultAccessibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C.ExecuteUbergraph_W_Options_Accessibility_UE5
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveColorblindMode_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHighlightWeapons_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveWorldSpaceActionPrompts_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveColorblindStrength_ColorblindStrength_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_2    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_3    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_4    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_5    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Accessibility_UE5_C::ExecuteUbergraph_W_Options_Accessibility_UE5(int32 EntryPoint, int32 Temp_int_Variable, enum class EColorVisionDeficiency Temp_byte_Variable, enum class EColorVisionDeficiency Temp_byte_Variable_1, enum class EColorVisionDeficiency Temp_byte_Variable_2, enum class EColorVisionDeficiency Temp_byte_Variable_3, bool K2Node_SwitchInteger_CmpSuccess, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SaveColorblindMode_ReturnValue, bool CallFunc_SaveColorblindStrength_ReturnValue, bool CallFunc_SaveColorblindMode_ReturnValue_1, bool CallFunc_SaveColorblindMode_ReturnValue_2, bool CallFunc_SaveColorblindMode_ReturnValue_3, enum class EColorVisionDeficiency K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SaveHighlightWeapons_ReturnValue, bool CallFunc_SaveWorldSpaceActionPrompts_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_1, float CallFunc_SaveColorblindStrength_ColorblindStrength_ImplicitCast, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_2, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_3, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_4, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Accessibility_UE5_C", "ExecuteUbergraph_W_Options_Accessibility_UE5");

	Params::UW_Options_Accessibility_UE5_C_ExecuteUbergraph_W_Options_Accessibility_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SaveColorblindMode_ReturnValue = CallFunc_SaveColorblindMode_ReturnValue;
	Parms.CallFunc_SaveColorblindStrength_ReturnValue = CallFunc_SaveColorblindStrength_ReturnValue;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_1 = CallFunc_SaveColorblindMode_ReturnValue_1;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_2 = CallFunc_SaveColorblindMode_ReturnValue_2;
	Parms.CallFunc_SaveColorblindMode_ReturnValue_3 = CallFunc_SaveColorblindMode_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.CallFunc_SaveHighlightWeapons_ReturnValue = CallFunc_SaveHighlightWeapons_ReturnValue;
	Parms.CallFunc_SaveWorldSpaceActionPrompts_ReturnValue = CallFunc_SaveWorldSpaceActionPrompts_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_1 = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_1;
	Parms.CallFunc_SaveColorblindStrength_ColorblindStrength_ImplicitCast = CallFunc_SaveColorblindStrength_ColorblindStrength_ImplicitCast;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_2 = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_2;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_3 = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_3;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_4 = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_4;
	Parms.CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_5 = CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


