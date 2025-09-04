#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x4E1 - 0x410)
// WidgetBlueprintGeneratedClass W_RegionSelect.W_RegionSelect_C
class UW_RegionSelect_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_DifficultyModalEntry_C*             AllRegionsButton;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Cancel;                                        // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_InputActionButton_C*                btn_Ok;                                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSizeBox;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               DescriptionBox;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Header;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_64;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              JoiningGameRegionSelect;                           // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RegionOptionsList;                                 // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtxt_Description;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_DescriptionBox;                                 // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_TextBlock;                               // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SubMenu_C*                          SM_RegionSelect;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_ErrorWarning;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Title;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_103;                                   // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Wtf;                                               // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseGamepad;                                        // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 EnabledRegions;                                    // 0x4C0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsHosting;                                        // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_RegionSelect_C* GetDefaultObj();

	void UpdateWorldwideButtonState(int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void ApplySelectedRegions(bool CallFunc_SetHostRegion_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer, bool CallFunc_SetPreferredRegions_ReturnValue, bool CallFunc_SetPreferredRegions_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, bool CallFunc_Array_IsEmpty_ReturnValue_1, bool CallFunc_SetHostRegion_ReturnValue_1);
	void GetAllRegionButtons(TArray<class UW_DifficultyModalEntry_C*>* RegionButtons, const TArray<class UW_DifficultyModalEntry_C*>& ButtonArray, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UW_DifficultyModalEntry_C* K2Node_DynamicCast_AsW_Difficulty_Modal_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupTextAndRegions(bool bIsHosting, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InputMethodChanged(enum class ECommonInputType bNewInputType);
	void OnInputMethodChanged(bool UseGamepad);
	void PopulateSearchRegions();
	void BndEvt__W_RegionSelect_btn_Cancel_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RegionSelect_btn_Ok_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_RegionSelect_W_DifficultyModalEntry_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(bool bEnabled, const struct FGameplayTag& EntryTag);
	void OnRegionSelected(bool bEnabled, const struct FGameplayTag& EntryTag);
	void ExecuteUbergraph_W_RegionSelect(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_SetPreferredRegions_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_UseGamepad, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_TextFromStringTable_ReturnValue, bool K2Node_ComponentBoundEvent_bEnabled, const struct FGameplayTag& K2Node_ComponentBoundEvent_EntryTag, const struct FGameplayTagContainer& CallFunc_GetPreferredRegions_RegionsTagContainer, bool CallFunc_GetPreferredRegions_ReturnValue, const struct FGameplayTag& CallFunc_GetHostRegion_RegionTag, bool CallFunc_GetHostRegion_ReturnValue, bool CallFunc_HasTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool K2Node_CustomEvent_bEnabled, const struct FGameplayTag& K2Node_CustomEvent_EntryTag, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_RemoveGameplayTag_ReturnValue, TArray<class UW_DifficultyModalEntry_C*>& CallFunc_GetAllRegionButtons_RegionButtons, TArray<class UW_DifficultyModalEntry_C*>& CallFunc_GetAllRegionButtons_RegionButtons_1, class UW_DifficultyModalEntry_C* CallFunc_Array_Get_Item_1, class UW_DifficultyModalEntry_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_1, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags_2, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagChildrenAsContainer_OutTagContainer_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_DifficultyModalEntry_C* K2Node_DynamicCast_AsW_Difficulty_Modal_Entry, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_SetHostRegion_ReturnValue, class UW_DifficultyModalEntry_C* CallFunc_Create_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void Wtf__DelegateSignature();
	void OnCancel__DelegateSignature();
};

}


