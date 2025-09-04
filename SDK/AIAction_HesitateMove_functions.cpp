#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_HesitateMove.AIAction_HesitateMove_C
// (None)

class UClass* UAIAction_HesitateMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_HesitateMove_C");

	return Clss;
}


// AIAction_HesitateMove_C AIAction_HesitateMove.Default__AIAction_HesitateMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_HesitateMove_C* UAIAction_HesitateMove_C::GetDefaultObj()
{
	static class UAIAction_HesitateMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_HesitateMove_C*>(UAIAction_HesitateMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.ShouldForcePerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_HesitateMove_C::ShouldForcePerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "ShouldForcePerformAction");

	Params::UAIAction_HesitateMove_C_ShouldForcePerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.GetHesitationVoiceOver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bUseAlternate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UAIAction_HesitateMove_C::GetHesitationVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "GetHesitationVoiceOver");

	Params::UAIAction_HesitateMove_C_GetHesitationVoiceOver_Params Parms{};

	Parms.bUseAlternate = bUseAlternate;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.GetMoveStyleOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentMoveStyle                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAnimWeaponType         CallFunc_GetCurrentWeaponAnimType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UAIAction_HesitateMove_C::GetMoveStyleOverride(class FName CurrentMoveStyle, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "GetMoveStyleOverride");

	Params::UAIAction_HesitateMove_C_GetMoveStyleOverride_Params Parms{};

	Parms.CurrentMoveStyle = CurrentMoveStyle;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCurrentWeaponAnimType_ReturnValue = CallFunc_GetCurrentWeaponAnimType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_HesitateMove_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "ShouldPerformAction");

	Params::UAIAction_HesitateMove_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateMove_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "Tick_Blueprint");

	Params::UAIAction_HesitateMove_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_HesitateMove_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.InitAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateMove_C::InitAction_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "InitAction_Blueprint");

	Params::UAIAction_HesitateMove_C_InitAction_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.PlayHesitationVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_HesitateMove_C::PlayHesitationVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "PlayHesitationVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_HesitateMove_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.OnPathFound_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PathId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateMove_C::OnPathFound_Blueprint(int32 PathId, enum class ERonNavigationQueryResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "OnPathFound_Blueprint");

	Params::UAIAction_HesitateMove_C_OnPathFound_Blueprint_Params Parms{};

	Parms.PathId = PathId;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_HesitateMove.AIAction_HesitateMove_C.ExecuteUbergraph_AIAction_HesitateMove
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHesitationVoiceOver_NewParam                         (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingForRequest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_HasRecentlySeenSwat_OutLocation                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRecentlySeenSwat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_6                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayRawVO_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_7                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UNavigationQueryFilter>CallFunc_GetNavQueryFilter_ReturnValue                           (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetHesitationVoiceOver_NewParam_1                       (ZeroConstructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_8                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayRawVO_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArrestedOrSurrendered_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_9                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_10                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PathId                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERonNavigationQueryResultK2Node_Event_Result                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindPositionAwayFromSwat_OutLocation                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPositionAwayFromSwat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_11                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetImmediateMoveDestination_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IncreaseStress_Amount_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateMove_C::ExecuteUbergraph_AIAction_HesitateMove(int32 EntryPoint, const class FString& CallFunc_GetHesitationVoiceOver_NewParam, float K2Node_Event_DeltaTime, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_IsMovingForRequest_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, bool CallFunc_PlayRawVO_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavQueryFilter_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_PlayRawVO_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_10, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const class FString& Temp_string_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 K2Node_Event_PathId, enum class ERonNavigationQueryResult K2Node_Event_Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& Temp_string_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, const struct FVector& CallFunc_FindPositionAwayFromSwat_OutLocation, bool CallFunc_FindPositionAwayFromSwat_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_11, const struct FVector& CallFunc_GetImmediateMoveDestination_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast, float CallFunc_IncreaseStress_Amount_ImplicitCast, float CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateMove_C", "ExecuteUbergraph_AIAction_HesitateMove");

	Params::UAIAction_HesitateMove_C_ExecuteUbergraph_AIAction_HesitateMove_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHesitationVoiceOver_NewParam = CallFunc_GetHesitationVoiceOver_NewParam;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.CallFunc_IsMovingForRequest_ReturnValue = CallFunc_IsMovingForRequest_ReturnValue;
	Parms.CallFunc_HasRecentlySeenSwat_OutLocation = CallFunc_HasRecentlySeenSwat_OutLocation;
	Parms.CallFunc_HasRecentlySeenSwat_ReturnValue = CallFunc_HasRecentlySeenSwat_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_4 = CallFunc_GetCharacter_ReturnValue_4;
	Parms.CallFunc_GetCharacter_ReturnValue_5 = CallFunc_GetCharacter_ReturnValue_5;
	Parms.CallFunc_GetCharacter_ReturnValue_6 = CallFunc_GetCharacter_ReturnValue_6;
	Parms.CallFunc_PlayRawVO_ReturnValue = CallFunc_PlayRawVO_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_7 = CallFunc_GetCharacter_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNavQueryFilter_ReturnValue = CallFunc_GetNavQueryFilter_ReturnValue;
	Parms.CallFunc_GetHesitationVoiceOver_NewParam_1 = CallFunc_GetHesitationVoiceOver_NewParam_1;
	Parms.CallFunc_GetCharacter_ReturnValue_8 = CallFunc_GetCharacter_ReturnValue_8;
	Parms.CallFunc_PlayRawVO_ReturnValue_1 = CallFunc_PlayRawVO_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsArrestedOrSurrendered_ReturnValue = CallFunc_IsArrestedOrSurrendered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_9 = CallFunc_GetCharacter_ReturnValue_9;
	Parms.CallFunc_GetCharacter_ReturnValue_10 = CallFunc_GetCharacter_ReturnValue_10;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_Event_PathId = K2Node_Event_PathId;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_FindPositionAwayFromSwat_OutLocation = CallFunc_FindPositionAwayFromSwat_OutLocation;
	Parms.CallFunc_FindPositionAwayFromSwat_ReturnValue = CallFunc_FindPositionAwayFromSwat_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_11 = CallFunc_GetCharacter_ReturnValue_11;
	Parms.CallFunc_GetImmediateMoveDestination_ReturnValue = CallFunc_GetImmediateMoveDestination_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue_1 = CallFunc_GetDirectionUnitVector_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast = CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast;
	Parms.CallFunc_IncreaseStress_Amount_ImplicitCast = CallFunc_IncreaseStress_Amount_ImplicitCast;
	Parms.CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast = CallFunc_FindPositionAwayFromSwat_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


