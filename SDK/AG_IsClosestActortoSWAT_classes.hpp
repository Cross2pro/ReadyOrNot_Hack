#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x29 - 0x28)
// BlueprintGeneratedClass AG_IsClosestActortoSWAT.AG_IsClosestActortoSWAT_C
class UAG_IsClosestActortoSWAT_C : public UAIActionGate
{
public:
	bool                                         ExcludeCivilians;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_IsClosestActortoSWAT_C* GetDefaultObj();

	void Get_SWAT(TArray<class AReadyOrNotCharacter*>* ArrayOutput, const TArray<class AReadyOrNotCharacter*>& LocalSWATArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Nearest(const struct FVector& Location, class AActor** Nearest, const TArray<class AReadyOrNotCharacter*>& ActorArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsOnSWATTeam_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Actors(TArray<class AReadyOrNotCharacter*>* ArrayOutput, const TArray<class AReadyOrNotCharacter*>& LocalActorArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSuspect_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool CanOpen(struct FAIActionDecisionContext& Context, TArray<class AReadyOrNotCharacter*>& CallFunc_Get_SWAT_ArrayOutput, TArray<class AReadyOrNotCharacter*>& CallFunc_Get_Actors_ArrayOutput, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_FindClosestActorFromLocation_Blueprint_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_FindNearestActor_Distance, class AActor* CallFunc_FindNearestActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


