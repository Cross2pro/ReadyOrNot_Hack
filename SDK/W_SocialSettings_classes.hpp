#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x440 - 0x410)
// WidgetBlueprintGeneratedClass W_SocialSettings.W_SocialSettings_C
class UW_SocialSettings_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CommonCarousel_C*                   Audio_DefaultVoipChannel;                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   Audio_Slider_MicGainVolume;                        // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   Audio_Slider_VOIPVolume;                           // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SocialSettings;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionsContainer_UE5_C*             W_OptionsContainer_UE5;                            // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SocialSettings_C* GetDefaultObj();

	void PopulateAudioSettings(enum class EVoiceType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class EVoiceType CallFunc_GetVoiceType_OutVoiceType, bool CallFunc_GetVoiceType_ReturnValue, float CallFunc_GetVolumes_MasterVolume, float CallFunc_GetVolumes_UIVolume, float CallFunc_GetVolumes_SFXVolume, float CallFunc_GetVolumes_MusicVolume, float CallFunc_GetVolumes_VOIPVolume, bool CallFunc_GetVolumes_ReturnValue, float CallFunc_GetMicInputGain_MicInputGain, bool CallFunc_GetMicInputGain_ReturnValue, int32 K2Node_Select_Default, double CallFunc_SetFloatValue_NewValue, double CallFunc_SetFloatValue_NewValue_1, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1);
	class UWidget* BP_GetDesiredFocusTarget();
	void Construct();
	void BndEvt__W_ConsoleLobbyManager_Audio_Slider_VOIPVolume_K2Node_ComponentBoundEvent_1_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue);
	void BndEvt__W_ConsoleLobbyManager_Audio_Slider_MicGainVolume_K2Node_ComponentBoundEvent_2_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue);
	void BP_OnActivated();
	void BndEvt__W_SocialSettings_Audio_DefaultVoipChannel_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void ExecuteUbergraph_W_SocialSettings(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, int32 Temp_int_Variable, enum class EVoiceType Temp_byte_Variable, enum class EVoiceType Temp_byte_Variable_1, enum class EVoiceType K2Node_Select_Default, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_SaveVOIPVolume_ReturnValue, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SetMicInputGain_ReturnValue, float CallFunc_SaveVOIPVolume_Volume_ImplicitCast, float CallFunc_SetMicInputGain_MicInputGain_ImplicitCast);
};

}


