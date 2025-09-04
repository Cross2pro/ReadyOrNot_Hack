#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Graphics_UE5.W_Options_Graphics_UE5_C
// (None)

class UClass* UW_Options_Graphics_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Graphics_UE5_C");

	return Clss;
}


// W_Options_Graphics_UE5_C W_Options_Graphics_UE5.Default__W_Options_Graphics_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Graphics_UE5_C* UW_Options_Graphics_UE5_C::GetDefaultObj()
{
	static class UW_Options_Graphics_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Graphics_UE5_C*>(UW_Options_Graphics_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.CheckForPlatformUIOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlatformIsOverridden                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPcPlatform_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::CheckForPlatformUIOverride(bool* PlatformIsOverridden, bool CallFunc_IsPcPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "CheckForPlatformUIOverride");

	Params::UW_Options_Graphics_UE5_C_CheckForPlatformUIOverride_Params Parms{};

	Parms.CallFunc_IsPcPlatform_ReturnValue = CallFunc_IsPcPlatform_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue = CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlatformIsOverridden != nullptr)
		*PlatformIsOverridden = Parms.PlatformIsOverridden;

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Debug Override Plaform UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::Debug_Override_Plaform_UI(bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Debug Override Plaform UI");

	Params::UW_Options_Graphics_UE5_C_Debug_Override_Plaform_UI_Params Parms{};

	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.AdaptUIScaleValueForPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::AdaptUIScaleValueForPlatform(double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "AdaptUIScaleValueForPlatform");

	Params::UW_Options_Graphics_UE5_C_AdaptUIScaleValueForPlatform_Params Parms{};

	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.UpdateGammaSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Gamma                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGammaSetting_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::UpdateGammaSetting(float Gamma, bool CallFunc_SetGammaSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "UpdateGammaSetting");

	Params::UW_Options_Graphics_UE5_C_UpdateGammaSetting_Params Parms{};

	Parms.Gamma = Gamma;
	Parms.CallFunc_SetGammaSetting_ReturnValue = CallFunc_SetGammaSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Set Graphics Preset Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PresetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::Set_Graphics_Preset_Index(int32 PresetIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSGraphicPreset& CallFunc_Array_Get_Item, const struct FSGraphicPreset& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Set Graphics Preset Index");

	Params::UW_Options_Graphics_UE5_C_Set_Graphics_Preset_Index_Params Parms{};

	Parms.PresetIndex = PresetIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.ConsoleStageGraphicsPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::ConsoleStageGraphicsPreset(const struct FSGraphicPreset& Preset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "ConsoleStageGraphicsPreset");

	Params::UW_Options_Graphics_UE5_C_ConsoleStageGraphicsPreset_Params Parms{};

	Parms.Preset = Preset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Compare Graphics Preset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSGraphicPreset             A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEqual                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::Compare_Graphics_Preset(const struct FSGraphicPreset& A, const struct FSGraphicPreset& B, bool* bIsEqual, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Compare Graphics Preset");

	Params::UW_Options_Graphics_UE5_C_Compare_Graphics_Preset_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEqual != nullptr)
		*bIsEqual = Parms.bIsEqual;

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_Graphics_UE5_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_Graphics_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.InitGraphicsPreset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             CurrentPresetCandidate                                           (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGraphicsPresetIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneX                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneY                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSafeZoneSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPerObjectShadowsEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXEnabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXShadowsEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXGlobalIllumination            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXTranslucency                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Compare_Graphics_Preset_bIsEqual                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_AntiAliasing                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Effects                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_PostProcess                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVideoQualitySettings_ResolutionScaling               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Shadow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Texture                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_ViewDistance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_GlobalIllumination              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVideoQualitySettings_Reflections                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             K2Node_MakeStruct_SGraphicPreset                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::InitGraphicsPreset(const struct FSGraphicPreset& CurrentPresetCandidate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, int32 CallFunc_GetGraphicsPresetIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_LoadSafeZoneSettings_SafeZoneX, float CallFunc_LoadSafeZoneSettings_SafeZoneY, bool CallFunc_LoadSafeZoneSettings_ReturnValue, bool CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled, bool CallFunc_GetPerObjectShadowsEnabled_ReturnValue, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, const struct FSGraphicPreset& CallFunc_Array_Get_Item, const struct FSGraphicPreset& CallFunc_Array_Get_Item_1, bool CallFunc_Compare_Graphics_Preset_bIsEqual, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetVideoQualitySettings_AntiAliasing, int32 CallFunc_GetVideoQualitySettings_Effects, int32 CallFunc_GetVideoQualitySettings_PostProcess, float CallFunc_GetVideoQualitySettings_ResolutionScaling, int32 CallFunc_GetVideoQualitySettings_Shadow, int32 CallFunc_GetVideoQualitySettings_Texture, int32 CallFunc_GetVideoQualitySettings_ViewDistance, int32 CallFunc_GetVideoQualitySettings_GlobalIllumination, int32 CallFunc_GetVideoQualitySettings_Reflections, bool CallFunc_GetVideoQualitySettings_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, uint8 CallFunc_Conv_IntToByte_ReturnValue_6, uint8 CallFunc_Conv_IntToByte_ReturnValue_7, uint8 CallFunc_GetValidValue_ReturnValue_6, uint8 CallFunc_GetValidValue_ReturnValue_7, const struct FSGraphicPreset& K2Node_MakeStruct_SGraphicPreset, double K2Node_MakeStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast, double K2Node_MakeStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast, double K2Node_MakeStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast, double K2Node_MakeStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, double K2Node_MakeStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "InitGraphicsPreset");

	Params::UW_Options_Graphics_UE5_C_InitGraphicsPreset_Params Parms{};

	Parms.CurrentPresetCandidate = CurrentPresetCandidate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetGraphicsPresetIndex_ReturnValue = CallFunc_GetGraphicsPresetIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneX = CallFunc_LoadSafeZoneSettings_SafeZoneX;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneY = CallFunc_LoadSafeZoneSettings_SafeZoneY;
	Parms.CallFunc_LoadSafeZoneSettings_ReturnValue = CallFunc_LoadSafeZoneSettings_ReturnValue;
	Parms.CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled = CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled;
	Parms.CallFunc_GetPerObjectShadowsEnabled_ReturnValue = CallFunc_GetPerObjectShadowsEnabled_ReturnValue;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_GetRaytracingSettings_bRTXEnabled = CallFunc_GetRaytracingSettings_bRTXEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled = CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXShadowsEnabled = CallFunc_GetRaytracingSettings_bRTXShadowsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled = CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXGlobalIllumination = CallFunc_GetRaytracingSettings_bRTXGlobalIllumination;
	Parms.CallFunc_GetRaytracingSettings_bRTXTranslucency = CallFunc_GetRaytracingSettings_bRTXTranslucency;
	Parms.CallFunc_GetRaytracingSettings_ReturnValue = CallFunc_GetRaytracingSettings_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Compare_Graphics_Preset_bIsEqual = CallFunc_Compare_Graphics_Preset_bIsEqual;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVideoQualitySettings_AntiAliasing = CallFunc_GetVideoQualitySettings_AntiAliasing;
	Parms.CallFunc_GetVideoQualitySettings_Effects = CallFunc_GetVideoQualitySettings_Effects;
	Parms.CallFunc_GetVideoQualitySettings_PostProcess = CallFunc_GetVideoQualitySettings_PostProcess;
	Parms.CallFunc_GetVideoQualitySettings_ResolutionScaling = CallFunc_GetVideoQualitySettings_ResolutionScaling;
	Parms.CallFunc_GetVideoQualitySettings_Shadow = CallFunc_GetVideoQualitySettings_Shadow;
	Parms.CallFunc_GetVideoQualitySettings_Texture = CallFunc_GetVideoQualitySettings_Texture;
	Parms.CallFunc_GetVideoQualitySettings_ViewDistance = CallFunc_GetVideoQualitySettings_ViewDistance;
	Parms.CallFunc_GetVideoQualitySettings_GlobalIllumination = CallFunc_GetVideoQualitySettings_GlobalIllumination;
	Parms.CallFunc_GetVideoQualitySettings_Reflections = CallFunc_GetVideoQualitySettings_Reflections;
	Parms.CallFunc_GetVideoQualitySettings_ReturnValue = CallFunc_GetVideoQualitySettings_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_6 = CallFunc_Conv_IntToByte_ReturnValue_6;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_7 = CallFunc_Conv_IntToByte_ReturnValue_7;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.CallFunc_GetValidValue_ReturnValue_7 = CallFunc_GetValidValue_ReturnValue_7;
	Parms.K2Node_MakeStruct_SGraphicPreset = K2Node_MakeStruct_SGraphicPreset;
	Parms.K2Node_MakeStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast = K2Node_MakeStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast;
	Parms.K2Node_MakeStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast = K2Node_MakeStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast;
	Parms.K2Node_MakeStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast = K2Node_MakeStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast;
	Parms.K2Node_MakeStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast = K2Node_MakeStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.K2Node_MakeStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast = K2Node_MakeStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.PopulatePCGraphics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOptiwandViewMode       CallFunc_LoadOptiwandViewMode_OptiwandViewMode                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSFrameGenerationSupported_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUIScaling_Scale                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUIScaling_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPerObjectShadowsEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDlssFrameGenerationSetting_Setting                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDlssFrameGenerationSetting_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInterfaceAspectRatio_OutAspectRatio                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInterfaceAspectRatio_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDLSSFrameGenerationUnsupportedReason_ReturnValue     (None)
// float                              CallFunc_LoadGammaSetting_Gamma                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGammaSetting_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGlobalIlluminationQuality_GlobalIllumination         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGlobalIlluminationQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetReflectionQuality_Reflections                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflectionQuality_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldSetting_bDoFEnabled                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDepthOfFieldSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseMeshpainting_bUseMeshPainting                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseMeshpainting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneX                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSafeZoneSettings_SafeZoneY                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSafeZoneSettings_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXEnabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXShadowsEnabled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXGlobalIllumination            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_bRTXTranslucency                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ViewDistance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEffectsQuality_Effects                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEffectsQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_AntiAliasing                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessQuality_PostProcess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPostProcessQuality_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_Shadow                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_Texture                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaling_ResolutionScaling                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetResolutionScaling_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetReflexEnabled_ReflexMode                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexEnabled_bFlashIndicatorEnabled                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDlssQuality_Quality                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFSRQuality_Quality                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPResolutionScale_ResolutionScale                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_bEnabled                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadPiPFPS_FPS                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadPiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_bEnabled                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_FadeDistance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDecalsEnabled_Density                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldDecalsEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBounceLightEnabled_bBounceLightEnabled               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentScreenResolution_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetCurrentScreenMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_StagedDecalFade_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::PopulatePCGraphics(enum class EOptiwandViewMode CallFunc_LoadOptiwandViewMode_OptiwandViewMode, bool CallFunc_LoadOptiwandViewMode_ReturnValue, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, bool CallFunc_IsDLSSFrameGenerationSupported_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, float CallFunc_GetUIScaling_Scale, bool CallFunc_GetUIScaling_ReturnValue, double CallFunc_SetFloatValue_NewValue, bool CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled, bool CallFunc_GetPerObjectShadowsEnabled_ReturnValue, int32 CallFunc_GetDlssFrameGenerationSetting_Setting, bool CallFunc_GetDlssFrameGenerationSetting_ReturnValue, float CallFunc_GetInterfaceAspectRatio_OutAspectRatio, bool CallFunc_GetInterfaceAspectRatio_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetDLSSFrameGenerationUnsupportedReason_ReturnValue, float CallFunc_LoadGammaSetting_Gamma, bool CallFunc_LoadGammaSetting_ReturnValue, int32 CallFunc_GetGlobalIlluminationQuality_GlobalIllumination, bool CallFunc_GetGlobalIlluminationQuality_ReturnValue, double CallFunc_SetFloatValue_NewValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_GetReflectionQuality_Reflections, bool CallFunc_GetReflectionQuality_ReturnValue, bool CallFunc_GetDepthOfFieldSetting_bDoFEnabled, bool CallFunc_GetDepthOfFieldSetting_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_GetUseMeshpainting_bUseMeshPainting, bool CallFunc_GetUseMeshpainting_ReturnValue, float CallFunc_LoadSafeZoneSettings_SafeZoneX, float CallFunc_LoadSafeZoneSettings_SafeZoneY, bool CallFunc_LoadSafeZoneSettings_ReturnValue, bool CallFunc_GetRaytracingSettings_bRTXEnabled, bool CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled, bool CallFunc_GetRaytracingSettings_bRTXShadowsEnabled, bool CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled, bool CallFunc_GetRaytracingSettings_bRTXGlobalIllumination, bool CallFunc_GetRaytracingSettings_bRTXTranslucency, bool CallFunc_GetRaytracingSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ViewDistance, bool CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetEffectsQuality_Effects, bool CallFunc_GetEffectsQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, int32 CallFunc_GetAntiAliasingQuality_AntiAliasing, bool CallFunc_GetAntiAliasingQuality_ReturnValue, int32 CallFunc_GetPostProcessQuality_PostProcess, bool CallFunc_GetPostProcessQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, int32 CallFunc_GetShadowQuality_Shadow, bool CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_Texture, bool CallFunc_GetTextureQuality_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_6, uint8 CallFunc_Conv_IntToByte_ReturnValue_7, uint8 CallFunc_GetValidValue_ReturnValue_6, uint8 CallFunc_GetValidValue_ReturnValue_7, float CallFunc_GetResolutionScaling_ResolutionScaling, bool CallFunc_GetResolutionScaling_ReturnValue, uint8 CallFunc_GetReflexEnabled_ReflexMode, bool CallFunc_GetReflexEnabled_bFlashIndicatorEnabled, bool CallFunc_GetReflexEnabled_ReturnValue, bool CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled, bool CallFunc_GetReflexLatencyOptions_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_GetDlssQuality_Quality, bool CallFunc_GetDlssQuality_ReturnValue, int32 CallFunc_GetFSRQuality_Quality, bool CallFunc_GetFSRQuality_ReturnValue, float CallFunc_LoadPiPResolutionScale_ResolutionScale, bool CallFunc_LoadPiPResolutionScale_ReturnValue, double CallFunc_SetFloatValue_NewValue_2, bool CallFunc_LoadPiPFPS_bEnabled, float CallFunc_LoadPiPFPS_FPS, bool CallFunc_LoadPiPFPS_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue_1, bool CallFunc_GetWorldDecalsEnabled_bEnabled, float CallFunc_GetWorldDecalsEnabled_FadeDistance, float CallFunc_GetWorldDecalsEnabled_Density, bool CallFunc_GetWorldDecalsEnabled_ReturnValue, double CallFunc_SetFloatValue_NewValue_3, int32 Temp_int_Variable, bool CallFunc_GetBounceLightEnabled_bBounceLightEnabled, bool CallFunc_GetBounceLightEnabled_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, int32 Temp_int_Variable_1, enum class EOptiwandViewMode Temp_byte_Variable, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, int32 K2Node_Select_Default, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SetFloatValue_NewValue_4, int32 CallFunc_SetIntegralValue_NewValue_2, int32 CallFunc_SetIntegralValue_NewValue_3, double CallFunc_SetFloatValue_NewValue_5, double CallFunc_SetFloatValue_NewValue_6, const class FString& CallFunc_GetCurrentScreenResolution_ReturnValue, enum class EWindowMode CallFunc_GetCurrentScreenMode_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1, double K2Node_SetFieldsInStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast, double K2Node_SetFieldsInStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_2, double K2Node_SetFieldsInStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_3, double K2Node_SetFieldsInStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, double K2Node_VariableSet_StagedDecalFade_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "PopulatePCGraphics");

	Params::UW_Options_Graphics_UE5_C_PopulatePCGraphics_Params Parms{};

	Parms.CallFunc_LoadOptiwandViewMode_OptiwandViewMode = CallFunc_LoadOptiwandViewMode_OptiwandViewMode;
	Parms.CallFunc_LoadOptiwandViewMode_ReturnValue = CallFunc_LoadOptiwandViewMode_ReturnValue;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.CallFunc_IsDLSSFrameGenerationSupported_ReturnValue = CallFunc_IsDLSSFrameGenerationSupported_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_GetUIScaling_Scale = CallFunc_GetUIScaling_Scale;
	Parms.CallFunc_GetUIScaling_ReturnValue = CallFunc_GetUIScaling_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled = CallFunc_GetPerObjectShadowsEnabled_bPerObjectShadowsEnabled;
	Parms.CallFunc_GetPerObjectShadowsEnabled_ReturnValue = CallFunc_GetPerObjectShadowsEnabled_ReturnValue;
	Parms.CallFunc_GetDlssFrameGenerationSetting_Setting = CallFunc_GetDlssFrameGenerationSetting_Setting;
	Parms.CallFunc_GetDlssFrameGenerationSetting_ReturnValue = CallFunc_GetDlssFrameGenerationSetting_ReturnValue;
	Parms.CallFunc_GetInterfaceAspectRatio_OutAspectRatio = CallFunc_GetInterfaceAspectRatio_OutAspectRatio;
	Parms.CallFunc_GetInterfaceAspectRatio_ReturnValue = CallFunc_GetInterfaceAspectRatio_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetDLSSFrameGenerationUnsupportedReason_ReturnValue = CallFunc_GetDLSSFrameGenerationUnsupportedReason_ReturnValue;
	Parms.CallFunc_LoadGammaSetting_Gamma = CallFunc_LoadGammaSetting_Gamma;
	Parms.CallFunc_LoadGammaSetting_ReturnValue = CallFunc_LoadGammaSetting_ReturnValue;
	Parms.CallFunc_GetGlobalIlluminationQuality_GlobalIllumination = CallFunc_GetGlobalIlluminationQuality_GlobalIllumination;
	Parms.CallFunc_GetGlobalIlluminationQuality_ReturnValue = CallFunc_GetGlobalIlluminationQuality_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetReflectionQuality_Reflections = CallFunc_GetReflectionQuality_Reflections;
	Parms.CallFunc_GetReflectionQuality_ReturnValue = CallFunc_GetReflectionQuality_ReturnValue;
	Parms.CallFunc_GetDepthOfFieldSetting_bDoFEnabled = CallFunc_GetDepthOfFieldSetting_bDoFEnabled;
	Parms.CallFunc_GetDepthOfFieldSetting_ReturnValue = CallFunc_GetDepthOfFieldSetting_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_GetUseMeshpainting_bUseMeshPainting = CallFunc_GetUseMeshpainting_bUseMeshPainting;
	Parms.CallFunc_GetUseMeshpainting_ReturnValue = CallFunc_GetUseMeshpainting_ReturnValue;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneX = CallFunc_LoadSafeZoneSettings_SafeZoneX;
	Parms.CallFunc_LoadSafeZoneSettings_SafeZoneY = CallFunc_LoadSafeZoneSettings_SafeZoneY;
	Parms.CallFunc_LoadSafeZoneSettings_ReturnValue = CallFunc_LoadSafeZoneSettings_ReturnValue;
	Parms.CallFunc_GetRaytracingSettings_bRTXEnabled = CallFunc_GetRaytracingSettings_bRTXEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled = CallFunc_GetRaytracingSettings_bRTXReflectionsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXShadowsEnabled = CallFunc_GetRaytracingSettings_bRTXShadowsEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled = CallFunc_GetRaytracingSettings_bRTXAmbientOcclusionEnabled;
	Parms.CallFunc_GetRaytracingSettings_bRTXGlobalIllumination = CallFunc_GetRaytracingSettings_bRTXGlobalIllumination;
	Parms.CallFunc_GetRaytracingSettings_bRTXTranslucency = CallFunc_GetRaytracingSettings_bRTXTranslucency;
	Parms.CallFunc_GetRaytracingSettings_ReturnValue = CallFunc_GetRaytracingSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ViewDistance = CallFunc_GetViewDistanceQuality_ViewDistance;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetEffectsQuality_Effects = CallFunc_GetEffectsQuality_Effects;
	Parms.CallFunc_GetEffectsQuality_ReturnValue = CallFunc_GetEffectsQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_GetAntiAliasingQuality_AntiAliasing = CallFunc_GetAntiAliasingQuality_AntiAliasing;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_GetPostProcessQuality_PostProcess = CallFunc_GetPostProcessQuality_PostProcess;
	Parms.CallFunc_GetPostProcessQuality_ReturnValue = CallFunc_GetPostProcessQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.CallFunc_GetShadowQuality_Shadow = CallFunc_GetShadowQuality_Shadow;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_Texture = CallFunc_GetTextureQuality_Texture;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_6 = CallFunc_Conv_IntToByte_ReturnValue_6;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_7 = CallFunc_Conv_IntToByte_ReturnValue_7;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.CallFunc_GetValidValue_ReturnValue_7 = CallFunc_GetValidValue_ReturnValue_7;
	Parms.CallFunc_GetResolutionScaling_ResolutionScaling = CallFunc_GetResolutionScaling_ResolutionScaling;
	Parms.CallFunc_GetResolutionScaling_ReturnValue = CallFunc_GetResolutionScaling_ReturnValue;
	Parms.CallFunc_GetReflexEnabled_ReflexMode = CallFunc_GetReflexEnabled_ReflexMode;
	Parms.CallFunc_GetReflexEnabled_bFlashIndicatorEnabled = CallFunc_GetReflexEnabled_bFlashIndicatorEnabled;
	Parms.CallFunc_GetReflexEnabled_ReturnValue = CallFunc_GetReflexEnabled_ReturnValue;
	Parms.CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameToRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled = CallFunc_GetReflexLatencyOptions_bGameLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled = CallFunc_GetReflexLatencyOptions_bRenderLatencyEnabled;
	Parms.CallFunc_GetReflexLatencyOptions_ReturnValue = CallFunc_GetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetDlssQuality_Quality = CallFunc_GetDlssQuality_Quality;
	Parms.CallFunc_GetDlssQuality_ReturnValue = CallFunc_GetDlssQuality_ReturnValue;
	Parms.CallFunc_GetFSRQuality_Quality = CallFunc_GetFSRQuality_Quality;
	Parms.CallFunc_GetFSRQuality_ReturnValue = CallFunc_GetFSRQuality_ReturnValue;
	Parms.CallFunc_LoadPiPResolutionScale_ResolutionScale = CallFunc_LoadPiPResolutionScale_ResolutionScale;
	Parms.CallFunc_LoadPiPResolutionScale_ReturnValue = CallFunc_LoadPiPResolutionScale_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_LoadPiPFPS_bEnabled = CallFunc_LoadPiPFPS_bEnabled;
	Parms.CallFunc_LoadPiPFPS_FPS = CallFunc_LoadPiPFPS_FPS;
	Parms.CallFunc_LoadPiPFPS_ReturnValue = CallFunc_LoadPiPFPS_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.CallFunc_GetWorldDecalsEnabled_bEnabled = CallFunc_GetWorldDecalsEnabled_bEnabled;
	Parms.CallFunc_GetWorldDecalsEnabled_FadeDistance = CallFunc_GetWorldDecalsEnabled_FadeDistance;
	Parms.CallFunc_GetWorldDecalsEnabled_Density = CallFunc_GetWorldDecalsEnabled_Density;
	Parms.CallFunc_GetWorldDecalsEnabled_ReturnValue = CallFunc_GetWorldDecalsEnabled_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetBounceLightEnabled_bBounceLightEnabled = CallFunc_GetBounceLightEnabled_bBounceLightEnabled;
	Parms.CallFunc_GetBounceLightEnabled_ReturnValue = CallFunc_GetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_SetIntegralValue_NewValue_2 = CallFunc_SetIntegralValue_NewValue_2;
	Parms.CallFunc_SetIntegralValue_NewValue_3 = CallFunc_SetIntegralValue_NewValue_3;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;
	Parms.CallFunc_SetFloatValue_NewValue_6 = CallFunc_SetFloatValue_NewValue_6;
	Parms.CallFunc_GetCurrentScreenResolution_ReturnValue = CallFunc_GetCurrentScreenResolution_ReturnValue;
	Parms.CallFunc_GetCurrentScreenMode_ReturnValue = CallFunc_GetCurrentScreenMode_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast = K2Node_SetFieldsInStruct_SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast = K2Node_SetFieldsInStruct_SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_2 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_2;
	Parms.K2Node_SetFieldsInStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast = K2Node_SetFieldsInStruct_ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_3 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_3;
	Parms.K2Node_SetFieldsInStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast = K2Node_SetFieldsInStruct_OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.K2Node_VariableSet_StagedDecalFade_ImplicitCast = K2Node_VariableSet_StagedDecalFade_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast = K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.PopulateGamepadGraphics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_LoadGammaSetting_Gamma                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGammaSetting_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUIScaling_Scale                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUIScaling_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBounceLightEnabled_bBounceLightEnabled               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::PopulateGamepadGraphics(float CallFunc_LoadGammaSetting_Gamma, bool CallFunc_LoadGammaSetting_ReturnValue, double CallFunc_SetFloatValue_NewValue, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, double CallFunc_SetFloatValue_NewValue_1, float CallFunc_GetUIScaling_Scale, bool CallFunc_GetUIScaling_ReturnValue, bool CallFunc_GetBounceLightEnabled_bBounceLightEnabled, bool CallFunc_GetBounceLightEnabled_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SetFloatValue_NewValue_2, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "PopulateGamepadGraphics");

	Params::UW_Options_Graphics_UE5_C_PopulateGamepadGraphics_Params Parms{};

	Parms.CallFunc_LoadGammaSetting_Gamma = CallFunc_LoadGammaSetting_Gamma;
	Parms.CallFunc_LoadGammaSetting_ReturnValue = CallFunc_LoadGammaSetting_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_GetUIScaling_Scale = CallFunc_GetUIScaling_Scale;
	Parms.CallFunc_GetUIScaling_ReturnValue = CallFunc_GetUIScaling_ReturnValue;
	Parms.CallFunc_GetBounceLightEnabled_bBounceLightEnabled = CallFunc_GetBounceLightEnabled_bBounceLightEnabled;
	Parms.CallFunc_GetBounceLightEnabled_ReturnValue = CallFunc_GetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Apply Graphics Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::Apply_Graphics_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Apply Graphics Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.StageGraphicsPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSGraphicPreset             Preset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMotionBlurStrength_Strength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_bEnabled                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFrameRateLimit_FrameRateLimit                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_bEnabled                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetIntegralValue_NewValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::StageGraphicsPreset(const struct FSGraphicPreset& Preset, float CallFunc_GetMotionBlurStrength_Strength, bool CallFunc_GetMotionBlurStrength_ReturnValue, bool CallFunc_GetMotionBlurEnabled_bEnabled, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_GetFrameRateLimit_FrameRateLimit, bool CallFunc_GetFrameRateLimit_bEnabled, bool CallFunc_GetFrameRateLimit_ReturnValue, bool CallFunc_GetVSyncEnabled_bEnabled, bool CallFunc_GetVSyncEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, double CallFunc_SetFloatValue_NewValue, int32 CallFunc_SetIntegralValue_NewValue, double CallFunc_SetFloatValue_NewValue_1, double CallFunc_SetFloatValue_NewValue_2, int32 CallFunc_SetIntegralValue_NewValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, int32 CallFunc_Conv_ByteToInt_ReturnValue_6, int32 CallFunc_Conv_ByteToInt_ReturnValue_7, double K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "StageGraphicsPreset");

	Params::UW_Options_Graphics_UE5_C_StageGraphicsPreset_Params Parms{};

	Parms.Preset = Preset;
	Parms.CallFunc_GetMotionBlurStrength_Strength = CallFunc_GetMotionBlurStrength_Strength;
	Parms.CallFunc_GetMotionBlurStrength_ReturnValue = CallFunc_GetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_GetMotionBlurEnabled_bEnabled = CallFunc_GetMotionBlurEnabled_bEnabled;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_GetFrameRateLimit_FrameRateLimit = CallFunc_GetFrameRateLimit_FrameRateLimit;
	Parms.CallFunc_GetFrameRateLimit_bEnabled = CallFunc_GetFrameRateLimit_bEnabled;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetVSyncEnabled_bEnabled = CallFunc_GetVSyncEnabled_bEnabled;
	Parms.CallFunc_GetVSyncEnabled_ReturnValue = CallFunc_GetVSyncEnabled_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetIntegralValue_NewValue = CallFunc_SetIntegralValue_NewValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_SetIntegralValue_NewValue_1 = CallFunc_SetIntegralValue_NewValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_6 = CallFunc_Conv_ByteToInt_ReturnValue_6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_7 = CallFunc_Conv_ByteToInt_ReturnValue_7;
	Parms.K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast = K2Node_SetFieldsInStruct_MotionBlurStrength_72_5AC51FAE420F7A4DDED32197B050A1A2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_Tab_SimpleGraphicsOptions_K2Node_ComponentBoundEvent_35_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_Tab_AdvancedGraphicsOptions_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NewResolutionValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature(const class FString& NewResolutionValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__SimpleGraphics_Slider_Resolution_K2Node_ComponentBoundEvent_19_OnResolutionValueChanged__DelegateSignature_Params Parms{};

	Parms.NewResolutionValue = NewResolutionValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_TextureQuality_K2Node_ComponentBoundEvent_22_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_ShadowQuality_K2Node_ComponentBoundEvent_23_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_PPQuality_K2Node_ComponentBoundEvent_24_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_AAQuality_K2Node_ComponentBoundEvent_25_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_EffectsQuality_K2Node_ComponentBoundEvent_26_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_ViewDistance_K2Node_ComponentBoundEvent_27_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_OptiwandFPS_K2Node_ComponentBoundEvent_28_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_OptiwandScale_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__SimpleGraphics_Slider_ResolutionScale_K2Node_ComponentBoundEvent_57_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_FrameLimiter_K2Node_ComponentBoundEvent_60_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_MotionBlurScale_K2Node_ComponentBoundEvent_119_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_DepthOfFieldChoice_K2Node_ComponentBoundEvent_55_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_MeshPaitingChoice_K2Node_ComponentBoundEvent_56_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_AdvGraphics_Check_FlashlightShadows_K2Node_ComponentBoundEvent_42_OnCheckStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalFadeScreenSize_K2Node_ComponentBoundEvent_112_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_DecalDensity_K2Node_ComponentBoundEvent_111_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__AdvGraphics_Slider_DLSSQuality_K2Node_ComponentBoundEvent_84_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenu_AdvGraphics_Slider_FSRQuality_K2Node_ComponentBoundEvent_44_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__SimpleGraphics_Slider_SafeZone_X_K2Node_ComponentBoundEvent_82_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__SimpleGraphics_Slider_SafeZone_Y_K2Node_ComponentBoundEvent_83_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_FrameLimit_K2Node_ComponentBoundEvent_103_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_MotionBlurEnable_K2Node_ComponentBoundEvent_104_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_VSync_K2Node_ComponentBoundEvent_109_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_BounceLight_K2Node_ComponentBoundEvent_126_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_DecalsEnabled_K2Node_ComponentBoundEvent_127_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_OptiwandFPSEnabled_K2Node_ComponentBoundEvent_128_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_Raytracing_K2Node_ComponentBoundEvent_129_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingShadows_K2Node_ComponentBoundEvent_130_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingReflections_K2Node_ComponentBoundEvent_131_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingAmbientOcclusion_K2Node_ComponentBoundEvent_132_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingGlobalIllumination_K2Node_ComponentBoundEvent_133_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_RaytracingTranslucency_K2Node_ComponentBoundEvent_134_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameToRenderLatency_K2Node_ComponentBoundEvent_135_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_GameLatency_K2Node_ComponentBoundEvent_137_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Reflex_OnOff_RenderLatency_K2Node_ComponentBoundEvent_138_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_Carousel_MirrorReflectionMode_K2Node_ComponentBoundEvent_50_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_Slider_FrameGeneration_K2Node_ComponentBoundEvent_0_OnDlssValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_Slider_FrameGeneration_K2Node_ComponentBoundEvent_0_OnDlssValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_Slider_FrameGeneration_K2Node_ComponentBoundEvent_0_OnDlssValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_Slider_FrameGeneration_K2Node_ComponentBoundEvent_0_OnDlssValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_PerObjectShadows_K2Node_ComponentBoundEvent_38_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_PerObjectShadows_K2Node_ComponentBoundEvent_38_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_PerObjectShadows_K2Node_ComponentBoundEvent_38_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_AdvGraphics_OnOff_PerObjectShadows_K2Node_ComponentBoundEvent_38_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_78_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_78_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_78_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_Preset_K2Node_ComponentBoundEvent_78_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_97_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_97_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_97_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_ScreenMode_K2Node_ComponentBoundEvent_97_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_41_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_41_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_41_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_ReflexLowLatencyCarousel_K2Node_ComponentBoundEvent_41_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_BounceLight_K2Node_ComponentBoundEvent_28_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.HandleApplyButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::HandleApplyButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "HandleApplyButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Apply Gamepad Graphics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::Apply_Gamepad_Graphics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Apply Gamepad Graphics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_76_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Slider_UIScale_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Slider_UIScale_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Slider_UIScale_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Slider_UIScale_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_Options_Gamepad_UIScale_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_Options_Gamepad_UIScale_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_Options_Gamepad_UIScale_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_Options_Gamepad_UIScale_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewIntegerValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__Options_Slider_TeamView_PIP_FPS_K2Node_ComponentBoundEvent_86_OnIntegralValueChanged__DelegateSignature_Params Parms{};

	Parms.NewIntegerValue = NewIntegerValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_Options_OnOff_TeamViewFPS_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_Options_OnOff_TeamViewFPS_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_Options_OnOff_TeamViewFPS_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_Options_OnOff_TeamViewFPS_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_22_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_22_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_22_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_OptiwandViewMode_K2Node_ComponentBoundEvent_22_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_CommonActionWidget_47_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_CommonActionWidget_47_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_CommonActionWidget_47_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_CommonActionWidget_47_K2Node_ComponentBoundEvent_5_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.FocusHack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::FocusHack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "FocusHack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.SetDesiredFocusForTabs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::SetDesiredFocusForTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "SetDesiredFocusForTabs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.StartFocusHack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::StartFocusHack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "StartFocusHack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_InterfaceAspectRatio_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_GlobalIllumination_K2Node_ComponentBoundEvent_7_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_GlobalIllumination_K2Node_ComponentBoundEvent_7_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_GlobalIllumination_K2Node_ComponentBoundEvent_7_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_GlobalIllumination_K2Node_ComponentBoundEvent_7_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_ReflectionQuality_K2Node_ComponentBoundEvent_8_OnQualityValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewQualityValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_ReflectionQuality_K2Node_ComponentBoundEvent_8_OnQualityValueChanged__DelegateSignature(int32 NewQualityValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_ReflectionQuality_K2Node_ComponentBoundEvent_8_OnQualityValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_AdvGraphics_Slider_ReflectionQuality_K2Node_ComponentBoundEvent_8_OnQualityValueChanged__DelegateSignature_Params Parms{};

	Parms.NewQualityValue = NewQualityValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_Options_Gamepad_MotionBlurScale_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_Options_Gamepad_MotionBlurScale_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_Options_Gamepad_MotionBlurScale_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_Options_Gamepad_MotionBlurScale_K2Node_ComponentBoundEvent_9_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.ResetDefaultGraphics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::ResetDefaultGraphics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "ResetDefaultGraphics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Apply PC Graphics Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::Apply_PC_Graphics_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Apply PC Graphics Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_Preset_1_K2Node_ComponentBoundEvent_10_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_Preset_1_K2Node_ComponentBoundEvent_10_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_Preset_1_K2Node_ComponentBoundEvent_10_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Carousel_Preset_1_K2Node_ComponentBoundEvent_10_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_K2Node_ComponentBoundEvent_11_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_1_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_1_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_1_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_SimpleGraphics_Brightness_Slider_1_K2Node_ComponentBoundEvent_12_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_PC_K2Node_ComponentBoundEvent_14_SyncVariables__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               VerticalFov                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WorldFov                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WeaponFov                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        FovPreset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GraphicsChanged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_PC_K2Node_ComponentBoundEvent_14_SyncVariables__DelegateSignature(bool VerticalFov, double WorldFov, double WeaponFov, enum class EWeaponFOVPreset FovPreset, bool GraphicsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_PC_K2Node_ComponentBoundEvent_14_SyncVariables__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_PC_K2Node_ComponentBoundEvent_14_SyncVariables__DelegateSignature_Params Parms{};

	Parms.VerticalFov = VerticalFov;
	Parms.WorldFov = WorldFov;
	Parms.WeaponFov = WeaponFov;
	Parms.FovPreset = FovPreset;
	Parms.GraphicsChanged = GraphicsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_GamePad_K2Node_ComponentBoundEvent_16_SyncVariables__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               VerticalFov                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WorldFov                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             WeaponFov                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        FovPreset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GraphicsChanged                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_GamePad_K2Node_ComponentBoundEvent_16_SyncVariables__DelegateSignature(bool VerticalFov, double WorldFov, double WeaponFov, enum class EWeaponFOVPreset FovPreset, bool GraphicsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_GamePad_K2Node_ComponentBoundEvent_16_SyncVariables__DelegateSignature");

	Params::UW_Options_Graphics_UE5_C_BndEvt__W_Options_Graphics_UE5_W_Options_Graphics_FOV_GamePad_K2Node_ComponentBoundEvent_16_SyncVariables__DelegateSignature_Params Parms{};

	Parms.VerticalFov = VerticalFov;
	Parms.WorldFov = WorldFov;
	Parms.WeaponFov = WeaponFov;
	Parms.FovPreset = FovPreset;
	Parms.GraphicsChanged = GraphicsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.ExecuteUbergraph_W_Options_Graphics_UE5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPerObjectShadowsEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInterfaceAspectRatio_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssFrameGenerationSetting_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPerObjectShadowsEnabled_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFSRQuality_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssQuality_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NewResolutionValue                    (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_26                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_25                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_24                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_23                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_22                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_21                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_20                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_19                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_18                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_21                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_20                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_19                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetRaytracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVSyncEnabled_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePiPResolutionScale_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVideoQualitySettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFoV_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFSRQuality_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDlssQuality_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_18                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetWorldDecalEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChangeScreenResolution_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetBounceLightEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_bEnabled                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadTeamViewFPSSetting_TeamViewFPS                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadTeamViewFPSSetting_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewIntegerValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveTeamViewSetting_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOptiwandViewMode       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveOptiwandViewMode_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    K2Node_DynamicCast_AsCommon_Activatable_Widget                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewQualityValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// uint8                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetReflexEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGamePlatform           CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetReflexLatencyOptions_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetUIScaling_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetUIScaling_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForPlatformUIOverride_PlatformIsOverridden         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SavePiPFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMotionBlurStrength_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGraphicsPresetIndex_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSGraphicPreset             CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetUseVerticalFOV_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetWeaponFOVPreset_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_VerticalFov_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_WorldFov_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_WeaponFov_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        K2Node_ComponentBoundEvent_FovPreset_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_GraphicsChanged_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_VerticalFov                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_WorldFov                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_WeaponFov                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponFOVPreset        K2Node_ComponentBoundEvent_FovPreset                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_GraphicsChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetInterfaceAspectRatio_InAspectRatio_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SavePiPResolutionScale_ResolutionScale_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVideoQualitySettings_ResolutionScaling_ImplicitCast  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SavePiPFPS_FPS_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFoV_FOV_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWorldDecalEnabled_FadeDistance_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWorldDecalEnabled_Density_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateGammaSetting_Gamma_ImplicitCast                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateGammaSetting_Gamma_ImplicitCast_1                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetUIScaling_Scale_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetUIScaling_Scale_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMotionBlurStrength_Strength_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWeaponFieldOfView_InFieldOfView_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Graphics_UE5_C::ExecuteUbergraph_W_Options_Graphics_UE5(int32 EntryPoint, bool CallFunc_SetPerObjectShadowsEnabled_ReturnValue, bool CallFunc_SetInterfaceAspectRatio_ReturnValue, bool CallFunc_SetDlssFrameGenerationSetting_ReturnValue, bool CallFunc_SetPerObjectShadowsEnabled_ReturnValue_1, bool CallFunc_SetFSRQuality_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_SetDlssQuality_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_NewResolutionValue, double K2Node_ComponentBoundEvent_NewSliderValue_26, int32 K2Node_ComponentBoundEvent_NewQualityValue_7, double K2Node_ComponentBoundEvent_NewSliderValue_25, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 K2Node_ComponentBoundEvent_NewQualityValue_6, double K2Node_ComponentBoundEvent_NewSliderValue_24, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewQualityValue_5, double K2Node_ComponentBoundEvent_NewSliderValue_23, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 K2Node_ComponentBoundEvent_NewQualityValue_4, double K2Node_ComponentBoundEvent_NewSliderValue_22, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_3, int32 K2Node_ComponentBoundEvent_NewQualityValue_3, double K2Node_ComponentBoundEvent_NewSliderValue_21, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, int32 K2Node_ComponentBoundEvent_NewQualityValue_2, double K2Node_ComponentBoundEvent_NewSliderValue_20, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_5, int32 K2Node_ComponentBoundEvent_NewIntegerValue_5, double K2Node_ComponentBoundEvent_NewSliderValue_19, double K2Node_ComponentBoundEvent_NewFloatValue_11, double K2Node_ComponentBoundEvent_NewSliderValue_18, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, int32 Temp_int_Variable, double K2Node_ComponentBoundEvent_NewFloatValue_10, double K2Node_ComponentBoundEvent_NewSliderValue_17, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue_4, double K2Node_ComponentBoundEvent_NewSliderValue_16, double K2Node_ComponentBoundEvent_NewFloatValue_9, double K2Node_ComponentBoundEvent_NewSliderValue_15, bool K2Node_ComponentBoundEvent_bNewCheckState_21, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_20, bool K2Node_ComponentBoundEvent_bNewCheckState_19, double K2Node_ComponentBoundEvent_NewFloatValue_8, double K2Node_ComponentBoundEvent_NewSliderValue_14, double K2Node_ComponentBoundEvent_NewFloatValue_7, double K2Node_ComponentBoundEvent_NewSliderValue_13, int32 K2Node_ComponentBoundEvent_NewIntegerValue_3, double K2Node_ComponentBoundEvent_NewSliderValue_12, bool CallFunc_SetRaytracingSettings_ReturnValue, bool CallFunc_SetFrameRateLimit_ReturnValue, bool CallFunc_SetVSyncEnabled_ReturnValue, bool CallFunc_SavePiPResolutionScale_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, int32 CallFunc_Conv_ByteToInt_ReturnValue_6, int32 CallFunc_Conv_ByteToInt_ReturnValue_7, int32 K2Node_ComponentBoundEvent_NewIntegerValue_2, double K2Node_ComponentBoundEvent_NewSliderValue_11, bool CallFunc_SetVideoQualitySettings_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_6, double K2Node_ComponentBoundEvent_NewSliderValue_10, double K2Node_ComponentBoundEvent_NewFloatValue_5, double K2Node_ComponentBoundEvent_NewSliderValue_9, bool CallFunc_SetFoV_ReturnValue, enum class EOptiwandViewMode Temp_byte_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_6, uint8 CallFunc_GetValidValue_ReturnValue_6, enum class EOptiwandViewMode Temp_byte_Variable_4, int32 Temp_int_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, bool CallFunc_SetFSRQuality_ReturnValue_1, bool CallFunc_SetDlssQuality_ReturnValue_1, bool K2Node_ComponentBoundEvent_bNewCheckState_18, bool K2Node_ComponentBoundEvent_bNewCheckState_17, bool K2Node_ComponentBoundEvent_bNewCheckState_16, bool K2Node_ComponentBoundEvent_bNewCheckState_15, bool K2Node_ComponentBoundEvent_bNewCheckState_14, bool K2Node_ComponentBoundEvent_bNewCheckState_13, bool K2Node_ComponentBoundEvent_bNewCheckState_12, bool K2Node_ComponentBoundEvent_bNewCheckState_11, bool K2Node_ComponentBoundEvent_bNewCheckState_10, bool K2Node_ComponentBoundEvent_bNewCheckState_9, bool K2Node_ComponentBoundEvent_bNewCheckState_8, bool K2Node_ComponentBoundEvent_bNewCheckState_7, bool K2Node_ComponentBoundEvent_bNewCheckState_6, bool K2Node_ComponentBoundEvent_bNewCheckState_5, bool K2Node_ComponentBoundEvent_bNewCheckState_4, int32 K2Node_ComponentBoundEvent_Index_7, bool CallFunc_SetWorldDecalEnabled_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_8, bool K2Node_ComponentBoundEvent_bNewCheckState_3, int32 K2Node_ComponentBoundEvent_Index_6, const class FString& K2Node_ComponentBoundEvent_Value_5, int32 K2Node_ComponentBoundEvent_Index_5, const class FString& K2Node_ComponentBoundEvent_Value_4, int32 K2Node_ComponentBoundEvent_Index_4, const class FString& K2Node_ComponentBoundEvent_Value_3, bool CallFunc_IsActivated_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool K2Node_ComponentBoundEvent_bNewCheckState_1, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_ChangeScreenResolution_ReturnValue, bool CallFunc_SetBounceLightEnabled_ReturnValue, bool CallFunc_SetScreenResolution_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_3, double K2Node_ComponentBoundEvent_NewFloatValue_4, double K2Node_ComponentBoundEvent_NewSliderValue_7, double Temp_real_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_Round_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_ComponentBoundEvent_NewFloatValue_3, double K2Node_ComponentBoundEvent_NewSliderValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, int32 CallFunc_Round_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, bool CallFunc_LoadTeamViewFPSSetting_bEnabled, int32 CallFunc_LoadTeamViewFPSSetting_TeamViewFPS, bool CallFunc_LoadTeamViewFPSSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue, double K2Node_ComponentBoundEvent_NewSliderValue_5, double Temp_real_Variable_3, bool CallFunc_SaveTeamViewSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState, int32 K2Node_ComponentBoundEvent_Index_2, const class FString& K2Node_ComponentBoundEvent_Value_2, bool CallFunc_SaveTeamViewSetting_ReturnValue_1, enum class EOptiwandViewMode K2Node_Select_Default, bool CallFunc_SaveOptiwandViewMode_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UCommonActivatableWidget* K2Node_DynamicCast_AsCommon_Activatable_Widget, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, double Temp_real_Variable_4, double Temp_real_Variable_5, int32 Temp_int_Variable_2, int32 K2Node_ComponentBoundEvent_NewQualityValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_4, double K2Node_Select_Default_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_7, uint8 CallFunc_GetValidValue_ReturnValue_7, int32 K2Node_ComponentBoundEvent_NewQualityValue, double K2Node_ComponentBoundEvent_NewSliderValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_8, uint8 CallFunc_GetValidValue_ReturnValue_8, double K2Node_ComponentBoundEvent_NewFloatValue_2, double K2Node_ComponentBoundEvent_NewSliderValue_2, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, uint8 K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetReflexEnabled_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SetReflexLatencyOptions_ReturnValue, bool CallFunc_SetUIScaling_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_SetUIScaling_ReturnValue_1, bool CallFunc_CheckForPlatformUIOverride_PlatformIsOverridden, bool CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue, bool CallFunc_SavePiPFPS_ReturnValue, bool CallFunc_SetMotionBlurEnabled_ReturnValue, bool CallFunc_SetMotionBlurStrength_ReturnValue, bool CallFunc_SetGraphicsPresetIndex_ReturnValue, const struct FSGraphicPreset& CallFunc_Array_Get_Item, bool CallFunc_SetUseVerticalFOV_ReturnValue, bool CallFunc_SetWeaponFOVPreset_ReturnValue, bool K2Node_ComponentBoundEvent_VerticalFov_1, double K2Node_ComponentBoundEvent_WorldFov_1, double K2Node_ComponentBoundEvent_WeaponFov_1, enum class EWeaponFOVPreset K2Node_ComponentBoundEvent_FovPreset_1, bool K2Node_ComponentBoundEvent_GraphicsChanged_1, bool K2Node_ComponentBoundEvent_VerticalFov, double K2Node_ComponentBoundEvent_WorldFov, double K2Node_ComponentBoundEvent_WeaponFov, enum class EWeaponFOVPreset K2Node_ComponentBoundEvent_FovPreset, bool K2Node_ComponentBoundEvent_GraphicsChanged, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_SetInterfaceAspectRatio_InAspectRatio_ImplicitCast, float CallFunc_SavePiPResolutionScale_ResolutionScale_ImplicitCast, float CallFunc_SetVideoQualitySettings_ResolutionScaling_ImplicitCast, float CallFunc_SavePiPFPS_FPS_ImplicitCast, float CallFunc_SetFoV_FOV_ImplicitCast, float CallFunc_SetWorldDecalEnabled_FadeDistance_ImplicitCast, float CallFunc_SetWorldDecalEnabled_Density_ImplicitCast, float CallFunc_UpdateGammaSetting_Gamma_ImplicitCast, float CallFunc_UpdateGammaSetting_Gamma_ImplicitCast_1, float CallFunc_SetUIScaling_Scale_ImplicitCast, float CallFunc_SetUIScaling_Scale_ImplicitCast_1, float CallFunc_SetMotionBlurStrength_Strength_ImplicitCast, float CallFunc_SetWeaponFieldOfView_InFieldOfView_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "ExecuteUbergraph_W_Options_Graphics_UE5");

	Params::UW_Options_Graphics_UE5_C_ExecuteUbergraph_W_Options_Graphics_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SetPerObjectShadowsEnabled_ReturnValue = CallFunc_SetPerObjectShadowsEnabled_ReturnValue;
	Parms.CallFunc_SetInterfaceAspectRatio_ReturnValue = CallFunc_SetInterfaceAspectRatio_ReturnValue;
	Parms.CallFunc_SetDlssFrameGenerationSetting_ReturnValue = CallFunc_SetDlssFrameGenerationSetting_ReturnValue;
	Parms.CallFunc_SetPerObjectShadowsEnabled_ReturnValue_1 = CallFunc_SetPerObjectShadowsEnabled_ReturnValue_1;
	Parms.CallFunc_SetFSRQuality_ReturnValue = CallFunc_SetFSRQuality_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_SetDlssQuality_ReturnValue = CallFunc_SetDlssQuality_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_NewResolutionValue = K2Node_ComponentBoundEvent_NewResolutionValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_26 = K2Node_ComponentBoundEvent_NewSliderValue_26;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_7 = K2Node_ComponentBoundEvent_NewQualityValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_25 = K2Node_ComponentBoundEvent_NewSliderValue_25;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_6 = K2Node_ComponentBoundEvent_NewQualityValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_24 = K2Node_ComponentBoundEvent_NewSliderValue_24;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_5 = K2Node_ComponentBoundEvent_NewQualityValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_23 = K2Node_ComponentBoundEvent_NewSliderValue_23;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_4 = K2Node_ComponentBoundEvent_NewQualityValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_22 = K2Node_ComponentBoundEvent_NewSliderValue_22;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_3 = K2Node_ComponentBoundEvent_NewQualityValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_21 = K2Node_ComponentBoundEvent_NewSliderValue_21;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_2 = K2Node_ComponentBoundEvent_NewQualityValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_20 = K2Node_ComponentBoundEvent_NewSliderValue_20;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_5 = K2Node_ComponentBoundEvent_NewIntegerValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_19 = K2Node_ComponentBoundEvent_NewSliderValue_19;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_11 = K2Node_ComponentBoundEvent_NewFloatValue_11;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_18 = K2Node_ComponentBoundEvent_NewSliderValue_18;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_10 = K2Node_ComponentBoundEvent_NewFloatValue_10;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_17 = K2Node_ComponentBoundEvent_NewSliderValue_17;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_4 = K2Node_ComponentBoundEvent_NewIntegerValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_16 = K2Node_ComponentBoundEvent_NewSliderValue_16;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_9 = K2Node_ComponentBoundEvent_NewFloatValue_9;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_15 = K2Node_ComponentBoundEvent_NewSliderValue_15;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_21 = K2Node_ComponentBoundEvent_bNewCheckState_21;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_20 = K2Node_ComponentBoundEvent_bNewCheckState_20;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_19 = K2Node_ComponentBoundEvent_bNewCheckState_19;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_8 = K2Node_ComponentBoundEvent_NewFloatValue_8;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_14 = K2Node_ComponentBoundEvent_NewSliderValue_14;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_7 = K2Node_ComponentBoundEvent_NewFloatValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_13 = K2Node_ComponentBoundEvent_NewSliderValue_13;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_3 = K2Node_ComponentBoundEvent_NewIntegerValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_12 = K2Node_ComponentBoundEvent_NewSliderValue_12;
	Parms.CallFunc_SetRaytracingSettings_ReturnValue = CallFunc_SetRaytracingSettings_ReturnValue;
	Parms.CallFunc_SetFrameRateLimit_ReturnValue = CallFunc_SetFrameRateLimit_ReturnValue;
	Parms.CallFunc_SetVSyncEnabled_ReturnValue = CallFunc_SetVSyncEnabled_ReturnValue;
	Parms.CallFunc_SavePiPResolutionScale_ReturnValue = CallFunc_SavePiPResolutionScale_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_6 = CallFunc_Conv_ByteToInt_ReturnValue_6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_7 = CallFunc_Conv_ByteToInt_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_2 = K2Node_ComponentBoundEvent_NewIntegerValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_11 = K2Node_ComponentBoundEvent_NewSliderValue_11;
	Parms.CallFunc_SetVideoQualitySettings_ReturnValue = CallFunc_SetVideoQualitySettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_6 = K2Node_ComponentBoundEvent_NewFloatValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_10 = K2Node_ComponentBoundEvent_NewSliderValue_10;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_5 = K2Node_ComponentBoundEvent_NewFloatValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_9 = K2Node_ComponentBoundEvent_NewSliderValue_9;
	Parms.CallFunc_SetFoV_ReturnValue = CallFunc_SetFoV_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_6 = CallFunc_Conv_IntToByte_ReturnValue_6;
	Parms.CallFunc_GetValidValue_ReturnValue_6 = CallFunc_GetValidValue_ReturnValue_6;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_SetFSRQuality_ReturnValue_1 = CallFunc_SetFSRQuality_ReturnValue_1;
	Parms.CallFunc_SetDlssQuality_ReturnValue_1 = CallFunc_SetDlssQuality_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_18 = K2Node_ComponentBoundEvent_bNewCheckState_18;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_17 = K2Node_ComponentBoundEvent_bNewCheckState_17;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_16 = K2Node_ComponentBoundEvent_bNewCheckState_16;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_15 = K2Node_ComponentBoundEvent_bNewCheckState_15;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_14 = K2Node_ComponentBoundEvent_bNewCheckState_14;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_13 = K2Node_ComponentBoundEvent_bNewCheckState_13;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_12 = K2Node_ComponentBoundEvent_bNewCheckState_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_11 = K2Node_ComponentBoundEvent_bNewCheckState_11;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_10 = K2Node_ComponentBoundEvent_bNewCheckState_10;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_9 = K2Node_ComponentBoundEvent_bNewCheckState_9;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_8 = K2Node_ComponentBoundEvent_bNewCheckState_8;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_7 = K2Node_ComponentBoundEvent_bNewCheckState_7;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_6 = K2Node_ComponentBoundEvent_bNewCheckState_6;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_5 = K2Node_ComponentBoundEvent_bNewCheckState_5;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.CallFunc_SetWorldDecalEnabled_ReturnValue = CallFunc_SetWorldDecalEnabled_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue_1 = K2Node_ComponentBoundEvent_NewIntegerValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_8 = K2Node_ComponentBoundEvent_NewSliderValue_8;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_ChangeScreenResolution_ReturnValue = CallFunc_ChangeScreenResolution_ReturnValue;
	Parms.CallFunc_SetBounceLightEnabled_ReturnValue = CallFunc_SetBounceLightEnabled_ReturnValue;
	Parms.CallFunc_SetScreenResolution_ReturnValue = CallFunc_SetScreenResolution_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_4 = K2Node_ComponentBoundEvent_NewFloatValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_7 = K2Node_ComponentBoundEvent_NewSliderValue_7;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_3 = K2Node_ComponentBoundEvent_NewFloatValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_6 = K2Node_ComponentBoundEvent_NewSliderValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_3 = CallFunc_Conv_IntToDouble_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LoadTeamViewFPSSetting_bEnabled = CallFunc_LoadTeamViewFPSSetting_bEnabled;
	Parms.CallFunc_LoadTeamViewFPSSetting_TeamViewFPS = CallFunc_LoadTeamViewFPSSetting_TeamViewFPS;
	Parms.CallFunc_LoadTeamViewFPSSetting_ReturnValue = CallFunc_LoadTeamViewFPSSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewIntegerValue = K2Node_ComponentBoundEvent_NewIntegerValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_5 = K2Node_ComponentBoundEvent_NewSliderValue_5;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue = CallFunc_SaveTeamViewSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_SaveTeamViewSetting_ReturnValue_1 = CallFunc_SaveTeamViewSetting_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SaveOptiwandViewMode_ReturnValue = CallFunc_SaveOptiwandViewMode_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCommon_Activatable_Widget = K2Node_DynamicCast_AsCommon_Activatable_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue_1 = K2Node_ComponentBoundEvent_NewQualityValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_4 = K2Node_ComponentBoundEvent_NewSliderValue_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_7 = CallFunc_Conv_IntToByte_ReturnValue_7;
	Parms.CallFunc_GetValidValue_ReturnValue_7 = CallFunc_GetValidValue_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_NewQualityValue = K2Node_ComponentBoundEvent_NewQualityValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_3 = K2Node_ComponentBoundEvent_NewSliderValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_8 = CallFunc_Conv_IntToByte_ReturnValue_8;
	Parms.CallFunc_GetValidValue_ReturnValue_8 = CallFunc_GetValidValue_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_2 = K2Node_ComponentBoundEvent_NewFloatValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_2 = K2Node_ComponentBoundEvent_NewSliderValue_2;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetReflexEnabled_ReturnValue = CallFunc_SetReflexEnabled_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SetReflexLatencyOptions_ReturnValue = CallFunc_SetReflexLatencyOptions_ReturnValue;
	Parms.CallFunc_SetUIScaling_ReturnValue = CallFunc_SetUIScaling_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetUIScaling_ReturnValue_1 = CallFunc_SetUIScaling_ReturnValue_1;
	Parms.CallFunc_CheckForPlatformUIOverride_PlatformIsOverridden = CallFunc_CheckForPlatformUIOverride_PlatformIsOverridden;
	Parms.CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue = CallFunc_GetShowOppositePlatformGraphicsOptions_ReturnValue;
	Parms.CallFunc_SavePiPFPS_ReturnValue = CallFunc_SavePiPFPS_ReturnValue;
	Parms.CallFunc_SetMotionBlurEnabled_ReturnValue = CallFunc_SetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_SetMotionBlurStrength_ReturnValue = CallFunc_SetMotionBlurStrength_ReturnValue;
	Parms.CallFunc_SetGraphicsPresetIndex_ReturnValue = CallFunc_SetGraphicsPresetIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetUseVerticalFOV_ReturnValue = CallFunc_SetUseVerticalFOV_ReturnValue;
	Parms.CallFunc_SetWeaponFOVPreset_ReturnValue = CallFunc_SetWeaponFOVPreset_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_VerticalFov_1 = K2Node_ComponentBoundEvent_VerticalFov_1;
	Parms.K2Node_ComponentBoundEvent_WorldFov_1 = K2Node_ComponentBoundEvent_WorldFov_1;
	Parms.K2Node_ComponentBoundEvent_WeaponFov_1 = K2Node_ComponentBoundEvent_WeaponFov_1;
	Parms.K2Node_ComponentBoundEvent_FovPreset_1 = K2Node_ComponentBoundEvent_FovPreset_1;
	Parms.K2Node_ComponentBoundEvent_GraphicsChanged_1 = K2Node_ComponentBoundEvent_GraphicsChanged_1;
	Parms.K2Node_ComponentBoundEvent_VerticalFov = K2Node_ComponentBoundEvent_VerticalFov;
	Parms.K2Node_ComponentBoundEvent_WorldFov = K2Node_ComponentBoundEvent_WorldFov;
	Parms.K2Node_ComponentBoundEvent_WeaponFov = K2Node_ComponentBoundEvent_WeaponFov;
	Parms.K2Node_ComponentBoundEvent_FovPreset = K2Node_ComponentBoundEvent_FovPreset;
	Parms.K2Node_ComponentBoundEvent_GraphicsChanged = K2Node_ComponentBoundEvent_GraphicsChanged;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_SetInterfaceAspectRatio_InAspectRatio_ImplicitCast = CallFunc_SetInterfaceAspectRatio_InAspectRatio_ImplicitCast;
	Parms.CallFunc_SavePiPResolutionScale_ResolutionScale_ImplicitCast = CallFunc_SavePiPResolutionScale_ResolutionScale_ImplicitCast;
	Parms.CallFunc_SetVideoQualitySettings_ResolutionScaling_ImplicitCast = CallFunc_SetVideoQualitySettings_ResolutionScaling_ImplicitCast;
	Parms.CallFunc_SavePiPFPS_FPS_ImplicitCast = CallFunc_SavePiPFPS_FPS_ImplicitCast;
	Parms.CallFunc_SetFoV_FOV_ImplicitCast = CallFunc_SetFoV_FOV_ImplicitCast;
	Parms.CallFunc_SetWorldDecalEnabled_FadeDistance_ImplicitCast = CallFunc_SetWorldDecalEnabled_FadeDistance_ImplicitCast;
	Parms.CallFunc_SetWorldDecalEnabled_Density_ImplicitCast = CallFunc_SetWorldDecalEnabled_Density_ImplicitCast;
	Parms.CallFunc_UpdateGammaSetting_Gamma_ImplicitCast = CallFunc_UpdateGammaSetting_Gamma_ImplicitCast;
	Parms.CallFunc_UpdateGammaSetting_Gamma_ImplicitCast_1 = CallFunc_UpdateGammaSetting_Gamma_ImplicitCast_1;
	Parms.CallFunc_SetUIScaling_Scale_ImplicitCast = CallFunc_SetUIScaling_Scale_ImplicitCast;
	Parms.CallFunc_SetUIScaling_Scale_ImplicitCast_1 = CallFunc_SetUIScaling_Scale_ImplicitCast_1;
	Parms.CallFunc_SetMotionBlurStrength_Strength_ImplicitCast = CallFunc_SetMotionBlurStrength_Strength_ImplicitCast;
	Parms.CallFunc_SetWeaponFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetWeaponFieldOfView_InFieldOfView_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Graphics_UE5.W_Options_Graphics_UE5_C.OnGraphicsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Graphics_UE5_C::OnGraphicsChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Graphics_UE5_C", "OnGraphicsChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


