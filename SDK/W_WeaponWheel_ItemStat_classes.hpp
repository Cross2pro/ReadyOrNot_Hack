#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x760 (0xA20 - 0x2C0)
// WidgetBlueprintGeneratedClass W_WeaponWheel_ItemStat.W_WeaponWheel_ItemStat_C
class UW_WeaponWheel_ItemStat_C : public UWeaponWheel_ItemStat_Base
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        Stat_Container;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_StandardText_C*                     StatName_Text;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          StatVisual_ProgressBar;                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  StatName;                                          // 0x2E0(0x18)(Edit, BlueprintVisible)
	double                                       ProgressBarValue;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxStatValue;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAnimating;                                      // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2719[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeElapsed;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FillSpeed;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       TargetPercent;                                     // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                       EasingFunction;                                    // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_271B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemLookupTable                      ItemLookupTable;                                   // 0x330(0x6D0)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       WheelSize;                                         // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MaxWheelSize;                                      // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                             WidgetSize;                                        // 0xA10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_WeaponWheel_ItemStat_C* GetDefaultObj();

	void SetupWidgetSize(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetupFontSize(double CallFunc_MapRangeClamped_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, double CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, float K2Node_MakeStruct_Size_ImplicitCast);
	void Initialize(double CallFunc_MapRangeClamped_ReturnValue);
	void StopAnimating();
	void StartAnimating();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnWheelCreated();
	void OnRefresh();
	void ExecuteUbergraph_W_WeaponWheel_ItemStat(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Ease_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


