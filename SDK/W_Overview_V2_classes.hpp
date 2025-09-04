#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x530 - 0x428)
// WidgetBlueprintGeneratedClass W_Overview_V2.W_Overview_V2_C
class UW_Overview_V2_C : public UOverview_V2
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_ArmorOverviewSlot_C*                ArmorOverview;                                     // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ArmorMunitions;                                // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_UnitSelect_C*               CharacterSelect;                                   // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Preset;                                        // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Loadout;                                           // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   LongTactical;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PresetBox;                                         // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SmallSlot_v2_C*                     PresetName;                                        // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   Primary;                                           // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LoadoutSlot_v2_C*                   Secondary;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_HeadwearOverviewSlot_C*             W_HeadwearOverviewSlot;                            // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Loadout_PresetDropdown_C*           W_Loadout_PresetDropdown;                          // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MunitionsOverviewSlot_C*            W_MunitionsSlot;                                   // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CharacterChanged;                                  // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CharacterIndex;                                    // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Character_Index;                                   // 0x4AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGamepad;                                       // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadout_V2*                           Loadout_V2;                                        // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastHovered;                                       // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ULoadoutSlot_V2*                       DefaultFocus;                                      // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class ULoadoutSlot_V2*>               LoadoutSlots;                                      // 0x4D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class FText>             LoadoutPresetOptions;                              // 0x4E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Overview_V2_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus, TScriptInterface<class IReadyOrNotUI_C> K2Node_DynamicCast_AsReady_or_Not_UI, bool K2Node_DynamicCast_bSuccess, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Unequip_Preset_If_Deleted(enum class EEquippingSwat Swat_Member, bool CallFunc_Preset_Exists_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue);
	bool Preset_Exists(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, TArray<class FString>& CallFunc_GetAllPresetNames_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Select_Character(const class FString& Unit_ID, enum class EEquippingSwat SwatMember, class AReadyOrNotPlayerState* Player_State, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Equipping_Unit_Is_Self_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool Equipping_Unit_Is_Self(const class FString& Unit_ID, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void DisableLoadoutPreview();
	void SetLoadoutPreview(const struct FSavedLoadout& Loadout, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_1, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_2, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue_3);
	void Set_Current_Preset_Name(class FText Temp_text_Variable, bool Temp_bool_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class FText CallFunc_GetCurrentPresetDisplayName_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void InitializeLoadoutPresets(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, const struct FSavedLoadout& CallFunc_GetActiveLoadout_ReturnValue, TScriptInterface<class ILoadoutUI_C> K2Node_DynamicCast_AsLoadout_UI, bool K2Node_DynamicCast_bSuccess);
	void UpdateHeadwear();
	void UpdateMunitions();
	void UpdateBodyArmor(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveBodyArmor_ReturnValue, enum class EArmourCoverage CallFunc_GetArmorCoverage_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue, class UArmourMaterial* CallFunc_GetActiveArmorMaterial_ReturnValue);
	void UpdateLongTactical(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseItem> CallFunc_GetActiveLongTactical_ReturnValue, class ABaseItem* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateSecondary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActiveSecondary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdatePrimary(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TSubclassOf<class ABaseWeapon> CallFunc_GetActivePrimary_ReturnValue, class ABaseWeapon* CallFunc_GetClassDefaultObject_ReturnValue);
	void UpdateStyle(bool bUseGamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, bool Temp_bool_Variable_2, const struct FMargin& Temp_struct_Variable, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4);
	void RefreshOverviewSlots();
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void Update_Active_Character(bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, bool CallFunc_IsCurrentPresetDirty_IsDirty, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnCharacterSelectionNext(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_NextActiveSwatMember_ReturnValue);
	void OnCharacterSelectionPrevious(class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, enum class EEquippingSwat CallFunc_PreviousActiveSwatMember_ReturnValue);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_OnActivated();
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_16_OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_20_OnClick__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_ArmorOverview_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UW_ArmorOverviewSlot_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_W_MunitionsSlot_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void SetLastHovered(class UWidget* Widget);
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_3_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_6_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature(class UW_LoadoutSlot_v2_C* TriggeringSlot);
	void OnInitialized();
	void BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Overview_V2_Primary_K2Node_ComponentBoundEvent_12_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_Secondary_K2Node_ComponentBoundEvent_13_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_0_OnCarouselNext__DelegateSignature();
	void BndEvt__W_Overview_V2_CharacterSelect_Dropdown_K2Node_ComponentBoundEvent_7_OnCarouselPrevious__DelegateSignature();
	void BP_OnDeactivated();
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_11_OnPresetSelected__DelegateSignature(const class FString& PresetName);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_14_OnSaveModifiedPresetClicked__DelegateSignature(const class FString& ModifiedPreset);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_15_OnSaveNewPresetClicked__DelegateSignature();
	void PresetModified(bool PresetDirty);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_17_OnDeletePresetClicked__DelegateSignature(const class FString& PresetName);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_18_OnDefaultPresetSelected__DelegateSignature();
	void PresetApplied(const class FString& Name, struct FSavedLoadout& Loadout);
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_22_OnPresetMenuClosed__DelegateSignature();
	void BndEvt__W_Overview_V2_LongTactical_K2Node_ComponentBoundEvent_23_OnUnhover__DelegateSignature();
	void BndEvt__W_Overview_V2_W_Loadout_PresetDropdown_K2Node_ComponentBoundEvent_26_OnLoadoutPresetHovered__DelegateSignature(const struct FSavedLoadout& SavedLoadout);
	void BndEvt__W_Overview_V2_PresetName_K2Node_ComponentBoundEvent_19_OnClick__DelegateSignature(class UW_SmallSlot_v2_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_33_OnClick__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot);
	void BndEvt__W_Overview_V2_btn_ArmorMunitions_K2Node_ComponentBoundEvent_21_Hovered__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_Overview_V2_W_HeadwearOverviewSlot_K2Node_ComponentBoundEvent_25_OnHover__DelegateSignature(class UW_HeadwearOverviewSlot_C* TriggeringSlot);
	void ExecuteUbergraph_W_Overview_V2(int32 EntryPoint, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ULoadoutSlot_V2* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_9, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_8, const struct FST_EquippingUnit& K2Node_ComponentBoundEvent_EquippingUnitInfo, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_7, class UW_ArmorOverviewSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot_6, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_4, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_2, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_3, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_5, class UWidget* K2Node_CustomEvent_Widget, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_4, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_5, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_4, class UW_LoadoutSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_3, class FText CallFunc_GetItemClassText_Category_Text, TArray<class ULoadoutSlot_V2*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_6, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_7, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_8, const class FString& K2Node_ComponentBoundEvent_PresetName_1, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_9, const class FString& K2Node_ComponentBoundEvent_ModifiedPreset, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_10, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_11, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal_1, bool K2Node_CustomEvent_PresetDirty, const class FString& K2Node_ComponentBoundEvent_PresetName, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_12, class UW_StandardModal_C* CallFunc_OpenPresetSaveModal_Preset_Modal_2, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue_1, const class FString& K2Node_CustomEvent_Name, const struct FSavedLoadout& K2Node_CustomEvent_Loadout, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_13, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_14, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_15, const struct FSavedLoadout& K2Node_ComponentBoundEvent_SavedLoadout, class UW_SmallSlot_v2_C* K2Node_ComponentBoundEvent_TriggeringSlot_2, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_16, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_5, class UW_Loadout_V2_C* CallFunc_GetLoadoutWidget_AsW_Loadout_V2_17, class UW_HeadwearOverviewSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot_1, TScriptInterface<class IReadyOrNotUI_C> CallFunc_ChangePage_self_CastInput_6, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_HeadwearOverviewSlot_C* K2Node_ComponentBoundEvent_TriggeringSlot);
	void CharacterChanged__DelegateSignature(const class FString& Name);
};

}


