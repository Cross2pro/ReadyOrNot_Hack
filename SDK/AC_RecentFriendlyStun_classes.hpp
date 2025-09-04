#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_RecentFriendlyStun.AC_RecentFriendlyStun_C
class UAC_RecentFriendlyStun_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_RecentFriendlyStun_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, double CallFunc_MapRangeClamped_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
};

}


