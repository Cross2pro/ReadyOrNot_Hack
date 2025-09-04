#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C
// (None)

class UClass* UAICompliantAction_StationaryFake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AICompliantAction_StationaryFake_C");

	return Clss;
}


// AICompliantAction_StationaryFake_C AICompliantAction_StationaryFake.Default__AICompliantAction_StationaryFake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAICompliantAction_StationaryFake_C* UAICompliantAction_StationaryFake_C::GetDefaultObj()
{
	static class UAICompliantAction_StationaryFake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAICompliantAction_StationaryFake_C*>(UAICompliantAction_StationaryFake_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAICompliantAction_StationaryFake_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICompliantAction_StationaryFake_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AICompliantAction_StationaryFake.AICompliantAction_StationaryFake_C.ExecuteUbergraph_AICompliantAction_StationaryFake
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAICompliantAction_StationaryFake_C::ExecuteUbergraph_AICompliantAction_StationaryFake(int32 EntryPoint, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AICompliantAction_StationaryFake_C", "ExecuteUbergraph_AICompliantAction_StationaryFake");

	Params::UAICompliantAction_StationaryFake_C_ExecuteUbergraph_AICompliantAction_StationaryFake_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


