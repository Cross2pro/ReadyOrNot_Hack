#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x1C78 - 0x1C50)
// BlueprintGeneratedClass Secondary_Taser_V2.Secondary_Taser_V2_C
class ASecondary_Taser_V2_C : public ATaser
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       OverallTaserWireLength;                            // 0x1C58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastLocation;                                      // 0x1C60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASecondary_Taser_V2_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DestroyPouches_1();
	void SpawnPouches_1();
	void ExecuteUbergraph_Secondary_Taser_V2(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FVector>& CallFunc_GetCableParticleLocations_Locations, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Array_Get_Item_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_CableLength_ImplicitCast);
};

}


