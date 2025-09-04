#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass AG_RecentlyYelledAt.AG_RecentlyYelledAt_C
class UAG_RecentlyYelledAt_C : public UAIActionGate
{
public:
	double                                       SinceSeconds;                                      // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentlyYelledAt_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_WasRecentlyYelledAt_ReturnValue, float CallFunc_WasRecentlyYelledAt_Seconds_ImplicitCast);
};

}


