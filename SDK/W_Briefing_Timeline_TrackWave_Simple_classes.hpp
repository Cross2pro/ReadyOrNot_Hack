#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x3E8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWave_Simple.W_Briefing_Timeline_TrackWave_Simple_C
class UW_Briefing_Timeline_TrackWave_Simple_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Waveform;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPlaying;                                        // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsEvent;                                          // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEventInProgress;                                  // 0x2D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFinished;                                       // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentPlayTime;                                   // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundWave*                            SoundWaveAsset;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ProgressMade;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmpUpdateFrequency;                                // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<double, struct FTimelineEvent>          EventEntries;                                      // 0x300(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            TimelineEventFired;                                // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TimelineEventEnded;                                // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       CurrentEventID;                                    // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<double, class UW_Briefing_Timeline_TrackWaveElement_C*> EventWaveSegments;                                 // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                       TickInterval;                                      // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaveSegments;                                      // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UW_Briefing_Timeline_TrackWaveElement_vert_C*> Segments;                                          // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_TrackWave_Simple_C* GetDefaultObj();

	void Playing(double CurrentPlayTime, int32 Index);
	void EventListener(int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimelineEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, TArray<double>& CallFunc_Map_Keys_Keys, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Array_Get_Item, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void Scrubbed();
	void Paused(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Clear();
	void Restart();
	void DemoMode();
	void Initialize(class USoundWave* SoundWave, TMap<double, struct FTimelineEvent> EventEntries);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Briefing_Timeline_TrackWave_Simple(int32 EntryPoint, class USoundWave* K2Node_CustomEvent_SoundWave, TMap<double, struct FTimelineEvent> K2Node_CustomEvent_EventEntries, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UW_Briefing_Timeline_TrackWaveElement_vert_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class USoundWave* CallFunc_GetTimelineEventTestData_Audio_Asset, TArray<struct FTimelineEvent>& CallFunc_GetTimelineEventTestData_Events, TMap<double, struct FTimelineEvent> CallFunc_GetTimelineEventTestData_EventEntries, int32 CallFunc_Array_Add_ReturnValue);
	void TimelineEventEnded__DelegateSignature(double EventID);
	void TimelineEventFired__DelegateSignature(double EventID);
};

}


