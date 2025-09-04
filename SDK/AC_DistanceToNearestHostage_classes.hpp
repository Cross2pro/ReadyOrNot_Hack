#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass AC_DistanceToNearestHostage.AC_DistanceToNearestHostage_C
class UAC_DistanceToNearestHostage_C : public UAIActionConsideration
{
public:
	double                                       SearchRange;                                       // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_DistanceToNearestHostage_C* GetDefaultObj();

	void FindCiviliansInRange(class ACyberneticCharacter* Start, TArray<class ACivilianCharacter*>* Return_Value, const TArray<class ACivilianCharacter*>& CiviliansNearby, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ACivilianCharacter* K2Node_DynamicCast_AsCivilian_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	float CalculateCurve(float X, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, double Distance, double Closest_Distance, class ACivilianCharacter* Target_Civ, class AReadyOrNotCharacter* Target, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class ACivilianCharacter*>& CallFunc_FindCiviliansInRange_Return_Value, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACivilianCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast);
};

}


