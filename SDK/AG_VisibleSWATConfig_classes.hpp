#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AG_VisibleSWATConfig.AG_VisibleSWATConfig_C
class UAG_VisibleSWATConfig_C : public UAIActionGate
{
public:

	static class UClass* StaticClass();
	static class UAG_VisibleSWATConfig_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetVisibleSWATPercentage_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


