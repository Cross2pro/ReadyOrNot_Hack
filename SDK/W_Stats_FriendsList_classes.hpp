#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCA (0x58A - 0x4C0)
// WidgetBlueprintGeneratedClass W_Stats_FriendsList.W_Stats_FriendsList_C
class UW_Stats_FriendsList_C : public UFriendsList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimLoading;                                       // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_Loading;                                       // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Loader;                                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            Scroll_Friends;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FriendsListUpdate;                                 // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       LastScrolloffset;                                  // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class UW_Stats_FriendsList_Entry_C*> FriendEntries;                                     // 0x508(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            FriendSelected;                                    // 0x558(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Is_Design_Time;                                    // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3284[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EntrySpacing;                                      // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMode;                                         // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGamepad;                                        // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ListInitialized;                                   // 0x57A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3288[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Stats_FriendsList_Entry_C*          CurrentFocus;                                      // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ListOpen;                                          // 0x588(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Loading;                                           // 0x589(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Stats_FriendsList_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus, TArray<class UW_Stats_FriendsList_Entry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UW_Stats_FriendsList_Entry_C* CallFunc_Array_Get_Item);
	void BackPage(bool* Handled);
	void SequenceEvent__ENTRYPOINTW_Stats_FriendsList();
	void LoadingCheck();
	void CreateDebugFriends(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FFriend& K2Node_MakeStruct_Friend, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	class UWidget* DoListNavigation(enum class EUINavigation Navigation, int32 CurrentIndex, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, class UW_Stats_FriendsList_Entry_C* K2Node_DynamicCast_AsW_Stats_Friends_List_Entry, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess);
	void OnListPopulated(class UWidget* CallFunc_GetFocusTarget_Focus);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	void CreateEntryButton(class UW_Stats_FriendsList_Entry_C** NewEntry, class UW_Stats_FriendsList_Entry_C* Entry, class UW_Stats_FriendsList_Entry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void PopulateFriendsList(const struct FFriend& Friend, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Stats_FriendsList_Entry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Stats_FriendsList_Entry_C* CallFunc_CreateEntryButton_NewEntry, int32 CallFunc_GetNumberOfFriends_Count, const struct FFriend& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void DoesFriendExistAlready(const struct FFriend& TestFriend, bool* Exists_, int32* Idx, bool FriendExist_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_FriendsList_Entry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_FriendsList_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void GetNumberOfFriends(int32* Count, int32 CallFunc_Map_Length_ReturnValue);
	void RemoveNonExistentFriendWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_FriendsList_Entry_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_FriendsList_Entry_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void OnFailure_Event_0();
	void BP_OnActivated();
	void OnSuccess_Event_0();
	void OnEntryClicked(class UCommonButtonBase* Button);
	void OnInitialized();
	void InputTypeChanged(enum class ECommonInputType bNewInputType);
	void Construct();
	void ExecuteUbergraph_W_Stats_FriendsList(int32 EntryPoint, bool CallFunc_IsSinglePlayer_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, float CallFunc_GetScrollOffset_ReturnValue, class UCommonButtonBase* K2Node_CustomEvent_Button, class UW_Stats_FriendsList_Entry_C* K2Node_DynamicCast_AsW_Stats_Friends_List_Entry, bool K2Node_DynamicCast_bSuccess, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_VariableSet_LastScrolloffset_ImplicitCast);
	void FriendSelected__DelegateSignature(const struct FFriend& Friend);
	void FriendsListUpdate__DelegateSignature(int32 NumberOfFriends);
};

}


