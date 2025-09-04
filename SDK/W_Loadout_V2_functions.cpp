#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Loadout_V2.W_Loadout_V2_C
// (None)

class UClass* UW_Loadout_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Loadout_V2_C");

	return Clss;
}


// W_Loadout_V2_C W_Loadout_V2.Default__W_Loadout_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Loadout_V2_C* UW_Loadout_V2_C::GetDefaultObj()
{
	static class UW_Loadout_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Loadout_V2_C*>(UW_Loadout_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Loadout_V2.W_Loadout_V2_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Overview_V2_C*            K2Node_DynamicCast_AsW_Overview_V2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BackPage(bool* Handled, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Overview_V2_C* K2Node_DynamicCast_AsW_Overview_V2, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BackPage_Handled, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BackPage_Handled_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BackPage");

	Params::UW_Loadout_V2_C_BackPage_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Overview_V2 = K2Node_DynamicCast_AsW_Overview_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BackPage_Handled_1 = CallFunc_BackPage_Handled_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Loadout_V2.W_Loadout_V2_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "GetFocusTarget");

	Params::UW_Loadout_V2_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Loadout_V2.W_Loadout_V2_C.NVG_StyleHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENVGStyle               ArmorMaterial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::NVG_StyleHovered(enum class ENVGStyle ArmorMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "NVG_StyleHovered");

	Params::UW_Loadout_V2_C_NVG_StyleHovered_Params Parms{};

	Parms.ArmorMaterial = ArmorMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Is Default Preset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Default                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Is_Default_Preset(class FText& Name, bool* Default, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Is Default Preset");

	Params::UW_Loadout_V2_C_Is_Default_Preset_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Default != nullptr)
		*Default = Parms.Default;

}


// Function W_Loadout_V2.W_Loadout_V2_C.EditCustomizationPresetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Preset_Customization_Modal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Default_Preset_Valid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomizationPresetNames_ReturnValue                 (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::EditCustomizationPresetName(class UW_StandardModal_C* Preset_Customization_Modal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, bool CallFunc_Check_Default_Preset_Valid, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "EditCustomizationPresetName");

	Params::UW_Loadout_V2_C_EditCustomizationPresetName_Params Parms{};

	Parms.Preset_Customization_Modal = Preset_Customization_Modal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.CallFunc_Check_Default_Preset_Valid = CallFunc_Check_Default_Preset_Valid;
	Parms.CallFunc_GetCustomizationPresetNames_ReturnValue = CallFunc_GetCustomizationPresetNames_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Refresh Customization Preset Page
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preset_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Refresh_Customization_Preset_Page(const class FString& Preset_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Refresh Customization Preset Page");

	Params::UW_Loadout_V2_C_Refresh_Customization_Preset_Page_Params Parms{};

	Parms.Preset_Name = Preset_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.EditLoadoutPresetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULoadoutManager*             Loadout_Function_Library                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Default_Preset_Valid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::EditLoadoutPresetName(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, class ULoadoutManager* Loadout_Function_Library, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_Check_Default_Preset_Valid, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "EditLoadoutPresetName");

	Params::UW_Loadout_V2_C_EditLoadoutPresetName_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.Loadout_Function_Library = Loadout_Function_Library;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Check_Default_Preset_Valid = CallFunc_Check_Default_Preset_Valid;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Refresh Preset Page
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Triggering_Modal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      Preset_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_Preset_C*    K2Node_DynamicCast_AsW_Loadout_Page_Preset                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Refresh_Preset_Page(class UW_StandardModal_C* Triggering_Modal, const class FString& Preset_Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UW_Loadout_Page_Preset_C* K2Node_DynamicCast_AsW_Loadout_Page_Preset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Refresh Preset Page");

	Params::UW_Loadout_V2_C_Refresh_Preset_Page_Params Parms{};

	Parms.Triggering_Modal = Triggering_Modal;
	Parms.Preset_Name = Preset_Name;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Preset = K2Node_DynamicCast_AsW_Loadout_Page_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Check Default Preset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preset_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Check_Default_Preset(const class FString& Preset_Name, bool* Valid, bool CallFunc_NotEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Check Default Preset");

	Params::UW_Loadout_V2_C_Check_Default_Preset_Params Parms{};

	Parms.Preset_Name = Preset_Name;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Validate Max Character Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preset_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          Triggering_Modal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::Validate_Max_Character_Preset(const class FString& Preset_Name, class UW_StandardModal_C* Triggering_Modal, int32 CallFunc_Len_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Validate Max Character Preset");

	Params::UW_Loadout_V2_C_Validate_Max_Character_Preset_Params Parms{};

	Parms.Preset_Name = Preset_Name;
	Parms.Triggering_Modal = Triggering_Modal;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Validate Min Character Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Triggering_Modal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      Preset_Name                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::Validate_Min_Character_Preset(class UW_StandardModal_C* Triggering_Modal, const class FString& Preset_Name, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Validate Min Character Preset");

	Params::UW_Loadout_V2_C_Validate_Min_Character_Preset_Params Parms{};

	Parms.Triggering_Modal = Triggering_Modal;
	Parms.Preset_Name = Preset_Name;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Bind Loadout Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Preset_Modal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Bind_Loadout_Events(class UW_StandardModal_C* Preset_Modal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Bind Loadout Events");

	Params::UW_Loadout_V2_C_Bind_Loadout_Events_Params Parms{};

	Parms.Preset_Modal = Preset_Modal;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Bind Customization Events
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Preset_Modal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Bind_Customization_Events(class UW_StandardModal_C* Preset_Modal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Bind Customization Events");

	Params::UW_Loadout_V2_C_Bind_Customization_Events_Params Parms{};

	Parms.Preset_Modal = Preset_Modal;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Get Entry Text For Current Preset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Current_Preset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Customization                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               New_Preset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_All_Preset_Names_ReturnValue                        (ReferenceParm)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UW_Loadout_V2_C::Get_Entry_Text_For_Current_Preset(const class FString& Current_Preset, bool Customization, bool New_Preset, bool Temp_bool_Variable, TArray<class FString>& CallFunc_Get_All_Preset_Names_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool CallFunc_Array_Contains_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Get Entry Text For Current Preset");

	Params::UW_Loadout_V2_C_Get_Entry_Text_For_Current_Preset_Params Parms{};

	Parms.Current_Preset = Current_Preset;
	Parms.Customization = Customization;
	Parms.New_Preset = New_Preset;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Get_All_Preset_Names_ReturnValue = CallFunc_Get_All_Preset_Names_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Get All Preset Names
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Customization                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomizationPresetNames_ReturnValue                 (ReferenceParm)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)

TArray<class FString> UW_Loadout_V2_C::Get_All_Preset_Names(bool Customization, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Get All Preset Names");

	Params::UW_Loadout_V2_C_Get_All_Preset_Names_Params Parms{};

	Parms.Customization = Customization;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetCustomizationPresetNames_ReturnValue = CallFunc_GetCustomizationPresetNames_ReturnValue;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Get Default New Preset Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Customization                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDefaultCustomizationPresetName_ReturnValue           (None)
// class FText                        CallFunc_GetDefaultPresetName_ReturnValue                        (None)

class FText UW_Loadout_V2_C::Get_Default_New_Preset_Name(bool Customization, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class FText CallFunc_GetDefaultCustomizationPresetName_ReturnValue, class FText CallFunc_GetDefaultPresetName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Get Default New Preset Name");

	Params::UW_Loadout_V2_C_Get_Default_New_Preset_Name_Params Parms{};

	Parms.Customization = Customization;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetDefaultCustomizationPresetName_ReturnValue = CallFunc_GetDefaultCustomizationPresetName_ReturnValue;
	Parms.CallFunc_GetDefaultPresetName_ReturnValue = CallFunc_GetDefaultPresetName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Get Entry Initial Text Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Current_Preset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Customization                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               New_Preset                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Entry_Text_For_Current_Preset                                    (Edit, BlueprintVisible)
// class FText                        CallFunc_Get_Entry_Text_For_Current_Preset_ReturnValue           (None)
// class FText                        CallFunc_Get_Default_New_Preset_Name_ReturnValue                 (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UW_Loadout_V2_C::Get_Entry_Initial_Text_Value(const class FString& Current_Preset, bool Customization, bool New_Preset, class FText Entry_Text_For_Current_Preset, class FText CallFunc_Get_Entry_Text_For_Current_Preset_ReturnValue, class FText CallFunc_Get_Default_New_Preset_Name_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Get Entry Initial Text Value");

	Params::UW_Loadout_V2_C_Get_Entry_Initial_Text_Value_Params Parms{};

	Parms.Current_Preset = Current_Preset;
	Parms.Customization = Customization;
	Parms.New_Preset = New_Preset;
	Parms.Entry_Text_For_Current_Preset = Entry_Text_For_Current_Preset;
	Parms.CallFunc_Get_Entry_Text_For_Current_Preset_ReturnValue = CallFunc_Get_Entry_Text_For_Current_Preset_ReturnValue;
	Parms.CallFunc_Get_Default_New_Preset_Name_ReturnValue = CallFunc_Get_Default_New_Preset_Name_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Calculate Gamepad Rotation Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Max_Gamepad_Rotate_Speed                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UW_Loadout_V2_C::Calculate_Gamepad_Rotation_Speed(double X, double Max_Gamepad_Rotate_Speed, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Calculate Gamepad Rotation Speed");

	Params::UW_Loadout_V2_C_Calculate_Gamepad_Rotation_Speed_Params Parms{};

	Parms.X = X;
	Parms.Max_Gamepad_Rotate_Speed = Max_Gamepad_Rotate_Speed;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Rotate Character
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Rotate_speed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RotateLoadoutCharacter_InRotation_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UW_Loadout_V2_C::Rotate_Character(double X, double Rotate_speed, const struct FEventReply& CallFunc_Handled_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_RotateLoadoutCharacter_InRotation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Rotate Character");

	Params::UW_Loadout_V2_C_Rotate_Character_Params Parms{};

	Parms.X = X;
	Parms.Rotate_speed = Rotate_speed;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RotateLoadoutCharacter_InRotation_ImplicitCast = CallFunc_RotateLoadoutCharacter_InRotation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// float                              CallFunc_GetAnalogValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Calculate_Gamepad_Rotation_Speed_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyEvent                   CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue             (None)
// struct FEventReply                 CallFunc_Rotate_Character_ReturnValue                            (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Rotate_Character_X_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Calculate_Gamepad_Rotation_Speed_X_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UW_Loadout_V2_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, double CallFunc_Calculate_Gamepad_Rotation_Speed_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FEventReply& CallFunc_Rotate_Character_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, double CallFunc_Rotate_Character_X_ImplicitCast, double CallFunc_Calculate_Gamepad_Rotation_Speed_X_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnAnalogValueChanged");

	Params::UW_Loadout_V2_C_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetAnalogValue_ReturnValue = CallFunc_GetAnalogValue_ReturnValue;
	Parms.CallFunc_Calculate_Gamepad_Rotation_Speed_ReturnValue = CallFunc_Calculate_Gamepad_Rotation_Speed_ReturnValue;
	Parms.CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue = CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue;
	Parms.CallFunc_Rotate_Character_ReturnValue = CallFunc_Rotate_Character_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Rotate_Character_X_ImplicitCast = CallFunc_Rotate_Character_X_ImplicitCast;
	Parms.CallFunc_Calculate_Gamepad_Rotation_Speed_X_ImplicitCast = CallFunc_Calculate_Gamepad_Rotation_Speed_X_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Refresh Attachments
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Primary                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   Attachment_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_LoadoutSlot_v2_C*         Attachment_Slot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_Weapon_C*    K2Node_DynamicCast_AsW_Loadout_Page_Weapon                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_WeaponEdit_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWeaponAttachment*           CallFunc_GetCurrentAttachmentByType_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Refresh_Attachments(bool Primary, enum class EWeaponAttachmentType Attachment_Type, class UW_LoadoutSlot_v2_C* Attachment_Slot, bool Temp_bool_Variable, class UW_Loadout_Page_Weapon_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon, bool K2Node_DynamicCast_bSuccess, class UW_Loadout_Page_WeaponEdit_C* K2Node_Select_Default, class UWeaponAttachment* CallFunc_GetCurrentAttachmentByType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Refresh Attachments");

	Params::UW_Loadout_V2_C_Refresh_Attachments_Params Parms{};

	Parms.Primary = Primary;
	Parms.Attachment_Type = Attachment_Type;
	Parms.Attachment_Slot = Attachment_Slot;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon = K2Node_DynamicCast_AsW_Loadout_Page_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentAttachmentByType_ReturnValue = CallFunc_GetCurrentAttachmentByType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Clear Attachment For Category
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Attachment_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Primary                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Null_Attachment                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Get_Null_Attachment_By_Type_NullAttachment              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Clear_Attachment_For_Category(enum class EWeaponAttachmentType Attachment_Type, bool Primary, class UClass* Null_Attachment, class UClass* CallFunc_Get_Null_Attachment_By_Type_NullAttachment, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Clear Attachment For Category");

	Params::UW_Loadout_V2_C_Clear_Attachment_For_Category_Params Parms{};

	Parms.Attachment_Type = Attachment_Type;
	Parms.Primary = Primary;
	Parms.Null_Attachment = Null_Attachment;
	Parms.CallFunc_Get_Null_Attachment_By_Type_NullAttachment = CallFunc_Get_Null_Attachment_By_Type_NullAttachment;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Clear Attachment Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Secondary                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Primary                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NullAttachment                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Get_Null_Attachment_By_Type_NullAttachment              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_Weapon_C*    K2Node_DynamicCast_AsW_Loadout_Page_Weapon                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPrimaryActiveTab_Active                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Clear_Attachment_Clicked(bool Secondary, enum class EWeaponAttachmentType AttachmentType, bool Primary, class UClass* NullAttachment, class UClass* CallFunc_Get_Null_Attachment_By_Type_NullAttachment, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UW_Loadout_Page_Weapon_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPrimaryActiveTab_Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Clear Attachment Clicked");

	Params::UW_Loadout_V2_C_Clear_Attachment_Clicked_Params Parms{};

	Parms.Secondary = Secondary;
	Parms.AttachmentType = AttachmentType;
	Parms.Primary = Primary;
	Parms.NullAttachment = NullAttachment;
	Parms.CallFunc_Get_Null_Attachment_By_Type_NullAttachment = CallFunc_Get_Null_Attachment_By_Type_NullAttachment;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon = K2Node_DynamicCast_AsW_Loadout_Page_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPrimaryActiveTab_Active = CallFunc_IsPrimaryActiveTab_Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide Clear Attachment Footer Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Hide_Clear_Attachment_Footer_Option()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide Clear Attachment Footer Option");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Unhide Clear Attachment Footer Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckOverviewIsActive_True                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Unhide_Clear_Attachment_Footer_Option(bool CallFunc_CheckOverviewIsActive_True)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Unhide Clear Attachment Footer Option");

	Params::UW_Loadout_V2_C_Unhide_Clear_Attachment_Footer_Option_Params Parms{};

	Parms.CallFunc_CheckOverviewIsActive_True = CallFunc_CheckOverviewIsActive_True;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Get Null Attachment By Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NullAttachment                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Get_Null_Attachment_By_Type(enum class EWeaponAttachmentType Selection, class UClass** NullAttachment, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Get Null Attachment By Type");

	Params::UW_Loadout_V2_C_Get_Null_Attachment_By_Type_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NullAttachment != nullptr)
		*NullAttachment = Parms.NullAttachment;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Unhide Clear All Attachments Footer Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Unhide_Clear_All_Attachments_Footer_Option()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Unhide Clear All Attachments Footer Option");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide Clear All Attachments Footer Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Hide_Clear_All_Attachments_Footer_Option()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide Clear All Attachments Footer Option");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Clear All Attachments Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWeaponAttachmentType   AttachmentType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Primary                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      NullAttachment                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_Weapon_C*    K2Node_DynamicCast_AsW_Loadout_Page_Weapon                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActivePrimary_ReturnValue                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UW_Loadout_Page_WeaponEdit_C*K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     CallFunc_GetActiveSecondary_ReturnValue                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsPrimaryActiveTab_Active                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_LoadoutSlot_v2_C*> CallFunc_WidgetGetChildrenOfClass_ChildWidgets                   (ReferenceParm, ContainsInstancedReference)
// class UW_LoadoutSlot_v2_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseWeapon>     K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<enum class EWeaponAttachmentType>CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue         (ReferenceParm)
// class UClass*                      CallFunc_Get_Null_Attachment_By_Type_NullAttachment              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Clear_All_Attachments_Clicked(enum class EWeaponAttachmentType AttachmentType, bool Primary, class UClass* NullAttachment, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UW_Loadout_Page_Weapon_C* K2Node_DynamicCast_AsW_Loadout_Page_Weapon, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, class UW_Loadout_Page_WeaponEdit_C* K2Node_Select_Default, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, bool CallFunc_IsPrimaryActiveTab_Active, TArray<class UW_LoadoutSlot_v2_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_LoadoutSlot_v2_C* CallFunc_Array_Get_Item, TSubclassOf<class ABaseWeapon> K2Node_Select_Default_1, TArray<enum class EWeaponAttachmentType>& CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue, class UClass* CallFunc_Get_Null_Attachment_By_Type_NullAttachment, enum class EWeaponAttachmentType CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Clear All Attachments Clicked");

	Params::UW_Loadout_V2_C_Clear_All_Attachments_Clicked_Params Parms{};

	Parms.AttachmentType = AttachmentType;
	Parms.Primary = Primary;
	Parms.NullAttachment = NullAttachment;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Weapon = K2Node_DynamicCast_AsW_Loadout_Page_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActivePrimary_ReturnValue = CallFunc_GetActivePrimary_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetActiveSecondary_ReturnValue = CallFunc_GetActiveSecondary_ReturnValue;
	Parms.CallFunc_IsPrimaryActiveTab_Active = CallFunc_IsPrimaryActiveTab_Active;
	Parms.CallFunc_WidgetGetChildrenOfClass_ChildWidgets = CallFunc_WidgetGetChildrenOfClass_ChildWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue = CallFunc_GetAvailableAttachmentTypesByWeapon_ReturnValue;
	Parms.CallFunc_Get_Null_Attachment_By_Type_NullAttachment = CallFunc_Get_Null_Attachment_By_Type_NullAttachment;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Revert Loadout Preset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               Temp_struct_Variable                                             (ConstParm)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Overview_V2_C*            K2Node_DynamicCast_AsW_Overview_V2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// bool                               CallFunc_Is_Default_Preset_Default                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Revert_Loadout_Preset(const struct FSavedLoadout& Temp_struct_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Overview_V2_C* K2Node_DynamicCast_AsW_Overview_V2, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, bool CallFunc_Is_Default_Preset_Default, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Revert Loadout Preset");

	Params::UW_Loadout_V2_C_Revert_Loadout_Preset_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Overview_V2 = K2Node_DynamicCast_AsW_Overview_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_Is_Default_Preset_Default = CallFunc_Is_Default_Preset_Default;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Revert Customization Preset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Revert_Customization_Preset(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Revert Customization Preset");

	Params::UW_Loadout_V2_C_Revert_Customization_Preset_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue = CallFunc_GetCurrentCustomizationPresetName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Refresh Preset Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               Hovered_Loadout                                                  (Edit, BlueprintVisible)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// struct FSavedLoadout               CallFunc_GetDefaultPreset_ReturnValue                            (None)
// struct FSavedLoadout               CallFunc_GetPreset_ReturnValue                                   (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Refresh_Preset_Preview(const struct FSavedLoadout& Hovered_Loadout, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, const struct FSavedLoadout& CallFunc_GetDefaultPreset_ReturnValue, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Refresh Preset Preview");

	Params::UW_Loadout_V2_C_Refresh_Preset_Preview_Params Parms{};

	Parms.Hovered_Loadout = Hovered_Loadout;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_GetDefaultPreset_ReturnValue = CallFunc_GetDefaultPreset_ReturnValue;
	Parms.CallFunc_GetPreset_ReturnValue = CallFunc_GetPreset_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Edit Preset Name Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Edit_Preset_Name_Clicked(const struct FVector2D& Temp_struct_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, const struct FAnchors& K2Node_MakeStruct_Anchors, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Edit Preset Name Clicked");

	Params::UW_Loadout_V2_C_Edit_Preset_Name_Clicked_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Delete Preset Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          DeletePresetModal                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::Delete_Preset_Clicked(class UW_StandardModal_C* DeletePresetModal, class FText Temp_text_Variable, const struct FAnchors& K2Node_MakeStruct_Anchors, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& Temp_struct_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Delete Preset Clicked");

	Params::UW_Loadout_V2_C_Delete_Preset_Clicked_Params Parms{};

	Parms.DeletePresetModal = DeletePresetModal;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Revert Preset Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Revert_Preset_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Revert Preset Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Save Preset Clicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCustomizationPresetName_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentPresetDisplayName_ReturnValue                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_OpenPresetSaveModal_Preset_Modal                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Save_Preset_Clicked(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Save Preset Clicked");

	Params::UW_Loadout_V2_C_Save_Preset_Clicked_Params Parms{};

	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetCurrentCustomizationPresetName_ReturnValue = CallFunc_GetCurrentCustomizationPresetName_ReturnValue;
	Parms.CallFunc_GetCurrentPresetDisplayName_ReturnValue = CallFunc_GetCurrentPresetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_OpenPresetSaveModal_Preset_Modal = CallFunc_OpenPresetSaveModal_Preset_Modal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Unhide Loadout Preset Footer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Unhide_Loadout_Preset_Footer_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Unhide Loadout Preset Footer Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide Loadout Preset Footer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Hide_Loadout_Preset_Footer_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide Loadout Preset Footer Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide Preset Page Footer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Hide_Preset_Page_Footer_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide Preset Page Footer Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Unhide Preset Page Footer Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckOverviewIsActive_True                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Unhide_Preset_Page_Footer_Options(bool CallFunc_CheckOverviewIsActive_True, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Unhide Preset Page Footer Options");

	Params::UW_Loadout_V2_C_Unhide_Preset_Page_Footer_Options_Params Parms{};

	Parms.CallFunc_CheckOverviewIsActive_True = CallFunc_CheckOverviewIsActive_True;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BP_GetDesiredInputConfig
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FUIInputConfig              ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FUIInputConfig              K2Node_MakeStruct_UIInputConfig                                  (NoDestructor)

struct FUIInputConfig UW_Loadout_V2_C::BP_GetDesiredInputConfig(const struct FUIInputConfig& K2Node_MakeStruct_UIInputConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BP_GetDesiredInputConfig");

	Params::UW_Loadout_V2_C_BP_GetDesiredInputConfig_Params Parms{};

	Parms.K2Node_MakeStruct_UIInputConfig = K2Node_MakeStruct_UIInputConfig;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Mouse_StartRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Loadout_V2_C::Mouse_StartRotation(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Mouse_StartRotation");

	Params::UW_Loadout_V2_C_Mouse_StartRotation_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FVector2D                   CallFunc_PointerEvent_GetCursorDelta_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Rotate_Character_ReturnValue                            (None)

struct FEventReply UW_Loadout_V2_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FEventReply& CallFunc_Rotate_Character_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnMouseMove");

	Params::UW_Loadout_V2_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetCursorDelta_ReturnValue = CallFunc_PointerEvent_GetCursorDelta_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Rotate_Character_ReturnValue = CallFunc_Rotate_Character_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Loadout_V2_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnMouseButtonUp");

	Params::UW_Loadout_V2_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.DeleteCustomizationPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::DeleteCustomizationPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "DeleteCustomizationPreset");

	Params::UW_Loadout_V2_C_DeleteCustomizationPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SaveCustomizationPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Preset_Customization_Modal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Default_Preset_Valid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCustomizationPresetNames_ReturnValue                 (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::SaveCustomizationPreset(class UW_StandardModal_C* Preset_Customization_Modal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, bool CallFunc_Check_Default_Preset_Valid, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SaveCustomizationPreset");

	Params::UW_Loadout_V2_C_SaveCustomizationPreset_Params Parms{};

	Parms.Preset_Customization_Modal = Preset_Customization_Modal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_Check_Default_Preset_Valid = CallFunc_Check_Default_Preset_Valid;
	Parms.CallFunc_GetCustomizationPresetNames_ReturnValue = CallFunc_GetCustomizationPresetNames_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenCustomizationPresetSaveModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bDelete                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               New                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Entry_Initial_Text_Value_ReturnValue                (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OpenCustomizationPresetSaveModal(const class FString& CurrentPreset, bool bDelete, bool New, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText CallFunc_Get_Entry_Initial_Text_Value_ReturnValue, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, const struct FAnchors& K2Node_MakeStruct_Anchors, class UW_StandardModal_C* CallFunc_Create_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FVector2D& Temp_struct_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenCustomizationPresetSaveModal");

	Params::UW_Loadout_V2_C_OpenCustomizationPresetSaveModal_Params Parms{};

	Parms.CurrentPreset = CurrentPreset;
	Parms.bDelete = bDelete;
	Parms.New = New;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Get_Entry_Initial_Text_Value_ReturnValue = CallFunc_Get_Entry_Initial_Text_Value_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.AmmoHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AmmoName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::AmmoHovered(class FName AmmoName, class FText CategoryText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "AmmoHovered");

	Params::UW_Loadout_V2_C_AmmoHovered_Params Parms{};

	Parms.AmmoName = AmmoName;
	Parms.CategoryText = CategoryText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ClosePresetPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ClosePresetPreview(class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ClosePresetPreview");

	Params::UW_Loadout_V2_C_ClosePresetPreview_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Preset_Preview = K2Node_DynamicCast_AsW_Loadout_Preset_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PreviewPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               PreviewLoadout                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UW_Loadout_Preset_Preview_C* CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::PreviewPreset(const struct FSavedLoadout& PreviewLoadout, class UW_Loadout_Preset_Preview_C* CallFunc_BP_AddWidget_ReturnValue, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_Loadout_Preset_Preview_C* K2Node_DynamicCast_AsW_Loadout_Preset_Preview, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PreviewPreset");

	Params::UW_Loadout_V2_C_PreviewPreset_Params Parms{};

	Parms.PreviewLoadout = PreviewLoadout;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Loadout_Preset_Preview = K2Node_DynamicCast_AsW_Loadout_Preset_Preview;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PresetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::PresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PresetModified");

	Params::UW_Loadout_V2_C_PresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.CancelSavePreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::CancelSavePreset(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "CancelSavePreset");

	Params::UW_Loadout_V2_C_CancelSavePreset_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.DeleteLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          TriggeringModal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Loadout_Page_Preset_C*    K2Node_DynamicCast_AsW_Loadout_Page_Preset                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::DeleteLoadoutPreset(class UW_StandardModal_C* TriggeringModal, class FText TextEntry, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, class UW_Loadout_Page_Preset_C* K2Node_DynamicCast_AsW_Loadout_Page_Preset, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "DeleteLoadoutPreset");

	Params::UW_Loadout_V2_C_DeleteLoadoutPreset_Params Parms{};

	Parms.TriggeringModal = TriggeringModal;
	Parms.TextEntry = TextEntry;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.K2Node_DynamicCast_AsW_Loadout_Page_Preset = K2Node_DynamicCast_AsW_Loadout_Page_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SaveLoadoutPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          Preset_Loadout_Modal                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class ULoadoutManager*             Loadout_Function_Library                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CurrentLoadout                                                   (Edit, BlueprintVisible)
// class FString                      PresetName                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Overwriting                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ConfirmOverwrite                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Default_Preset_Valid                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAllPresetNames_ReturnValue                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UW_Loadout_V2_C::SaveLoadoutPreset(class UW_StandardModal_C* Preset_Loadout_Modal, class FText TextEntry, class ULoadoutManager* Loadout_Function_Library, const struct FSavedLoadout& CurrentLoadout, const class FString& PresetName, bool Overwriting, bool ConfirmOverwrite, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_Check_Default_Preset_Valid, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Array_Contains_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SaveLoadoutPreset");

	Params::UW_Loadout_V2_C_SaveLoadoutPreset_Params Parms{};

	Parms.Preset_Loadout_Modal = Preset_Loadout_Modal;
	Parms.TextEntry = TextEntry;
	Parms.Loadout_Function_Library = Loadout_Function_Library;
	Parms.CurrentLoadout = CurrentLoadout;
	Parms.PresetName = PresetName;
	Parms.Overwriting = Overwriting;
	Parms.ConfirmOverwrite = ConfirmOverwrite;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Check_Default_Preset_Valid = CallFunc_Check_Default_Preset_Valid;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_2 = CallFunc_GetReadyOrNotGameState_ReturnValue_2;
	Parms.CallFunc_GetAllPresetNames_ReturnValue = CallFunc_GetAllPresetNames_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenPresetSaveModal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CurrentPreset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bDelete                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               New                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          Preset_Modal                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Entry_Initial_Text_Value_ReturnValue                (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OpenPresetSaveModal(const class FString& CurrentPreset, bool bDelete, bool New, class UW_StandardModal_C** Preset_Modal, bool Temp_bool_Variable, class FText CallFunc_Get_Entry_Initial_Text_Value_ReturnValue, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FAnchors& K2Node_MakeStruct_Anchors, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FVector2D& Temp_struct_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenPresetSaveModal");

	Params::UW_Loadout_V2_C_OpenPresetSaveModal_Params Parms{};

	Parms.CurrentPreset = CurrentPreset;
	Parms.bDelete = bDelete;
	Parms.New = New;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Get_Entry_Initial_Text_Value_ReturnValue = CallFunc_Get_Entry_Initial_Text_Value_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Preset_Modal != nullptr)
		*Preset_Modal = Parms.Preset_Modal;

}


// Function W_Loadout_V2.W_Loadout_V2_C.ShowMainNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::ShowMainNav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ShowMainNav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ShowWeaponClassNav
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemClass              SelectedClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSecondary                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowLessLethal                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemClass              NewCategory                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        SecondaryClasses                                                 (Edit, BlueprintVisible)
// TMap<class FName, class FText>     TempOptionMap                                                    (Edit, BlueprintVisible)
// TSet<enum class EItemClass>        PrimaryClasses                                                   (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        K2Node_MakeVariable_MakeVariableOutput                           (None)
// TSet<enum class EItemClass>        K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemClassText_Category_Text                          (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<enum class EItemClass>        K2Node_Select_Default                                            (None)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ShowWeaponClassNav(enum class EItemClass SelectedClass, bool bIsSecondary, bool bShowLessLethal, enum class EItemClass NewCategory, TSet<enum class EItemClass> SecondaryClasses, TMap<class FName, class FText> TempOptionMap, TSet<enum class EItemClass> PrimaryClasses, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSet<enum class EItemClass> K2Node_MakeVariable_MakeVariableOutput, TSet<enum class EItemClass> K2Node_MakeVariable_MakeVariableOutput_1, int32 CallFunc_MakeLiteralInt_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetItemClassText_Category_Text, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, TSet<enum class EItemClass> K2Node_Select_Default, bool CallFunc_Set_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ShowWeaponClassNav");

	Params::UW_Loadout_V2_C_ShowWeaponClassNav_Params Parms{};

	Parms.SelectedClass = SelectedClass;
	Parms.bIsSecondary = bIsSecondary;
	Parms.bShowLessLethal = bShowLessLethal;
	Parms.NewCategory = NewCategory;
	Parms.SecondaryClasses = SecondaryClasses;
	Parms.TempOptionMap = TempOptionMap;
	Parms.PrimaryClasses = PrimaryClasses;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetItemClassText_Category_Text = CallFunc_GetItemClassText_Category_Text;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTarget_Focus                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Loadout_V2_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BP_GetDesiredFocusTarget");

	Params::UW_Loadout_V2_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetFocusTarget_Focus = CallFunc_GetFocusTarget_Focus;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PoseTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCameraAndPose(class FName CameraTag, const class FString& PoseTag, double BlendTime, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, float CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCameraAndPose");

	Params::UW_Loadout_V2_C_SetCameraAndPose_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.PoseTag = PoseTag;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue_1 = CallFunc_GetReadyOrNotGameState_ReturnValue_1;
	Parms.CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast = CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCameraAndPoseByPageID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageNameID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value_2                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCameraAndPoseByPageID(class FName PageNameID, double BlendTime, class UFMODEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, float CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCameraAndPoseByPageID");

	Params::UW_Loadout_V2_C_SetCameraAndPoseByPageID_Params Parms{};

	Parms.PageNameID = PageNameID;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast = CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SlotUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SlotUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SlotUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ArmorMaterialHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmorMaterial                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ArmorMaterialHovered(class UArmourMaterial* ArmorMaterial, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ArmorMaterialHovered");

	Params::UW_Loadout_V2_C_ArmorMaterialHovered_Params Parms{};

	Parms.ArmorMaterial = ArmorMaterial;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.AttachmentHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponAttachment*           Attachment                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponAttachmentType   AttachmentType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAttachmentSlotText_SlotText                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::AttachmentHovered(class UWeaponAttachment* Attachment, enum class EWeaponAttachmentType AttachmentType, class FText CallFunc_GetAttachmentSlotText_SlotText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "AttachmentHovered");

	Params::UW_Loadout_V2_C_AttachmentHovered_Params Parms{};

	Parms.Attachment = Attachment;
	Parms.AttachmentType = AttachmentType;
	Parms.CallFunc_GetAttachmentSlotText_SlotText = CallFunc_GetAttachmentSlotText_SlotText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ItemHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseItem*                   BaseItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CategoryText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ItemHovered(class ABaseItem* BaseItem, class FText CategoryText, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ItemHovered");

	Params::UW_Loadout_V2_C_ItemHovered_Params Parms{};

	Parms.BaseItem = BaseItem;
	Parms.CategoryText = CategoryText;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.WeaponHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseWeapon*                 BaseWeaponItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Secondary                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UClass*                      CallFunc_GetClassFromObject_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBase_Weapon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::WeaponHovered(class ABaseWeapon* BaseWeaponItem, bool Secondary, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UClass* CallFunc_GetClassFromObject_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBase_Weapon, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "WeaponHovered");

	Params::UW_Loadout_V2_C_WeaponHovered_Params Parms{};

	Parms.BaseWeaponItem = BaseWeaponItem;
	Parms.Secondary = Secondary;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetClassFromObject_ReturnValue = CallFunc_GetClassFromObject_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBase_Weapon = K2Node_ClassDynamicCast_AsBase_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UW_Loadout_V2_C::BP_OnHandleBackAction(bool CallFunc_BackPage_Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BP_OnHandleBackAction");

	Params::UW_Loadout_V2_C_BP_OnHandleBackAction_Params Parms{};

	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Loadout_V2.W_Loadout_V2_C.CheckOverviewIsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               TURR                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverview_V2*                K2Node_DynamicCast_AsOverview_V2                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::CheckOverviewIsActive(bool* TURR, class UOverview_V2* K2Node_DynamicCast_AsOverview_V2, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "CheckOverviewIsActive");

	Params::UW_Loadout_V2_C_CheckOverviewIsActive_Params Parms{};

	Parms.K2Node_DynamicCast_AsOverview_V2 = K2Node_DynamicCast_AsOverview_V2;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TURR != nullptr)
		*TURR = Parms.TURR;

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryPoses
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCategoryPoses(enum class EItemCategory Temp_byte_Variable, const class FString& Temp_string_Variable, enum class EItemCategory Temp_byte_Variable_1, const class FString& Temp_string_Variable_1, enum class EItemCategory Temp_byte_Variable_2, const class FString& Temp_string_Variable_2, enum class EItemCategory Temp_byte_Variable_3, const class FString& Temp_string_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCategoryPoses");

	Params::UW_Loadout_V2_C_SetCategoryPoses_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCategoryCameraTags
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCategoryCameraTags(enum class EItemCategory Temp_byte_Variable, class FName Temp_name_Variable, enum class EItemCategory Temp_byte_Variable_1, class FName Temp_name_Variable_1, enum class EItemCategory Temp_byte_Variable_2, class FName Temp_name_Variable_2, enum class EItemCategory Temp_byte_Variable_3, class FName Temp_name_Variable_3, enum class EItemCategory Temp_byte_Variable_4, class FName Temp_name_Variable_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCategoryCameraTags");

	Params::UW_Loadout_V2_C_SetCategoryCameraTags_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateAllPreviewWeaponAttachments
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWorkbench                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ABaseItem>       Weapon                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               IsSidearm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UClass*>              Attachments                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData                      (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_1                    (NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default                                            (ConstParm, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWorld*                      CallFunc_GetWorldBP_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   CallFunc_GetItemData_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSavedWeaponAttachmentData  K2Node_MakeStruct_SavedWeaponAttachmentData_2                    (NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_1                                          (ConstParm, NoDestructor)
// struct FSavedWeaponAttachmentData  K2Node_Select_Default_2                                          (ConstParm, NoDestructor)
// class UClass*                      K2Node_Select_Default_3                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::UpdateAllPreviewWeaponAttachments(bool IsWorkbench, TSubclassOf<class ABaseItem>& Weapon, bool IsSidearm, const struct FSavedLoadout& ActiveLoadout, const TArray<class UClass*>& Attachments, bool Temp_bool_Variable, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_Select_Default, bool Temp_bool_Variable_2, int32 Temp_int_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 Temp_int_Variable_1, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, const struct FSavedWeaponAttachmentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, const struct FSavedWeaponAttachmentData& K2Node_MakeStruct_SavedWeaponAttachmentData_2, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_1, const struct FSavedWeaponAttachmentData& K2Node_Select_Default_2, class UClass* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateAllPreviewWeaponAttachments");

	Params::UW_Loadout_V2_C_UpdateAllPreviewWeaponAttachments_Params Parms{};

	Parms.IsWorkbench = IsWorkbench;
	Parms.Weapon = Weapon;
	Parms.IsSidearm = IsSidearm;
	Parms.ActiveLoadout = ActiveLoadout;
	Parms.Attachments = Attachments;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData = K2Node_MakeStruct_SavedWeaponAttachmentData;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_1 = K2Node_MakeStruct_SavedWeaponAttachmentData_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_GetWorldBP_ReturnValue = CallFunc_GetWorldBP_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.K2Node_MakeStruct_SavedWeaponAttachmentData_2 = K2Node_MakeStruct_SavedWeaponAttachmentData_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.EquipArmourMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArmourMaterial*             ArmourMaterial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::EquipArmourMaterial(class UArmourMaterial* ArmourMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "EquipArmourMaterial");

	Params::UW_Loadout_V2_C_EquipArmourMaterial_Params Parms{};

	Parms.ArmourMaterial = ArmourMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPresetModified
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetPresetModified(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPresetModified");

	Params::UW_Loadout_V2_C_SetPresetModified_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           LoadoutSlot                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutCategory>    GearCategoryClasses                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UW_Loadout_Page_ItemList_C*  Itemlist                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OpenItemList(bool VerticalList, enum class EItemCategory LoadoutSlot, TArray<struct FLoadoutCategory>& GearCategoryClasses, class UW_Loadout_Page_ItemList_C* Itemlist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenItemList");

	Params::UW_Loadout_V2_C_OpenItemList_Params Parms{};

	Parms.VerticalList = VerticalList;
	Parms.LoadoutSlot = LoadoutSlot;
	Parms.GearCategoryClasses = GearCategoryClasses;
	Parms.Itemlist = Itemlist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCameraBySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemCategory           LoadoutSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetPreMissionCameraBySlot(enum class EItemCategory LoadoutSlot, double BlendTime, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPreMissionCameraBySlot");

	Params::UW_Loadout_V2_C_SetPreMissionCameraBySlot_Params Parms{};

	Parms.LoadoutSlot = LoadoutSlot;
	Parms.BlendTime = BlendTime;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.HolsterPreviewCharacterWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHolstering                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_GetDefaultPreviewCharacter_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastTableMontagePlayed_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::HolsterPreviewCharacterWeapon(bool* IsHolstering, class AReadyOrNotCharacter* CallFunc_GetDefaultPreviewCharacter_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetLastTableMontagePlayed_ReturnValue, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, float CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining, bool CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "HolsterPreviewCharacterWeapon");

	Params::UW_Loadout_V2_C_HolsterPreviewCharacterWeapon_Params Parms{};

	Parms.CallFunc_GetDefaultPreviewCharacter_ReturnValue = CallFunc_GetDefaultPreviewCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetLastTableMontagePlayed_ReturnValue = CallFunc_GetLastTableMontagePlayed_ReturnValue;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining = CallFunc_IsTableMontagePlayingWithTimeRemaining_TimeRemaining;
	Parms.CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue = CallFunc_IsTableMontagePlayingWithTimeRemaining_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHolstering != nullptr)
		*IsHolstering = Parms.IsHolstering;

}


// Function W_Loadout_V2.W_Loadout_V2_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Reveal");

	Params::UW_Loadout_V2_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Hide");

	Params::UW_Loadout_V2_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetInputMode");

	Params::UW_Loadout_V2_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateActiveLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSavedLoadout               ActiveLoadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateActiveLoadout");

	Params::UW_Loadout_V2_C_UpdateActiveLoadout_Params Parms{};

	Parms.ActiveLoadout = ActiveLoadout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.UpdateCurrentItemMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EItemCategory, class UClass*>ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Loadout_V2_C::UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "UpdateCurrentItemMap");

	Params::UW_Loadout_V2_C_UpdateCurrentItemMap_Params Parms{};

	Parms.ItemCategory = ItemCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.HeaderSubpageNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::HeaderSubpageNavigation(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "HeaderSubpageNavigation");

	Params::UW_Loadout_V2_C_HeaderSubpageNavigation_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PreConstruct");

	Params::UW_Loadout_V2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetPreMissionCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             BlendTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetPreMissionCamera(class FName Tag, const class FString& Animation, double BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetPreMissionCamera");

	Params::UW_Loadout_V2_C_SetPreMissionCamera_Params Parms{};

	Parms.Tag = Tag;
	Parms.Animation = Animation;
	Parms.BlendTime = BlendTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnAttachmentSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Attaching_Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Attachment_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OnAttachmentSlotClicked(class UClass* Attaching_Weapon, class UClass* Attachment_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnAttachmentSlotClicked");

	Params::UW_Loadout_V2_C_OnAttachmentSlotClicked_Params Parms{};

	Parms.Attaching_Weapon = Attaching_Weapon;
	Parms.Attachment_Data = Attachment_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.InputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::InputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "InputMethodChanged");

	Params::UW_Loadout_V2_C_InputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SetCurrentPageID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentPageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::SetCurrentPageID(class FName CurrentPageID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SetCurrentPageID");

	Params::UW_Loadout_V2_C_SetCurrentPageID_Params Parms{};

	Parms.CurrentPageID = CurrentPageID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ChangePage");

	Params::UW_Loadout_V2_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        OptionNameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature(class FName OptionNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_Header_K2Node_ComponentBoundEvent_1_OnNavOptionSelected__DelegateSignature_Params Parms{};

	Parms.OptionNameID = OptionNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OpenCustomization
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OpenCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OpenCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SwitchToLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SwitchToLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SwitchToLoadout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.SwitchToCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::SwitchToCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "SwitchToCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CharacterPose                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature(class FName CameraTag, const class FString& CharacterPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_CustomizationWidget_K2Node_ComponentBoundEvent_4_OnCategorySelected__DelegateSignature_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.CharacterPose = CharacterPose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      ButtonId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature");

	Params::UW_Loadout_V2_C_BndEvt__W_Loadout_V2_PageHeader_K2Node_ComponentBoundEvent_2_OnFooterButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UW_Loadout_V2_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnFocusLost");

	Params::UW_Loadout_V2_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_Loadout_V2_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnMouseLeave");

	Params::UW_Loadout_V2_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Activate Preview Preset Gamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Activate_Preview_Preset_Gamepad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Activate Preview Preset Gamepad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Close Preview Preset Gamepad
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::Close_Preview_Preset_Gamepad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Close Preview Preset Gamepad");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.PresetOptionHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               NewPresetButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::PresetOptionHovered(class FText PresetName, bool NewPresetButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "PresetOptionHovered");

	Params::UW_Loadout_V2_C_PresetOptionHovered_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.NewPresetButton = NewPresetButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.Delete Preset Modal Closed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::Delete_Preset_Modal_Closed(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "Delete Preset Modal Closed");

	Params::UW_Loadout_V2_C_Delete_Preset_Modal_Closed_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.ExecuteUbergraph_W_Loadout_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               K2Node_Event_ActiveLoadout                                       (None)
// TMap<enum class EItemCategory, class UClass*>K2Node_Event_ItemCategory                                        (None)
// class FName                        K2Node_Event_OptionNameID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Tag                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Animation                                     (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_BlendTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HolsterPreviewCharacterWeapon_IsHolstering              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Attaching_Weapon                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Attachment_Data                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseItem*                   CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSavedLoadout               CallFunc_GetActiveLoadout_ReturnValue                            (None)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOverviewIsActive_True                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IReadyOrNotUI_C>K2Node_DynamicCast_AsReady_or_Not_UI                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CurrentPageID                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BackPage_Handled                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_BP_AddWidget_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_OptionNameID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_CameraTag                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_CharacterPose                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_ButtonID                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutUI_C>K2Node_DynamicCast_AsLoadout_UI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_PresetName                                    (None)
// bool                               K2Node_CustomEvent_NewPresetButton                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Default_Preset_Default                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_GetActiveWidget_ReturnValue_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::ExecuteUbergraph_W_Loadout_V2(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class FName K2Node_Event_OptionNameID, bool K2Node_Event_IsDesignTime, class FName K2Node_CustomEvent_Tag, const class FString& K2Node_CustomEvent_Animation, double K2Node_CustomEvent_BlendTime, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_HolsterPreviewCharacterWeapon_IsHolstering, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* K2Node_CustomEvent_Attaching_Weapon, class UClass* K2Node_CustomEvent_Attachment_Data, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CheckOverviewIsActive_True, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_CurrentPageID, bool CallFunc_BackPage_Handled, class FName K2Node_Event_PageName, bool Temp_bool_Variable, class FName K2Node_Select_Default, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCommonActivatableWidget* CallFunc_BP_AddWidget_ReturnValue, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_ComponentBoundEvent_CameraTag, const class FString& K2Node_ComponentBoundEvent_CharacterPose, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FPointerEvent& K2Node_Event_MouseEvent, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText K2Node_CustomEvent_PresetName, bool K2Node_CustomEvent_NewPresetButton, bool CallFunc_Is_Default_Preset_Default, bool CallFunc_BooleanOR_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue_1, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue_2, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "ExecuteUbergraph_W_Loadout_V2");

	Params::UW_Loadout_V2_C_ExecuteUbergraph_W_Loadout_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_ActiveLoadout = K2Node_Event_ActiveLoadout;
	Parms.K2Node_Event_ItemCategory = K2Node_Event_ItemCategory;
	Parms.K2Node_Event_OptionNameID = K2Node_Event_OptionNameID;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CustomEvent_Animation = K2Node_CustomEvent_Animation;
	Parms.K2Node_CustomEvent_BlendTime = K2Node_CustomEvent_BlendTime;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_HolsterPreviewCharacterWeapon_IsHolstering = CallFunc_HolsterPreviewCharacterWeapon_IsHolstering;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Attaching_Weapon = K2Node_CustomEvent_Attaching_Weapon;
	Parms.K2Node_CustomEvent_Attachment_Data = K2Node_CustomEvent_Attachment_Data;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetActiveLoadout_ReturnValue = CallFunc_GetActiveLoadout_ReturnValue;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CheckOverviewIsActive_True = CallFunc_CheckOverviewIsActive_True;
	Parms.K2Node_DynamicCast_AsReady_or_Not_UI = K2Node_DynamicCast_AsReady_or_Not_UI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CurrentPageID = K2Node_CustomEvent_CurrentPageID;
	Parms.CallFunc_BackPage_Handled = CallFunc_BackPage_Handled;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BP_AddWidget_ReturnValue = CallFunc_BP_AddWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OptionNameID = K2Node_ComponentBoundEvent_OptionNameID;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_CameraTag = K2Node_ComponentBoundEvent_CameraTag;
	Parms.K2Node_ComponentBoundEvent_CharacterPose = K2Node_ComponentBoundEvent_CharacterPose;
	Parms.K2Node_ComponentBoundEvent_ButtonID = K2Node_ComponentBoundEvent_ButtonID;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsLoadout_UI = K2Node_DynamicCast_AsLoadout_UI;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CustomEvent_PresetName = K2Node_CustomEvent_PresetName;
	Parms.K2Node_CustomEvent_NewPresetButton = K2Node_CustomEvent_NewPresetButton;
	Parms.CallFunc_Is_Default_Preset_Default = CallFunc_Is_Default_Preset_Default;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_2 = CallFunc_GetActiveWidget_ReturnValue_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast = CallFunc_SetActiveCameraByTag_BlendTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnPresetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnPresetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnPresetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnSaveModifiedPresetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OnSaveModifiedPresetClicked__DelegateSignature(const class FString& Preset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnSaveModifiedPresetClicked__DelegateSignature");

	Params::UW_Loadout_V2_C_OnSaveModifiedPresetClicked__DelegateSignature_Params Parms{};

	Parms.Preset = Preset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnPresetModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PresetDirty                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OnPresetModified__DelegateSignature(bool PresetDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnPresetModified__DelegateSignature");

	Params::UW_Loadout_V2_C_OnPresetModified__DelegateSignature_Params Parms{};

	Parms.PresetDirty = PresetDirty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnChangedInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Loadout_V2_C::OnChangedInput__DelegateSignature(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnChangedInput__DelegateSignature");

	Params::UW_Loadout_V2_C_OnChangedInput__DelegateSignature_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnArmorMaterialEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnArmorMaterialEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnArmorMaterialEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnSidearmWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnSidearmWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnSidearmWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Loadout_V2.W_Loadout_V2_C.OnPrimaryWeaponEquipped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Loadout_V2_C::OnPrimaryWeaponEquipped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Loadout_V2_C", "OnPrimaryWeaponEquipped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


