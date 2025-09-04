#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x260 (0x6C0 - 0x460)
// WidgetBlueprintGeneratedClass W_ScreenFooter.W_ScreenFooter_C
class UW_ScreenFooter_C : public UPageFooter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x460(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Canvas;                                            // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Center;                                         // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_FooterEntries;                                  // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Left;                                           // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Right;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Fade;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FScreenFooterEntry>            FooterEntriesArray;                                // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnFooterEntryClicked;                              // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterEntryHovered;                              // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterEntryUnhovered;                            // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Spacing;                                           // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFooterEntriesUpdated;                            // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSet<int32>                                  HiddenIndices;                                     // 0x4F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class FString>                          HiddenIDs;                                         // 0x540(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECommonInputType                  NewVar_0;                                          // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_ScreenFooterEntry_C*>        EntryWidgets;                                      // 0x598(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWidget*                               FocusedEntry;                                      // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnFooterEntryPressed;                              // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFooterEntryReleased;                             // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class UW_ScreenFooterEntry_C*> IdToFooterEntry;                                   // 0x5D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSet<class FString>                          DisabledIDs;                                       // 0x620(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class FText>             EntryText;                                         // 0x670(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ScreenFooter_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, bool CallFunc_IsValid_ReturnValue);
	void BackPage(bool* Handled);
	void EnableEntryByID(const class FString& EntryID, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Set_Remove_ReturnValue);
	void DisableEntryByID(const class FString& EntryID, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ResetEntryTextByID(const class FString& EntryID, TArray<struct FDataTableRowHandle>& Temp_struct_Variable, bool CallFunc_Map_Remove_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetEntryTextByID(const class FString& EntryID, class FText NewText, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void InsertFooterEntryAtIndex();
	void SetFocusByID(const class FString& ID, class UWidget** FocusedEntryButton, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UW_ScreenFooterEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetFocusTarget_Focus, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetButtonID_ButtonID, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void UnhideEntryByIndex(int32& Index, bool CallFunc_Set_Remove_ReturnValue);
	void UnhideEntryByID(const class FString& ID, bool CallFunc_Set_Remove_ReturnValue);
	bool IsHiddenEntry(const class FString& EntryID, bool CallFunc_Set_Contains_ReturnValue);
	bool IsHiddenIndex(int32& Index, bool CallFunc_Set_Contains_ReturnValue);
	void HideEntryByIndex(int32 Index);
	void HideEntryByID(const class FString& ButtonId, bool CallFunc_Set_Contains_ReturnValue);
	void AddFooterEntry(int32 InsertAtIndex, class FString& EntryID, const struct FScreenFooterEntry& ScreenFooterEntry, const TArray<struct FScreenFooterEntry>& TempValues, const TArray<class FString>& TempKeys, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FScreenFooterEntry& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FScreenFooterEntry>& CallFunc_Map_Values_Values, TArray<class FString>& CallFunc_Map_Keys_Keys);
	void SetFooterEntries(TMap<class FString, struct FScreenFooterEntry> Footer_Entries);
	void PopulateEntries(const class FString& NewEntryID, class UW_ScreenFooterEntry_C* NewEntryWidget, int32 CenterCount, int32 RightCount, int32 LeftCount, const struct FScreenFooterEntry& NewEntryData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsHiddenIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UW_ScreenFooterEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_IsHiddenEntry_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FScreenFooterEntry& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Array_Get_Item_1, class UW_ScreenFooterEntry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FMargin& K2Node_MakeStruct_Margin, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_MakeStruct_Margin_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast_1, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast_1);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void FooterEntryClicked(class UW_ScreenFooterEntry_C* Entry);
	void FooterEntryHovered(class UW_ScreenFooterEntry_C* Entry);
	void FooterEntryUnhovered();
	void FooterEntryPressed(class UW_ScreenFooterEntry_C* Entry);
	void FooterEntryReleased(class UW_ScreenFooterEntry_C* Entry);
	void ExecuteUbergraph_W_ScreenFooter(int32 EntryPoint, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry_3, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry_2, class UW_ScreenFooterEntry_C* K2Node_CustomEvent_Entry_1);
	void OnFooterEntryReleased__DelegateSignature(class UW_ScreenFooterEntry_C* Entry);
	void OnFooterEntryPressed__DelegateSignature(class UW_ScreenFooterEntry_C* Entry);
	void OnFooterEntriesUpdated__DelegateSignature();
	void OnFooterEntryUnhovered__DelegateSignature();
	void OnFooterEntryHovered__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
	void OnFooterEntryClicked__DelegateSignature(class UW_ScreenFooterEntry_C* FooterEntry);
};

}


