#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReadyRoomWidget.W_ReadyRoomWidget_C
// (None)

class UClass* UW_ReadyRoomWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReadyRoomWidget_C");

	return Clss;
}


// W_ReadyRoomWidget_C W_ReadyRoomWidget.Default__W_ReadyRoomWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReadyRoomWidget_C* UW_ReadyRoomWidget_C::GetDefaultObj()
{
	static class UW_ReadyRoomWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReadyRoomWidget_C*>(UW_ReadyRoomWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.UpdateInputActionTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue                   (HasGetValueTypeHash)
// class FText                        CallFunc_FormatPlayerActionText_ReturnValue                      (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FKey                        CallFunc_GetKeyFromInputActionName_ReturnValue_1                 (HasGetValueTypeHash)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// class FText                        CallFunc_FormatPlayerActionText_ReturnValue_1                    (None)

void UW_ReadyRoomWidget_C::UpdateInputActionTexts(uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FKey& Temp_struct_Variable, class FName CallFunc_MakeLiteralName_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue, class FText CallFunc_FormatPlayerActionText_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText K2Node_Select_Default, const struct FKey& CallFunc_GetKeyFromInputActionName_ReturnValue_1, bool CallFunc_Key_IsValid_ReturnValue, const struct FKey& K2Node_Select_Default_1, class FText CallFunc_FormatPlayerActionText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "UpdateInputActionTexts");

	Params::UW_ReadyRoomWidget_C_UpdateInputActionTexts_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue = CallFunc_GetKeyFromInputActionName_ReturnValue;
	Parms.CallFunc_FormatPlayerActionText_ReturnValue = CallFunc_FormatPlayerActionText_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetKeyFromInputActionName_ReturnValue_1 = CallFunc_GetKeyFromInputActionName_ReturnValue_1;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FormatPlayerActionText_ReturnValue_1 = CallFunc_FormatPlayerActionText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnCountdownCancelled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnCountdownCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnCountdownCancelled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnCountdownStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Countdown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::OnCountdownStart(float Countdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnCountdownStart");

	Params::UW_ReadyRoomWidget_C_OnCountdownStart_Params Parms{};

	Parms.Countdown = Countdown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnReadiedPlayersChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnReadiedPlayersChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnReadiedPlayersChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnMissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnMissionSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnMissionSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnLocalPlayerReadyChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bReady                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::OnLocalPlayerReadyChange(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnLocalPlayerReadyChange");

	Params::UW_ReadyRoomWidget_C_OnLocalPlayerReadyChange_Params Parms{};

	Parms.bReady = bReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnInputChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::OnInputChange(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnInputChange");

	Params::UW_ReadyRoomWidget_C_OnInputChange_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnExitSettingsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnExitSettingsMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnExitSettingsMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.SetCountdownTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CountdownTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::SetCountdownTime(double CountdownTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "SetCountdownTime");

	Params::UW_ReadyRoomWidget_C_SetCountdownTime_Params Parms{};

	Parms.CountdownTime = CountdownTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.OnDifficultyUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReadyRoomWidget_C::OnDifficultyUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "OnDifficultyUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReadyRoomWidget.W_ReadyRoomWidget_C.ExecuteUbergraph_W_ReadyRoomWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UDifficultySubsystem*        CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDifficultyData             CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AMissionPortal*              CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Countdown                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersReady_Ready                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayersReady_Total                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlayersReady_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_GetSelectedMission_OutMissionURL                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLevelDataLookupTable       CallFunc_GetMapDetailsFromName_ReturnValue                       (None)
// class UTexture2D*                  CallFunc_GetLazyLoadedImage_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bReady                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALobbyGS*                    K2Node_DynamicCast_AsLobby_GS                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_CountdownTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Counter_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReadyRoomWidget_C::ExecuteUbergraph_W_ReadyRoomWidget(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_FCeil_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UDifficultySubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, const struct FDifficultyData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AMissionPortal* CallFunc_GetActorOfClass_ReturnValue, float K2Node_CustomEvent_Countdown, int32 CallFunc_GetPlayersReady_Ready, int32 CallFunc_GetPlayersReady_Total, bool CallFunc_GetPlayersReady_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_GetSelectedMission_OutMissionURL, bool CallFunc_IsEmpty_ReturnValue, const struct FLevelDataLookupTable& CallFunc_GetMapDetailsFromName_ReturnValue, class UTexture2D* CallFunc_GetLazyLoadedImage_ReturnValue, bool K2Node_CustomEvent_bReady, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ALobbyGS* K2Node_DynamicCast_AsLobby_GS, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double K2Node_CustomEvent_CountdownTime, class AReadyOrNotPlayerController* CallFunc_GetReadyOrNotPlayerController_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double K2Node_VariableSet_Counter_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReadyRoomWidget_C", "ExecuteUbergraph_W_ReadyRoomWidget");

	Params::UW_ReadyRoomWidget_C_ExecuteUbergraph_W_ReadyRoomWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_CustomEvent_Countdown = K2Node_CustomEvent_Countdown;
	Parms.CallFunc_GetPlayersReady_Ready = CallFunc_GetPlayersReady_Ready;
	Parms.CallFunc_GetPlayersReady_Total = CallFunc_GetPlayersReady_Total;
	Parms.CallFunc_GetPlayersReady_ReturnValue = CallFunc_GetPlayersReady_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSelectedMission_OutMissionURL = CallFunc_GetSelectedMission_OutMissionURL;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetMapDetailsFromName_ReturnValue = CallFunc_GetMapDetailsFromName_ReturnValue;
	Parms.CallFunc_GetLazyLoadedImage_ReturnValue = CallFunc_GetLazyLoadedImage_ReturnValue;
	Parms.K2Node_CustomEvent_bReady = K2Node_CustomEvent_bReady;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue = CallFunc_GetReadyOrNotPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_GS = K2Node_DynamicCast_AsLobby_GS;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_CountdownTime = K2Node_CustomEvent_CountdownTime;
	Parms.CallFunc_GetReadyOrNotPlayerController_ReturnValue_1 = CallFunc_GetReadyOrNotPlayerController_ReturnValue_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_VariableSet_Counter_ImplicitCast = K2Node_VariableSet_Counter_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


