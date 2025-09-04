#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x12A8 - 0x1270)
// BlueprintGeneratedClass Grenade_Roadflare.Grenade_Roadflare_C
class AGrenade_Roadflare_C : public ABaseGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  FlareLight;                                        // 0x1278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       TimeoutPeriod;                                     // 0x1280(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFadingOut_;                                       // 0x1288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IntensityTarget;                                   // 0x1290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LenFlare_RoadFlare_C*              Lens_Flare;                                        // 0x1298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BrightnessDefault;                                 // 0x12A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGrenade_Roadflare_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DetonateBind(class ABaseGrenade* Grenade);
	void GrenadeTimedOut();
	void ExecuteUbergraph_Grenade_Roadflare(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class ABaseGrenade* K2Node_CustomEvent_Grenade, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_LenFlare_RoadFlare_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
};

}


