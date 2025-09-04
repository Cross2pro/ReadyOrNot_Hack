#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_Brief_SubjectListItem.W_PreMission_Tablet_Brief_SubjectListItem_C
// (None)

class UClass* UW_PreMission_Tablet_Brief_SubjectListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_Brief_SubjectListItem_C");

	return Clss;
}


// W_PreMission_Tablet_Brief_SubjectListItem_C W_PreMission_Tablet_Brief_SubjectListItem.Default__W_PreMission_Tablet_Brief_SubjectListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_Brief_SubjectListItem_C* UW_PreMission_Tablet_Brief_SubjectListItem_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_Brief_SubjectListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_Brief_SubjectListItem_C*>(UW_PreMission_Tablet_Brief_SubjectListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_Brief_SubjectListItem.W_PreMission_Tablet_Brief_SubjectListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_Brief_SubjectListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_SubjectListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_Brief_SubjectListItem.W_PreMission_Tablet_Brief_SubjectListItem_C.ExecuteUbergraph_W_PreMission_Tablet_Brief_SubjectListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FTextBlockStyle             K2Node_MakeStruct_TextBlockStyle                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_Brief_SubjectListItem_C::ExecuteUbergraph_W_PreMission_Tablet_Brief_SubjectListItem(int32 EntryPoint, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FTextBlockStyle& K2Node_MakeStruct_TextBlockStyle, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_Brief_SubjectListItem_C", "ExecuteUbergraph_W_PreMission_Tablet_Brief_SubjectListItem");

	Params::UW_PreMission_Tablet_Brief_SubjectListItem_C_ExecuteUbergraph_W_PreMission_Tablet_Brief_SubjectListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_TextBlockStyle = K2Node_MakeStruct_TextBlockStyle;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


