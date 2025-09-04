#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Simple_Tooltip.W_Simple_Tooltip_C
// (None)

class UClass* UW_Simple_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Simple_Tooltip_C");

	return Clss;
}


// W_Simple_Tooltip_C W_Simple_Tooltip.Default__W_Simple_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Simple_Tooltip_C* UW_Simple_Tooltip_C::GetDefaultObj()
{
	static class UW_Simple_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Simple_Tooltip_C*>(UW_Simple_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Simple_Tooltip.W_Simple_Tooltip_C.Get_txt_Tooltip_Text
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UW_Simple_Tooltip_C::Get_txt_Tooltip_Text()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Simple_Tooltip_C", "Get_txt_Tooltip_Text");

	Params::UW_Simple_Tooltip_C_Get_txt_Tooltip_Text_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


