#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x318 - 0x2C0)
// WidgetBlueprintGeneratedClass W_ReplayTimeBar.W_ReplayTimeBar_C
class UW_ReplayTimeBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar_;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               ReplaySlider;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    Target;                                            // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Scrubbing;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_262E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnScrubbingBegin;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnScrubbingEnd;                                    // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnChangeCurrentTime;                               // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_ReplayTimeBar_C* GetDefaultObj();

	double Get_ReplaySlider_Value(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast);
	float Get_ProgressBar__Percent_0(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void OnInitialized();
	void BndEvt__W_ReplayTimeBar_ReplaySlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddEvent(double BarPercentage, const struct FReplayEvent& ReplayEvent);
	void ExecuteUbergraph_W_ReplayTimeBar(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AReplayController* K2Node_DynamicCast_AsReplay_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue, float K2Node_ComponentBoundEvent_Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AReplayController* K2Node_DynamicCast_AsReplay_Controller_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentReplayTotalTimeInSeconds_ReturnValue_1, class UW_ReplayControls_C* K2Node_DynamicCast_AsW_Replay_Controls, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetCurrentReplayCurrentTimeInSeconds_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_BarPercentage, const struct FReplayEvent& K2Node_CustomEvent_ReplayEvent, double K2Node_CallDelegate_NewCurrentTimeInSeconds_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void OnChangeCurrentTime__DelegateSignature(double NewCurrentTimeInSeconds);
	void OnScrubbingEnd__DelegateSignature(double NewCurrentTimeInSeconds);
	void OnScrubbingBegin__DelegateSignature();
};

}


