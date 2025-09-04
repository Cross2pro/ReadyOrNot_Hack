#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PreMission_Tablet_PlayerList_Entry.W_PreMission_Tablet_PlayerList_Entry_C
// (None)

class UClass* UW_PreMission_Tablet_PlayerList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PreMission_Tablet_PlayerList_Entry_C");

	return Clss;
}


// W_PreMission_Tablet_PlayerList_Entry_C W_PreMission_Tablet_PlayerList_Entry.Default__W_PreMission_Tablet_PlayerList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PreMission_Tablet_PlayerList_Entry_C* UW_PreMission_Tablet_PlayerList_Entry_C::GetDefaultObj()
{
	static class UW_PreMission_Tablet_PlayerList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PreMission_Tablet_PlayerList_Entry_C*>(UW_PreMission_Tablet_PlayerList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PreMission_Tablet_PlayerList_Entry.W_PreMission_Tablet_PlayerList_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_PlayerList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerList_Entry_C", "PreConstruct");

	Params::UW_PreMission_Tablet_PlayerList_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PreMission_Tablet_PlayerList_Entry.W_PreMission_Tablet_PlayerList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PreMission_Tablet_PlayerList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerList_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PreMission_Tablet_PlayerList_Entry.W_PreMission_Tablet_PlayerList_Entry_C.ExecuteUbergraph_W_PreMission_Tablet_PlayerList_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PreMission_Tablet_PlayerList_Entry_C::ExecuteUbergraph_W_PreMission_Tablet_PlayerList_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PreMission_Tablet_PlayerList_Entry_C", "ExecuteUbergraph_W_PreMission_Tablet_PlayerList_Entry");

	Params::UW_PreMission_Tablet_PlayerList_Entry_C_ExecuteUbergraph_W_PreMission_Tablet_PlayerList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


