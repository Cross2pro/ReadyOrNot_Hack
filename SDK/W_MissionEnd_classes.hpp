#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x250 (0x660 - 0x410)
// WidgetBlueprintGeneratedClass W_MissionEnd.W_MissionEnd_C
class UW_MissionEnd_C : public UMissionEnd
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Button_C*                           btn_Debrief;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                           btn_Score;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_PageNav;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_PageWrapper_C*                      PageWrapper;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_MissionScore_C*                     W_MissionScore;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActivatableWidgetSwitcher*      WidgetSwitcher;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  MissionName;                                       // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       DebriefRevealDelay;                                // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewingDebrief;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         DebriefEnabled;                                    // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2FE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_RosterReview_C*                     DebriefWidget;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UW_MissionScore_C*                     ScoreWidget;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FScreenFooterEntry                    QuitFooterEntry;                                   // 0x480(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    RestartFooterEntry;                                // 0x4F8(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    StationFooterEntry;                                // 0x570(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScreenFooterEntry                    CreditsFooterEntry;                                // 0x5E8(0x78)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_MissionEnd_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void Hide_Footer_Options();
	void Show_Footer_Options(bool CallFunc_ShowQuitButton_ReturnValue, bool CallFunc_ShowReturnButton_ReturnValue, bool CallFunc_ShowRestartButton_ReturnValue, bool CallFunc_ShowCreditsButton_Show);
	void AddFooterOptions(TMap<class FString, struct FScreenFooterEntry> FooterEntries, const TArray<struct FScreenFooterEntry>& FooterEntriesArray, bool CallFunc_ShowCreditsButton_Show, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, bool CallFunc_ShowReturnButton_ReturnValue, bool CallFunc_ShowQuitButton_ReturnValue, bool CallFunc_ShowRestartButton_ReturnValue);
	bool ShowQuitButton(bool CallFunc_IsCommanderMode_ReturnValue);
	void SetupNavigation();
	bool BP_OnHandleBackAction();
	void OpenScorePage();
	void OpenDebriefPage(bool CallFunc_IsValid_ReturnValue);
	void UpdateActiveNavButton();
	enum class ESlateVisibility GetScoreButtonVisibility();
	enum class ESlateVisibility GetDebriefButtonVisibility(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetFocusTarget_Focus);
	bool ShowReturnButton(bool CallFunc_IsCommanderMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	bool ShowRestartButton(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue);
	void ShowCreditsButton(bool* Show, class UWorld* CallFunc_GetWorldStatic_ReturnValue, class AScoringManager* CallFunc_Get_ReturnValue, const class FString& CallFunc_GetCurrentLevelNameForLookupTable_ReturnValue, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesComplete, int32 CallFunc_GetObjectiveCompletionStatus_ObjectivesFailed, int32 CallFunc_GetObjectiveCompletionStatus_TotalObjectives, bool CallFunc_StartsWith_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnInitialized();
	void BP_OnActivated();
	void BndEvt__W_MissionEnd_btn_Debrief_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UW_Button_C* Button);
	void BndEvt__W_MissionEnd_btn_Score_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UW_Button_C* Button);
	void EnableDebrief();
	void BndEvt__W_MissionEnd_W_MissionScore_K2Node_ComponentBoundEvent_5_OnScoringComplete__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ChangePage(class FName PageName);
	void SetInputMode(bool IsGamepad);
	void Hide(double Delay, bool Collapse);
	void Reveal(double Delay);
	void BndEvt__W_MissionEnd_W_PageHeader_K2Node_ComponentBoundEvent_6_OnNavOptionSelected__DelegateSignature(class FName OptionNameID);
	void QuitToMenu();
	void BndEvt__W_MissionEnd_PageWrapper_K2Node_ComponentBoundEvent_7_OnFooterButtonClicked__DelegateSignature(const class FString& ButtonId);
	void RestartMission();
	void ReturnToStation();
	void OnCreditsEnd();
	void OnCreditsClicked();
	void ExecuteUbergraph_W_MissionEnd(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ACoopGM* K2Node_DynamicCast_AsCoop_GM, bool K2Node_DynamicCast_bSuccess, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsCommanderMode_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, class UW_RosterReview_C* CallFunc_Create_ReturnValue, bool CallFunc_IsCommanderMode_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_PageName, bool K2Node_Event_IsGamepad, double K2Node_Event_Delay_1, bool K2Node_Event_Collapse, double K2Node_Event_Delay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReadyOrNotPlayerController* K2Node_DynamicCast_AsReady_or_Not_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ACommanderGM* K2Node_DynamicCast_AsCommander_GM, bool K2Node_DynamicCast_bSuccess_2, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_2, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWidget* CallFunc_GetFocusTarget_Focus, class FName K2Node_ComponentBoundEvent_OptionNameID, bool K2Node_SwitchName_CmpSuccess, const class FString& K2Node_ComponentBoundEvent_ButtonID, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_Credits_C* CallFunc_Create_ReturnValue_1, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FLevelDataLookupTable& CallFunc_GetLevelData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


