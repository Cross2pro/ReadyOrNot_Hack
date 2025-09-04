#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_TimeElapsedPerformingCombatMove.AG_TimeElapsedPerformingCombatMove_C
class UAG_TimeElapsedPerformingCombatMove_C : public UAIActionGate
{
public:
	double                                       Seconds;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_TimeElapsedPerformingCombatMove_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


