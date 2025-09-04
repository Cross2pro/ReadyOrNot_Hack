#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x320 - 0x2C0)
// WidgetBlueprintGeneratedClass W_Briefing_Timeline_TrackWaveElement_vert.W_Briefing_Timeline_TrackWaveElement_vert_C
class UW_Briefing_Timeline_TrackWaveElement_vert_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_cap;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_line;                                          // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Line;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_WaveLine;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       WaveAmp;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsTimelineEvent;                                  // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_16B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spacing;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Updating;                                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UpdateFreq;                                        // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UpdateProgress;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastAmp;                                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Briefing_Timeline_TrackWaveElement_vert_C* GetDefaultObj();

	void SetStyle(bool IsTimelineEvent);
	void SetWaveLength(double Length, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update(double WaveAmp, double Freq);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_Briefing_Timeline_TrackWaveElement_vert(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_WaveAmp, double K2Node_CustomEvent_Freq, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_NormalizeToRange_ReturnValue, double CallFunc_Ease_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast);
};

}


