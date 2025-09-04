#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x39 - 0x28)
// BlueprintGeneratedClass AG_AIConfigValue_TimeSinceGameStart.AG_AIConfigValue_TimeSinceGameStart_C
class UAG_AIConfigValue_TimeSinceGameStart_C : public UAIActionGate
{
public:
	class FString                                Config_Key;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        ComparisonType;                                    // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_AIConfigValue_TimeSinceGameStart_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, float CallFunc_GetFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_1, float CallFunc_GetFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_2, float CallFunc_GetFloat_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_3, float CallFunc_GetFloat_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UReadyOrNotAIConfig* CallFunc_Get_ReturnValue_4, float CallFunc_GetFloat_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast);
};

}


