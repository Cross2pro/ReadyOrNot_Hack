#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B9 (0x479 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Loadout_UnitSelect.W_Loadout_UnitSelect_C
class UW_Loadout_UnitSelect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimDropdown;                                      // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Expand;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Carousel_C*                         CarouselSelect;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           DropdownAnchor;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          DropdownItemsMenu;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          DropdownMenu;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Arrow;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Selection;                                     // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_UnitOptions;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WidgetSwitcher_283;                                // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         SoloLobby;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1991[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEquippingUnitSelected;                           // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DropdownOpen;                                      // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FST_EquippingUnit>             AllUnitInfo;                                       // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UObject*, int32>                  CurrentSelectedItem;                               // 0x358(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                UnitID;                                            // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class EEquippingSwat                    EquippingSwat;                                     // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          EquippingPlayerState;                              // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FST_EquippingUnit                     CurrentUnitInfo;                                   // 0x3C8(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UW_Loadout_UnitSelect_Option_C*        CurrentSelection;                                  // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialized;                                       // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPDA_UI_Styleguide_C*                  StyleGuide;                                        // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCarouselNext;                                    // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCarouselPrevious;                                // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseGamepad;                                        // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UW_Loadout_UnitSelect_Option_C*> DropdownEntries;                                   // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bListenPaused;                                     // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Loadout_UnitSelect_C* GetDefaultObj();

	void BackPage(bool* Handled);
	void GetFocusTarget(class UWidget** Focus);
	void UpdateSelectedUnit(class UW_Loadout_UnitSelect_Option_C* DropdownOptionWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, TArray<class UW_Loadout_UnitSelect_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_Loadout_UnitSelect_C* CallFunc_Array_Get_Item, const class FString& CallFunc_GetActiveSwatMemberLabel_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ResumeInputListen();
	void PauseInputListen();
	void GetTextByEquippingSWAT(enum class EEquippingSwat EquippingSwat, class FText* Text, enum class EEquippingSwat Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default);
	void BuildCommanderSquadList(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetSelectionByID(const class FString& SelectionID, class UW_Loadout_UnitSelect_Option_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateSelection(class UW_Loadout_UnitSelect_Option_C* DropdownOptionWidget, bool CallFunc_IsValid_ReturnValue);
	void UpdateCarouselStyle(class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLinearColor& CallFunc_GetTeamColorByEquippingSwatEnum_LinearColor, const struct FSlateColor& CallFunc_GetTeamColorByEquippingSwatEnum_SlateColor, const struct FLinearColor& K2Node_SetFieldsInStruct_StructOut, const struct FLinearColor& K2Node_SetFieldsInStruct_StructOut_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void CreateCarouselOption(const struct FST_EquippingUnit& CurrentUnitInfo, class FName OptionNameID, class FText LabelText, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText K2Node_Select_Default, enum class EEquippingSwat Temp_byte_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default_1);
	void Label_for_Equipping_Unit(const struct FST_EquippingUnit& Equipping_Unit, class FText* Label, struct FLinearColor* Color, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InputMethodChanged(enum class ECommonInputType InputType, enum class ECommonInputType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 K2Node_Select_Default);
	void SetSelectionByIndex(int32 Index, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, class UW_Loadout_UnitSelect_Option_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Close(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void Open(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void BuildPlayerUnitList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotPlayerState* K2Node_DynamicCast_AsReady_or_Not_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FST_EquippingUnit& K2Node_MakeStruct_ST_EquippingUnit, int32 CallFunc_Array_AddUnique_ReturnValue);
	void PopulateList(const struct FST_EquippingUnit& NewUnitInfo, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, class UW_Loadout_UnitSelect_Option_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FST_EquippingUnit& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetNameText(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_GetBlueTeamColor_BlueTeam, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FLinearColor& CallFunc_GetRedTeamColor_RedTeam, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BuildSoloUnitList(bool bFirstIndex, bool Temp_bool_Variable, class AReadyOrNotPlayerState* Temp_object_Variable, int32 Temp_int_Variable, enum class EEquippingSwat Temp_byte_Variable, enum class EEquippingSwat Temp_byte_Variable_1, enum class EEquippingSwat Temp_byte_Variable_2, enum class EEquippingSwat Temp_byte_Variable_3, enum class EEquippingSwat Temp_byte_Variable_4, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EEquippingSwat K2Node_Select_Default, class FText CallFunc_GetTextByEquippingSWAT_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UWorld* CallFunc_GetWorldBP_ReturnValue, class AReadyOrNotPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class AReadyOrNotPlayerState* K2Node_Select_Default_1, const struct FST_EquippingUnit& K2Node_MakeStruct_ST_EquippingUnit, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void UpdateActiveLoadout(const struct FSavedLoadout& ActiveLoadout);
	void UpdateCurrentItemMap(TMap<enum class EItemCategory, class UClass*> ItemCategory);
	void HeaderSubpageNavigation(class FName OptionNameID);
	void OptionSelected(class UW_Loadout_UnitSelect_Option_C* TriggeringButton);
	void BndEvt__W_Loadout_UnitSelect_btn_Expand_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UW_Button_C* Button);
	void Initialize();
	void Construct();
	void OnInputMethodChanged(bool UseGamepad);
	void BndEvt__W_Loadout_UnitSelect_DropdownItemsMenu_K2Node_ComponentBoundEvent_1_HandleBackPress__DelegateSignature();
	void OnInitialized();
	void BndEvt__W_Loadout_UnitSelect_CarouselSelect_K2Node_ComponentBoundEvent_2_OnPreviousHandled__DelegateSignature(class FName OptionID);
	void BndEvt__W_Loadout_UnitSelect_CarouselSelect_K2Node_ComponentBoundEvent_3_OnNextHandled__DelegateSignature(class FName OptionID);
	void Reveal(double Delay);
	void ExecuteUbergraph_W_Loadout_UnitSelect(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, const struct FSavedLoadout& K2Node_Event_ActiveLoadout, TMap<enum class EItemCategory, class UClass*> K2Node_Event_ItemCategory, class FName K2Node_Event_OptionNameID, class UW_Loadout_UnitSelect_Option_C* K2Node_CustomEvent_TriggeringButton, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_CustomEvent_UseGamepad, class FName K2Node_ComponentBoundEvent_OptionID_1, class FName K2Node_ComponentBoundEvent_OptionID, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, double K2Node_Event_Delay, bool CallFunc_IsMultiplayer_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UW_Loadout_UnitSelect_Option_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UW_Loadout_UnitSelect_Option_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void OnCarouselPrevious__DelegateSignature();
	void OnCarouselNext__DelegateSignature();
	void OnEquippingUnitSelected__DelegateSignature(const struct FST_EquippingUnit& EquippingUnitInfo);
};

}


