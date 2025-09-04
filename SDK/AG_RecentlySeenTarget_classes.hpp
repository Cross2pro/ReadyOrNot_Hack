#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass AG_RecentlySeenTarget.AG_RecentlySeenTarget_C
class UAG_RecentlySeenTarget_C : public UAIActionGate
{
public:
	enum class EAITargetType                     TargetType;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_368B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SinceSeconds;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_RecentlySeenTarget_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, double Value, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_VariableSet_Value_ImplicitCast, double K2Node_VariableSet_Value_ImplicitCast_1, double K2Node_VariableSet_Value_ImplicitCast_2, double K2Node_VariableSet_Value_ImplicitCast_3);
};

}


