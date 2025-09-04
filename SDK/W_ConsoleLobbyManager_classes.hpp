#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x510 - 0x410)
// WidgetBlueprintGeneratedClass W_ConsoleLobbyManager.W_ConsoleLobbyManager_C
class UW_ConsoleLobbyManager_C : public UConsoleLobbyManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Blackout;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      CommonActivatableWidgetSwitcher_0;                 // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      LobbyManagerPageSwitcher;                          // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PlayersList_C*                      PlayersList;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BlockList_C*                        W_BlockList;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SocialSettings_C*                   W_SocialSettings;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLobbyPlayer                          PlayerToKick;                                      // 0x450(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class FText>               HeaderMap;                                         // 0x4C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_ConsoleLobbyManager_C* GetDefaultObj();

	void Set_EOS_Button_Visibility(class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsAccountLinked_ReturnValue);
	void OnlyShowBlockList();
	void OpenBlockList(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenSocialSettings(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void OpenLobbyList(class FName CallFunc_GetCurrentNavSelection_SelectedNavOption, bool CallFunc_NotEqual_NameName_ReturnValue);
	void Initialise_Kick_Popup(const struct FLobbyPlayer& Player_Name, class UW_StandardModal_C** OutputPopUp, class FText Temp_text_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void IsMuteButtonVisible(const struct FLobbyPlayer& Player, bool* MuteButtonIsVisible, bool* UnMuteButtonIsVisible, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_GetMutedState_ReturnValue, const class FString& CallFunc_GetUniqueNetIDString_OutString, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void IsKickButtonVisible(const struct FLobbyPlayer& Player, bool* KickButtonIsVisible, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetUniqueNetIDString_OutString, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	class UWidget* BP_GetDesiredFocusTarget();
	void BP_OnActivated();
	void FocusedPlayerChanged();
	void FooterButtonClicked(const class FString& ButtonId);
	void Cancel_kick(class UStandardModal* CallingModal);
	void Kick(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_0_OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
	void Construct();
	void PlayerBlocked();
	void BndEvt__W_ConsoleLobbyManager_PageWrapper_K2Node_ComponentBoundEvent_1_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void ExecuteUbergraph_W_ConsoleLobbyManager(int32 EntryPoint, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& K2Node_CustomEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class UW_StandardModal_C* CallFunc_Initialise_Kick_Popup_OutputPopUp, bool CallFunc_ShowProfileUI_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal_1, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess_1);
};

}


