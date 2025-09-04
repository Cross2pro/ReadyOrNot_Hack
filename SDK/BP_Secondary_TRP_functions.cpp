#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Secondary_TRP.BP_Secondary_TRP_C
// (Actor)

class UClass* ABP_Secondary_TRP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Secondary_TRP_C");

	return Clss;
}


// BP_Secondary_TRP_C BP_Secondary_TRP.Default__BP_Secondary_TRP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Secondary_TRP_C* ABP_Secondary_TRP_C::GetDefaultObj()
{
	static class ABP_Secondary_TRP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Secondary_TRP_C*>(ABP_Secondary_TRP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Secondary_TRP.BP_Secondary_TRP_C.DestroyPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Secondary_TRP_C::DestroyPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Secondary_TRP_C", "DestroyPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Secondary_TRP.BP_Secondary_TRP_C.SpawnPouches_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Secondary_TRP_C::SpawnPouches_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Secondary_TRP_C", "SpawnPouches_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Secondary_TRP.BP_Secondary_TRP_C.ExecuteUbergraph_BP_Secondary_TRP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Secondary_TRP_C::ExecuteUbergraph_BP_Secondary_TRP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Secondary_TRP_C", "ExecuteUbergraph_BP_Secondary_TRP");

	Params::ABP_Secondary_TRP_C_ExecuteUbergraph_BP_Secondary_TRP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


