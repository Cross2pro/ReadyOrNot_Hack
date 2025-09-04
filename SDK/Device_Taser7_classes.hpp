#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C80 - 0x1C50)
// BlueprintGeneratedClass Device_Taser7.Device_Taser7_C
class ADevice_Taser7_C : public ATaser
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       OverallTaserWireLength;                            // 0x1C58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastLocation;                                      // 0x1C60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ScreenDynamicMaterial;                             // 0x1C78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADevice_Taser7_C* GetDefaultObj();

	void SpawnPouches_1();
	void DestroyPouches_1();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Device_Taser7(int32 EntryPoint, bool CallFunc_IsCurrentlyReloading_ReturnValue, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, int32 Temp_int_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAmmo_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture* K2Node_Select_Default, float K2Node_Event_DeltaSeconds, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
};

}


