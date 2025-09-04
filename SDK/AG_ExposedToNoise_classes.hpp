#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass AG_ExposedToNoise.AG_ExposedToNoise_C
class UAG_ExposedToNoise_C : public UAIActionGate
{
public:
	TArray<class FName>                          ExcludedTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	double                                       Since_Seconds;                                     // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Max_Distance;                                      // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        TargetType;                                        // 0x48(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bExclusive;                                        // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_29B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAG_ExposedToNoise_C* GetDefaultObj();

	bool CanOpen(struct FAIActionDecisionContext& Context, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_HasBeenExposedToAnyNoise_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_HasBeenExposedToAnyNoise_Tag_OutTag, bool CallFunc_HasBeenExposedToAnyNoise_Tag_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_HasBeenExposedToAnyNoise_MaxDistance_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_SinceSeconds_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_Tag_MaxDistance_ImplicitCast, float CallFunc_HasBeenExposedToAnyNoise_Tag_SinceSeconds_ImplicitCast);
};

}


