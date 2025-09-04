#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_FallbackToZone.AIAction_FallbackToZone_C
// (None)

class UClass* UAIAction_FallbackToZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_FallbackToZone_C");

	return Clss;
}


// AIAction_FallbackToZone_C AIAction_FallbackToZone.Default__AIAction_FallbackToZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_FallbackToZone_C* UAIAction_FallbackToZone_C::GetDefaultObj()
{
	static class UAIAction_FallbackToZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_FallbackToZone_C*>(UAIAction_FallbackToZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_FallbackToZone.AIAction_FallbackToZone_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatMoveActivity*     CallFunc_GetCombatMoveActivity_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMoveToZoneCombatMove*       K2Node_DynamicCast_AsMove_to_Zone_Combat_Move                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_FallbackToZone_C::ShouldPerformAction(class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class UBaseCombatMoveActivity* CallFunc_GetCombatMoveActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UMoveToZoneCombatMove* K2Node_DynamicCast_AsMove_to_Zone_Combat_Move, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FallbackToZone_C", "ShouldPerformAction");

	Params::UAIAction_FallbackToZone_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCombatMoveActivity_ReturnValue = CallFunc_GetCombatMoveActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsMove_to_Zone_Combat_Move = K2Node_DynamicCast_AsMove_to_Zone_Combat_Move;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_FallbackToZone.AIAction_FallbackToZone_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_FallbackToZone_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FallbackToZone_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_FallbackToZone.AIAction_FallbackToZone_C.OnCreate_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIAction_FallbackToZone_C::OnCreate_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FallbackToZone_C", "OnCreate_Blueprint");

	Params::UAIAction_FallbackToZone_C_OnCreate_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_FallbackToZone.AIAction_FallbackToZone_C.ExecuteUbergraph_AIAction_FallbackToZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMoveToZoneCombatMove*       CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIAction_FallbackToZone_C::ExecuteUbergraph_AIAction_FallbackToZone(int32 EntryPoint, class ACyberneticController* K2Node_Event_Controller, class UMoveToZoneCombatMove* CallFunc_SpawnObject_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_FallbackToZone_C", "ExecuteUbergraph_AIAction_FallbackToZone");

	Params::UAIAction_FallbackToZone_C_ExecuteUbergraph_AIAction_FallbackToZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


