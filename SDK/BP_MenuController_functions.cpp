#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuController.BP_MenuController_C
// (Actor, PlayerController)

class UClass* ABP_MenuController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuController_C");

	return Clss;
}


// BP_MenuController_C BP_MenuController.Default__BP_MenuController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MenuController_C* ABP_MenuController_C::GetDefaultObj()
{
	static class ABP_MenuController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MenuController_C*>(ABP_MenuController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuController.BP_MenuController_C.ExecuteUbergraph_BP_MenuController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuController_C::ExecuteUbergraph_BP_MenuController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuController_C", "ExecuteUbergraph_BP_MenuController");

	Params::ABP_MenuController_C_ExecuteUbergraph_BP_MenuController_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


