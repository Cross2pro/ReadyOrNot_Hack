#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_RecentEnemyDeath.AG_RecentEnemyDeath_C
class UAG_RecentEnemyDeath_C : public UAIActionGate
{
public:
	double                                       SinceSeconds;                                      // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentEnemyDeath_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


