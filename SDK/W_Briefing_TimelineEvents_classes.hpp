#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x348 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Briefing_TimelineEvents.W_Briefing_TimelineEvents_C
class UW_Briefing_TimelineEvents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VB_Events;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Header_C*                           W_Header;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<double, struct FTimelineEvent>          EventEntries;                                      // 0x2D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCanvasPanel*                          TimelineEntryCanvas;                               // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Spacing;                                           // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEventClicked;                                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UW_Briefing_TimelineEvents_C* GetDefaultObj();

	void Finished_CEF1E049428EE21AB58B96A8441038EA();
	void Initialize(TMap<double, struct FTimelineEvent> EventEntries);
	void AddEvent(double EventID);
	void EventClicked(double EventAudioStart, double EventAudioDuration);
	void ExecuteUbergraph_W_Briefing_TimelineEvents(int32 EntryPoint, double K2Node_CustomEvent_EventAudioStart, double K2Node_CustomEvent_EventAudioDuration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TMap<double, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, double K2Node_CustomEvent_EventID, class UW_Briefing_Event_C* CallFunc_Create_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnEventClicked__DelegateSignature(double EventAudioStart, double EventAudioDuration);
};

}


