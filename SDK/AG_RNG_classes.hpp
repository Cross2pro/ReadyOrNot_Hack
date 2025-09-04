#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_RNG.AG_RNG_C
class UAG_RNG_C : public UAIActionGate
{
public:
	double                                       Chance;                                            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RNG_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
};

}


