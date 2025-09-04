#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_XboxCrossplayWarning.W_XboxCrossplayWarning_C
class UW_XboxCrossplayWarning_C : public UCrossplayWarningWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Countdown;                                         // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_XboxCrossplayWarning_C* GetDefaultObj();

	void WidgetAnimationEvt_Countdown_K2Node_WidgetAnimationEvent_0();
	void SetUseCountdown(bool bInUseCountdown);
	void ExecuteUbergraph_W_XboxCrossplayWarning(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bInUseCountdown);
};

}


