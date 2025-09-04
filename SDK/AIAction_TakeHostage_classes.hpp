#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x90 - 0x58)
// BlueprintGeneratedClass AIAction_TakeHostage.AIAction_TakeHostage_C
class UAIAction_TakeHostage_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACyberneticCharacter*                  TargetCivilian;                                    // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTakeHostageActivity*                  TakeHostageActivity;                               // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TakeHostageTime;                                   // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bPerformHostageTaking;                             // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_352E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchRange;                                       // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       LookatThreshold;                                   // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_TakeHostage_C* GetDefaultObj();

	bool ShouldSwitchWeapons();
	void EquipBestHostageTakingWeapon(bool* bFoundWeapon, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfType_ReturnValue, class ABaseItem* CallFunc_EquipItemOfType_ReturnValue, class ABaseMagazineWeapon* K2Node_DynamicCast_AsBase_Magazine_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAmmo_ReturnValue, class ABaseItem* CallFunc_EquipItemOfClass_ReturnValue, class ABaseItem* CallFunc_GetInventoryItemOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IsCivilianNotFacingTarget(class ACyberneticCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void IsCivilianFacingTarget(class ACyberneticCharacter* Civilian, class AReadyOrNotCharacter* Target, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void AnySWATNearCivilian(class ACyberneticCharacter* Civilian, bool* Return_Value, const TArray<class AReadyOrNotCharacter*>& Swat, int32 Temp_int_Array_Index_Variable, class USWATManager* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ASWATCharacter*>& CallFunc_GetSwatTeam_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class AReadyOrNotCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AReadyOrNotGameMode* K2Node_DynamicCast_AsReady_or_Not_Game_Mode, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerCharacter*>& CallFunc_GetAllPlayerCharactersInWorld_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void OnTakeHostageFinished(class UBaseActivity* Activity, class ACyberneticController* Controller);
	void TraceForNearbyCivilians(TArray<class ACyberneticCharacter*>* Return_Value, const TArray<class ACyberneticCharacter*>& CiviliansNearby, int32 Temp_int_Loop_Counter_Variable, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACyberneticCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_HasLineOfSight_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool ShouldPerformAction();
	void FindClosestCivilian(TArray<class ACyberneticCharacter*>& Civilians, class ACyberneticCharacter** Return_Value, double Distance, double ClosestDistance, class ACyberneticCharacter* ClosestCivilian_Local, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsSurrendered_ReturnValue, bool CallFunc_AnySWATNearCivilian_Return_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsSameFaction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Distance_ImplicitCast);
	void BeginAction_Blueprint();
	void OnCreate_Blueprint(class ACyberneticController* Controller);
	void EndAction_Blueprint();
	void ExecuteUbergraph_AIAction_TakeHostage(int32 EntryPoint, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class UTakeHostageActivity* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GiveActivityTo_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsTakingHostage_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class ACyberneticCharacter*>& CallFunc_TraceForNearbyCivilians_Return_Value, bool CallFunc_EquipBestHostageTakingWeapon_bFoundWeapon, class ACyberneticCharacter* CallFunc_FindClosestCivilian_Return_Value, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue_1, float K2Node_VariableSet_TimeToSurrenderHostage_ImplicitCast);
};

}


