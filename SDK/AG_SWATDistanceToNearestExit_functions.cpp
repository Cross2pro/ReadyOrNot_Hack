#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AG_SWATDistanceToNearestExit.AG_SWATDistanceToNearestExit_C
// (None)

class UClass* UAG_SWATDistanceToNearestExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AG_SWATDistanceToNearestExit_C");

	return Clss;
}


// AG_SWATDistanceToNearestExit_C AG_SWATDistanceToNearestExit.Default__AG_SWATDistanceToNearestExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAG_SWATDistanceToNearestExit_C* UAG_SWATDistanceToNearestExit_C::GetDefaultObj()
{
	static class UAG_SWATDistanceToNearestExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAG_SWATDistanceToNearestExit_C*>(UAG_SWATDistanceToNearestExit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AG_SWATDistanceToNearestExit.AG_SWATDistanceToNearestExit_C.Get SWAT
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AReadyOrNotCharacter*>ArrayOutput                                                      (Parm, OutParm)
// TArray<class AReadyOrNotCharacter*>LocalSWATArray                                                   (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotGameState*        CallFunc_GetReadyOrNotGameState_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotCharacter*        CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOnSWATTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAG_SWATDistanceToNearestExit_C::Get_SWAT(TArray<class AReadyOrNotCharacter*>* ArrayOutput, const TArray<class AReadyOrNotCharacter*>& LocalSWATArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_SWATDistanceToNearestExit_C", "Get SWAT");

	Params::UAG_SWATDistanceToNearestExit_C_Get_SWAT_Params Parms{};

	Parms.LocalSWATArray = LocalSWATArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetReadyOrNotGameState_ReturnValue = CallFunc_GetReadyOrNotGameState_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsOnSWATTeam_ReturnValue = CallFunc_IsOnSWATTeam_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ArrayOutput != nullptr)
		*ArrayOutput = std::move(Parms.ArrayOutput);

}


// Function AG_SWATDistanceToNearestExit.AG_SWATDistanceToNearestExit_C.CanOpen
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FAIActionDecisionContext    Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AReadyOrNotCharacter*>CallFunc_Get_SWAT_ArrayOutput                                    (ReferenceParm)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AThreatAwarenessActor*       CallFunc_GetNearestThreat_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADoor*>               CallFunc_GetUniqueExtis_OutDoors                                 (ReferenceParm)
// bool                               CallFunc_GetUniqueExtis_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADoor*>               CallFunc_FilterDoorsForFlee_FilteredDoors                        (ReferenceParm)
// class AActor*                      CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue_1    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAG_SWATDistanceToNearestExit_C::CanOpen(struct FAIActionDecisionContext& Context, TArray<class AReadyOrNotCharacter*>& CallFunc_Get_SWAT_ArrayOutput, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ADoor*>& CallFunc_GetUniqueExtis_OutDoors, bool CallFunc_GetUniqueExtis_ReturnValue, TArray<class ADoor*>& CallFunc_FilterDoorsForFlee_FilteredDoors, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AG_SWATDistanceToNearestExit_C", "CanOpen");

	Params::UAG_SWATDistanceToNearestExit_C_CanOpen_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Get_SWAT_ArrayOutput = CallFunc_Get_SWAT_ArrayOutput;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetNearestThreat_ReturnValue = CallFunc_GetNearestThreat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetUniqueExtis_OutDoors = CallFunc_GetUniqueExtis_OutDoors;
	Parms.CallFunc_GetUniqueExtis_ReturnValue = CallFunc_GetUniqueExtis_ReturnValue;
	Parms.CallFunc_FilterDoorsForFlee_FilteredDoors = CallFunc_FilterDoorsForFlee_FilteredDoors;
	Parms.CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue = CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue_1 = CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


