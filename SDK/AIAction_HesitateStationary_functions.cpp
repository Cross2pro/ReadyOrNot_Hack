#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_HesitateStationary.AIAction_HesitateStationary_C
// (None)

class UClass* UAIAction_HesitateStationary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_HesitateStationary_C");

	return Clss;
}


// AIAction_HesitateStationary_C AIAction_HesitateStationary.Default__AIAction_HesitateStationary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_HesitateStationary_C* UAIAction_HesitateStationary_C::GetDefaultObj()
{
	static class UAIAction_HesitateStationary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_HesitateStationary_C*>(UAIAction_HesitateStationary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.GetHesitationVoiceOver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bUseAlternate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)

void UAIAction_HesitateStationary_C::GetHesitationVoiceOver(bool bUseAlternate, class FString* NewParam, const class FString& CallFunc_SelectString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "GetHesitationVoiceOver");

	Params::UAIAction_HesitateStationary_C_GetHesitationVoiceOver_Params Parms{};

	Parms.bUseAlternate = bUseAlternate;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.GetMoveStyleOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentMoveStyle                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAnimWeaponType         CallFunc_GetCurrentWeaponAnimType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UAIAction_HesitateStationary_C::GetMoveStyleOverride(class FName CurrentMoveStyle, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, enum class EAnimWeaponType CallFunc_GetCurrentWeaponAnimType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "GetMoveStyleOverride");

	Params::UAIAction_HesitateStationary_C_GetMoveStyleOverride_Params Parms{};

	Parms.CurrentMoveStyle = CurrentMoveStyle;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCurrentWeaponAnimType_ReturnValue = CallFunc_GetCurrentWeaponAnimType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.ShouldPerformAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAction_HesitateStationary_C::ShouldPerformAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "ShouldPerformAction");

	Params::UAIAction_HesitateStationary_C_ShouldPerformAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.Tick_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateStationary_C::Tick_Blueprint(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "Tick_Blueprint");

	Params::UAIAction_HesitateStationary_C_Tick_Blueprint_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.BeginAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_HesitateStationary_C::BeginAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "BeginAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.InitAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ACyberneticController*       Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateStationary_C::InitAction_Blueprint(class ACyberneticController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "InitAction_Blueprint");

	Params::UAIAction_HesitateStationary_C_InitAction_Blueprint_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.PlayHesitationVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIAction_HesitateStationary_C::PlayHesitationVO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "PlayHesitationVO");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.EndAction_Blueprint
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAIAction_HesitateStationary_C::EndAction_Blueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "EndAction_Blueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIAction_HesitateStationary.AIAction_HesitateStationary_C.ExecuteUbergraph_AIAction_HesitateStationary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHesitationVoiceOver_NewParam                         (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticController*       K2Node_Event_Controller                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_5                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_6                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayRawVO_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_7                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_HasRecentlySeenSwat_OutLocation                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasRecentlySeenSwat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHesitationVoiceOver_NewParam_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayRawVO_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_8                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBaseCombatActivity*         CallFunc_GetCombatActivity_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArrestedOrSurrendered_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACyberneticCharacter*        CallFunc_GetCharacter_ReturnValue_9                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IncreaseStress_Amount_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIAction_HesitateStationary_C::ExecuteUbergraph_AIAction_HesitateStationary(int32 EntryPoint, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam, float K2Node_Event_DeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue, class ACyberneticController* K2Node_Event_Controller, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_2, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_4, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_5, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_6, const class FString& Temp_string_Variable_1, bool CallFunc_PlayRawVO_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_RandomBool_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_HasRecentlySeenSwat_OutLocation, bool CallFunc_HasRecentlySeenSwat_ReturnValue, const class FString& CallFunc_GetHesitationVoiceOver_NewParam_1, bool CallFunc_PlayRawVO_ReturnValue_1, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, class UBaseCombatActivity* CallFunc_GetCombatActivity_ReturnValue, bool CallFunc_IsArrestedOrSurrendered_ReturnValue, class ACyberneticCharacter* CallFunc_GetCharacter_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast, float CallFunc_IncreaseStress_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAction_HesitateStationary_C", "ExecuteUbergraph_AIAction_HesitateStationary");

	Params::UAIAction_HesitateStationary_C_ExecuteUbergraph_AIAction_HesitateStationary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetHesitationVoiceOver_NewParam = CallFunc_GetHesitationVoiceOver_NewParam;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_GetCharacter_ReturnValue_3 = CallFunc_GetCharacter_ReturnValue_3;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_4 = CallFunc_GetCharacter_ReturnValue_4;
	Parms.CallFunc_GetCharacter_ReturnValue_5 = CallFunc_GetCharacter_ReturnValue_5;
	Parms.CallFunc_GetCharacter_ReturnValue_6 = CallFunc_GetCharacter_ReturnValue_6;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_PlayRawVO_ReturnValue = CallFunc_PlayRawVO_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_7 = CallFunc_GetCharacter_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasRecentlySeenSwat_OutLocation = CallFunc_HasRecentlySeenSwat_OutLocation;
	Parms.CallFunc_HasRecentlySeenSwat_ReturnValue = CallFunc_HasRecentlySeenSwat_ReturnValue;
	Parms.CallFunc_GetHesitationVoiceOver_NewParam_1 = CallFunc_GetHesitationVoiceOver_NewParam_1;
	Parms.CallFunc_PlayRawVO_ReturnValue_1 = CallFunc_PlayRawVO_ReturnValue_1;
	Parms.CallFunc_GetCharacter_ReturnValue_8 = CallFunc_GetCharacter_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCombatActivity_ReturnValue = CallFunc_GetCombatActivity_ReturnValue;
	Parms.CallFunc_IsArrestedOrSurrendered_ReturnValue = CallFunc_IsArrestedOrSurrendered_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_9 = CallFunc_GetCharacter_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast = CallFunc_LowerMoraleOnCharacter_MoraleValue_ImplicitCast;
	Parms.CallFunc_IncreaseStress_Amount_ImplicitCast = CallFunc_IncreaseStress_Amount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


