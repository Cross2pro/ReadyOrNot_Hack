#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xD9 - 0xD8)
// BlueprintGeneratedClass AC_TargetFacingMe.AC_TargetFacingMe_C
class UAC_TargetFacingMe_C : public UAIActionConsideration
{
public:
	bool                                         bRequireLOS;                                       // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAC_TargetFacingMe_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class AReadyOrNotCharacter* CallFunc_GetTrackedTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasLineOfSight_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1);
};

}


