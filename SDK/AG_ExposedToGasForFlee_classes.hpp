#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_ExposedToGasForFlee.AG_ExposedToGasForFlee_C
class UAG_ExposedToGasForFlee_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_ExposedToGasForFlee_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetStunExposureTime_TimeExposed, bool CallFunc_GetStunExposureTime_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


