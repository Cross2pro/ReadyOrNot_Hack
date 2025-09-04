#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SocialSettings.W_SocialSettings_C
// (None)

class UClass* UW_SocialSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SocialSettings_C");

	return Clss;
}


// W_SocialSettings_C W_SocialSettings.Default__W_SocialSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SocialSettings_C* UW_SocialSettings_C::GetDefaultObj()
{
	static class UW_SocialSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SocialSettings_C*>(UW_SocialSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SocialSettings.W_SocialSettings_C.PopulateAudioSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              CallFunc_GetVoiceType_OutVoiceType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVoiceType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMicInputGain_MicInputGain                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SocialSettings_C::PopulateAudioSettings(enum class EVoiceType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EVoiceType CallFunc_GetVoiceType_OutVoiceType, bool CallFunc_GetVoiceType_ReturnValue, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, float CallFunc_GetMicInputGain_MicInputGain, bool CallFunc_GetMicInputGain_ReturnValue, int32 K2Node_Select_Default, double CallFunc_SetFloatValue_NewValue, double CallFunc_SetFloatValue_NewValue_1, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "PopulateAudioSettings");

	Params::UW_SocialSettings_C_PopulateAudioSettings_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetVoiceType_OutVoiceType = CallFunc_GetVoiceType_OutVoiceType;
	Parms.CallFunc_GetVoiceType_ReturnValue = CallFunc_GetVoiceType_ReturnValue;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.CallFunc_GetMicInputGain_MicInputGain = CallFunc_GetMicInputGain_MicInputGain;
	Parms.CallFunc_GetMicInputGain_ReturnValue = CallFunc_GetMicInputGain_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SocialSettings.W_SocialSettings_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_SocialSettings_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "BP_GetDesiredFocusTarget");

	Params::UW_SocialSettings_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_SocialSettings.W_SocialSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_SocialSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SocialSettings.W_SocialSettings_C.BndEvt__W_ConsoleLobbyManager_Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SocialSettings_C::BndEvt__W_ConsoleLobbyManager_Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "BndEvt__W_ConsoleLobbyManager_Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature");

	Params::UW_SocialSettings_C_BndEvt__W_ConsoleLobbyManager_Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SocialSettings.W_SocialSettings_C.BndEvt__W_ConsoleLobbyManager_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SocialSettings_C::BndEvt__W_ConsoleLobbyManager_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "BndEvt__W_ConsoleLobbyManager_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature");

	Params::UW_SocialSettings_C_BndEvt__W_ConsoleLobbyManager_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SocialSettings.W_SocialSettings_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_SocialSettings_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SocialSettings.W_SocialSettings_C.BndEvt__W_SocialSettings_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SocialSettings_C::BndEvt__W_SocialSettings_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "BndEvt__W_SocialSettings_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature");

	Params::UW_SocialSettings_C_BndEvt__W_SocialSettings_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SocialSettings.W_SocialSettings_C.ExecuteUbergraph_W_SocialSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVoiceType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveVOIPVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMicInputGain_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SaveVOIPVolume_Volume_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMicInputGain_MicInputGain_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SocialSettings_C::ExecuteUbergraph_W_SocialSettings(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, int32 Temp_int_Variable, enum class EVoiceType Temp_byte_Variable, enum class EVoiceType Temp_byte_Variable_1, enum class EVoiceType K2Node_Select_Default, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_SaveVOIPVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SetMicInputGain_ReturnValue, float CallFunc_SaveVOIPVolume_Volume_ImplicitCast, float CallFunc_SetMicInputGain_MicInputGain_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SocialSettings_C", "ExecuteUbergraph_W_SocialSettings");

	Params::UW_SocialSettings_C_ExecuteUbergraph_W_SocialSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_SaveVOIPVolume_ReturnValue = CallFunc_SaveVOIPVolume_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SetMicInputGain_ReturnValue = CallFunc_SetMicInputGain_ReturnValue;
	Parms.CallFunc_SaveVOIPVolume_Volume_ImplicitCast = CallFunc_SaveVOIPVolume_Volume_ImplicitCast;
	Parms.CallFunc_SetMicInputGain_MicInputGain_ImplicitCast = CallFunc_SetMicInputGain_MicInputGain_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


