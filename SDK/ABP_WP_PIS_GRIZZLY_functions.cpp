#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C
// (None)

class UClass* UABP_WP_PIS_GRIZZLY_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_WP_PIS_GRIZZLY_C");

	return Clss;
}


// ABP_WP_PIS_GRIZZLY_C ABP_WP_PIS_GRIZZLY.Default__ABP_WP_PIS_GRIZZLY_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_WP_PIS_GRIZZLY_C* UABP_WP_PIS_GRIZZLY_C::GetDefaultObj()
{
	static class UABP_WP_PIS_GRIZZLY_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_WP_PIS_GRIZZLY_C*>(UABP_WP_PIS_GRIZZLY_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_WP_PIS_GRIZZLY_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_PIS_GRIZZLY_C", "AnimGraph");

	Params::UABP_WP_PIS_GRIZZLY_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_PIS_GRIZZLY_AnimGraphNode_BlendListByBool_9154FB4246C35C480D42B7BC0F07C4F6
// (BlueprintEvent)
// Parameters:

void UABP_WP_PIS_GRIZZLY_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_PIS_GRIZZLY_AnimGraphNode_BlendListByBool_9154FB4246C35C480D42B7BC0F07C4F6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_PIS_GRIZZLY_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_PIS_GRIZZLY_AnimGraphNode_BlendListByBool_9154FB4246C35C480D42B7BC0F07C4F6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C.AnimNotify_DropSpeedReloadMagazine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_WP_PIS_GRIZZLY_C::AnimNotify_DropSpeedReloadMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_PIS_GRIZZLY_C", "AnimNotify_DropSpeedReloadMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C.AnimNotify_ShowMag
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_WP_PIS_GRIZZLY_C::AnimNotify_ShowMag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_PIS_GRIZZLY_C", "AnimNotify_ShowMag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_WP_PIS_GRIZZLY.ABP_WP_PIS_GRIZZLY_C.ExecuteUbergraph_ABP_WP_PIS_GRIZZLY
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_WP_PIS_GRIZZLY_C::ExecuteUbergraph_ABP_WP_PIS_GRIZZLY(int32 EntryPoint, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_WP_PIS_GRIZZLY_C", "ExecuteUbergraph_ABP_WP_PIS_GRIZZLY");

	Params::UABP_WP_PIS_GRIZZLY_C_ExecuteUbergraph_ABP_WP_PIS_GRIZZLY_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


