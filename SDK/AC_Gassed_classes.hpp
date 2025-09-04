#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_Gassed.AC_Gassed_C
class UAC_Gassed_C : public UAIActionConsideration
{
public:

	static class UClass* StaticClass();
	static class UAC_Gassed_C* GetDefaultObj();

	float Score(struct FAIActionDecisionContext& Context, bool* bSuccess, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsCurrentlyGassed_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
};

}


