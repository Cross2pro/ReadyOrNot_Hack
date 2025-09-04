#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x451 - 0x410)
// WidgetBlueprintGeneratedClass W_Options_Accessibility_UE5.W_Options_Accessibility_UE5_C
class UW_Options_Accessibility_UE5_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CommonCarousel_C*                   Accessibility_Carousel_ColorblindMode;             // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OnOffButton_C*                      Accessibility_OnOff_HighlightWeapons;              // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OnOffButton_C*                      Accessibility_OnOff_WorldSpaceActionPrompts;       // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   Accessibility_Slider_Strength;                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Tab_Accessibility;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        StagedColorblindMode;                              // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StagedColorblindStrength;                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Options_Accessibility_UE5_C* GetDefaultObj();

	void PopulateAccessibilitySettings(enum class EColorVisionDeficiency Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_LoadWorldSpaceActionPrompts_bWorldSpaceActionPrompts, bool CallFunc_LoadWorldSpaceActionPrompts_ReturnValue, bool CallFunc_LoadHighlightWeapons_bHighlightWeapons, bool CallFunc_LoadHighlightWeapons_ReturnValue, enum class EColorVisionDeficiency CallFunc_LoadColorblindMode_ColorVisionDeficiency, bool CallFunc_LoadColorblindMode_ReturnValue, double CallFunc_SetFloatValue_NewValue, float CallFunc_LoadColorblindStrength_ColorblindStrength, bool CallFunc_LoadColorblindStrength_ReturnValue, int32 K2Node_Select_Default, double K2Node_VariableSet_StagedColorblindStrength_ImplicitCast);
	class UWidget* BP_GetDesiredFocusTarget();
	void BndEvt__W_SettingsMenuGamepad_Accessibility_Slider_Strength_K2Node_ComponentBoundEvent_125_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue);
	void BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WeaponHighlight_K2Node_ComponentBoundEvent_63_OnValueStateChange__DelegateSignature(bool bNewCheckState);
	void BndEvt__W_SettingsMenuGamepad_Accessibility_OnOff_WorldSpaceActionPrompts_K2Node_ComponentBoundEvent_69_OnValueStateChange__DelegateSignature(bool bNewCheckState);
	void BndEvt__W_Options_Accessibility_UE5_Accessibility_Carousel_ColorblindMode_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ResetDefaultAccessibility();
	void ExecuteUbergraph_W_Options_Accessibility_UE5(int32 EntryPoint, int32 Temp_int_Variable, enum class EColorVisionDeficiency Temp_byte_Variable, enum class EColorVisionDeficiency Temp_byte_Variable_1, enum class EColorVisionDeficiency Temp_byte_Variable_2, enum class EColorVisionDeficiency Temp_byte_Variable_3, bool K2Node_SwitchInteger_CmpSuccess, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SaveColorblindMode_ReturnValue, bool CallFunc_SaveColorblindStrength_ReturnValue, bool CallFunc_SaveColorblindMode_ReturnValue_1, bool CallFunc_SaveColorblindMode_ReturnValue_2, bool CallFunc_SaveColorblindMode_ReturnValue_3, enum class EColorVisionDeficiency K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool K2Node_ComponentBoundEvent_bNewCheckState, bool CallFunc_SaveHighlightWeapons_ReturnValue, bool CallFunc_SaveWorldSpaceActionPrompts_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_1, float CallFunc_SaveColorblindStrength_ColorblindStrength_ImplicitCast, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_2, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_3, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_4, float CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast_5);
};

}


