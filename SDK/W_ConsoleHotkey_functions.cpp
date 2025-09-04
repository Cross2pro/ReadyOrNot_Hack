#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ConsoleHotkey.W_ConsoleHotkey_C
// (None)

class UClass* UW_ConsoleHotkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ConsoleHotkey_C");

	return Clss;
}


// W_ConsoleHotkey_C W_ConsoleHotkey.Default__W_ConsoleHotkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ConsoleHotkey_C* UW_ConsoleHotkey_C::GetDefaultObj()
{
	static class UW_ConsoleHotkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ConsoleHotkey_C*>(UW_ConsoleHotkey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ConsoleHotkey.W_ConsoleHotkey_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ConsoleHotkey_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ConsoleHotkey.W_ConsoleHotkey_C.ShoulderButtonPressed
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkey_C::ShoulderButtonPressed(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "ShoulderButtonPressed");

	Params::UW_ConsoleHotkey_C_ShoulderButtonPressed_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ConsoleHotkey.W_ConsoleHotkey_C.ExecuteUbergraph_W_ConsoleHotkey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Pressed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ConsoleHotkey_C::ExecuteUbergraph_W_ConsoleHotkey(int32 EntryPoint, bool K2Node_Event_Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ConsoleHotkey_C", "ExecuteUbergraph_W_ConsoleHotkey");

	Params::UW_ConsoleHotkey_C_ExecuteUbergraph_W_ConsoleHotkey_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Pressed = K2Node_Event_Pressed;

	UObject::ProcessEvent(Func, &Parms);

}

}


