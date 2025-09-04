#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3D8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Briefing_Transcript.W_Briefing_Transcript_C
class UW_Briefing_Transcript_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_Header_C*                           H_Transcript;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TranscriptEntries;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                            BriefingData;                                      // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  MissionName;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<double, struct FTranscript>             TranscriptEntries;                                 // 0x2F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       CurrentPlayTime;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<double, class UW_Briefing_Transcript_Entry_C*> TranscriptWidgets;                                 // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UW_Briefing_Transcript_Entry_C*> DimmedEntries;                                     // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            TranscriptClicked;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       Spacing;                                           // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_Briefing_Transcript_Entry_C*        CurrentTranscript;                                 // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTranscript>                   DebugTranscript;                                   // 0x3C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Briefing_Transcript_C* GetDefaultObj();

	void CreateEntry(struct FTranscript& Transcript, class UW_Briefing_Transcript_Entry_Minimal_C* CallFunc_Create_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void HighlightEntry(double EntryID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UW_Briefing_Transcript_Entry_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_Briefing_Transcript_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UW_Briefing_Transcript_Entry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Playing(double CurrentPlayTime, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMargin& K2Node_MakeStruct_Margin, class UW_Briefing_Transcript_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_InsertChildAt_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<double>& CallFunc_Map_Keys_Keys, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTranscript& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UW_Briefing_Transcript_Entry_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Initialize(TArray<struct FTranscript>& TranscriptEvents);
	void OnClick(double EntryID);
	void ExecuteUbergraph_W_Briefing_Transcript(int32 EntryPoint, double K2Node_CustomEvent_EntryID, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FTranscript>& K2Node_CustomEvent_TranscriptEvents, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, const struct FTranscript& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FTranscript& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Map_Add_Key_ImplicitCast);
	void TranscriptClicked__DelegateSignature(double ClipStartTime);
};

}


