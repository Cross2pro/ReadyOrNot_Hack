#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Stats_List.W_Stats_List_C
// (None)

class UClass* UW_Stats_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Stats_List_C");

	return Clss;
}


// W_Stats_List_C W_Stats_List.Default__W_Stats_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Stats_List_C* UW_Stats_List_C::GetDefaultObj()
{
	static class UW_Stats_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Stats_List_C*>(UW_Stats_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Stats_List.W_Stats_List_C.GetFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     Focus                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::GetFocusTarget(class UWidget** Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "GetFocusTarget");

	Params::UW_Stats_List_C_GetFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus != nullptr)
		*Focus = Parms.Focus;

}


// Function W_Stats_List.W_Stats_List_C.BackPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::BackPage(bool* Handled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "BackPage");

	Params::UW_Stats_List_C_BackPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function W_Stats_List.W_Stats_List_C.UpdateCompareValueEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            UpdatedText                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStatNumeric_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFriendStatString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int64                              CallFunc_GetFriendStatValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class FText                        CallFunc_FormatPlaytime_Result                                   (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)

void UW_Stats_List_C::UpdateCompareValueEntry(const class FString& StatID, class UCommonTextBlock* UpdatedText, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_1, bool Temp_bool_Variable_3, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStatNumeric_ReturnValue, const class FString& CallFunc_GetFriendStatString_ReturnValue, class UCommonTextBlock* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int64 CallFunc_GetFriendStatValue_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_FormatPlaytime_Result, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "UpdateCompareValueEntry");

	Params::UW_Stats_List_C_UpdateCompareValueEntry_Params Parms{};

	Parms.StatID = StatID;
	Parms.UpdatedText = UpdatedText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_2 = CallFunc_GetStatSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStatNumeric_ReturnValue = CallFunc_IsStatNumeric_ReturnValue;
	Parms.CallFunc_GetFriendStatString_ReturnValue = CallFunc_GetFriendStatString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetFriendStatValue_ReturnValue = CallFunc_GetFriendStatValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_FormatPlaytime_Result = CallFunc_FormatPlaytime_Result;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.FormatPlaytime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Time__in_seconds_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Result                                                           (Parm, OutParm)
// double                             CallFunc_Conv_Int64ToDouble_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_FromSeconds_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_FromSeconds_Seconds_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::FormatPlaytime(int64 Time__in_seconds_, class FText* Result, double CallFunc_Conv_Int64ToDouble_ReturnValue, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, int32 CallFunc_Multiply_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_FromSeconds_Seconds_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "FormatPlaytime");

	Params::UW_Stats_List_C_FormatPlaytime_Params Parms{};

	Parms.Time__in_seconds_ = Time__in_seconds_;
	Parms.CallFunc_Conv_Int64ToDouble_ReturnValue = CallFunc_Conv_Int64ToDouble_ReturnValue;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FromSeconds_Seconds_ImplicitCast = CallFunc_FromSeconds_Seconds_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function W_Stats_List.W_Stats_List_C.UpdateValueEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            UpdatedText                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStatNumeric_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class FText                        CallFunc_FormatPlaytime_Result                                   (None)
// class FString                      CallFunc_GetStatString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)

void UW_Stats_List_C::UpdateValueEntry(const class FString& StatID, class UCommonTextBlock* UpdatedText, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_1, bool Temp_bool_Variable_3, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsStatNumeric_ReturnValue, int64 CallFunc_GetStatValue_ReturnValue, class UCommonTextBlock* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_FormatPlaytime_Result, const class FString& CallFunc_GetStatString_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "UpdateValueEntry");

	Params::UW_Stats_List_C_UpdateValueEntry_Params Parms{};

	Parms.StatID = StatID;
	Parms.UpdatedText = UpdatedText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_2 = CallFunc_GetStatSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsStatNumeric_ReturnValue = CallFunc_IsStatNumeric_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_FormatPlaytime_Result = CallFunc_FormatPlaytime_Result;
	Parms.CallFunc_GetStatString_ReturnValue = CallFunc_GetStatString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.CompareStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::CompareStats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CompareStats");

	Params::UW_Stats_List_C_CompareStats_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.CreateComparisonValueEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StatRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            ValueTextWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsTime                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StatID                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            NewComparisonValueText                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatDefinition             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERONStatType            Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// int64                              Temp_int64_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_RandomInteger64InRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class FText                        CallFunc_FormatPlaytime_Result                                   (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_CopyTextObject_NewCommonTextBlock                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStatNumeric_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetFriendStatValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFriendStatString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_FormatPlaytime_Result_1                                 (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)

