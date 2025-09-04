#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x528 - 0x410)
// WidgetBlueprintGeneratedClass W_Loadout_Page_Preset.W_Loadout_Page_Preset_C
class UW_Loadout_Page_Preset_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Loadout_UnitSelect_C*               UnitSelect;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Presets;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FText>             Options;                                           // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UCommonButtonBase*, class FString> OptionsMap;                                        // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FString                                Selected_Option;                                   // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDefaultPresetSelected;                           // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPresetSelected;                                  // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPresetEquipped;                                  // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonButtonBase*                     Equipped_Preset;                                   // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bCustomization;                                    // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCustomizationPresetHovered;                      // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Loadout_Page_Preset_C* GetDefaultObj();

	bool Customization_Preset_Exists(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	bool Preset_Exists(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Unequip_Preset_If_Deleted(enum class EEquippingSwat CurrentSwat, bool CallFunc_Preset_Exists_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue);
	void Set_Equipped_Preset_By_Swat_Member(enum class EEquippingSwat NewParam, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, TArray<class FString>& CallFunc_Map_Values_Values, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_GetCustomizationPresetBySwat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, class UCommonButtonBase* CallFunc_Array_Get_Item);
	void Set_Current_Unit(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue);
	void Equip_Selected_Preset(class UWidget* Selected_Button, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class UCommonButtonBase* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_FindParentWidgetOfType_ReturnValue_1);
	bool BP_OnHandleBackAction();
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue, TArray<class UCommonButtonBase*>& CallFunc_Map_Keys_Keys, class UCommonButtonBase* CallFunc_Array_Get_Item);
	void Add_Presets_to_List(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class UCommonButton_C* CallFunc_Create_Preset_Option_FocusButton);
	void Create_New_Preset_Button(class UW_SmallSlot_v2_C* New_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UW_NewPreset_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void Populate_Presets(bool Temp_bool_Variable, class FText Temp_text_Variable, const class FString& Temp_string_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class FString>& CallFunc_GetCustomizationPresetNames_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, TArray<class FString>& K2Node_Select_Default, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Create_Preset_Option(const class FString& Preset_ID, class UCommonButton_C** FocusButton, class UW_SmallSlot_v2_C* New_Button, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UW_SmallSlot_v2_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void Construct();
	void Option_Hovered(class UCommonButtonBase* Button);
	void Add_New_Preset(class UCommonButtonBase* Button);
	void Option_Clicked(class UCommonButtonBase* Button);
	void BP_OnDeactivated();
	void BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_1_OnCarouselNext__DelegateSignature();
	void BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_2_OnCarouselPrevious__DelegateSignature();
	void BP_OnActivated();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void Preset_Deleted(class FText PresetName);
	void Preset_List_Updated();
	void New_Preset_Hovered(class UCommonButtonBase* Button);
	void Customization_Preset_Deleted(class FText PresetName);
	void BndEvt__W_Loadout_Page_Preset_UnitSelect_K2Node_ComponentBoundEvent_0_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo);
	void ExecuteUbergraph_W_Loadout_Page_Preset(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_CustomEvent_Button_1, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, enum class EEquippingSwat CallFunc_PreviousActiveSwatMember_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class FText K2Node_CustomEvent_PresetName_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_2, class UCommonButtonBase* K2Node_CustomEvent_Button_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_3, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button_3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const class FString& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FName K2Node_Event_OptionNameID, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class UCommonButtonBase* K2Node_CustomEvent_Button, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_4, class FText CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue_1, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class FText K2Node_CustomEvent_PresetName, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_5, const class FString& CallFunc_GetCurrentCustomizationPresetName_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_6, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_EqualEqual_TextText_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_IsMultiplayer_ReturnValue, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_7);
	void OnCustomizationPresetHovered__DelegateSignature(const class FString& Name);
	void OnPresetEquipped__DelegateSignature();
	void OnPresetSelected__DelegateSignature(const class FString& Name);
	void OnDefaultPresetSelected__DelegateSignature();
};

}


