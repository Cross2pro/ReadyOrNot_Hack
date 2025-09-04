#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1188 - 0x1180)
// BlueprintGeneratedClass BP_ReplayCameraPawn.BP_ReplayCameraPawn_C
class ABP_ReplayCameraPawn_C : public AReplayCameraPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1180(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ReplayCameraPawn_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ReplayCameraPawn(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


