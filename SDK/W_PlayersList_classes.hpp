#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x529 - 0x470)
// WidgetBlueprintGeneratedClass W_PlayersList.W_PlayersList_C
class UW_PlayersList_C : public UPlayersList
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_168;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           InviteButton;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       LastScrolloffset;                                  // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLobbyPlayer                          HoveredPlayer;                                     // 0x498(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            FocusedPlayerCallback;                             // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            PlayerBlockedCallback;                             // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HoveredInvite;                                     // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PlayersList_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(struct FLobbyPlayer& Player);
	bool Lobby_Is_Full(int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RefreshPlayerEntry(const struct FLobbyPlayer& Player, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UW_PlayersList_Entry_C* K2Node_DynamicCast_AsW_Players_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue);
	void Ban_Player(const struct FLobbyPlayer& Lobby_Player, class APlayerState* CallFunc_GetPlayerStateFromUniqueId_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLobbyPlayer& Temp_struct_Variable, bool CallFunc_Array_RemoveItem_ReturnValue);
	void UpdatePlayersList();
	void Create_Player_Item(class APlayerController* OwningPlayer, const struct FLobbyPlayer& Player, class UW_PlayersList_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Toggle_Mute_Player(const struct FLobbyPlayer& LobbyPlayer, class UW_PlayersList_Entry_C* EntryRef, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CanChangeMutedState_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FLobbyPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void KickPlayer(const struct FLobbyPlayer& LobbyPlayer, class APlayerState* CallFunc_GetPlayerStateFromUniqueId_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_PlayersList_Entry_C* K2Node_DynamicCast_AsW_Players_List_Entry, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void OnSuccess_Event_0();
	void OnFailure_Event_0();
	void PreConstruct(bool IsDesignTime);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMuteStateDelegate_Event_0();
	void BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_PlayersList_W_Button_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(class UW_Button_C* Button);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BP_OnActivated();
	void BndEvt__W_PlayersList_InviteButton_K2Node_ComponentBoundEvent_0_Unhovered__DelegateSignature();
	void ExecuteUbergraph_W_PlayersList(int32 EntryPoint, bool CallFunc_Lobby_Is_Full_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLobbyPlayer& K2Node_MakeStruct_LobbyPlayer, const struct FLobbyPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void PlayerBlockedCallback__DelegateSignature();
	void FocusedPlayerCallback__DelegateSignature();
};

}


