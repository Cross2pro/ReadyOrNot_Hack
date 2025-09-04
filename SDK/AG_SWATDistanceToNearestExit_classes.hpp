#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_SWATDistanceToNearestExit.AG_SWATDistanceToNearestExit_C
class UAG_SWATDistanceToNearestExit_C : public UAIActionGate
{
public:
	double                                       Max_Distance;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_SWATDistanceToNearestExit_C* GetDefaultObj();

	void Get_SWAT(TArray<class AReadyOrNotCharacter*>* ArrayOutput, const TArray<class AReadyOrNotCharacter*>& LocalSWATArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanOpen(struct FAIActionDecisionContext& Context, TArray<class AReadyOrNotCharacter*>& CallFunc_Get_SWAT_ArrayOutput, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ADoor*>& CallFunc_GetUniqueExtis_OutDoors, bool CallFunc_GetUniqueExtis_ReturnValue, TArray<class ADoor*>& CallFunc_FilterDoorsForFlee_FilteredDoors, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


