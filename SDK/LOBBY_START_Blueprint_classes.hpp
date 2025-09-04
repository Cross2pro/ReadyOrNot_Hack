#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x300 - 0x2F1)
// BlueprintGeneratedClass LOBBY_START_Blueprint.LOBBY_START_Blueprint_C
class ALOBBY_START_Blueprint_C : public ADefaultPlayerStart_C
{
public:
	uint8                                        Pad_3400[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALOBBY_START_Blueprint_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void CustomEvent_0();
	void ExecuteUbergraph_LOBBY_START_Blueprint(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


