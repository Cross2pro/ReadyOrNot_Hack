#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x100 - 0xD8)
// BlueprintGeneratedClass AC_ExposedToAggressiveNoise.AC_ExposedToAggressiveNoise_C
class UAC_ExposedToAggressiveNoise_C : public UAIActionConsideration
{
public:
	TArray<class FName>                          ExcludedTags;                                      // 0xD8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	double                                       Max_Distance;                                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ExclusiveTags;                                     // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAC_ExposedToAggressiveNoise_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue, class FName CallFunc_HasBeenExposedToAggressiveNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAggressiveNoise_Tag_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_HasBeenExposedToAggressiveNoise_Tag_MaxDistance_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast);
};

}


