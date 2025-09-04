#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_DistanceToNearestExit.AG_DistanceToNearestExit_C
class UAG_DistanceToNearestExit_C : public UAIActionGate
{
public:
	double                                       Max_Distance;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_DistanceToNearestExit_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class AThreatAwarenessActor* CallFunc_GetNearestThreat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ADoor*>& CallFunc_GetUniqueExtis_OutDoors, bool CallFunc_GetUniqueExtis_ReturnValue, TArray<class ADoor*>& CallFunc_FilterDoorsForFlee_FilteredDoors, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


