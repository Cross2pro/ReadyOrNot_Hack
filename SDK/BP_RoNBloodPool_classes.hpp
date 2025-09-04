#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x3C0 - 0x2F0)
// BlueprintGeneratedClass BP_RoNBloodPool.BP_RoNBloodPool_C
class ABP_RoNBloodPool_C : public ABloodPool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x2F8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        RandomPick;                                        // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BloodExpansionRate;                                // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       BloodExpansionCurrent;                             // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBleeding;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    AnimationCurve;                                    // 0x330(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       BoxMaxSize;                                        // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RoNBloodPool_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_RoNBloodPool(int32 EntryPoint, int32 CallFunc_RandomIntegerInRange_ReturnValue, float K2Node_Event_DeltaSeconds, double CallFunc_FClamp_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetRuntimeFloatCurveValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GetRuntimeFloatCurveValue_Time_ImplicitCast);
};

}


