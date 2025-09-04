#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA60 - 0xA40)
// BlueprintGeneratedClass GM_TDM.GM_TDM_C
class AGM_TDM_C : public ATeamDeathmatchGM
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0xA48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRoundResetComplete;                              // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class AGM_TDM_C* GetDefaultObj();

	void StartNextRound(enum class ETeamType WinningTeam);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GM_TDM(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
	void OnRoundResetComplete__DelegateSignature();
};

}


