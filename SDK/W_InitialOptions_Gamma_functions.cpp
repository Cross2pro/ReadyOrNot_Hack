#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InitialOptions_Gamma.W_InitialOptions_Gamma_C
// (None)

class UClass* UW_InitialOptions_Gamma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InitialOptions_Gamma_C");

	return Clss;
}


// W_InitialOptions_Gamma_C W_InitialOptions_Gamma.Default__W_InitialOptions_Gamma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InitialOptions_Gamma_C* UW_InitialOptions_Gamma_C::GetDefaultObj()
{
	static class UW_InitialOptions_Gamma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InitialOptions_Gamma_C*>(UW_InitialOptions_Gamma_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InitialOptions_Gamma.W_InitialOptions_Gamma_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_InitialOptions_Gamma_C::DoCustomNavigation(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InitialOptions_Gamma_C", "DoCustomNavigation");

	Params::UW_InitialOptions_Gamma_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_InitialOptions_Gamma.W_InitialOptions_Gamma_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_InitialOptions_Gamma_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InitialOptions_Gamma_C", "BP_GetDesiredFocusTarget");

	Params::UW_InitialOptions_Gamma_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_InitialOptions_Gamma.W_InitialOptions_Gamma_C.ExecuteUbergraph_W_InitialOptions_Gamma
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InitialOptions_Gamma_C::ExecuteUbergraph_W_InitialOptions_Gamma(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InitialOptions_Gamma_C", "ExecuteUbergraph_W_InitialOptions_Gamma");

	Params::UW_InitialOptions_Gamma_C_ExecuteUbergraph_W_InitialOptions_Gamma_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


