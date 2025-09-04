#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StatsUI.BPI_StatsUI_C
// (None)

class UClass* IBPI_StatsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StatsUI_C");

	return Clss;
}


// BPI_StatsUI_C BPI_StatsUI.Default__BPI_StatsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StatsUI_C* IBPI_StatsUI_C::GetDefaultObj()
{
	static class IBPI_StatsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StatsUI_C*>(IBPI_StatsUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StatsUI.BPI_StatsUI_C.CancelCompare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StatsUI_C::CancelCompare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StatsUI_C", "CancelCompare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StatsUI.BPI_StatsUI_C.CompareWithFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFriend                     Friend                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void IBPI_StatsUI_C::CompareWithFriend(const struct FFriend& Friend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StatsUI_C", "CompareWithFriend");

	Params::IBPI_StatsUI_C_CompareWithFriend_Params Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

}

}


