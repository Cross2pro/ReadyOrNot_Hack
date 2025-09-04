#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x988 - 0x980)
// BlueprintGeneratedClass GS_VIPEscort.GS_VIPEscort_C
class AGS_VIPEscort_C : public AVIPEscortGS
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGS_VIPEscort_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GS_VIPEscort(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASceneCapturePlayerCamera_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