void UW_Stats_List_C::CreateComparisonValueEntry(const struct FDataTableRowHandle& StatRowHandle, int32 InRow, int32 InColumn, class UCommonTextBlock** ValueTextWidget, bool IsTime, const class FString& StatID, class UCommonTextBlock* NewComparisonValueText, const class FString& Temp_string_Variable, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERONStatType Temp_wildcard_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, const class FString& Temp_string_Variable_1, class FText Temp_text_Variable_1, int64 Temp_int64_Variable, bool Temp_bool_Variable_2, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, class FText Temp_text_Variable_2, bool Temp_bool_Variable_6, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int64 CallFunc_RandomInteger64InRange_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_FormatPlaytime_Result, class FText K2Node_Select_Default, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class FText K2Node_Select_Default_1, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCommonTextBlock* CallFunc_CopyTextObject_NewCommonTextBlock, bool CallFunc_IsStatNumeric_ReturnValue, int64 CallFunc_GetFriendStatValue_ReturnValue, const class FString& CallFunc_GetFriendStatString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_FormatPlaytime_Result_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CreateComparisonValueEntry");

	Params::UW_Stats_List_C_CreateComparisonValueEntry_Params Parms{};

	Parms.StatRowHandle = StatRowHandle;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.IsTime = IsTime;
	Parms.StatID = StatID;
	Parms.NewComparisonValueText = NewComparisonValueText;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_int64_Variable = Temp_int64_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_RandomInteger64InRange_ReturnValue = CallFunc_RandomInteger64InRange_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_FormatPlaytime_Result = CallFunc_FormatPlaytime_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_2 = CallFunc_GetStatSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CopyTextObject_NewCommonTextBlock = CallFunc_CopyTextObject_NewCommonTextBlock;
	Parms.CallFunc_IsStatNumeric_ReturnValue = CallFunc_IsStatNumeric_ReturnValue;
	Parms.CallFunc_GetFriendStatValue_ReturnValue = CallFunc_GetFriendStatValue_ReturnValue;
	Parms.CallFunc_GetFriendStatString_ReturnValue = CallFunc_GetFriendStatString_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_FormatPlaytime_Result_1 = CallFunc_FormatPlaytime_Result_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueTextWidget != nullptr)
		*ValueTextWidget = Parms.ValueTextWidget;

}


// Function W_Stats_List.W_Stats_List_C.AddDiv
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::AddDiv(int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UImage* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "AddDiv");

	Params::UW_Stats_List_C_AddDiv_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.CopyTextObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            CommonTextToCopy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            NewCommonTextBlock                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::CopyTextObject(class UCommonTextBlock* CommonTextToCopy, class UCommonTextBlock** NewCommonTextBlock, class UCommonTextBlock* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CopyTextObject");

	Params::UW_Stats_List_C_CopyTextObject_Params Parms{};

	Parms.CommonTextToCopy = CommonTextToCopy;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCommonTextBlock != nullptr)
		*NewCommonTextBlock = Parms.NewCommonTextBlock;

}


// Function W_Stats_List.W_Stats_List_C.CreateLabel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StatRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    LabelOverlay                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (Edit, BlueprintVisible)
// class FString                      StatID                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            NewDiffText                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    NewLabelOverlay                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            NewStatLabel                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERONStatType            Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatDefinition             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              Temp_int64_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_CopyTextObject_NewCommonTextBlock                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_CopyTextObject_NewCommonTextBlock_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::CreateLabel(const struct FDataTableRowHandle& StatRowHandle, int32 Row, int32 Column, class UOverlay** LabelOverlay, class FText DisplayName, const class FString& StatID, class UCommonTextBlock* NewDiffText, class UOverlay* NewLabelOverlay, class UCommonTextBlock* NewStatLabel, enum class ERONStatType Temp_wildcard_Variable, const class FString& Temp_string_Variable, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, const class FString& Temp_string_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int64 Temp_int64_Variable, class UOverlay* CallFunc_SpawnObject_ReturnValue, enum class EHorizontalAlignment Temp_byte_Variable, bool Temp_bool_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UCommonTextBlock* CallFunc_CopyTextObject_NewCommonTextBlock, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, class UCommonTextBlock* CallFunc_CopyTextObject_NewCommonTextBlock_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CreateLabel");

	Params::UW_Stats_List_C_CreateLabel_Params Parms{};

	Parms.StatRowHandle = StatRowHandle;
	Parms.Row = Row;
	Parms.Column = Column;
	Parms.DisplayName = DisplayName;
	Parms.StatID = StatID;
	Parms.NewDiffText = NewDiffText;
	Parms.NewLabelOverlay = NewLabelOverlay;
	Parms.NewStatLabel = NewStatLabel;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_int64_Variable = Temp_int64_Variable;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_CopyTextObject_NewCommonTextBlock = CallFunc_CopyTextObject_NewCommonTextBlock;
	Parms.CallFunc_AddChildToOverlay_ReturnValue_1 = CallFunc_AddChildToOverlay_ReturnValue_1;
	Parms.CallFunc_CopyTextObject_NewCommonTextBlock_1 = CallFunc_CopyTextObject_NewCommonTextBlock_1;

	UObject::ProcessEvent(Func, &Parms);

	if (LabelOverlay != nullptr)
		*LabelOverlay = Parms.LabelOverlay;

}


