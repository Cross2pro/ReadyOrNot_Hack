#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WheelIcon_Pip.W_WheelIcon_Pip_C
// (None)

class UClass* UW_WheelIcon_Pip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WheelIcon_Pip_C");

	return Clss;
}


// W_WheelIcon_Pip_C W_WheelIcon_Pip.Default__W_WheelIcon_Pip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WheelIcon_Pip_C* UW_WheelIcon_Pip_C::GetDefaultObj()
{
	static class UW_WheelIcon_Pip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WheelIcon_Pip_C*>(UW_WheelIcon_Pip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WheelIcon_Pip.W_WheelIcon_Pip_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WheelIcon_Pip_C::OnHighlight(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WheelIcon_Pip_C", "OnHighlight");

	Params::UW_WheelIcon_Pip_C_OnHighlight_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WheelIcon_Pip.W_WheelIcon_Pip_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unselected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WheelIcon_Pip_C::OnUnhighlight(bool Unselected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WheelIcon_Pip_C", "OnUnhighlight");

	Params::UW_WheelIcon_Pip_C_OnUnhighlight_Params Parms{};

	Parms.Unselected = Unselected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WheelIcon_Pip.W_WheelIcon_Pip_C.ExecuteUbergraph_W_WheelIcon_Pip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Unselected                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Selected                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WheelIcon_Pip_C::ExecuteUbergraph_W_WheelIcon_Pip(int32 EntryPoint, bool K2Node_Event_Unselected, bool K2Node_Event_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WheelIcon_Pip_C", "ExecuteUbergraph_W_WheelIcon_Pip");

	Params::UW_WheelIcon_Pip_C_ExecuteUbergraph_W_WheelIcon_Pip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Unselected = K2Node_Event_Unselected;
	Parms.K2Node_Event_Selected = K2Node_Event_Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


