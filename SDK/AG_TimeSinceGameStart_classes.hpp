#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_TimeSinceGameStart.AG_TimeSinceGameStart_C
class UAG_TimeSinceGameStart_C : public UAIActionGate
{
public:
	double                                       Time;                                              // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_TimeSinceGameStart_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, float CallFunc_GetGameTimeSinceCreation_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


