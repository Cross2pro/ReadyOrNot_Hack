#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_SurrenderTimeConfig.AG_SurrenderTimeConfig_C
class UAG_SurrenderTimeConfig_C : public UAIActionGate
{
public:
	class FString                                Config_Key;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_SurrenderTimeConfig_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
};

}


