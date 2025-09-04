#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x918 - 0x910)
// BlueprintGeneratedClass GS_TDM.GS_TDM_C
class AGS_TDM_C : public ATeamDeathmatchGS
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGS_TDM_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_GS_TDM(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


