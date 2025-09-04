#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ServerBrowserEntry.W_ServerBrowserEntry_C
// (None)

class UClass* UW_ServerBrowserEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ServerBrowserEntry_C");

	return Clss;
}


// W_ServerBrowserEntry_C W_ServerBrowserEntry.Default__W_ServerBrowserEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ServerBrowserEntry_C* UW_ServerBrowserEntry_C::GetDefaultObj()
{
	static class UW_ServerBrowserEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ServerBrowserEntry_C*>(UW_ServerBrowserEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ServerBrowserEntry_C::BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowserEntry_C::BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature");

	Params::UW_ServerBrowserEntry_C_BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowserEntry_C::BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UW_ServerBrowserEntry_C_BndEvt__W_ServerBrowserEntry_W_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ServerBrowserEntry.W_ServerBrowserEntry_C.ExecuteUbergraph_W_ServerBrowserEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ServerBrowserEntry_C::ExecuteUbergraph_W_ServerBrowserEntry(int32 EntryPoint, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ServerBrowserEntry_C", "ExecuteUbergraph_W_ServerBrowserEntry");

	Params::UW_ServerBrowserEntry_C_ExecuteUbergraph_W_ServerBrowserEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


