#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE78 - 0xE50)
// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
class UBP_GameInstance_C : public UReadyOrNotGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FString>                        StreamedLevels;                                    // 0xE58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ModeURL;                                           // 0xE68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_GameInstance_C* GetDefaultObj();

	void ReceiveInit();
	void AdjustVolume();
	void AddPauseGameCondition(const class FString& PauseCondition);
	void RemovePauseGameCondition(const class FString& PauseCondition);
	void PauseGameWithConditon(const class FString& NewCondition);
	void AdjustAccessibilitySettings();
	void ApplyAudioPreset();
	void OnSettingsSaved();
	void ExecuteUbergraph_BP_GameInstance(int32 EntryPoint, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, const class FString& K2Node_Event_PauseCondition_1, const class FString& K2Node_Event_PauseCondition, bool CallFunc_Array_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_1, const class FString& K2Node_CustomEvent_NewCondition, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue, enum class EAudioMixPreset CallFunc_GetAudioMixPreset_Preset, bool CallFunc_GetAudioMixPreset_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue);
};

}


