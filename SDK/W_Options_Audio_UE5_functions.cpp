#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Audio_UE5.W_Options_Audio_UE5_C
// (None)

class UClass* UW_Options_Audio_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Audio_UE5_C");

	return Clss;
}


// W_Options_Audio_UE5_C W_Options_Audio_UE5.Default__W_Options_Audio_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Audio_UE5_C* UW_Options_Audio_UE5_C::GetDefaultObj()
{
	static class UW_Options_Audio_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Audio_UE5_C*>(UW_Options_Audio_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_Audio_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_Audio_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.PopulateSubtitleLocales
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_CommonCarousel_C*         Carousel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   CallFunc_GetAvailableLocales_ReturnValue                         (ConstParm)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::PopulateSubtitleLocales(class UW_CommonCarousel_C* Carousel, TMap<class FString, class FText> CallFunc_GetAvailableLocales_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "PopulateSubtitleLocales");

	Params::UW_Options_Audio_UE5_C_PopulateSubtitleLocales_Params Parms{};

	Parms.Carousel = Carousel;
	Parms.CallFunc_GetAvailableLocales_ReturnValue = CallFunc_GetAvailableLocales_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.PopulateAudioSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FString, class FText>   AudioDevicesMap                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAudioMixPreset         CallFunc_GetAudioMixPreset_Preset                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioMixPreset_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              CallFunc_GetVoiceType_OutVoiceType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Map_IsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActiveByString_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_LoadSelectedAudioDevice_OutAudioDevice                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSelectedAudioDevice_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActiveByString_Success_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm)
// TArray<class FString>              CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPcPlatform_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_LoadSubtitlesLocale_SubtitlesLocale                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesLocale_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesSpeed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubtitlesSize          CallFunc_LoadSubtitlesSize_SubtitlesSize                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesSize_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesEnabled_bEnableSubtitles                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSubtitlesEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMicInputGain_MicInputGain                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetAvailableAudioDevices_OutAudioDevices                (ReferenceParm)
// bool                               CallFunc_GetAvailableAudioDevices_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::PopulateAudioSettings(TMap<class FString, class FText> AudioDevicesMap, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EAudioMixPreset CallFunc_GetAudioMixPreset_Preset, bool CallFunc_GetAudioMixPreset_ReturnValue, enum class EVoiceType CallFunc_GetVoiceType_OutVoiceType, bool CallFunc_GetVoiceType_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_Map_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetActiveByString_Success, const class FString& CallFunc_LoadSelectedAudioDevice_OutAudioDevice, bool CallFunc_LoadSelectedAudioDevice_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_SetActiveByString_Success_1, TArray<class FText>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys_1, enum class EVoiceType Temp_byte_Variable, int32 K2Node_Select_Default, bool CallFunc_IsPcPlatform_ReturnValue, const class FString& CallFunc_LoadSubtitlesLocale_SubtitlesLocale, bool CallFunc_LoadSubtitlesLocale_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, float CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed, bool CallFunc_LoadSubtitlesSpeed_ReturnValue, double CallFunc_SetFloatValue_NewValue, float CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity, bool CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue, double CallFunc_SetFloatValue_NewValue_1, enum class ESubtitlesSize CallFunc_LoadSubtitlesSize_SubtitlesSize, bool CallFunc_LoadSubtitlesSize_ReturnValue, bool CallFunc_LoadSubtitlesEnabled_bEnableSubtitles, bool CallFunc_LoadSubtitlesEnabled_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_GetMicInputGain_MicInputGain, bool CallFunc_GetMicInputGain_ReturnValue, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, TArray<class FString>& CallFunc_GetAvailableAudioDevices_OutAudioDevices, bool CallFunc_GetAvailableAudioDevices_ReturnValue, double CallFunc_SetFloatValue_NewValue_2, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_SetFloatValue_NewValue_3, double CallFunc_SetFloatValue_NewValue_4, double CallFunc_SetFloatValue_NewValue_5, double CallFunc_SetFloatValue_NewValue_6, double CallFunc_SetFloatValue_NewValue_7, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_2, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_3, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_4, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_5, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_6, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "PopulateAudioSettings");

	Params::UW_Options_Audio_UE5_C_PopulateAudioSettings_Params Parms{};

	Parms.AudioDevicesMap = AudioDevicesMap;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAudioMixPreset_Preset = CallFunc_GetAudioMixPreset_Preset;
	Parms.CallFunc_GetAudioMixPreset_ReturnValue = CallFunc_GetAudioMixPreset_ReturnValue;
	Parms.CallFunc_GetVoiceType_OutVoiceType = CallFunc_GetVoiceType_OutVoiceType;
	Parms.CallFunc_GetVoiceType_ReturnValue = CallFunc_GetVoiceType_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_IsEmpty_ReturnValue = CallFunc_Map_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetActiveByString_Success = CallFunc_SetActiveByString_Success;
	Parms.CallFunc_LoadSelectedAudioDevice_OutAudioDevice = CallFunc_LoadSelectedAudioDevice_OutAudioDevice;
	Parms.CallFunc_LoadSelectedAudioDevice_ReturnValue = CallFunc_LoadSelectedAudioDevice_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_SetActiveByString_Success_1 = CallFunc_SetActiveByString_Success_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsPcPlatform_ReturnValue = CallFunc_IsPcPlatform_ReturnValue;
	Parms.CallFunc_LoadSubtitlesLocale_SubtitlesLocale = CallFunc_LoadSubtitlesLocale_SubtitlesLocale;
	Parms.CallFunc_LoadSubtitlesLocale_ReturnValue = CallFunc_LoadSubtitlesLocale_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed = CallFunc_LoadSubtitlesSpeed_SubtitlesSpeed;
	Parms.CallFunc_LoadSubtitlesSpeed_ReturnValue = CallFunc_LoadSubtitlesSpeed_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity = CallFunc_LoadSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity;
	Parms.CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue = CallFunc_LoadSubtitlesBackgroundOpacity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_LoadSubtitlesSize_SubtitlesSize = CallFunc_LoadSubtitlesSize_SubtitlesSize;
	Parms.CallFunc_LoadSubtitlesSize_ReturnValue = CallFunc_LoadSubtitlesSize_ReturnValue;
	Parms.CallFunc_LoadSubtitlesEnabled_bEnableSubtitles = CallFunc_LoadSubtitlesEnabled_bEnableSubtitles;
	Parms.CallFunc_LoadSubtitlesEnabled_ReturnValue = CallFunc_LoadSubtitlesEnabled_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetMicInputGain_MicInputGain = CallFunc_GetMicInputGain_MicInputGain;
	Parms.CallFunc_GetMicInputGain_ReturnValue = CallFunc_GetMicInputGain_ReturnValue;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_GetAvailableAudioDevices_OutAudioDevices = CallFunc_GetAvailableAudioDevices_OutAudioDevices;
	Parms.CallFunc_GetAvailableAudioDevices_ReturnValue = CallFunc_GetAvailableAudioDevices_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_2 = CallFunc_SetFloatValue_NewValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_3 = CallFunc_SetFloatValue_NewValue_3;
	Parms.CallFunc_SetFloatValue_NewValue_4 = CallFunc_SetFloatValue_NewValue_4;
	Parms.CallFunc_SetFloatValue_NewValue_5 = CallFunc_SetFloatValue_NewValue_5;
	Parms.CallFunc_SetFloatValue_NewValue_6 = CallFunc_SetFloatValue_NewValue_6;
	Parms.CallFunc_SetFloatValue_NewValue_7 = CallFunc_SetFloatValue_NewValue_7;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_2 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_2;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_3 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_3;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_4 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_4;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_5 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_5;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_6 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_6;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_7 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SFXVolume_1_K2Node_ComponentBoundEvent_29_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_UIVolume_1_K2Node_ComponentBoundEvent_31_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MusicVolume_1_K2Node_ComponentBoundEvent_32_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_VOIPVolume_1_K2Node_ComponentBoundEvent_37_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MasterVolume_1_K2Node_ComponentBoundEvent_25_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_MicGainVolume_1_K2Node_ComponentBoundEvent_40_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_SubtitlesEnabled_K2Node_ComponentBoundEvent_64_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesBackgroundOpacity_K2Node_ComponentBoundEvent_66_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_SettingsMenuGamepad_Audio_Slider_SubtitlesSpeed_K2Node_ComponentBoundEvent_67_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Audio_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Audio_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_Options_Audio_UE5_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_Options_Audio_UE5_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_Options_Audio_UE5_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_Options_Audio_UE5_Audio_SubtitlesSize_K2Node_ComponentBoundEvent_1_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_Options_Audio_UE5_Audio_SubtitlesLanguage_K2Node_ComponentBoundEvent_2_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_Options_Audio_UE5_Audio_SubtitlesLanguage_K2Node_ComponentBoundEvent_2_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_Options_Audio_UE5_Audio_SubtitlesLanguage_K2Node_ComponentBoundEvent_2_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_Options_Audio_UE5_Audio_SubtitlesLanguage_K2Node_ComponentBoundEvent_2_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_Options_Audio_UE5_Audio_InputAudioDevice_K2Node_ComponentBoundEvent_3_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_Options_Audio_UE5_Audio_InputAudioDevice_K2Node_ComponentBoundEvent_3_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_Options_Audio_UE5_Audio_InputAudioDevice_K2Node_ComponentBoundEvent_3_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_Options_Audio_UE5_Audio_InputAudioDevice_K2Node_ComponentBoundEvent_3_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.ResetDefaultAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Audio_UE5_C::ResetDefaultAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "ResetDefaultAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_Options_Audio_UE5_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_Options_Audio_UE5_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_Options_Audio_UE5_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_Options_Audio_UE5_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.BndEvt__W_Options_Audio_UE5_Audio_AudioMix_K2Node_ComponentBoundEvent_4_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::BndEvt__W_Options_Audio_UE5_Audio_AudioMix_K2Node_ComponentBoundEvent_4_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "BndEvt__W_Options_Audio_UE5_Audio_AudioMix_K2Node_ComponentBoundEvent_4_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Audio_UE5_C_BndEvt__W_Options_Audio_UE5_Audio_AudioMix_K2Node_ComponentBoundEvent_4_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Audio_UE5.W_Options_Audio_UE5_C.ExecuteUbergraph_W_Options_Audio_UE5
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSFXVolume_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveUIVolume_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveMusicVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveVOIPVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveMasterVolume_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesSpeed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesSize_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveSubtitlesLocale_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, HasGetValueTypeHash)
// class UReadyOrNotGameInstance*     CallFunc_GetReadyOrNotGameInstance_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInputAudioDevice_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EVoiceType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// enum class EAudioMixPreset         CallFunc_GetAudioMixPresetEnum_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAudioMixPreset_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VCASetVolume_Volume_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveSFXVolume_Volume_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VCASetVolume_Volume_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveUIVolume_Volume_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VCASetVolume_Volume_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveMusicVolume_Volume_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveVOIPVolume_Volume_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VCASetVolume_Volume_ImplicitCast_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveMasterVolume_Volume_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMicInputGain_MicInputGain_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveSubtitlesSpeed_SubtitlesSpeed_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Audio_UE5_C::ExecuteUbergraph_W_Options_Audio_UE5(int32 EntryPoint, int32 Temp_int_Variable, enum class EVoiceType Temp_byte_Variable, enum class EVoiceType Temp_byte_Variable_1, double K2Node_ComponentBoundEvent_NewFloatValue_7, double K2Node_ComponentBoundEvent_NewSliderValue_7, bool CallFunc_SaveSFXVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_6, double K2Node_ComponentBoundEvent_NewSliderValue_6, bool CallFunc_SaveUIVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_5, double K2Node_ComponentBoundEvent_NewSliderValue_5, bool CallFunc_SaveMusicVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_4, double K2Node_ComponentBoundEvent_NewSliderValue_4, bool CallFunc_SaveVOIPVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue_3, double K2Node_ComponentBoundEvent_NewSliderValue_3, double K2Node_ComponentBoundEvent_NewFloatValue_2, double K2Node_ComponentBoundEvent_NewSliderValue_2, bool CallFunc_SaveMasterVolume_ReturnValue, bool CallFunc_SetMicInputGain_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_SaveSubtitlesEnabled_ReturnValue, bool CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SaveSubtitlesSpeed_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_4, const class FString& K2Node_ComponentBoundEvent_Value_4, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_3, const class FString& K2Node_ComponentBoundEvent_Value_3, bool CallFunc_SaveSubtitlesSize_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_SaveSubtitlesLocale_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_2, const class FString& K2Node_ComponentBoundEvent_Value_2, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_SetInputAudioDevice_ReturnValue, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, enum class EVoiceType K2Node_Select_Default, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, enum class EAudioMixPreset CallFunc_GetAudioMixPresetEnum_ReturnValue, bool CallFunc_SetAudioMixPreset_ReturnValue, float CallFunc_VCASetVolume_Volume_ImplicitCast, float CallFunc_SaveSFXVolume_Volume_ImplicitCast, float CallFunc_VCASetVolume_Volume_ImplicitCast_1, float CallFunc_SaveUIVolume_Volume_ImplicitCast, float CallFunc_VCASetVolume_Volume_ImplicitCast_2, float CallFunc_SaveMusicVolume_Volume_ImplicitCast, float CallFunc_SaveVOIPVolume_Volume_ImplicitCast, float CallFunc_VCASetVolume_Volume_ImplicitCast_3, float CallFunc_SaveMasterVolume_Volume_ImplicitCast, float CallFunc_SetMicInputGain_MicInputGain_ImplicitCast, float CallFunc_SaveSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity_ImplicitCast, float CallFunc_SaveSubtitlesSpeed_SubtitlesSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Audio_UE5_C", "ExecuteUbergraph_W_Options_Audio_UE5");

	Params::UW_Options_Audio_UE5_C_ExecuteUbergraph_W_Options_Audio_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_7 = K2Node_ComponentBoundEvent_NewFloatValue_7;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_7 = K2Node_ComponentBoundEvent_NewSliderValue_7;
	Parms.CallFunc_SaveSFXVolume_ReturnValue = CallFunc_SaveSFXVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_6 = K2Node_ComponentBoundEvent_NewFloatValue_6;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_6 = K2Node_ComponentBoundEvent_NewSliderValue_6;
	Parms.CallFunc_SaveUIVolume_ReturnValue = CallFunc_SaveUIVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_5 = K2Node_ComponentBoundEvent_NewFloatValue_5;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_5 = K2Node_ComponentBoundEvent_NewSliderValue_5;
	Parms.CallFunc_SaveMusicVolume_ReturnValue = CallFunc_SaveMusicVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_4 = K2Node_ComponentBoundEvent_NewFloatValue_4;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_4 = K2Node_ComponentBoundEvent_NewSliderValue_4;
	Parms.CallFunc_SaveVOIPVolume_ReturnValue = CallFunc_SaveVOIPVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_3 = K2Node_ComponentBoundEvent_NewFloatValue_3;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_3 = K2Node_ComponentBoundEvent_NewSliderValue_3;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_2 = K2Node_ComponentBoundEvent_NewFloatValue_2;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_2 = K2Node_ComponentBoundEvent_NewSliderValue_2;
	Parms.CallFunc_SaveMasterVolume_ReturnValue = CallFunc_SaveMasterVolume_ReturnValue;
	Parms.CallFunc_SetMicInputGain_ReturnValue = CallFunc_SetMicInputGain_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_SaveSubtitlesEnabled_ReturnValue = CallFunc_SaveSubtitlesEnabled_ReturnValue;
	Parms.CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue = CallFunc_SaveSubtitlesBackgroundOpacity_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SaveSubtitlesSpeed_ReturnValue = CallFunc_SaveSubtitlesSpeed_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_SaveSubtitlesSize_ReturnValue = CallFunc_SaveSubtitlesSize_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_SaveSubtitlesLocale_ReturnValue = CallFunc_SaveSubtitlesLocale_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_GetReadyOrNotGameInstance_ReturnValue = CallFunc_GetReadyOrNotGameInstance_ReturnValue;
	Parms.CallFunc_SetInputAudioDevice_ReturnValue = CallFunc_SetInputAudioDevice_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetAudioMixPresetEnum_ReturnValue = CallFunc_GetAudioMixPresetEnum_ReturnValue;
	Parms.CallFunc_SetAudioMixPreset_ReturnValue = CallFunc_SetAudioMixPreset_ReturnValue;
	Parms.CallFunc_VCASetVolume_Volume_ImplicitCast = CallFunc_VCASetVolume_Volume_ImplicitCast;
	Parms.CallFunc_SaveSFXVolume_Volume_ImplicitCast = CallFunc_SaveSFXVolume_Volume_ImplicitCast;
	Parms.CallFunc_VCASetVolume_Volume_ImplicitCast_1 = CallFunc_VCASetVolume_Volume_ImplicitCast_1;
	Parms.CallFunc_SaveUIVolume_Volume_ImplicitCast = CallFunc_SaveUIVolume_Volume_ImplicitCast;
	Parms.CallFunc_VCASetVolume_Volume_ImplicitCast_2 = CallFunc_VCASetVolume_Volume_ImplicitCast_2;
	Parms.CallFunc_SaveMusicVolume_Volume_ImplicitCast = CallFunc_SaveMusicVolume_Volume_ImplicitCast;
	Parms.CallFunc_SaveVOIPVolume_Volume_ImplicitCast = CallFunc_SaveVOIPVolume_Volume_ImplicitCast;
	Parms.CallFunc_VCASetVolume_Volume_ImplicitCast_3 = CallFunc_VCASetVolume_Volume_ImplicitCast_3;
	Parms.CallFunc_SaveMasterVolume_Volume_ImplicitCast = CallFunc_SaveMasterVolume_Volume_ImplicitCast;
	Parms.CallFunc_SetMicInputGain_MicInputGain_ImplicitCast = CallFunc_SetMicInputGain_MicInputGain_ImplicitCast;
	Parms.CallFunc_SaveSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity_ImplicitCast = CallFunc_SaveSubtitlesBackgroundOpacity_SubtitlesBackgroundOpacity_ImplicitCast;
	Parms.CallFunc_SaveSubtitlesSpeed_SubtitlesSpeed_ImplicitCast = CallFunc_SaveSubtitlesSpeed_SubtitlesSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


