#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x302 (0x5EA - 0x2E8)
// WidgetBlueprintGeneratedClass W_Stats_Missions_Totals.W_Stats_Missions_Totals_C
class UW_Stats_Missions_Totals_C : public UStatViewerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_CasualColor;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_HardColor;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_MissionGraph;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_MissionGraph_Compare;                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_StandardColor;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Casual;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Hard;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Lbl_Standard;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CasualValue;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_CasualValue_Compare;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_HardValue;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_HardValue_Compare;                             // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_MissionTotal;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_MissionTotal_Compare;                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_StandardValue;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_StandardValue_Compare;                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ColCasual;                                         // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColStandard;                                       // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColHard;                                           // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BarThickness;                                      // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BarCutoff;                                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatGraph;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CasualCount;                                       // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StandardCount;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HardCount;                                         // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TotalCount;                                        // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Design_Time;                                    // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynMatGraph_Compare;                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bCompare;                                          // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ComparisonGraphSpacing;                            // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Size;                                              // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CasualCount_Compare;                               // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StandardCount_Compare;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HardCount_Compare;                                 // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TotalCount_Compare;                                // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFriend                               CompareFriend;                                     // 0x420(0x1C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bTotalIsZero;                                      // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCompareTotalIsZero;                               // 0x5E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Stats_Missions_Totals_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void InitializeStyle();
	double GetCountProgressValue(double Count, bool IsCompare, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1);
	double GetProgressBarThickness(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	double GetComparisonSize(double CallFunc_GetProgressBarThickness_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	class FText FormatTotalCountText(double TotalCount, bool Temp_bool_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void DebugRandomValues(double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetGraphMaterial(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void UpdateStats(const class FString& CurrentStatID, int64 StatValue, const class FString& Temp_string_Variable, class FText Temp_text_Variable, int64 Temp_int64_Variable, enum class ERONStatType Temp_wildcard_Variable, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const class FString& Temp_string_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_FormatTotalCountText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetCountProgressValue_ReturnValue, double CallFunc_GetCountProgressValue_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, class FText CallFunc_FormatTotalCountText_ReturnValue_1, double CallFunc_Conv_Int64ToDouble_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, int64 CallFunc_GetFriendStatValue_ReturnValue, int64 CallFunc_GetStatValue_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_3, int64 K2Node_Select_Default, class FText CallFunc_Conv_DoubleToText_ReturnValue_4, class FText CallFunc_Conv_DoubleToText_ReturnValue_5, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_GetCountProgressValue_ReturnValue_2, double CallFunc_GetCountProgressValue_ReturnValue_3, double CallFunc_Conv_Int64ToDouble_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue_4, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue_5, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3);
	void UpdateStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_1, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue_2, bool Temp_bool_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double CallFunc_GetProgressBarThickness_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_GetComparisonSize_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class EHorizontalAlignment K2Node_Select_Default_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void StatsLoaded();
	void OnStatChanged(const class FString& StatID);
	void CompareWithFriend(const struct FFriend& Friend);
	void CancelCompare();
	void ExecuteUbergraph_W_Stats_Missions_Totals(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UStatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Event_StatID, const struct FFriend& K2Node_Event_Friend);
};

}