// Function W_Stats_List.W_Stats_List_C.CreateValueEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StatRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              InRow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InColumn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            ValueTextWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsTime                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              DebugValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DebugString                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// enum class ERONStatType            StatType                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      StatID                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UCommonTextBlock*            NewValueText                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStatDefinition             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERONStatType            Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERONStatType            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              Temp_int64_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_RandomInteger64InRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class FText                        CallFunc_FormatPlaytime_Result                                   (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// class FText                        CallFunc_FormatPlaytime_Result_1                                 (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// bool                               CallFunc_IsStatNumeric_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetStatValue_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (None)
// class FText                        CallFunc_FormatPlaytime_Result_2                                 (None)
// class FString                      CallFunc_GetStatString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// class FText                        K2Node_Select_Default_6                                          (None)
// class UCommonTextBlock*            CallFunc_CopyTextObject_NewCommonTextBlock                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          (None)

void UW_Stats_List_C::CreateValueEntry(const struct FDataTableRowHandle& StatRowHandle, int32 InRow, int32 InColumn, class UCommonTextBlock** ValueTextWidget, bool IsTime, int64 DebugValue, const class FString& DebugString, enum class ERONStatType StatType, const class FString& StatID, class UCommonTextBlock* NewValueText, const class FString& Temp_string_Variable, const struct FStatDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERONStatType Temp_wildcard_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ERONStatType Temp_byte_Variable, class FText Temp_text_Variable, const class FString& Temp_string_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_2, int64 Temp_int64_Variable, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, class FText Temp_text_Variable_1, bool Temp_bool_Variable_7, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int64 CallFunc_RandomInteger64InRange_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class FText CallFunc_FormatPlaytime_Result, class FText K2Node_Select_Default, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_1, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, class FText CallFunc_FormatPlaytime_Result_1, class FText K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, bool CallFunc_IsStatNumeric_ReturnValue, int64 CallFunc_GetStatValue_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FText CallFunc_FormatPlaytime_Result_2, const class FString& CallFunc_GetStatString_ReturnValue, class FText K2Node_Select_Default_4, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class UCommonTextBlock* CallFunc_CopyTextObject_NewCommonTextBlock, class FText K2Node_Select_Default_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CreateValueEntry");

	Params::UW_Stats_List_C_CreateValueEntry_Params Parms{};

	Parms.StatRowHandle = StatRowHandle;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.IsTime = IsTime;
	Parms.DebugValue = DebugValue;
	Parms.DebugString = DebugString;
	Parms.StatType = StatType;
	Parms.StatID = StatID;
	Parms.NewValueText = NewValueText;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int64_Variable = Temp_int64_Variable;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_RandomInteger64InRange_ReturnValue = CallFunc_RandomInteger64InRange_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_FormatPlaytime_Result = CallFunc_FormatPlaytime_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_1 = CallFunc_GetStatSubsystem_ReturnValue_1;
	Parms.CallFunc_GetStatSubsystem_ReturnValue_2 = CallFunc_GetStatSubsystem_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_FormatPlaytime_Result_1 = CallFunc_FormatPlaytime_Result_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsStatNumeric_ReturnValue = CallFunc_IsStatNumeric_ReturnValue;
	Parms.CallFunc_GetStatValue_ReturnValue = CallFunc_GetStatValue_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_2 = CallFunc_Conv_Int64ToText_ReturnValue_2;
	Parms.CallFunc_FormatPlaytime_Result_2 = CallFunc_FormatPlaytime_Result_2;
	Parms.CallFunc_GetStatString_ReturnValue = CallFunc_GetStatString_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_CopyTextObject_NewCommonTextBlock = CallFunc_CopyTextObject_NewCommonTextBlock;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueTextWidget != nullptr)
		*ValueTextWidget = Parms.ValueTextWidget;

}


