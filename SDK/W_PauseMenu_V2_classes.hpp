#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x548 - 0x410)
// WidgetBlueprintGeneratedClass W_PauseMenu_V2.W_PauseMenu_V2_C
class UW_PauseMenu_V2_C : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               AdminPasswordBox;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_ConfirmAdminPassword;                          // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ButtonDescription;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_0;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              EscapeMenu;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   LobbyManagerButton;                                // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ObjectivesBox;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PublicLobbyWarning;                                // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   QuitButton;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   RestartButton;                                     // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   ResumeButton;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   SettingsButton;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   StationButton;                                     // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonFMOD_C*                   StatsButton;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_SafeMode;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Text_C*                             Txt_Version;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Briefing_Objectives_C*              W_Briefing_Objectives;                             // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      W_PageWrapper;                                     // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         WasShowingMouse;                                   // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2AD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SettingsMenu;                                      // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallVoteMenu;                                      // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ResumeClicked;                                     // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LobbyManagerClicked;                               // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SettingsClicked;                                   // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RestartClicked;                                    // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            InviteFriendsClicked;                              // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LobbyClicked;                                      // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            QuitToDesktopClicked;                              // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UW_StandardModal_C*                    ActiveModalWidget;                                 // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            StatsClicked;                                      // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_PauseMenu_V2_C* GetDefaultObj();

	void Set_EOS_Button_Visibility(class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsAccountLinked_ReturnValue);
	void QuitMission(bool bSaveReplay, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ABP_ExfilPortal_C* CallFunc_GetActorOfClass_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_1);
	void ClearModal(bool CallFunc_IsValid_ReturnValue);
	void Initialize_Exit_Query_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class UW_StandardModal_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, const struct FVector2D& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default);
	void IsInReplay(bool* InReplay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess);
	void IsInCommander(bool* InCommander, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess);
	void IsInTraining(bool* InTraining, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ATrainingGM* K2Node_DynamicCast_AsTraining_GM, bool K2Node_DynamicCast_bSuccess);
	void ExitToMainMenu(bool CallFunc_SetPublicLobbyCooldown_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class ULevelStreaming* CallFunc_StreamInLevel_OutStreamedLevel, bool CallFunc_StreamInLevel_ReturnValue);
	void Initialize_Exit_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, const struct FVector2D& Temp_struct_Variable, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UW_StandardModal_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable_8, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_IsConsole_ReturnValue, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, class FText Temp_text_Variable_9, class UW_StandardModal_C* CallFunc_Create_ReturnValue_1);
	void Initialize_ReturnToLobby_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void Initialize_Restart_Modal(class UW_StandardModal_C** OutPopup, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UW_StandardModal_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable);
	void ShouldShowStationButton(bool* Show, bool CallFunc_StaticGetIsDone_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2);
	void ShouldShowQuitToDesktopButton(bool* Show, enum class ERuntimeDevice CallFunc_GetRuntimeDeviceProfile_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ShouldShowRestartButton(bool* Show, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsInReplay_InReplay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInCommander_InCommander, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1);
	void ShouldShowLobbyManagerButton(bool* Show, bool CallFunc_IsInReplay_InReplay, bool CallFunc_IsMultiplayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	bool BP_OnHandleBackAction();
	enum class ESlateVisibility GetMissionBoxVisibility(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ACoopGS* K2Node_DynamicCast_AsCoop_GS, bool K2Node_DynamicCast_bSuccess);
	enum class ESlateVisibility Get_HorizontalBox_25_Visibility_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	class FText Get_Version_Text_0(const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__W_PauseMenu_V2_LobbyManagerButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BndEvt__W_PauseMenu_V2_SettingsButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_ResumeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_QuitButton_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_LobbyButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_RestartButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Yes_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Yes_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Cancel_Modal(class UStandardModal* CallingModal);
	void Exit_to_Main_Menu(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Exit_to_Desktop(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_Restart(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_ReturnToLobby(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Yes_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void No_Exit(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Cancel_Exit(class UStandardModal* CallingModal);
	void GamepadMainMenuCancel(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void GamePadMainMenuExit(class UW_StandardModal_C* CallingModal, class FText TextEntry);
	void Destruct();
	void BndEvt__W_PauseMenu_V2_StatsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__W_PauseMenu_V2_W_PageWrapper_K2Node_ComponentBoundEvent_3_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void ExecuteUbergraph_W_PauseMenu_V2(int32 EntryPoint, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, bool CallFunc_IsPublicMissionInProgress_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_ShouldShowLobbyManagerButton_Show, bool CallFunc_ShouldShowQuitToDesktopButton_Show, bool CallFunc_ShouldShowRestartButton_Show, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_ShouldShowStationButton_Show, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Restart_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_11, class FText K2Node_CustomEvent_TextEntry_9, class UW_StandardModal_C* CallFunc_Initialize_ReturnToLobby_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_10, class FText K2Node_CustomEvent_TextEntry_8, class UStandardModal* K2Node_CustomEvent_CallingModal_9, class UW_StandardModal_C* CallFunc_Initialize_Exit_Modal_OutPopup, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_8, class FText K2Node_CustomEvent_TextEntry_7, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_7, class FText K2Node_CustomEvent_TextEntry_6, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_6, class FText K2Node_CustomEvent_TextEntry_5, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_5, class FText K2Node_CustomEvent_TextEntry_4, class UReadyOrNotGameInstance* CallFunc_GetRONGameInstance_ReturnValue, bool CallFunc_IsSafeMode_ReturnValue, class UW_StandardModal_C* CallFunc_Initialize_Exit_Query_Modal_OutPopup, bool CallFunc_IsLobby_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_4, class FText K2Node_CustomEvent_TextEntry_3, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_3, class FText K2Node_CustomEvent_TextEntry_2, bool CallFunc_IsMultiplayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UStandardModal* K2Node_CustomEvent_CallingModal_2, bool CallFunc_IsConsole_ReturnValue, const class FString& CallFunc_GetProjectVersion_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal_1, class FText K2Node_CustomEvent_TextEntry_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess);
	void StatsClicked__DelegateSignature();
	void QuitToDesktopClicked__DelegateSignature();
	void LobbyClicked__DelegateSignature();
	void InviteFriendsClicked__DelegateSignature();
	void RestartClicked__DelegateSignature();
	void SettingsClicked__DelegateSignature();
	void LobbyManagerClicked__DelegateSignature();
	void ResumeClicked__DelegateSignature();
};

}


