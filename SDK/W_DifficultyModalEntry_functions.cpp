#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_DifficultyModalEntry.W_DifficultyModalEntry_C
// (None)

class UClass* UW_DifficultyModalEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_DifficultyModalEntry_C");

	return Clss;
}


// W_DifficultyModalEntry_C W_DifficultyModalEntry.Default__W_DifficultyModalEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_DifficultyModalEntry_C* UW_DifficultyModalEntry_C::GetDefaultObj()
{
	static class UW_DifficultyModalEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_DifficultyModalEntry_C*>(UW_DifficultyModalEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.SetButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultyModalEntry_C::SetButtonSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "SetButtonSelected");

	Params::UW_DifficultyModalEntry_C_SetButtonSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultyModalEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "PreConstruct");

	Params::UW_DifficultyModalEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_DifficultyModalEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.BndEvt__W_DifficultyModalEntry_W_OnOffButton_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultyModalEntry_C::BndEvt__W_DifficultyModalEntry_W_OnOffButton_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "BndEvt__W_DifficultyModalEntry_W_OnOffButton_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature");

	Params::UW_DifficultyModalEntry_C_BndEvt__W_DifficultyModalEntry_W_OnOffButton_K2Node_ComponentBoundEvent_0_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.ExecuteUbergraph_W_DifficultyModalEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_DifficultyModalEntry_C::ExecuteUbergraph_W_DifficultyModalEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "ExecuteUbergraph_W_DifficultyModalEntry");

	Params::UW_DifficultyModalEntry_C_ExecuteUbergraph_W_DifficultyModalEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_DifficultyModalEntry.W_DifficultyModalEntry_C.OnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EntryTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_DifficultyModalEntry_C::OnStateChanged__DelegateSignature(bool bEnabled, const struct FGameplayTag& EntryTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_DifficultyModalEntry_C", "OnStateChanged__DelegateSignature");

	Params::UW_DifficultyModalEntry_C_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.EntryTag = EntryTag;

	UObject::ProcessEvent(Func, &Parms);

}

}


