#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x328 - 0x2C0)
// WidgetBlueprintGeneratedClass W_PreMission_PlanningMap_Line.W_PreMission_PlanningMap_Line_C
class UW_PreMission_PlanningMap_Line_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_35;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Color;                                             // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDashed;                                          // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3025[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             LineMaterial;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Length;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Angle;                                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Thickness;                                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       StartOffset;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       EndOffset;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AReadyOrNotPlayerState*                Player_State;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_PreMission_PlanningMap_Line_C* GetDefaultObj();

	void SetColor(const struct FLinearColor& Color);
	void SetColorByPlayerState(class AReadyOrNotPlayerState* PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void ScaleThickness(double Multiplier, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void SetOffset(double StartOffset, double EndOffset, const struct FMargin& K2Node_MakeStruct_Margin, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MakeStruct_Right_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast);
	void SetLength(double Length, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void SetAngle(double Angle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ScaleLineWeightByZoom(double CurrentZoom);
	void UpdatePlanningTeam(enum class EPlanningLineTeam Team);
	void ExecuteUbergraph_W_PreMission_PlanningMap_Line(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_Event_CurrentZoom, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, enum class EPlanningLineTeam K2Node_CustomEvent_Team, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
};

}


