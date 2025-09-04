#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C
// (None)

class UClass* UAIAction_MoveToPlayerSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_MoveToPlayerSpawn_C");

	return Clss;
}


// AIAction_MoveToPlayerSpawn_C AIAction_MoveToPlayerSpawn.Default__AIAction_MoveToPlayerSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_MoveToPlayerSpawn_C* UAIAction_MoveToPlayerSpawn_C::GetDefaultObj()
{
	static class UAIAction_MoveToPlayerSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_MoveToPlayerSpawn_C*>(UAIAction_MoveToPlayerSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_MoveToPlayerSpawn_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveToPlayerSpawn_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIAction_MoveToPlayerSpawn_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveToPlayerSpawn_C", "OnCreate_Blueprint");

	Params::UAIAction_MoveToPlayerSpawn_C_OnCreate_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_MoveToPlayerSpawn_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveToPlayerSpawn_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_MoveToPlayerSpawn.AIAction_MoveToPlayerSpawn_C.ExecuteUbergraph_AIAction_MoveToPlayerSpawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMoveToPlayerSpawn*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_MoveToPlayerSpawn_C::ExecuteUbergraph_AIAction_MoveToPlayerSpawn(int32 EntryPoint, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class UMoveToPlayerSpawn* CallFunc_SpawnObject_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue_1, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue_2, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_MoveToPlayerSpawn_C", "ExecuteUbergraph_AIAction_MoveToPlayerSpawn");

	Params::UAIAction_MoveToPlayerSpawn_C_ExecuteUbergraph_AIAction_MoveToPlayerSpawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue_1 = CallFunc_GetCombatActivity_ReturnValue_1;
	Parms.CallFunc_GetCombatActivity_ReturnValue_2 = CallFunc_GetCombatActivity_ReturnValue_2;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


