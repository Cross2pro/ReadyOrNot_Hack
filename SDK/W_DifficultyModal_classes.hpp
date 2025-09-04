#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18C (0x644 - 0x4B8)
// WidgetBlueprintGeneratedClass W_DifficultyModal.W_DifficultyModal_C
class UW_DifficultyModal_C : public UStandardModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimDisplayWarningText;                            // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Cancel;                                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Crossplay;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Ok;                                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSizeBox;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CrossplaySettingBorder;                            // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CrossplaySettings;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DescriptionBox;                                    // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DifficultyOptionsList;                             // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DifficultySelect_C*                 HostingGameDifficultySelect;                       // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HostingJoiningSwitcher;                            // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_64;                                          // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              JoiningGameDifficultySelect;                       // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PreferredRegionsListText;                          // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RegionsTitle;                                      // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_Description;                                  // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_DescriptionBox;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_TextBlock;                               // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          SM_JoinGame;                                       // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ErrorWarning;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_103;                                   // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DifficultyModalEntry_C*             W_DifficultyModalEntry;                            // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DifficultyModalEntry_C*             W_DifficultyModalEntry_1;                          // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_DifficultyModalEntry_C*             W_DifficultyModalEntry_2;                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RegionSelect_C*                     W_RegionSelect;                                    // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOkClicked;                                       // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnApplyClicked;                                    // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ScrolledToBottom;                                  // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TextEntryModal;                                    // 0x5C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D6A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TextEntryLabel;                                    // 0x5C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TextEntryHint;                                     // 0x5E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TextEntryText;                                     // 0x5F8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsTextConfirm;                                     // 0x610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDescriptionBox;                                // 0x611(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D8C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextEntryMaxCharacters;                            // 0x614(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TextEntryMinCharacters;                            // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           FocusTarget;                                       // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHosting;                                        // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2DAF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  EnabledDifficulties;                               // 0x630(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bFriendsOnly;                                      // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ECrossplayOverride                Crossplay_Override;                                // 0x641(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasClickedOk;                                     // 0x642(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSettingRegions;                                   // 0x643(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_DifficultyModal_C* GetDefaultObj();

	void UpdatePageFooter(bool CallFunc_ShowFooter_IsPlaystation);
	void SetActiveWidgetsForCurrentState(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_DifficultyModalEntry_C* K2Node_DynamicCast_AsW_Difficulty_Modal_Entry, bool K2Node_DynamicCast_bSuccess);
	void ConfigureRegions(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void Update_Regions_Text_List(class FText PreferredRegionsText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_GetHostRegion_RegionTag, bool CallFunc_GetHostRegion_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_TextFromStringTable_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FGameplayTagContainer& CallFunc_GetPreferredRegions_RegionsTagContainer, bool CallFunc_GetPreferredRegions_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue_1, class FText CallFunc_TextFromStringTable_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Reconfigure(bool IsHosting, bool FriendsOnly, bool SettingRegions);
	bool BP_OnHandleBackAction();
	void ReconfigureButtons(bool ShowOkButton, bool ShowCancelButton, bool ShowApplyButton, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double CallFunc_VSize2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void Toggle_Crossplay_Button(bool CallFunc_GetSelected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool Should_Show_Crossplay_Toggle();
	void Set_Crossplay_Settings_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LoadCrossplayEnabled_bCrossplayEnabled, bool CallFunc_LoadCrossplayEnabled_ReturnValue, bool CallFunc_Should_Show_Crossplay_Toggle_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateHeaderText(class FText HeaderText);
	void UpdateSearchButtonActive(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class UWidget* Do_Custom_Navigation_Cancel_Down(enum class EUINavigation Navigation, bool CallFunc_IsInteractionEnabled_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(TArray<class UW_DifficultyModalEntry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, class UW_DifficultyModalEntry_C* CallFunc_Array_Get_Item);
	void Confirm(bool OkClicked, bool ApplyClicked, bool TextInputConfirm);
	void HideWarningText();
	void SetDescriptionText(class FText ModalDescription);
	void DisplayWarningText(class FText WarningText);
	bool Get_OkButton_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Destruct();
	void OnUserScrolled_Event_0(float CurrentOffset);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__W_StandardModal_btn_Ok_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_StandardModal_btn_Cancel_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_DifficultyModal_W_PageWrapper_K2Node_ComponentBoundEvent_0_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void PopulateDifficultyEntries();
	void OnButtonStateChanged(bool bEnabled, const struct FGameplayTag& EntryTag);
	void BndEvt__W_DifficultyModal_W_Button_K2Node_ComponentBoundEvent_2_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void OnRegionsCancel();
	void ExecuteUbergraph_W_DifficultyModal(int32 EntryPoint, class UW_DifficultyModalEntry_C* CallFunc_Create_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FGameplayTag>& CallFunc_GetOrderedDifficulties_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class ECrossplayOverride Temp_byte_Variable, enum class ECrossplayOverride Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_CustomEvent_CurrentOffset, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool Temp_bool_Has_Been_Initd_Variable, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_CustomEvent_bEnabled, const struct FGameplayTag& K2Node_CustomEvent_EntryTag, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_Selected, class FText K2Node_Select_Default, enum class ECrossplayOverride K2Node_Select_Default_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	void OnApplyClicked__DelegateSignature(class UW_DifficultyModal_C* CallingModal, class FText TextEntry);
	void OnOkClicked__DelegateSignature(class UW_DifficultyModal_C* CallingModal, enum class ECrossplayOverride Crossplay_Override);
};

}


