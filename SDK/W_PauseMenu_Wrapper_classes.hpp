#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// WidgetBlueprintGeneratedClass W_PauseMenu_Wrapper.W_PauseMenu_Wrapper_C
class UW_PauseMenu_Wrapper_C : public UPauseMenu_Wrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_PauseMenu_Wrapper_C* GetDefaultObj();

	void IsPauseMenuOnTop(bool* bPauseMenuOnTop, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UClass* CallFunc_GetClassFromObject_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void Destruct();
	void Construct();
	void ResumeClicked();
	void OnLobbyManagerClicked();
	void SettingsClicked();
	void RestartClicked();
	void InviteFriendsClicked();
	void LobbyClicked();
	void QuitToDesktopClicked();
	void OnStatsClicked();
	void ExecuteUbergraph_W_PauseMenu_Wrapper(int32 EntryPoint, bool CallFunc_ShowFriendsUIForInvitation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UW_ConsoleLobbyManager_C* CallFunc_BP_AddWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UW_Options_UE5_C* CallFunc_BP_AddWidget_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UCommonActivatableWidget* CallFunc_GetActiveWidget_ReturnValue, class UW_PauseMenu_V2_C* K2Node_DynamicCast_AsW_Pause_Menu_V2, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, class UReadyOrNotGameInstance* CallFunc_GetReadyOrNotGameInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ATrainingGM* K2Node_DynamicCast_AsTraining_GM, bool K2Node_DynamicCast_bSuccess_3, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UW_Stats_C* CallFunc_BP_AddWidget_ReturnValue_2, bool CallFunc_IsPauseMenuOnTop_bPauseMenuOnTop, bool CallFunc_IsPauseMenuOnTop_bPauseMenuOnTop_1, bool CallFunc_IsPauseMenuOnTop_bPauseMenuOnTop_2);
};

}


