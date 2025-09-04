#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x29 - 0x28)
// BlueprintGeneratedClass AG_HasValidZone.AG_HasValidZone_C
class UAG_HasValidZone_C : public UAIActionGate
{
public:
	enum class ECurrentZoneTransitionState       ZoneDirection;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_HasValidZone_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class AZoneManager* CallFunc_GetActorOfClass_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasValidZone_ReturnValue);
};

}


