#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPTalker.W_VOIPTalker_C
// (None)

class UClass* UW_VOIPTalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPTalker_C");

	return Clss;
}


// W_VOIPTalker_C W_VOIPTalker.Default__W_VOIPTalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPTalker_C* UW_VOIPTalker_C::GetDefaultObj()
{
	static class UW_VOIPTalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPTalker_C*>(UW_VOIPTalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPTalker.W_VOIPTalker_C.RefeshMultiplayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_VOIPTalker_C::RefeshMultiplayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPTalker_C", "RefeshMultiplayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPTalker.W_VOIPTalker_C.Refresh Player States If Not Exists
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayerStateFound                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPTalker_C::Refresh_Player_States_If_Not_Exists(bool PlayerStateFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPTalker_C", "Refresh Player States If Not Exists");

	Params::UW_VOIPTalker_C_Refresh_Player_States_If_Not_Exists_Params Parms{};

	Parms.PlayerStateFound = PlayerStateFound;

	UObject::ProcessEvent(Func, &Parms);

}

}


