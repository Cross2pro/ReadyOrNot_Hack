#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// (None)

class UClass* UBP_GameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameInstance_C");

	return Clss;
}


// BP_GameInstance_C BP_GameInstance.Default__BP_GameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GameInstance_C* UBP_GameInstance_C::GetDefaultObj()
{
	static class UBP_GameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GameInstance_C*>(UBP_GameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.AdjustVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::AdjustVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AdjustVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.AddPauseGameCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PauseCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::AddPauseGameCondition(const class FString& PauseCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AddPauseGameCondition");

	Params::UBP_GameInstance_C_AddPauseGameCondition_Params Parms{};

	Parms.PauseCondition = PauseCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.RemovePauseGameCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      PauseCondition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::RemovePauseGameCondition(const class FString& PauseCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "RemovePauseGameCondition");

	Params::UBP_GameInstance_C_RemovePauseGameCondition_Params Parms{};

	Parms.PauseCondition = PauseCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.PauseGameWithConditon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewCondition                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_GameInstance_C::PauseGameWithConditon(const class FString& NewCondition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "PauseGameWithConditon");

	Params::UBP_GameInstance_C_PauseGameWithConditon_Params Parms{};

	Parms.NewCondition = NewCondition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GameInstance.BP_GameInstance_C.AdjustAccessibilitySettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::AdjustAccessibilitySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "AdjustAccessibilitySettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.ApplyAudioPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::ApplyAudioPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "ApplyAudioPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.OnSettingsSaved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GameInstance_C::OnSettingsSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "OnSettingsSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MasterVolume                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_UIVolume                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_SFXVolume                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_MusicVolume                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVolumes_VOIPVolume                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetVolumes_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PauseCondition_1                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PauseCondition                                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_NewCondition                                  (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_LoadColorblindStrength_ColorblindStrength               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindStrength_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EColorVisionDeficiency  CallFunc_LoadColorblindMode_ColorVisionDeficiency                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadColorblindMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAudioMixPreset         CallFunc_GetAudioMixPreset_Preset                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAudioMixPreset_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, const class FString& K2Node_Event_PauseCondition_1, const class FString& K2Node_Event_PauseCondition, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, const class FString& K2Node_CustomEvent_NewCondition, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue, enum class EAudioMixPreset CallFunc_GetAudioMixPreset_Preset, bool CallFunc_GetAudioMixPreset_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GameInstance_C", "ExecuteUbergraph_BP_GameInstance");

	Params::UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVolumes_MasterVolume = CallFunc_GetVolumes_MasterVolume;
	Parms.CallFunc_GetVolumes_UIVolume = CallFunc_GetVolumes_UIVolume;
	Parms.CallFunc_GetVolumes_SFXVolume = CallFunc_GetVolumes_SFXVolume;
	Parms.CallFunc_GetVolumes_MusicVolume = CallFunc_GetVolumes_MusicVolume;
	Parms.CallFunc_GetVolumes_VOIPVolume = CallFunc_GetVolumes_VOIPVolume;
	Parms.CallFunc_GetVolumes_ReturnValue = CallFunc_GetVolumes_ReturnValue;
	Parms.K2Node_Event_PauseCondition_1 = K2Node_Event_PauseCondition_1;
	Parms.K2Node_Event_PauseCondition = K2Node_Event_PauseCondition;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewCondition = K2Node_CustomEvent_NewCondition;
	Parms.CallFunc_LoadColorblindStrength_ColorblindStrength = CallFunc_LoadColorblindStrength_ColorblindStrength;
	Parms.CallFunc_LoadColorblindStrength_ReturnValue = CallFunc_LoadColorblindStrength_ReturnValue;
	Parms.CallFunc_LoadColorblindMode_ColorVisionDeficiency = CallFunc_LoadColorblindMode_ColorVisionDeficiency;
	Parms.CallFunc_LoadColorblindMode_ReturnValue = CallFunc_LoadColorblindMode_ReturnValue;
	Parms.CallFunc_GetAudioMixPreset_Preset = CallFunc_GetAudioMixPreset_Preset;
	Parms.CallFunc_GetAudioMixPreset_ReturnValue = CallFunc_GetAudioMixPreset_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