// Function W_Stats_List.W_Stats_List_C.PopulateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StatRow                                                          (Edit, BlueprintVisible, NoDestructor)
// class FString                      CurrentStatID                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              ColumnCount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_CreateComparisonValueEntry_ValueTextWidget              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_CreateLabel_LabelOverlay                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_CreateValueEntry_ValueTextWidget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::PopulateStats(const struct FDataTableRowHandle& StatRow, const class FString& CurrentStatID, int32 ColumnCount, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class UCommonTextBlock* CallFunc_CreateComparisonValueEntry_ValueTextWidget, enum class ESlateVisibility K2Node_Select_Default, class UOverlay* CallFunc_CreateLabel_LabelOverlay, int32 Temp_int_Loop_Counter_Variable, class UCommonTextBlock* CallFunc_CreateValueEntry_ValueTextWidget, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "PopulateStats");

	Params::UW_Stats_List_C_PopulateStats_Params Parms{};

	Parms.StatRow = StatRow;
	Parms.CurrentStatID = CurrentStatID;
	Parms.ColumnCount = ColumnCount;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CreateComparisonValueEntry_ValueTextWidget = CallFunc_CreateComparisonValueEntry_ValueTextWidget;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CreateLabel_LabelOverlay = CallFunc_CreateLabel_LabelOverlay;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CreateValueEntry_ValueTextWidget = CallFunc_CreateValueEntry_ValueTextWidget;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.Reveal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::Reveal(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "Reveal");

	Params::UW_Stats_List_C_Reveal_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Collapse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::Hide(double Delay, bool Collapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "Hide");

	Params::UW_Stats_List_C_Hide_Params Parms{};

	Parms.Delay = Delay;
	Parms.Collapse = Collapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.SetInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::SetInputMode(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "SetInputMode");

	Params::UW_Stats_List_C_SetInputMode_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PageName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::ChangePage(class FName PageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "ChangePage");

	Params::UW_Stats_List_C_ChangePage_Params Parms{};

	Parms.PageName = PageName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "PreConstruct");

	Params::UW_Stats_List_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Stats_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_List.W_Stats_List_C.StatsLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_List_C::StatsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "StatsLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_List.W_Stats_List_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Stats_List_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_List.W_Stats_List_C.OnStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      StatID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Stats_List_C::OnStatChanged(const class FString& StatID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "OnStatChanged");

	Params::UW_Stats_List_C_OnStatChanged_Params Parms{};

	Parms.StatID = StatID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.CompareWithFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Stats_List_C::CompareWithFriend(const struct FFriend& Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CompareWithFriend");

	Params::UW_Stats_List_C_CompareWithFriend_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Stats_List.W_Stats_List_C.CancelCompare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Stats_List_C::CancelCompare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "CancelCompare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Stats_List.W_Stats_List_C.ExecuteUbergraph_W_Stats_List
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Collapse                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsGamepad                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_PageName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_StatID                                              (ZeroConstructor, HasGetValueTypeHash)
// struct FFriend                     K2Node_Event_Friend                                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStatSubsystem*              CallFunc_GetStatSubsystem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Stats_List_C::ExecuteUbergraph_W_Stats_List(int32 EntryPoint, double K2Node_Event_Delay_1, double K2Node_Event_Delay, bool K2Node_Event_Collapse, bool K2Node_Event_IsGamepad, class FName K2Node_Event_PageName, bool K2Node_Event_IsDesignTime, class UStatSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_Event_StatID, const struct FFriend& K2Node_Event_Friend, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UStatSubsystem* CallFunc_GetStatSubsystem_ReturnValue, bool CallFunc_IsInitialized_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Stats_List_C", "ExecuteUbergraph_W_Stats_List");

	Params::UW_Stats_List_C_ExecuteUbergraph_W_Stats_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay_1 = K2Node_Event_Delay_1;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_Collapse = K2Node_Event_Collapse;
	Parms.K2Node_Event_IsGamepad = K2Node_Event_IsGamepad;
	Parms.K2Node_Event_PageName = K2Node_Event_PageName;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_StatID = K2Node_Event_StatID;
	Parms.K2Node_Event_Friend = K2Node_Event_Friend;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStatSubsystem_ReturnValue = CallFunc_GetStatSubsystem_ReturnValue;
	Parms.CallFunc_IsInitialized_ReturnValue = CallFunc_IsInitialized_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


