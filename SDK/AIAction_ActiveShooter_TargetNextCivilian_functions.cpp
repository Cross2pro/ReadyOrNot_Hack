#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C
// (None)

class UClass* UAIAction_ActiveShooter_TargetNextCivilian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_ActiveShooter_TargetNextCivilian_C");

	return Clss;
}


// AIAction_ActiveShooter_TargetNextCivilian_C AIAction_ActiveShooter_TargetNextCivilian.Default__AIAction_ActiveShooter_TargetNextCivilian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_ActiveShooter_TargetNextCivilian_C* UAIAction_ActiveShooter_TargetNextCivilian_C::GetDefaultObj()
{
	static class UAIAction_ActiveShooter_TargetNextCivilian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_ActiveShooter_TargetNextCivilian_C*>(UAIAction_ActiveShooter_TargetNextCivilian_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.GatherDebugInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

class FString UAIAction_ActiveShooter_TargetNextCivilian_C::GatherDebugInfo(class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "GatherDebugInfo");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_GatherDebugInfo_Params Parms{};

	Parms.CallFunc_GetTargetNextCivilianActivity_ReturnValue = CallFunc_GetTargetNextCivilianActivity_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.TryScriptedFireAtCivilian
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::TryScriptedFireAtCivilian(class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "TryScriptedFireAtCivilian");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_TryScriptedFireAtCivilian_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.GetNextClosestAliveCivilian
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACyberneticCharacter*        Civilian                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        ClosestCivilian                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIncapacitated_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCivilian_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::GetNextClosestAliveCivilian(class ACyberneticCharacter** Civilian, bool* Return_Value, class ACyberneticCharacter* ClosestCivilian, double Distance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "GetNextClosestAliveCivilian");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_GetNextClosestAliveCivilian_Params Parms{};

	Parms.ClosestCivilian = ClosestCivilian;
	Parms.Distance = Distance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsIncapacitated_ReturnValue = CallFunc_IsIncapacitated_ReturnValue;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsCivilian_ReturnValue = CallFunc_IsCivilian_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Civilian != nullptr)
		*Civilian = Parms.Civilian;

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.CanTargetCivilian
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACyberneticCharacter*        InCivilian                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsIncapacitated_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDeadOrUnconscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::CanTargetCivilian(class ACyberneticCharacter* InCivilian, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "CanTargetCivilian");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_CanTargetCivilian_Params Parms{};

	Parms.InCivilian = InCivilian;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsIncapacitated_ReturnValue = CallFunc_IsIncapacitated_ReturnValue;
	Parms.CallFunc_IsDeadOrUnconscious_ReturnValue = CallFunc_IsDeadOrUnconscious_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_ActiveShooter_TargetNextCivilian_C::ShouldPerformAction(class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "ShouldPerformAction");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_ShouldPerformAction_Params Parms{};

	Parms.CallFunc_GetTargetNextCivilianActivity_ReturnValue = CallFunc_GetTargetNextCivilianActivity_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.FindNextCivilian
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_ActiveShooter_TargetNextCivilian_C::FindNextCivilian()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "FindNextCivilian");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.OnPathFound_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PathId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "OnPathFound_Blueprint");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_OnPathFound_Blueprint_Params Parms{};

	Parms.PathId = PathId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_ActiveShooter_TargetNextCivilian_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "Tick_Blueprint");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_ActiveShooter_TargetNextCivilian_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C.ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PathId                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultK2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GiveActivityTo_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_ActiveShooter_TargetNextCivilian_C::ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian(int32 EntryPoint, class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue_1, bool CallFunc_GiveActivityTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_ActiveShooter_TargetNextCivilian_C", "ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian");

	Params::UAIAction_ActiveShooter_TargetNextCivilian_C_ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTargetNextCivilianActivity_ReturnValue = CallFunc_GetTargetNextCivilianActivity_ReturnValue;
	Parms.K2Node_Event_PathId = K2Node_Event_PathId;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetTargetNextCivilianActivity_ReturnValue_1 = CallFunc_GetTargetNextCivilianActivity_ReturnValue_1;
	Parms.CallFunc_GiveActivityTo_ReturnValue = CallFunc_GiveActivityTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


