#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass AC_Ammo.AC_Ammo_C
class UAC_Ammo_C : public UAC_Ammo
{
public:

	static class UClass* StaticClass();
	static class UAC_Ammo_C* GetDefaultObj();

	float CalculateCurve(float X, double CallFunc_LogisticCurve_Return_Value, double CallFunc_LogisticCurve_X_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void ReloadCurve(double X, double* Return_Value, double E, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue);
};

}


