#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_RNGConfig.AG_RNGConfig_C
class UAG_RNGConfig_C : public UAIActionGate
{
public:
	class FString                                Config_Key;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RNGConfig_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, double CallFunc_RandomFloat_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
};

}


