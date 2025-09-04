#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_WP_M590M.ABP_WP_M590M_C
// (None)

class UClass* UABP_WP_M590M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_WP_M590M_C");

	return Clss;
}


// ABP_WP_M590M_C ABP_WP_M590M.Default__ABP_WP_M590M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_WP_M590M_C* UABP_WP_M590M_C::GetDefaultObj()
{
	static class UABP_WP_M590M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_WP_M590M_C*>(UABP_WP_M590M_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_WP_M590M.ABP_WP_M590M_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_WP_M590M_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_M590M_C", "AnimGraph");

	Params::UABP_WP_M590M_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_WP_M590M.ABP_WP_M590M_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_WP_M590M_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_M590M_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_WP_M590M.ABP_WP_M590M_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_WP_M590M_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_M590M_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_WP_M590M.ABP_WP_M590M_C.ExecuteUbergraph_ABP_WP_M590M
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_WP_M590M_C::ExecuteUbergraph_ABP_WP_M590M(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_M590M_C", "ExecuteUbergraph_ABP_WP_M590M");

	Params::UABP_WP_M590M_C_ExecuteUbergraph_ABP_WP_M590M_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


