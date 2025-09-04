#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenu_V2.MainMenu_V2_C
// (Actor)

class UClass* AMainMenu_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_V2_C");

	return Clss;
}


// MainMenu_V2_C MainMenu_V2.Default__MainMenu_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenu_V2_C* AMainMenu_V2_C::GetDefaultObj()
{
	static class AMainMenu_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenu_V2_C*>(AMainMenu_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenu_V2.MainMenu_V2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenu_V2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_V2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenu_V2.MainMenu_V2_C.ExecuteUbergraph_MainMenu_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenu_V2_C::ExecuteUbergraph_MainMenu_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenu_V2_C", "ExecuteUbergraph_MainMenu_V2");

	Params::AMainMenu_V2_C_ExecuteUbergraph_MainMenu_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


