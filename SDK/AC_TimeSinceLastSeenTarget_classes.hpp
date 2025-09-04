#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TimeSinceLastSeenTarget.AC_TimeSinceLastSeenTarget_C
class UAC_TimeSinceLastSeenTarget_C : public UAIActionConsideration
{
public:
	enum class EAITargetType                     TargetType;                                        // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_TimeSinceLastSeenTarget_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, double Value, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_VariableSet_Value_ImplicitCast, double K2Node_VariableSet_Value_ImplicitCast_1, double K2Node_VariableSet_Value_ImplicitCast_2, double K2Node_VariableSet_Value_ImplicitCast_3, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast);
};

}


