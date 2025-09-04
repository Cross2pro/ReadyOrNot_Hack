#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_GamePad_InputLabel.W_Options_GamePad_InputLabel_C
// (None)

class UClass* UW_Options_GamePad_InputLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_GamePad_InputLabel_C");

	return Clss;
}


// W_Options_GamePad_InputLabel_C W_Options_GamePad_InputLabel.Default__W_Options_GamePad_InputLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_GamePad_InputLabel_C* UW_Options_GamePad_InputLabel_C::GetDefaultObj()
{
	static class UW_Options_GamePad_InputLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_GamePad_InputLabel_C*>(UW_Options_GamePad_InputLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_GamePad_InputLabel.W_Options_GamePad_InputLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Options_GamePad_InputLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamePad_InputLabel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_GamePad_InputLabel.W_Options_GamePad_InputLabel_C.ExecuteUbergraph_W_Options_GamePad_InputLabel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_GamePad_InputLabel_C::ExecuteUbergraph_W_Options_GamePad_InputLabel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_GamePad_InputLabel_C", "ExecuteUbergraph_W_Options_GamePad_InputLabel");

	Params::UW_Options_GamePad_InputLabel_C_ExecuteUbergraph_W_Options_GamePad_InputLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


