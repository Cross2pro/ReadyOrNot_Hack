#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x429 (0x6E9 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Loadout_PresetDropdown.W_Loadout_PresetDropdown_C
class UW_Loadout_PresetDropdown_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_ClearPresetWarning;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ModifiedPreset;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_PresetModified;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_45;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_62;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Dropdown_C*                         PresetDropdown;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             PresetOptions;                                     // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSavedLoadout                         Active_Loadout;                                    // 0x348(0x2E8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSaveModifiedPresetClicked;                       // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSaveNewPresetClicked;                            // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDeletePresetClicked;                             // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_DropdownOptions                   Drop_LoadoutPreset_DeleteFooter;                   // 0x660(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPresetSelected;                                  // 0x680(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnDefaultPresetSelected;                           // 0x690(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                CurrentPreset;                                     // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnLoadoutPresetHovered;                            // 0x6B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_Loadout_Preset_Preview_C*           PreviewWidget;                                     // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCustomizationPresetHovered;                      // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPresetMenuClosed;                                // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCustomization;                                    // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_PresetDropdown_C* GetDefaultObj();

	struct FSavedLoadout GetLoadoutPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetPreset_ReturnValue);
	void ApplySelectedPreset(const class FString& Name, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue);
	void SetSelection(const class FString& OptionID);
	void SetPresetModified(bool Modified, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void PopulatePresets(class FText Temp_text_Variable, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, TArray<class FString>& K2Node_Select_Default, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void BndEvt__W_Loadout_PresetDropdown_btn_ModifiedPreset_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_1_OnFooterOptionSelected__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_2_OnOptionSelected__DelegateSignature(const class FString& OptionID);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void OnInitialized();
	void PresetsChanged();
	void PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_3_OnOptionHovered__DelegateSignature(const class FString& OptionID);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_4_OnMenuClosed__DelegateSignature(class UW_Dropdown_C* TriggeringDropdown);
	void BndEvt__W_Loadout_PresetDropdown_PresetDropdown_K2Node_ComponentBoundEvent_5_OnFooterOptionHovered__DelegateSignature(const class FString& OptionID);
	void CustomizationPresetApplied(const class FString& Name);
	void ExecuteUbergraph_W_Loadout_PresetDropdown(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, const class FString& K2Node_ComponentBoundEvent_OptionID_2, class FName K2Node_Event_OptionNameID, bool CallFunc_IsEmpty_ReturnValue_1, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& K2Node_CustomEvent_Name_1, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_ComponentBoundEvent_OptionID_1, const struct FSavedLoadout& CallFunc_GetLoadoutPreset_ReturnValue, class UW_Dropdown_C* K2Node_ComponentBoundEvent_TriggeringDropdown, const class FString& K2Node_ComponentBoundEvent_OptionID, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_3, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_4, const class FString& K2Node_CustomEvent_Name, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnCustomizationPresetHovered__DelegateSignature(const class FString& Name);
	void OnPresetMenuClosed__DelegateSignature();
	void OnLoadoutPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout);
	void OnDefaultPresetSelected__DelegateSignature();
	void OnPresetSelected__DelegateSignature(const class FString& PresetName);
	void OnDeletePresetClicked__DelegateSignature(const class FString& PresetName);
	void OnSaveNewPresetClicked__DelegateSignature();
	void OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset);
};

}


