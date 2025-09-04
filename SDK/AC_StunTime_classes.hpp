#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_StunTime.AC_StunTime_C
class UAC_StunTime_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_StunTime_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_FMax_ReturnValue, float CallFunc_GetCurrentStunDuration_ReturnValue, float CallFunc_GetCurrentStunTime_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_IsStunned_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_FMin_B_ImplicitCast, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMin_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
};

}


