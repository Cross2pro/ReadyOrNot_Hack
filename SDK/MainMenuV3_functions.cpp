#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuV3.MainMenuV3_C
// (Actor)

class UClass* AMainMenuV3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuV3_C");

	return Clss;
}


// MainMenuV3_C MainMenuV3.Default__MainMenuV3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuV3_C* AMainMenuV3_C::GetDefaultObj()
{
	static class AMainMenuV3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuV3_C*>(AMainMenuV3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuV3.MainMenuV3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMainMenuV3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuV3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuV3.MainMenuV3_C.ExecuteUbergraph_MainMenuV3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMainMenuV3_C::ExecuteUbergraph_MainMenuV3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuV3_C", "ExecuteUbergraph_MainMenuV3");

	Params::AMainMenuV3_C_ExecuteUbergraph_MainMenuV3_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


