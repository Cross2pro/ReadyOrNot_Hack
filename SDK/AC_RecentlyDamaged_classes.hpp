#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE0 - 0xD8)
// BlueprintGeneratedClass AC_RecentlyDamaged.AC_RecentlyDamaged_C
class UAC_RecentlyDamaged_C : public UAIActionConsideration
{
public:
	double                                       Tolerance;                                         // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_RecentlyDamaged_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasRecentlyTakenDamage_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float CallFunc_HasRecentlyTakenDamage_Tolerance_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
};

}


