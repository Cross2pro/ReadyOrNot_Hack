#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Graphics_FOV.W_Options_Graphics_FOV_C
// (None)

class UClass* UW_Options_Graphics_FOV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Graphics_FOV_C");

	return Clss;
}


// W_Options_Graphics_FOV_C W_Options_Graphics_FOV.Default__W_Options_Graphics_FOV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Graphics_FOV_C* UW_Options_Graphics_FOV_C::GetDefaultObj()
{
	static class UW_Options_Graphics_FOV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Graphics_FOV_C*>(UW_Options_Graphics_FOV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.PopulateOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_FOV_C::PopulateOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "PopulateOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.UpdateWorldFOVText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_FOV_C::UpdateWorldFOVText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "UpdateWorldFOVText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.UpdateWeaponFOVText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_FOV_C::UpdateWeaponFOVText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "UpdateWeaponFOVText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.PushVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_FOV_C::PushVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "PushVariables");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_FOV_C_BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.BndEvt__W_Options_Graphics_UE5_Simple_Slider_FOV_Weapon_K2Node_ComponentBoundEvent_14_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::BndEvt__W_Options_Graphics_UE5_Simple_Slider_FOV_Weapon_K2Node_ComponentBoundEvent_14_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "BndEvt__W_Options_Graphics_UE5_Simple_Slider_FOV_Weapon_K2Node_ComponentBoundEvent_14_OnIntegralValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_FOV_C_BndEvt__W_Options_Graphics_UE5_Simple_Slider_FOV_Weapon_K2Node_ComponentBoundEvent_14_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.BndEvt__W_Options_Graphics_UE5_Options_FOVPreset_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::BndEvt__W_Options_Graphics_UE5_Options_FOVPreset_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "BndEvt__W_Options_Graphics_UE5_Options_FOVPreset_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_FOV_C_BndEvt__W_Options_Graphics_UE5_Options_FOVPreset_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.BndEvt__W_Options_Graphics_UE5_Options_FOV_Scaling_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::BndEvt__W_Options_Graphics_UE5_Options_FOV_Scaling_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "BndEvt__W_Options_Graphics_UE5_Options_FOV_Scaling_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_FOV_C_BndEvt__W_Options_Graphics_UE5_Options_FOV_Scaling_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.ExecuteUbergraph_W_Options_Graphics_FOV
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertFovToReferenceVertical_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertFovToHorizontal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_GetFoV_FOV                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        CallFunc_GetWeaponFOVPreset_Preset                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponFOVPreset_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseVerticalFOV_bUsesVertical                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseVerticalFOV_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWeaponFieldOfView_FOV                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWeaponFieldOfView_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        CallFunc_GetWeaponFOVPresetEnum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertFovToReferenceVertical_Fov_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FFloor_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StagedFOV_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StagedWeaponFOV_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::ExecuteUbergraph_W_Options_Graphics_FOV(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EWeaponFOVPreset Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class EWeaponFOVPreset Temp_byte_Variable_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool K2Node_Select_Default_1, float CallFunc_ConvertFovToReferenceVertical_ReturnValue, float CallFunc_ConvertFovToHorizontal_ReturnValue, bool Temp_bool_Variable_6, float K2Node_Select_Default_2, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_GetFoV_FOV, bool CallFunc_GetFoV_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, enum class EWeaponFOVPreset CallFunc_GetWeaponFOVPreset_Preset, bool CallFunc_GetWeaponFOVPreset_ReturnValue, bool CallFunc_GetUseVerticalFOV_bUsesVertical, bool CallFunc_GetUseVerticalFOV_ReturnValue, float CallFunc_GetWeaponFieldOfView_FOV, bool CallFunc_GetWeaponFieldOfView_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue_1, int32 K2Node_ComponentBoundEvent_NewIntegerValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue, double K2Node_ComponentBoundEvent_NewSliderValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, enum class EWeaponFOVPreset CallFunc_GetWeaponFOVPresetEnum_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_ConvertFovToReferenceVertical_Fov_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast, double K2Node_VariableSet_StagedFOV_ImplicitCast, double K2Node_VariableSet_StagedWeaponFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "ExecuteUbergraph_W_Options_Graphics_FOV");

	Params::UW_Options_Graphics_FOV_C_ExecuteUbergraph_W_Options_Graphics_FOV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_ConvertFovToReferenceVertical_ReturnValue = CallFunc_ConvertFovToReferenceVertical_ReturnValue;
	Parms.CallFunc_ConvertFovToHorizontal_ReturnValue = CallFunc_ConvertFovToHorizontal_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetFoV_FOV = CallFunc_GetFoV_FOV;
	Parms.CallFunc_GetFoV_ReturnValue = CallFunc_GetFoV_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_GetWeaponFOVPreset_Preset = CallFunc_GetWeaponFOVPreset_Preset;
	Parms.CallFunc_GetWeaponFOVPreset_ReturnValue = CallFunc_GetWeaponFOVPreset_ReturnValue;
	Parms.CallFunc_GetUseVerticalFOV_bUsesVertical = CallFunc_GetUseVerticalFOV_bUsesVertical;
	Parms.CallFunc_GetUseVerticalFOV_ReturnValue = CallFunc_GetUseVerticalFOV_ReturnValue;
	Parms.CallFunc_GetWeaponFieldOfView_FOV = CallFunc_GetWeaponFieldOfView_FOV;
	Parms.CallFunc_GetWeaponFieldOfView_ReturnValue = CallFunc_GetWeaponFieldOfView_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_1 = K2Node_ComponentBoundEvent_NewIntegerValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue = K2Node_ComponentBoundEvent_NewIntegerValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetWeaponFOVPresetEnum_ReturnValue = CallFunc_GetWeaponFOVPresetEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_ConvertFovToReferenceVertical_Fov_ImplicitCast = CallFunc_ConvertFovToReferenceVertical_Fov_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.CallFunc_FFloor_A_ImplicitCast = CallFunc_FFloor_A_ImplicitCast;
	Parms.K2Node_VariableSet_StagedFOV_ImplicitCast = K2Node_VariableSet_StagedFOV_ImplicitCast;
	Parms.K2Node_VariableSet_StagedWeaponFOV_ImplicitCast = K2Node_VariableSet_StagedWeaponFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_FOV.W_Options_Graphics_FOV_C.SyncVariables__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VerticalFov                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WorldFov                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WeaponFov                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        FovPreset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GraphicsChanged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_FOV_C::SyncVariables__DelegateSignature(bool VerticalFov, double WorldFov, double WeaponFov, enum class EWeaponFOVPreset FovPreset, bool GraphicsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_FOV_C", "SyncVariables__DelegateSignature");

	Params::UW_Options_Graphics_FOV_C_SyncVariables__DelegateSignature_Params Parms{};

	Parms.VerticalFov = VerticalFov;
	Parms.WorldFov = WorldFov;
	Parms.WeaponFov = WeaponFov;
	Parms.FovPreset = FovPreset;
	Parms.GraphicsChanged = GraphicsChanged;

	UObject::ProcessEvent(Func, &Parms);

}

}


