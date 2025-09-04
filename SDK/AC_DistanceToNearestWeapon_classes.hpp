#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass AC_DistanceToNearestWeapon.AC_DistanceToNearestWeapon_C
class UAC_DistanceToNearestWeapon_C : public UAIActionConsideration
{
public:
	double                                       SearchRange;                                       // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DistanceToNearestWeapon_C* GetDefaultObj();

	void FindWeaponsInRange(class ACyberneticCharacter* Start, TArray<class ABaseMagazineWeapon*>* Return_Value, const TArray<class ABaseMagazineWeapon*>& WeaponsNearby, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABaseItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_HasAnyAmmo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	float CalculateCurve(float X, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, double Distance, double Closest_Distance, class ABaseMagazineWeapon* Target_Weapon, class AReadyOrNotCharacter* Target, int32 Temp_int_Array_Index_Variable, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, TArray<class ABaseMagazineWeapon*>& CallFunc_FindWeaponsInRange_Return_Value, int32 Temp_int_Loop_Counter_Variable, class ABaseMagazineWeapon* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast);
};

}


