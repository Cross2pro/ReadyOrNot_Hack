#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0xE09 - 0xDD0)
// BlueprintGeneratedClass BP_ReplayController.BP_ReplayController_C
class ABP_ReplayController_C : public AReplayController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bRemoveReplayControls;                             // 0xDD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSetInitialPosition;                               // 0xDD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSprintHeld;                                       // 0xDDA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCrouchHeld;                                       // 0xDDB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFollowLocalPlayer;                                // 0xDDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1988[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AReadyOrNotCharacter*                  LocalPlayer;                                       // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaSeconds;                                      // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABaseItem*>                     IgnoredActors;                                     // 0xDF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         MouseRightPressed;                                 // 0xE00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_198B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HUDState;                                          // 0xE04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPrePaused;                                        // 0xE08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ReplayController_C* GetDefaultObj();

	void InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ReplayIncreasePlaybackSpeed_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_ReplayDecreasePlaybackSpeed_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ToggleReplayHUD();
	void OnPauseMenuClosed();
	void OnPauseMenuOpened();
	void OnScrubComplete();
	void ExecuteUbergraph_BP_ReplayController(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_ReplayController_C* K2Node_DynamicCast_AsBP_Replay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, const struct FKey& K2Node_InputActionEvent_Key_3, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_2, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_1, bool K2Node_DynamicCast_bSuccess_3, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_2, bool K2Node_DynamicCast_bSuccess_4, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_3, bool K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_4, bool K2Node_DynamicCast_bSuccess_6, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_5, bool K2Node_DynamicCast_bSuccess_7, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls_6, bool K2Node_DynamicCast_bSuccess_8);
};

}


