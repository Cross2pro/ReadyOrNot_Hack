#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12A1 (0x1611 - 0x370)
// AnimBlueprintGeneratedClass ABP_Launcher_M32A1.ABP_Launcher_M32A1_C
class UABP_Launcher_M32A1_C : public URoNWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x378(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x380(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x388(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3A8(0x48)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x3F0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x410(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x538(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x558(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x5A0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x6C8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x7F0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x918(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0xA40(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0xB68(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0xC90(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0xDB8(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0xEE0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x1008(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1130(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1258(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1380(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x14A8(0x128)(None)
	double                                       RotationCounterSmoothed;                           // 0x15D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotationCounter;                                   // 0x15D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPerformCylinderReset;                             // 0x15E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideSpeedLoader;                                  // 0x15E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell01Used;                                  // 0x15E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell02Used;                                  // 0x15E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell03Used;                                  // 0x15E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell04Used;                                  // 0x15E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell05Used;                                  // 0x15E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell06Used;                                  // 0x15E7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShellCounter;                                      // 0x15E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell01;                                      // 0x15EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell02;                                      // 0x15ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell03;                                      // 0x15EE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell04;                                      // 0x15EF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell05;                                      // 0x15F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHideShell06;                                      // 0x15F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3655[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseMagazineWeapon*                   As_Base_Magazine_Weapon;                           // 0x15F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShellFlashSpawnClass;                              // 0x1600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShellSmokeSpawnClass;                              // 0x1608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSmokeShell;                                     // 0x1610(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Launcher_M32A1_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SpawnStaticShellWorld(class FName BoneName, bool bIsEmptyShell, bool bIsSmokeShell, class UClass* CurrentShellSpawnClass, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ShellActor_C* K2Node_DynamicCast_AsBP_Shell_Actor, bool K2Node_DynamicCast_bSuccess);
	void HideAllShells();
	void ResetShellStatus();
	void UpdateShellStatus(int32 ShellIndex, bool K2Node_SwitchInteger_CmpSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_35821CF043ECADCE015ABAA931B74AE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Launcher_M32A1_AnimGraphNode_ModifyBone_BF147BE247C77A91A0739BA2CAA1870C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_RotateCylinder();
	void AnimNotify_ResetCylinder();
	void AnimNotify_ShowSpeedLoader();
	void AnimNotify_HideSpeedLoader();
	void AnimNotify_HideShells();
	void AnimNotify_ShowShells();
	void BlueprintInitializeAnimation();
	void HideAndSpawnShellsEvent();
	void ShowShellsEvent();
	void ExecuteUbergraph_ABP_Launcher_M32A1(int32 EntryPoint, float K2Node_Event_DeltaTimeX, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
};

}


