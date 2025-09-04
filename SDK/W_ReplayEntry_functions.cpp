#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReplayEntry.W_ReplayEntry_C
// (None)

class UClass* UW_ReplayEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReplayEntry_C");

	return Clss;
}


// W_ReplayEntry_C W_ReplayEntry.Default__W_ReplayEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReplayEntry_C* UW_ReplayEntry_C::GetDefaultObj()
{
	static class UW_ReplayEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReplayEntry_C*>(UW_ReplayEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReplayEntry.W_ReplayEntry_C.Deselect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::Deselect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "Deselect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "Select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.UpdateFileName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReplayFileName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UW_ReplayEntry_C::UpdateFileName(const class FString& ReplayFileName, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "UpdateFileName");

	Params::UW_ReplayEntry_C_UpdateFileName_Params Parms{};

	Parms.ReplayFileName = ReplayFileName;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UCommonButtonStyle>K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_ReplayEntry_C::UpdateStyle(bool Temp_bool_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable, TSubclassOf<class UCommonButtonStyle> Temp_class_Variable_1, TSubclassOf<class UCommonButtonStyle> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "UpdateStyle");

	Params::UW_ReplayEntry_C_UpdateStyle_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.GetReplayTimeFormat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReplayLength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Duration                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendMultiple_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::GetReplayTimeFormat(double ReplayLength, class FString* Duration, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue, const class FString& CallFunc_AppendMultiple_ReturnValue_1, const class FString& CallFunc_AppendMultiple_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "GetReplayTimeFormat");

	Params::UW_ReplayEntry_C_GetReplayTimeFormat_Params Parms{};

	Parms.ReplayLength = ReplayLength;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue = CallFunc_AppendMultiple_ReturnValue;
	Parms.CallFunc_AppendMultiple_ReturnValue_1 = CallFunc_AppendMultiple_ReturnValue_1;
	Parms.CallFunc_AppendMultiple_ReturnValue_2 = CallFunc_AppendMultiple_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = std::move(Parms.Duration);

}


// Function W_ReplayEntry.W_ReplayEntry_C.SetupData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetReplayTimeFormat_Duration                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// double                             CallFunc_GetReplayTimeFormat_ReplayLength_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::SetupData(const class FString& CallFunc_GetReplayTimeFormat_Duration, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, double CallFunc_GetReplayTimeFormat_ReplayLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "SetupData");

	Params::UW_ReplayEntry_C_SetupData_Params Parms{};

	Parms.CallFunc_GetReplayTimeFormat_Duration = CallFunc_GetReplayTimeFormat_Duration;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_GetReplayTimeFormat_ReplayLength_ImplicitCast = CallFunc_GetReplayTimeFormat_ReplayLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReplayEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "PreConstruct");

	Params::UW_ReplayEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReplayEntry.W_ReplayEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_ReplayEntry_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReplayEntry.W_ReplayEntry_C.ExecuteUbergraph_W_ReplayEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextStyle*            CallFunc_GetCurrentTextStyle_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_OutColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UW_ReplayEntry_C::ExecuteUbergraph_W_ReplayEntry(int32 EntryPoint, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReplayEntry_C", "ExecuteUbergraph_W_ReplayEntry");

	Params::UW_ReplayEntry_C_ExecuteUbergraph_W_ReplayEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTextStyle_ReturnValue = CallFunc_GetCurrentTextStyle_ReturnValue;
	Parms.CallFunc_GetColor_OutColor = CallFunc_GetColor_OutColor;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


