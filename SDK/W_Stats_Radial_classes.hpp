#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x352 (0x63A - 0x2E8)
// WidgetBlueprintGeneratedClass W_Stats_Radial.W_Stats_Radial_C
class UW_Stats_Radial_C : public UStatViewerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Compare_Progress;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Progress;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Radial;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Compare_Value;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Label;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_Value;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatProgress;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynMatCompareProgress;                             // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BarCutoff;                                         // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BarThickness;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PlaceholderLabelText;                              // 0x340(0x18)(Edit, BlueprintVisible)
	class FText                                  PlaceholderValueText;                              // 0x358(0x18)(Edit, BlueprintVisible)
	double                                       PlaceholderProgress;                               // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PlaceholderCompareValueText;                       // 0x378(0x18)(Edit, BlueprintVisible)
	double                                       PlaceholderComparisonProgress;                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Size;                                              // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ValueFontSizeOverride;                             // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LabelHorizontalPadding;                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LabelVerticalOffset;                               // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ComparisonGraphSpacing;                            // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCompare;                                          // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ComparisonValueSpacing;                            // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFillMeters;                                       // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MainFillStart;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SecondaryFillStart;                                // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Progress;                                          // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Progress_Compare;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColProgress;                                       // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColBetter;                                         // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColWorse;                                          // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MainFillProgress;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SecondaryFillProgress;                             // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLowerIsBetter;                                    // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Design_Time;                                    // 0x439(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInnerRingCompare;                                 // 0x43A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D91[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFriend                               CompareFriend;                                     // 0x440(0x1C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ERONStatType                      Stat_Type;                                         // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        StatValue;                                         // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        StatValue_Compare;                                 // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                StatID;                                            // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	double                                       CurrentMainFill;                                   // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsGrade;                                          // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUsePlaceholderLabel;                              // 0x639(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_Stats_Radial_C* GetDefaultObj();

	void GetFocusTarget(class UWidget** Focus);
	void BackPage(bool* Handled);
	void GetCompareFillProgress(double* Main, double* Secondary, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Greater_Int64Int64_ReturnValue, int64 K2Node_Select_Default, bool CallFunc_Greater_Int64Int64_ReturnValue_1, float CallFunc_GetStatPercentage_ReturnValue, int64 K2Node_Select_Default_1, float CallFunc_GetStatPercentage_ReturnValue_1, double K2Node_FunctionResult_Main_ImplicitCast, double K2Node_FunctionResult_Secondary_ImplicitCast);
	class FText FormatValueText(int64 Value, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_Int64ToText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_GetStatPercentage_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_CalculateGradeLetterFromPercentage_ReturnValue, enum class ERONStatType Temp_byte_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void InitializeStyle(double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, double CallFunc_Add_DoubleDouble_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsComparisonBetter_IsBetter, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_GetProgressBarThickness_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_GetComparisonSize_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float K2Node_MakeStruct_Size_ImplicitCast, float K2Node_MakeStruct_Size_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast, float K2Node_MakeStruct_Left_ImplicitCast, float K2Node_MakeStruct_Right_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3);
	void IsComparisonBetter(bool* IsBetter, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default);
	void AnimateProgress(double DeltaTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void GetValuePadding();
	double GetProgressBarThickness(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	double GetComparisonSize(double CallFunc_GetProgressBarThickness_ReturnValue, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
	void SetPlaceholder(float CallFunc_GetStatPercentage_ReturnValue, double K2Node_VariableSet_MainFillProgress_ImplicitCast);
	void UpdateStats(double LocStatValue, const class FString& CurrentStatID, class FText Temp_text_Variable, const class FString& Temp_string_Variable, int64 Temp_int64_Variable, enum class ERONStatType Temp_wildcard_Variable, const class FString& Temp_string_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, double CallFunc_GetCompareFillProgress_Main, double CallFunc_GetCompareFillProgress_Secondary, float CallFunc_GetStatPercentage_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_FormatValueText_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, class FText CallFunc_FormatValueText_ReturnValue_1, int64 CallFunc_GetFriendStatValue_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int64 CallFunc_GetStatValue_ReturnValue, int64 K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class FText K2Node_Select_Default_1, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double K2Node_VariableSet_MainFillProgress_ImplicitCast);
	void UpdateStyle(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, double CallFunc_GetProgressBarThickness_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float K2Node_MakeStruct_Top_ImplicitCast, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void SetGraphMaterial(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void Reveal(double Delay);
	void Hide(double Delay, bool Collapse);
	void SetInputMode(bool IsGamepad);
	void ChangePage(class FName PageName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CompareWithFriend(const struct FFriend& Friend);
	void OnInitialized();
	void OnStatsLoaded();
	void CancelCompare();
	void OnStatChanged(const class FString& StatID);
	void ExecuteUbergraph_W_Stats_Radial(int32 EntryPoint, const class FString& K2Node_Event_StatID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFriend& K2Node_Event_Friend, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsInitialized_ReturnValue, double CallFunc_AnimateProgress_DeltaTime_ImplicitCast);
};

}


