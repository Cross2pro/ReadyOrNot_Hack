#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PlayerActionText.W_PlayerActionText_C
// (None)

class UClass* UW_PlayerActionText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PlayerActionText_C");

	return Clss;
}


// W_PlayerActionText_C W_PlayerActionText.Default__W_PlayerActionText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PlayerActionText_C* UW_PlayerActionText_C::GetDefaultObj()
{
	static class UW_PlayerActionText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PlayerActionText_C*>(UW_PlayerActionText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PlayerActionText.W_PlayerActionText_C.OnScalingSet
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerActionText_C::OnScalingSet(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayerActionText_C", "OnScalingSet");

	Params::UW_PlayerActionText_C_OnScalingSet_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayerActionText.W_PlayerActionText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PlayerActionText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayerActionText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayerActionText.W_PlayerActionText_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerActionText_C::OnInputMethodChanged(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayerActionText_C", "OnInputMethodChanged");

	Params::UW_PlayerActionText_C_OnInputMethodChanged_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PlayerActionText.W_PlayerActionText_C.RefreshWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PlayerActionText_C::RefreshWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayerActionText_C", "RefreshWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PlayerActionText.W_PlayerActionText_C.ExecuteUbergraph_W_PlayerActionText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerActionText_C::ExecuteUbergraph_W_PlayerActionText(int32 EntryPoint, float K2Node_Event_Scale, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType K2Node_CustomEvent_bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PlayerActionText_C", "ExecuteUbergraph_W_PlayerActionText");

	Params::UW_PlayerActionText_C_ExecuteUbergraph_W_PlayerActionText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}

}


