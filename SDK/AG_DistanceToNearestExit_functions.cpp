#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_DistanceToNearestExit.AG_DistanceToNearestExit_C
// (None)

class UClass* UAG_DistanceToNearestExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_DistanceToNearestExit_C");

	return Clss;
}


// AG_DistanceToNearestExit_C AG_DistanceToNearestExit.Default__AG_DistanceToNearestExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_DistanceToNearestExit_C* UAG_DistanceToNearestExit_C::GetDefaultObj()
{
	static class UAG_DistanceToNearestExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_DistanceToNearestExit_C*>(UAG_DistanceToNearestExit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_DistanceToNearestExit.AG_DistanceToNearestExit_C.CanOpen
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AThreatAwarenessActor*       CallFunc_GetNearestThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADoor*>               CallFunc_GetUniqueExtis_OutDoors                                 (ReferenceParm)
// bool                               CallFunc_GetUniqueExtis_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADoor*>               CallFunc_FilterDoorsForFlee_FilteredDoors                        (ReferenceParm)
// class AActor*                      CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_DistanceToNearestExit_C::CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ADoor*>& CallFunc_GetUniqueExtis_OutDoors, bool CallFunc_GetUniqueExtis_ReturnValue, TArray<class ADoor*>& CallFunc_FilterDoorsForFlee_FilteredDoors, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_DistanceToNearestExit_C", "CanOpen");

	Params::UAG_DistanceToNearestExit_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetNearestThreat_ReturnValue = CallFunc_GetNearestThreat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetUniqueExtis_OutDoors = CallFunc_GetUniqueExtis_OutDoors;
	Parms.CallFunc_GetUniqueExtis_ReturnValue = CallFunc_GetUniqueExtis_ReturnValue;
	Parms.CallFunc_FilterDoorsForFlee_FilteredDoors = CallFunc_FilterDoorsForFlee_FilteredDoors;
	Parms.CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue = CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


