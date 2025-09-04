#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x90 - 0x58)
// BlueprintGeneratedClass AIAction_ActiveShooter_TargetNextCivilian.AIAction_ActiveShooter_TargetNextCivilian_C
class UAIAction_ActiveShooter_TargetNextCivilian_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACyberneticCharacter*                  TargetingCivilian;                                 // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TimeUntilNextTarget;                               // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACyberneticCharacter*>          FailedCivilianPaths;                               // 0x70(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       TimeUntilKill;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeUntilNextVO;                                   // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIAction_ActiveShooter_TargetNextCivilian_C* GetDefaultObj();

	class FString GatherDebugInfo(class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void TryScriptedFireAtCivilian(class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void GetNextClosestAliveCivilian(class ACyberneticCharacter** Civilian, bool* Return_Value, class ACyberneticCharacter* ClosestCivilian, double Distance, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AReadyOrNotGameState* CallFunc_GetReadyOrNotGameState_ReturnValue, class ACyberneticCharacter* CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsCivilian_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void CanTargetCivilian(class ACyberneticCharacter* InCivilian, bool* Return_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsIncapacitated_ReturnValue, bool CallFunc_IsDeadOrUnconscious_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool ShouldPerformAction(class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void FindNextCivilian();
	void OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result);
	void EndAction_Blueprint();
	void Tick_Blueprint(float DeltaTime);
	void BeginAction_Blueprint();
	void ExecuteUbergraph_AIAction_ActiveShooter_TargetNextCivilian(int32 EntryPoint, class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class UTargetNextCivilianActivity* CallFunc_GetTargetNextCivilianActivity_ReturnValue_1, bool CallFunc_GiveActivityTo_ReturnValue);
};

}


