#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3A0 - 0x378)
// BlueprintGeneratedClass BP_AnimatedDecal.BP_AnimatedDecal_C
class ABP_AnimatedDecal_C : public AAnimatedDecal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   BillBoard;                                         // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterialInstance;                           // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentTime;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TimeParameter;                                     // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnimatedDecal_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void SetAnimatedDecalMaterial(class UMaterialInterface* Material);
	void ExecuteUbergraph_BP_AnimatedDecal(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetRuntimeFloatCurveValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UMaterialInterface* K2Node_Event_Material, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetRuntimeFloatCurveValue_Time_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
};

}


