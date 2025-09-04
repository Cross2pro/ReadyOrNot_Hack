#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3050 - 0x3048)
// BlueprintGeneratedClass VIPPlayer.VIPPlayer_C
class AVIPPlayer_C : public ABasePlayer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3048(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AVIPPlayer_C* GetDefaultObj();

	void ExecuteUbergraph_VIPPlayer(int32 EntryPoint);
};

}


