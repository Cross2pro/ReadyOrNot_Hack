#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC9 (0x4E9 - 0x420)
// WidgetBlueprintGeneratedClass W_Roster_Status.W_Roster_Status_C
class UW_Roster_Status_C : public UCharacterStatusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_InputActionButton_C*                btn_ChangeTeam_Gamepad;                            // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButton_C*                       btn_ChangeTeam_MKB;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ClosePage_1;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CharacterList;                                     // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_Characters;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_Close_1;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_div_header_1;                                  // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PlayerCount;                                       // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            PlayerScrollBox;                                   // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              PlayerWrapBox;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_RosterSelf_Card_C*                  SelfCard;                                          // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_HeaderTitle_1;                                 // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayerCount;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Status;                                         // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TeamList;                                       // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Status_Card_C*               W_Roster_Status_Card;                              // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Status_Card_C*               W_Roster_Status_Card_1;                            // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Status_Card_C*               W_Roster_Status_Card_83;                           // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_Status_Card_C*               W_Roster_Status_Card_158;                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_PlayerStatus_Card_C*         W_RosterPlayer_1;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_PlayerStatus_Card_C*         W_RosterPlayer_2;                                  // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_PlayerStatus_Card_C*         W_RosterPlayer_3;                                  // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_PlayerStatus_Card_C*         W_RosterPlayer_4;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Roster_PlayerStatus_Card_C*         W_RosterPlayer_Card_1;                             // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bMultiplayer;                                      // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Roster_Status_C* GetDefaultObj();

	void GetSwatCardWidgetBySlotIndex(int32 Index, class UW_Roster_Status_Card_C** CardWidget, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRosterCardClicked(class UW_Roster_PlayerStatus_Card_C* Card, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, bool CallFunc_IsLobby_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCardWidgetBySlotIndex(int32 Index, class UW_Roster_PlayerStatus_Card_C** CardWidget, bool K2Node_SwitchInteger_CmpSuccess);
	void InitializePlayerProxyCard(class UCharacterProxy* CharacterProxy, class UW_Roster_PlayerStatus_Card_C* CharacterCard, class UW_Roster_PlayerStatus_Card_C* NewCard, bool CallFunc_GetIsSelfHost_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ClearCards(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_Roster_PlayerStatus_Card_C*>& CallFunc_WidgetGetChildrenOfClass_ChildWidgets, int32 CallFunc_Array_Length_ReturnValue, class UW_Roster_PlayerStatus_Card_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void CreateBlankPlayerCard(class UW_Roster_PlayerStatus_Card_C* NewCard, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetIsSelfHost_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void SetPlayerCount(int32 PlayerCount, int32 Total, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CreatePlayerProxyCard(class UCharacterProxy* CharacterProxy, class UW_Roster_PlayerStatus_Card_C* NewCard, class UW_Roster_PlayerStatus_Card_C* CallFunc_Create_ReturnValue, bool CallFunc_GetIsSelfHost_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CreateCharacterProxyCard(class UCharacterProxy* CharacterProxy, bool IsLast, class UW_Roster_Status_Card_C* NewCard, class UW_Roster_Status_Card_C* CallFunc_Create_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_MakeStruct_Right_ImplicitCast);
	void PopulatePlayersByProxy(class UW_Roster_PlayerStatus_Card_C* NewCard, int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers);
	void IsProxySelf(class UCharacterProxy* Proxy, bool* IsSelf, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class FText CallFunc_GetName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void IsPlayerSelf(class APlayerState* PlayerState, bool* IsSelf, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void PopulatePlayers(class UW_Roster_PlayerStatus_Card_C* NewCard, int32 Count, class APlayerState* PlayerToAdd, const TArray<class APlayerState*>& NewPlayers);
	void PopulateTeam(int32 WidgetIndex, int32 CurrentIndex, const TArray<class UCharacterProxy*>& ProxyArray, int32 LastIndex, class UW_Roster_Status_Card_C* NewCard, int32 Count, class UCharacterProxy* NewProxy, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Roster_Status_Card_C* CallFunc_GetSwatCardWidgetBySlotIndex_CardWidget, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, class UW_Roster_PlayerStatus_Card_C* CallFunc_GetCardWidgetBySlotIndex_CardWidget, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLocalPlayer_ReturnValue, int32 Temp_int_Variable_1, TArray<class UCharacterProxy*>& CallFunc_GetCharacterProxies_ReturnValue, class UCharacterProxy* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UCharacterProxy*>& CallFunc_GetCharacterProxies_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, int32 Temp_int_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, int32 Temp_int_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2);
	bool GetIsSelfHost(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotGameState* K2Node_DynamicCast_AsReady_or_Not_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAdminPlayerController_ReturnValue);
	void SetVisualTheme(bool UseDarkTheme);
	void AudioPlayerVisible(class UW_AudioPlayer_C* PlayerWidget, bool PlayerVisible);
	void Construct();
	void UpdateTeamList(bool bForce);
	void PlayerCardClicked(class UW_Roster_PlayerStatus_Card_C* Card);
	void EmptyPlayerCardClicked(class UW_Roster_PlayerStatus_Card_C* Card);
	void CharacterCardClicked(class UW_Roster_Status_Card_C* Card);
	void BP_OnActivated();
	void OnCharacterAdded(class UCharacterProxy* CharacterProxy);
	void OnCharacterRemoved(class UCharacterProxy* CharacterProxy);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetTabletState(bool IsAwake);
	void BndEvt__W_Roster_Status_btn_ChangeTeam_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_Roster_Status_W_RosterPlayer_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card);
	void BndEvt__W_Roster_Status_W_RosterPlayer_2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card);
	void BndEvt__W_Roster_Status_W_RosterPlayer_3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card);
	void BndEvt__W_Roster_Status_W_RosterPlayer_4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UW_Roster_PlayerStatus_Card_C* Card);
	void BndEvt__W_Roster_Status_btn_ChangeTeam_Gamepad_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Input_Changed(enum class ECommonInputType NewParam);
	void ExecuteUbergraph_W_Roster_Status(int32 EntryPoint, bool CallFunc_IsRefreshNeeded_ReturnValue, bool K2Node_Event_UseDarkTheme, class UW_AudioPlayer_C* K2Node_Event_PlayerWidget, bool K2Node_Event_PlayerVisible, bool K2Node_CustomEvent_bForce, class UW_Roster_PlayerStatus_Card_C* K2Node_CustomEvent_Card_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetId_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_CustomEvent_Card_1, bool CallFunc_IsValidBPUniqueNetID_ReturnValue, const class FString& CallFunc_BPUniqueNetIDToString_ReturnValue, bool CallFunc_ShowProfileUI_ReturnValue, class UW_Roster_Status_Card_C* K2Node_CustomEvent_Card, class UCharacterProxy* K2Node_Event_CharacterProxy_1, class UCharacterProxy* K2Node_Event_CharacterProxy, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsAwake, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_CanSwapTeams_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_Roster_C> K2Node_DynamicCast_AsBPI_Roster, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsStandalone_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_3, bool CallFunc_Not_PreBool_ReturnValue, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_2, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card_1, class UW_Roster_PlayerStatus_Card_C* K2Node_ComponentBoundEvent_Card, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValidUniqueNetID_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_NewParam, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue);
};

}


