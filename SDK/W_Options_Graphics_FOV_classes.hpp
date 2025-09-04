#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x47A - 0x410)
// WidgetBlueprintGeneratedClass W_Options_Graphics_FOV.W_Options_Graphics_FOV_C
class UW_Options_Graphics_FOV_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_CommonCarousel_C*                   Options_FOV_Scaling;                               // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CommonCarousel_C*                   Options_FOVPreset;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   Simple_Slider_FOV_Weapon;                          // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardSlider_C*                   SimpleGraphics_Slider_FieldOfView;                 // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionsContainer_UE5_C*             WeaponFOV_Custom_Container;                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_OptionsContainer_UE5_C*             WeaponFOVContainer;                                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         StagedUseVerticalFOV;                              // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StagedFOV;                                         // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StagedWeaponFOV;                                   // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponFOVPreset                  StagingWeaponFOVPreset;                            // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SyncVariables;                                     // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         GraphicsChanged;                                   // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Options_Graphics_FOV_C* GetDefaultObj();

	void PopulateOptions();
	void UpdateWorldFOVText();
	void UpdateWeaponFOVText();
	void PushVariables();
	void BndEvt__SimpleGraphics_Slider_FieldOfView_K2Node_ComponentBoundEvent_21_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue);
	void BndEvt__W_Options_Graphics_UE5_Simple_Slider_FOV_Weapon_K2Node_ComponentBoundEvent_14_OnIntegralValueChanged__DelegateSignature(int32 NewIntegerValue, double NewSliderValue);
	void BndEvt__W_Options_Graphics_UE5_Options_FOVPreset_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void BndEvt__W_Options_Graphics_UE5_Options_FOV_Scaling_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value);
	void ExecuteUbergraph_W_Options_Graphics_FOV(int32 EntryPoint, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EWeaponFOVPreset Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, enum class EWeaponFOVPreset Temp_byte_Variable_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool K2Node_Select_Default_1, float CallFunc_ConvertFovToReferenceVertical_ReturnValue, float CallFunc_ConvertFovToHorizontal_ReturnValue, bool Temp_bool_Variable_6, float K2Node_Select_Default_2, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_GetFoV_FOV, bool CallFunc_GetFoV_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue, enum class EWeaponFOVPreset CallFunc_GetWeaponFOVPreset_Preset, bool CallFunc_GetWeaponFOVPreset_ReturnValue, bool CallFunc_GetUseVerticalFOV_bUsesVertical, bool CallFunc_GetUseVerticalFOV_ReturnValue, float CallFunc_GetWeaponFieldOfView_FOV, bool CallFunc_GetWeaponFieldOfView_ReturnValue, int32 CallFunc_SetIntegralValue_NewValue_1, int32 K2Node_ComponentBoundEvent_NewIntegerValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, int32 K2Node_ComponentBoundEvent_NewIntegerValue, double K2Node_ComponentBoundEvent_NewSliderValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, enum class EWeaponFOVPreset CallFunc_GetWeaponFOVPresetEnum_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_ConvertFovToReferenceVertical_Fov_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast, double CallFunc_FFloor_A_ImplicitCast, double K2Node_VariableSet_StagedFOV_ImplicitCast, double K2Node_VariableSet_StagedWeaponFOV_ImplicitCast);
	void SyncVariables__DelegateSignature(bool VerticalFov, double WorldFov, double WeaponFov, enum class EWeaponFOVPreset FovPreset, bool GraphicsChanged);
};

}


