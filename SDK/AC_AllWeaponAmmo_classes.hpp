#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_AllWeaponAmmo.AC_AllWeaponAmmo_C
class UAC_AllWeaponAmmo_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_AllWeaponAmmo_C* GetDefaultObj();

	void GetTotalRemainingAmmoFromAllMags(class ABaseMagazineWeapon* Weapon, double* Return_Value, double TotalRemainingWeaponAmmo, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetAmmoInMagazine_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ABaseMagazineWeapon* EquippedWeapon, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseItem* CallFunc_GetEquippedItem_ReturnValue, class AMeleeWeapon* K2Node_DynamicCast_AsMelee_Weapon, bool K2Node_DynamicCast_bSuccess, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetTotalRemainingAmmoFromAllMags_Return_Value, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast);
};

}


