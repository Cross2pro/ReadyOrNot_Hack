#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C
// (None)

class UClass* UW_Options_Gameplay_UE5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Options_Gameplay_UE5_C");

	return Clss;
}


// W_Options_Gameplay_UE5_C W_Options_Gameplay_UE5.Default__W_Options_Gameplay_UE5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Options_Gameplay_UE5_C* UW_Options_Gameplay_UE5_C::GetDefaultObj()
{
	static class UW_Options_Gameplay_UE5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Options_Gameplay_UE5_C*>(UW_Options_Gameplay_UE5_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Get_JoinModdedServers_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_Options_Gameplay_UE5_C::Get_JoinModdedServers_Visibility(bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "Get_JoinModdedServers_Visibility");

	Params::UW_Options_Gameplay_UE5_C_Get_JoinModdedServers_Visibility_Params Parms{};

	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Get_AllowModdedPlayers_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsole_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UW_Options_Gameplay_UE5_C::Get_AllowModdedPlayers_Visibility(bool CallFunc_IsConsole_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "Get_AllowModdedPlayers_Visibility");

	Params::UW_Options_Gameplay_UE5_C_Get_AllowModdedPlayers_Visibility_Params Parms{};

	Parms.CallFunc_IsConsole_ReturnValue = CallFunc_IsConsole_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Options_Gameplay_UE5_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BP_GetDesiredFocusTarget");

	Params::UW_Options_Gameplay_UE5_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.PopulateGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadCrossplayEnabled_bCrossplayEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadCrossplayEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Options_Button_With_Status_C*K2Node_DynamicCast_AsW_Options_Button_with_Status                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadAllowModdedPlayers_bAllowModdedPlayers              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadAllowModdedPlayers_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadJoinModdedServers_bJoinModdedServers                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadJoinModdedServers_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Options_Button_With_Status_C*K2Node_DynamicCast_AsW_Options_Button_with_Status_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadZoomADSSetting_bZoomADS                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultSurfaceCommand_DefaultCommand                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultSurfaceCommand_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLowReadyStyle_bUseHighReady                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadLowReadyStyle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      CallFunc_LoadShotgunSettings_ShotgunReloadType                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameVersionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadReplayEnabled_bReplayEnabled                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadReplayEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSendMapStatistics_bSendMapStatistics                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Options_Button_With_Status_C*K2Node_DynamicCast_AsW_Options_Button_with_Status_2              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFreelookSensitivity_Sensitivity                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMouseSensitivity_MouseSensitvity                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorLockedCommand_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorOpenCommand_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            CallFunc_LoadDefaultSurfaceCommand_DefaultCommand_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadDefaultSurfaceCommand_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeCallFunc_LoadGrenadeSettings_GrenadeThrowType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHealthIconSetting_bShowHealthIcons              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowCompass_bShowCompass                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowCompass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Load2DReload_b2DReload                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Load2DReload_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowMultiplayerNames_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowChat_bShowChat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowChat_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowTeamStatus_bShowTeamStatus                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSwayHUD_bSwayHUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadSwayHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHUD_bShowHud                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadShowHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFPS_bShowFPS                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetFloatValue_NewFloat_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::PopulateGameSettings(int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EGrenadeThrowSettingType Temp_byte_Variable_2, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class EScoreReadoutMode Temp_byte_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, bool CallFunc_LoadCrossplayEnabled_bCrossplayEnabled, bool CallFunc_LoadCrossplayEnabled_ReturnValue, class UW_Options_Button_With_Status_C* K2Node_DynamicCast_AsW_Options_Button_with_Status, bool K2Node_DynamicCast_bSuccess, enum class EShotgunReloadType Temp_byte_Variable_4, bool CallFunc_LoadAllowModdedPlayers_bAllowModdedPlayers, bool CallFunc_LoadAllowModdedPlayers_ReturnValue, bool CallFunc_LoadJoinModdedServers_bJoinModdedServers, bool CallFunc_LoadJoinModdedServers_ReturnValue, class UW_Options_Button_With_Status_C* K2Node_DynamicCast_AsW_Options_Button_with_Status_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LoadZoomADSSetting_bZoomADS, bool CallFunc_LoadZoomADSSetting_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultSurfaceCommand_DefaultCommand, int32 CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex, bool CallFunc_LoadDefaultSurfaceCommand_ReturnValue, bool CallFunc_LoadLowReadyStyle_bUseHighReady, bool CallFunc_LoadLowReadyStyle_ReturnValue, enum class EShotgunReloadType CallFunc_LoadShotgunSettings_ShotgunReloadType, bool CallFunc_LoadShotgunSettings_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_IsGameVersionEnabled_ReturnValue, int32 Temp_int_Variable_8, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_LoadReplayEnabled_bReplayEnabled, bool CallFunc_LoadReplayEnabled_ReturnValue, int32 Temp_int_Variable_9, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetSendMapStatistics_bSendMapStatistics, bool CallFunc_GetSendMapStatistics_ReturnValue, class UW_Options_Button_With_Status_C* K2Node_DynamicCast_AsW_Options_Button_with_Status_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, float CallFunc_GetFreelookSensitivity_Sensitivity, bool CallFunc_GetFreelookSensitivity_ReturnValue, float CallFunc_GetMouseSensitivity_MouseSensitvity, bool CallFunc_GetMouseSensitivity_ReturnValue, double CallFunc_SetFloatValue_NewValue, enum class ESwatCommand CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand, int32 CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex, bool CallFunc_LoadDefaultDoorLockedCommand_ReturnValue, double CallFunc_SetFloatValue_NewValue_1, enum class ESwatCommand CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand, int32 CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex, bool CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand, int32 CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex, bool CallFunc_LoadDefaultDoorOpenCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand, int32 CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex, bool CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue, enum class ESwatCommand CallFunc_LoadDefaultSurfaceCommand_DefaultCommand_1, int32 CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex_1, bool CallFunc_LoadDefaultSurfaceCommand_ReturnValue_1, enum class EGrenadeThrowSettingType CallFunc_LoadGrenadeSettings_GrenadeThrowType, bool CallFunc_LoadGrenadeSettings_ReturnValue, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, bool CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint, bool CallFunc_LoadShowCommandContextHintSetting_ReturnValue, bool CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint, bool CallFunc_LoadHotkeyHintSetting_ReturnValue, bool CallFunc_LoadShowHealthIconSetting_bShowHealthIcons, bool CallFunc_LoadShowHealthIconSetting_ReturnValue, bool CallFunc_LoadShowCompass_bShowCompass, bool CallFunc_LoadShowCompass_ReturnValue, bool CallFunc_Load2DReload_b2DReload, bool CallFunc_Load2DReload_ReturnValue, bool CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames, bool CallFunc_LoadShowMultiplayerNames_ReturnValue, bool CallFunc_LoadShowChat_bShowChat, bool CallFunc_LoadShowChat_ReturnValue, bool CallFunc_LoadShowTeamStatus_bShowTeamStatus, bool CallFunc_LoadShowTeamStatus_ReturnValue, bool CallFunc_LoadSwayHUD_bSwayHUD, bool CallFunc_LoadSwayHUD_ReturnValue, enum class EScoreReadoutMode CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode, bool CallFunc_LoadScoreReadoutSetting_ReturnValue, int32 K2Node_Select_Default_4, bool CallFunc_LoadShowHUD_bShowHud, bool CallFunc_LoadShowHUD_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GetShowFPS_bShowFPS, bool CallFunc_GetShowFPS_ReturnValue, double CallFunc_SetFloatValue_NewFloat_ImplicitCast, double CallFunc_SetFloatValue_NewFloat_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "PopulateGameSettings");

	Params::UW_Options_Gameplay_UE5_C_PopulateGameSettings_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_LoadCrossplayEnabled_bCrossplayEnabled = CallFunc_LoadCrossplayEnabled_bCrossplayEnabled;
	Parms.CallFunc_LoadCrossplayEnabled_ReturnValue = CallFunc_LoadCrossplayEnabled_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Options_Button_with_Status = K2Node_DynamicCast_AsW_Options_Button_with_Status;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_LoadAllowModdedPlayers_bAllowModdedPlayers = CallFunc_LoadAllowModdedPlayers_bAllowModdedPlayers;
	Parms.CallFunc_LoadAllowModdedPlayers_ReturnValue = CallFunc_LoadAllowModdedPlayers_ReturnValue;
	Parms.CallFunc_LoadJoinModdedServers_bJoinModdedServers = CallFunc_LoadJoinModdedServers_bJoinModdedServers;
	Parms.CallFunc_LoadJoinModdedServers_ReturnValue = CallFunc_LoadJoinModdedServers_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Options_Button_with_Status_1 = K2Node_DynamicCast_AsW_Options_Button_with_Status_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LoadZoomADSSetting_bZoomADS = CallFunc_LoadZoomADSSetting_bZoomADS;
	Parms.CallFunc_LoadZoomADSSetting_ReturnValue = CallFunc_LoadZoomADSSetting_ReturnValue;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommand = CallFunc_LoadDefaultSurfaceCommand_DefaultCommand;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex = CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex;
	Parms.CallFunc_LoadDefaultSurfaceCommand_ReturnValue = CallFunc_LoadDefaultSurfaceCommand_ReturnValue;
	Parms.CallFunc_LoadLowReadyStyle_bUseHighReady = CallFunc_LoadLowReadyStyle_bUseHighReady;
	Parms.CallFunc_LoadLowReadyStyle_ReturnValue = CallFunc_LoadLowReadyStyle_ReturnValue;
	Parms.CallFunc_LoadShotgunSettings_ShotgunReloadType = CallFunc_LoadShotgunSettings_ShotgunReloadType;
	Parms.CallFunc_LoadShotgunSettings_ReturnValue = CallFunc_LoadShotgunSettings_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsGameVersionEnabled_ReturnValue = CallFunc_IsGameVersionEnabled_ReturnValue;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LoadReplayEnabled_bReplayEnabled = CallFunc_LoadReplayEnabled_bReplayEnabled;
	Parms.CallFunc_LoadReplayEnabled_ReturnValue = CallFunc_LoadReplayEnabled_ReturnValue;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSendMapStatistics_bSendMapStatistics = CallFunc_GetSendMapStatistics_bSendMapStatistics;
	Parms.CallFunc_GetSendMapStatistics_ReturnValue = CallFunc_GetSendMapStatistics_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Options_Button_with_Status_2 = K2Node_DynamicCast_AsW_Options_Button_with_Status_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.CallFunc_GetFreelookSensitivity_Sensitivity = CallFunc_GetFreelookSensitivity_Sensitivity;
	Parms.CallFunc_GetFreelookSensitivity_ReturnValue = CallFunc_GetFreelookSensitivity_ReturnValue;
	Parms.CallFunc_GetMouseSensitivity_MouseSensitvity = CallFunc_GetMouseSensitivity_MouseSensitvity;
	Parms.CallFunc_GetMouseSensitivity_ReturnValue = CallFunc_GetMouseSensitivity_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue = CallFunc_SetFloatValue_NewValue;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand = CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex = CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex;
	Parms.CallFunc_LoadDefaultDoorLockedCommand_ReturnValue = CallFunc_LoadDefaultDoorLockedCommand_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewValue_1 = CallFunc_SetFloatValue_NewValue_1;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand = CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex = CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex;
	Parms.CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue = CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand = CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex = CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex;
	Parms.CallFunc_LoadDefaultDoorOpenCommand_ReturnValue = CallFunc_LoadDefaultDoorOpenCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand = CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex = CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex;
	Parms.CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue = CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommand_1 = CallFunc_LoadDefaultSurfaceCommand_DefaultCommand_1;
	Parms.CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex_1 = CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex_1;
	Parms.CallFunc_LoadDefaultSurfaceCommand_ReturnValue_1 = CallFunc_LoadDefaultSurfaceCommand_ReturnValue_1;
	Parms.CallFunc_LoadGrenadeSettings_GrenadeThrowType = CallFunc_LoadGrenadeSettings_GrenadeThrowType;
	Parms.CallFunc_LoadGrenadeSettings_ReturnValue = CallFunc_LoadGrenadeSettings_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint = CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint;
	Parms.CallFunc_LoadShowCommandContextHintSetting_ReturnValue = CallFunc_LoadShowCommandContextHintSetting_ReturnValue;
	Parms.CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint = CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;
	Parms.CallFunc_LoadHotkeyHintSetting_ReturnValue = CallFunc_LoadHotkeyHintSetting_ReturnValue;
	Parms.CallFunc_LoadShowHealthIconSetting_bShowHealthIcons = CallFunc_LoadShowHealthIconSetting_bShowHealthIcons;
	Parms.CallFunc_LoadShowHealthIconSetting_ReturnValue = CallFunc_LoadShowHealthIconSetting_ReturnValue;
	Parms.CallFunc_LoadShowCompass_bShowCompass = CallFunc_LoadShowCompass_bShowCompass;
	Parms.CallFunc_LoadShowCompass_ReturnValue = CallFunc_LoadShowCompass_ReturnValue;
	Parms.CallFunc_Load2DReload_b2DReload = CallFunc_Load2DReload_b2DReload;
	Parms.CallFunc_Load2DReload_ReturnValue = CallFunc_Load2DReload_ReturnValue;
	Parms.CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames = CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames;
	Parms.CallFunc_LoadShowMultiplayerNames_ReturnValue = CallFunc_LoadShowMultiplayerNames_ReturnValue;
	Parms.CallFunc_LoadShowChat_bShowChat = CallFunc_LoadShowChat_bShowChat;
	Parms.CallFunc_LoadShowChat_ReturnValue = CallFunc_LoadShowChat_ReturnValue;
	Parms.CallFunc_LoadShowTeamStatus_bShowTeamStatus = CallFunc_LoadShowTeamStatus_bShowTeamStatus;
	Parms.CallFunc_LoadShowTeamStatus_ReturnValue = CallFunc_LoadShowTeamStatus_ReturnValue;
	Parms.CallFunc_LoadSwayHUD_bSwayHUD = CallFunc_LoadSwayHUD_bSwayHUD;
	Parms.CallFunc_LoadSwayHUD_ReturnValue = CallFunc_LoadSwayHUD_ReturnValue;
	Parms.CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode = CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode;
	Parms.CallFunc_LoadScoreReadoutSetting_ReturnValue = CallFunc_LoadScoreReadoutSetting_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_LoadShowHUD_bShowHud = CallFunc_LoadShowHUD_bShowHud;
	Parms.CallFunc_LoadShowHUD_ReturnValue = CallFunc_LoadShowHUD_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetShowFPS_bShowFPS = CallFunc_GetShowFPS_bShowFPS;
	Parms.CallFunc_GetShowFPS_ReturnValue = CallFunc_GetShowFPS_ReturnValue;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast = CallFunc_SetFloatValue_NewFloat_ImplicitCast;
	Parms.CallFunc_SetFloatValue_NewFloat_ImplicitCast_1 = CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewOption                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature(int32 NewOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params Parms{};

	Parms.NewOption = NewOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             NewFloatValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewSliderValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature(double NewFloatValue, double NewSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params Parms{};

	Parms.NewFloatValue = NewFloatValue;
	Parms.NewSliderValue = NewSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.CreateRestartDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Gameplay_UE5_C::CreateRestartDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "CreateRestartDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.LanguageCancelClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStandardModal*              CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::LanguageCancelClicked(class UStandardModal* CallingModal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "LanguageCancelClicked");

	Params::UW_Options_Gameplay_UE5_C_LanguageCancelClicked_Params Parms{};

	Parms.CallingModal = CallingModal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.LanguageOkClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_StandardModal_C*          CallingModal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        TextEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_Options_Gameplay_UE5_C::LanguageOkClicked(class UW_StandardModal_C* CallingModal, class FText TextEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "LanguageOkClicked");

	Params::UW_Options_Gameplay_UE5_C_LanguageOkClicked_Params Parms{};

	Parms.CallingModal = CallingModal;
	Parms.TextEntry = TextEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Gameplay_UE5_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UW_Button_C*                 Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature(class UW_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Options_Gameplay_UE5_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature(int32 Index, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bNewCheckState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature(bool bNewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params Parms{};

	Parms.bNewCheckState = bNewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.ResetDefaultGameplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Options_Gameplay_UE5_C::ResetDefaultGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "ResetDefaultGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_LinkAccountButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_LinkAccountButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_LinkAccountButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewCheckState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature(bool NewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewCheckState = NewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "Tick");

	Params::UW_Options_Gameplay_UE5_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewCheckState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature(bool NewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewCheckState = NewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               NewCheckState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature(bool NewCheckState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature");

	Params::UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewCheckState = NewCheckState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.ExecuteUbergraph_W_Options_Gameplay_UE5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_NewCheckState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveAllowModdedPlayers_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            Temp_byte_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       Temp_byte_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      Temp_byte_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEOSMultiplayerSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryLinkEpicAccount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UEOSMultiplayerSubsystem*    CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_GetEOSAccountName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_17                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_SaveSwayHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_16                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_SaveShowTeamStatus_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_15                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_SaveShowChat_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_14                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowMultiplayerNames_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Save2DReload_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowCompass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowHealthIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveHotkeyHintSetting_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowCommandContextHintSetting_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowPlayerIconSetting_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowHesitationBarSetting_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewOption                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMouseSensitivity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEmptyMagReloadType     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewFloatValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_NewSliderValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveEmptyMagReloadSettings_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetFreelookSensitivity_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertVertical                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_bInvertHorizontal                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMouseInverted_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMouseInverted_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UModioManager*               CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSendMapStatistics_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveReplayEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStandardModal*              K2Node_CustomEvent_CallingModal_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGrenadeThrowSettingTypeK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveGrenadeSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UW_StandardModal_C*          K2Node_CustomEvent_CallingModal                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextEntry                                     (None)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Button_C*                 K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShowHUD_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_9                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_8                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EShotgunReloadType      K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveShotgunSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_7                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveLowReadyStyle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_6                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultSurfaceCommand_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorOpenCommand_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESwatCommand            K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveDefaultDoorLockedCommand_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, HasGetValueTypeHash)
// enum class EScoreReadoutMode       K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveScoreReadoutSetting_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveZoomADSSetting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bNewCheckState                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetShowFPS_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UReadyOrNotGameInstance*     K2Node_DynamicCast_AsReady_or_Not_Game_Instance                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_NewCheckState_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCrossplayEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// bool                               K2Node_ComponentBoundEvent_NewCheckState_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveJoinModdedServers_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMouseSensitivity_MouseSensitivity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFreelookSensitivity_Sensitivity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Options_Gameplay_UE5_C::ExecuteUbergraph_W_Options_Gameplay_UE5(int32 EntryPoint, bool K2Node_ComponentBoundEvent_NewCheckState, enum class EGrenadeThrowSettingType Temp_byte_Variable, bool CallFunc_SaveAllowModdedPlayers_ReturnValue, enum class EGrenadeThrowSettingType Temp_byte_Variable_1, int32 Temp_int_Variable, enum class EEmptyMagReloadType Temp_byte_Variable_2, enum class EEmptyMagReloadType Temp_byte_Variable_3, int32 Temp_int_Variable_1, enum class ESwatCommand Temp_byte_Variable_4, enum class ESwatCommand Temp_byte_Variable_5, enum class ESwatCommand Temp_byte_Variable_6, enum class ESwatCommand Temp_byte_Variable_7, enum class ESwatCommand Temp_byte_Variable_8, enum class ESwatCommand Temp_byte_Variable_9, enum class ESwatCommand Temp_byte_Variable_10, int32 Temp_int_Variable_2, enum class ESwatCommand Temp_byte_Variable_11, enum class ESwatCommand Temp_byte_Variable_12, enum class ESwatCommand Temp_byte_Variable_13, enum class ESwatCommand Temp_byte_Variable_14, int32 Temp_int_Variable_3, enum class ESwatCommand Temp_byte_Variable_15, enum class ESwatCommand Temp_byte_Variable_16, enum class ESwatCommand Temp_byte_Variable_17, enum class ESwatCommand Temp_byte_Variable_18, int32 Temp_int_Variable_4, enum class ESwatCommand Temp_byte_Variable_19, enum class ESwatCommand Temp_byte_Variable_20, enum class ESwatCommand Temp_byte_Variable_21, enum class ESwatCommand Temp_byte_Variable_22, int32 Temp_int_Variable_5, enum class ESwatCommand Temp_byte_Variable_23, enum class ESwatCommand Temp_byte_Variable_24, enum class ESwatCommand Temp_byte_Variable_25, enum class ESwatCommand Temp_byte_Variable_26, enum class ESwatCommand Temp_byte_Variable_27, enum class ESwatCommand Temp_byte_Variable_28, enum class ESwatCommand Temp_byte_Variable_29, enum class ESwatCommand Temp_byte_Variable_30, enum class ESwatCommand Temp_byte_Variable_31, int32 Temp_int_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_7, enum class EScoreReadoutMode Temp_byte_Variable_32, enum class EScoreReadoutMode Temp_byte_Variable_33, enum class EScoreReadoutMode Temp_byte_Variable_34, enum class EScoreReadoutMode Temp_byte_Variable_35, class UW_StandardModal_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EShotgunReloadType Temp_byte_Variable_36, enum class EShotgunReloadType Temp_byte_Variable_37, class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_TryLinkEpicAccount_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UEOSMultiplayerSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetEOSAccountName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_17, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_SaveSwayHUD_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool K2Node_ComponentBoundEvent_bNewCheckState_16, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_SaveShowTeamStatus_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool K2Node_ComponentBoundEvent_bNewCheckState_15, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_SaveShowChat_ReturnValue, class FText CallFunc_Format_ReturnValue_2, bool K2Node_ComponentBoundEvent_bNewCheckState_14, bool K2Node_ComponentBoundEvent_bNewCheckState_13, bool CallFunc_SaveShowMultiplayerNames_ReturnValue, bool CallFunc_Save2DReload_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_12, bool K2Node_ComponentBoundEvent_bNewCheckState_11, bool CallFunc_SaveShowCompass_ReturnValue, bool CallFunc_SaveShowHealthIconSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_10, bool K2Node_ComponentBoundEvent_bNewCheckState_9, bool CallFunc_SaveHotkeyHintSetting_ReturnValue, bool CallFunc_SaveShowCommandContextHintSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_10, bool K2Node_ComponentBoundEvent_bNewCheckState_8, bool K2Node_ComponentBoundEvent_bNewCheckState_7, bool CallFunc_SaveShowPlayerIconSetting_ReturnValue, bool CallFunc_SaveShowHesitationBarSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_NewOption, double K2Node_ComponentBoundEvent_NewFloatValue_1, double K2Node_ComponentBoundEvent_NewSliderValue_1, bool CallFunc_SetMouseSensitivity_ReturnValue, enum class EEmptyMagReloadType K2Node_Select_Default, double K2Node_ComponentBoundEvent_NewFloatValue, double K2Node_ComponentBoundEvent_NewSliderValue, bool CallFunc_SaveEmptyMagReloadSettings_ReturnValue, bool CallFunc_SetFreelookSensitivity_ReturnValue, bool CallFunc_GetMouseInverted_bInvertVertical, bool CallFunc_GetMouseInverted_bInvertHorizontal, bool CallFunc_GetMouseInverted_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_6, bool K2Node_ComponentBoundEvent_bNewCheckState_5, bool CallFunc_SetMouseInverted_ReturnValue, bool CallFunc_SetMouseInverted_ReturnValue_1, class UW_Button_C* K2Node_ComponentBoundEvent_Button_1, class UModioManager* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_4, bool K2Node_ComponentBoundEvent_bNewCheckState_3, bool CallFunc_SetSendMapStatistics_ReturnValue, bool CallFunc_SaveReplayEnabled_ReturnValue, const struct FVector2D& Temp_struct_Variable, class UStandardModal* K2Node_CustomEvent_CallingModal_1, int32 Temp_int_Variable_9, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, enum class EGrenadeThrowSettingType K2Node_Select_Default_1, bool CallFunc_SaveGrenadeSettings_ReturnValue, const class FString& CallFunc_Array_Get_Item, class UW_StandardModal_C* K2Node_CustomEvent_CallingModal, class FText K2Node_CustomEvent_TextEntry, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UW_Button_C* K2Node_ComponentBoundEvent_Button, bool K2Node_ComponentBoundEvent_bNewCheckState_2, bool CallFunc_SaveShowHUD_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_9, const class FString& K2Node_ComponentBoundEvent_Value_9, bool CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_8, const class FString& K2Node_ComponentBoundEvent_Value_8, enum class EShotgunReloadType K2Node_Select_Default_2, bool CallFunc_SaveShotgunSettings_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_7, const class FString& K2Node_ComponentBoundEvent_Value_7, bool K2Node_Select_Default_3, bool CallFunc_SaveLowReadyStyle_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_6, const class FString& K2Node_ComponentBoundEvent_Value_6, int32 K2Node_ComponentBoundEvent_Index_5, const class FString& K2Node_ComponentBoundEvent_Value_5, enum class ESwatCommand K2Node_Select_Default_4, enum class ESwatCommand K2Node_Select_Default_5, bool CallFunc_SaveDefaultSurfaceCommand_ReturnValue, bool CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_4, const class FString& K2Node_ComponentBoundEvent_Value_4, int32 K2Node_ComponentBoundEvent_Index_3, const class FString& K2Node_ComponentBoundEvent_Value_3, enum class ESwatCommand K2Node_Select_Default_6, bool CallFunc_SaveDefaultDoorOpenCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_7, int32 K2Node_ComponentBoundEvent_Index_2, const class FString& K2Node_ComponentBoundEvent_Value_2, bool CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue, enum class ESwatCommand K2Node_Select_Default_8, bool CallFunc_SaveDefaultDoorLockedCommand_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_1, const class FString& K2Node_ComponentBoundEvent_Value_1, enum class EScoreReadoutMode K2Node_Select_Default_9, bool CallFunc_SaveScoreReadoutSetting_ReturnValue, bool K2Node_ComponentBoundEvent_bNewCheckState_1, bool CallFunc_SaveZoomADSSetting_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, const class FString& K2Node_ComponentBoundEvent_Value, bool K2Node_ComponentBoundEvent_bNewCheckState, bool K2Node_ComponentBoundEvent_bUsingGamepad, bool CallFunc_SetShowFPS_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class FText Temp_text_Variable, class UReadyOrNotGameInstance* K2Node_DynamicCast_AsReady_or_Not_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UReadyOrNotGameUserSettings* CallFunc_GetReadyOrNotGameUserSettings_ReturnValue, bool K2Node_ComponentBoundEvent_NewCheckState_2, bool CallFunc_SaveCrossplayEnabled_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool K2Node_ComponentBoundEvent_NewCheckState_1, bool CallFunc_SaveJoinModdedServers_ReturnValue, float CallFunc_SetMouseSensitivity_MouseSensitivity_ImplicitCast, float CallFunc_SetFreelookSensitivity_Sensitivity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Options_Gameplay_UE5_C", "ExecuteUbergraph_W_Options_Gameplay_UE5");

	Params::UW_Options_Gameplay_UE5_C_ExecuteUbergraph_W_Options_Gameplay_UE5_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_NewCheckState = K2Node_ComponentBoundEvent_NewCheckState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SaveAllowModdedPlayers_ReturnValue = CallFunc_SaveAllowModdedPlayers_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.Temp_byte_Variable_22 = Temp_byte_Variable_22;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_byte_Variable_23 = Temp_byte_Variable_23;
	Parms.Temp_byte_Variable_24 = Temp_byte_Variable_24;
	Parms.Temp_byte_Variable_25 = Temp_byte_Variable_25;
	Parms.Temp_byte_Variable_26 = Temp_byte_Variable_26;
	Parms.Temp_byte_Variable_27 = Temp_byte_Variable_27;
	Parms.Temp_byte_Variable_28 = Temp_byte_Variable_28;
	Parms.Temp_byte_Variable_29 = Temp_byte_Variable_29;
	Parms.Temp_byte_Variable_30 = Temp_byte_Variable_30;
	Parms.Temp_byte_Variable_31 = Temp_byte_Variable_31;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.Temp_byte_Variable_32 = Temp_byte_Variable_32;
	Parms.Temp_byte_Variable_33 = Temp_byte_Variable_33;
	Parms.Temp_byte_Variable_34 = Temp_byte_Variable_34;
	Parms.Temp_byte_Variable_35 = Temp_byte_Variable_35;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable_36 = Temp_byte_Variable_36;
	Parms.Temp_byte_Variable_37 = Temp_byte_Variable_37;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_TryLinkEpicAccount_ReturnValue = CallFunc_TryLinkEpicAccount_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetEOSAccountName_ReturnValue = CallFunc_GetEOSAccountName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_17 = K2Node_ComponentBoundEvent_bNewCheckState_17;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_SaveSwayHUD_ReturnValue = CallFunc_SaveSwayHUD_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_16 = K2Node_ComponentBoundEvent_bNewCheckState_16;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SaveShowTeamStatus_ReturnValue = CallFunc_SaveShowTeamStatus_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_15 = K2Node_ComponentBoundEvent_bNewCheckState_15;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_SaveShowChat_ReturnValue = CallFunc_SaveShowChat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_14 = K2Node_ComponentBoundEvent_bNewCheckState_14;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_13 = K2Node_ComponentBoundEvent_bNewCheckState_13;
	Parms.CallFunc_SaveShowMultiplayerNames_ReturnValue = CallFunc_SaveShowMultiplayerNames_ReturnValue;
	Parms.CallFunc_Save2DReload_ReturnValue = CallFunc_Save2DReload_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_12 = K2Node_ComponentBoundEvent_bNewCheckState_12;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_11 = K2Node_ComponentBoundEvent_bNewCheckState_11;
	Parms.CallFunc_SaveShowCompass_ReturnValue = CallFunc_SaveShowCompass_ReturnValue;
	Parms.CallFunc_SaveShowHealthIconSetting_ReturnValue = CallFunc_SaveShowHealthIconSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_10 = K2Node_ComponentBoundEvent_bNewCheckState_10;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_9 = K2Node_ComponentBoundEvent_bNewCheckState_9;
	Parms.CallFunc_SaveHotkeyHintSetting_ReturnValue = CallFunc_SaveHotkeyHintSetting_ReturnValue;
	Parms.CallFunc_SaveShowCommandContextHintSetting_ReturnValue = CallFunc_SaveShowCommandContextHintSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_8 = K2Node_ComponentBoundEvent_bNewCheckState_8;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_7 = K2Node_ComponentBoundEvent_bNewCheckState_7;
	Parms.CallFunc_SaveShowPlayerIconSetting_ReturnValue = CallFunc_SaveShowPlayerIconSetting_ReturnValue;
	Parms.CallFunc_SaveShowHesitationBarSetting_ReturnValue = CallFunc_SaveShowHesitationBarSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewOption = K2Node_ComponentBoundEvent_NewOption;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue_1 = K2Node_ComponentBoundEvent_NewFloatValue_1;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue_1 = K2Node_ComponentBoundEvent_NewSliderValue_1;
	Parms.CallFunc_SetMouseSensitivity_ReturnValue = CallFunc_SetMouseSensitivity_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_NewFloatValue = K2Node_ComponentBoundEvent_NewFloatValue;
	Parms.K2Node_ComponentBoundEvent_NewSliderValue = K2Node_ComponentBoundEvent_NewSliderValue;
	Parms.CallFunc_SaveEmptyMagReloadSettings_ReturnValue = CallFunc_SaveEmptyMagReloadSettings_ReturnValue;
	Parms.CallFunc_SetFreelookSensitivity_ReturnValue = CallFunc_SetFreelookSensitivity_ReturnValue;
	Parms.CallFunc_GetMouseInverted_bInvertVertical = CallFunc_GetMouseInverted_bInvertVertical;
	Parms.CallFunc_GetMouseInverted_bInvertHorizontal = CallFunc_GetMouseInverted_bInvertHorizontal;
	Parms.CallFunc_GetMouseInverted_ReturnValue = CallFunc_GetMouseInverted_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_6 = K2Node_ComponentBoundEvent_bNewCheckState_6;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_5 = K2Node_ComponentBoundEvent_bNewCheckState_5;
	Parms.CallFunc_SetMouseInverted_ReturnValue = CallFunc_SetMouseInverted_ReturnValue;
	Parms.CallFunc_SetMouseInverted_ReturnValue_1 = CallFunc_SetMouseInverted_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_4 = K2Node_ComponentBoundEvent_bNewCheckState_4;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_3 = K2Node_ComponentBoundEvent_bNewCheckState_3;
	Parms.CallFunc_SetSendMapStatistics_ReturnValue = CallFunc_SetSendMapStatistics_ReturnValue;
	Parms.CallFunc_SaveReplayEnabled_ReturnValue = CallFunc_SaveReplayEnabled_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_CallingModal_1 = K2Node_CustomEvent_CallingModal_1;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SaveGrenadeSettings_ReturnValue = CallFunc_SaveGrenadeSettings_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_CallingModal = K2Node_CustomEvent_CallingModal;
	Parms.K2Node_CustomEvent_TextEntry = K2Node_CustomEvent_TextEntry;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue = CallFunc_SetCurrentLanguageAndLocale_ReturnValue;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_2 = K2Node_ComponentBoundEvent_bNewCheckState_2;
	Parms.CallFunc_SaveShowHUD_ReturnValue = CallFunc_SaveShowHUD_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Value_9 = K2Node_ComponentBoundEvent_Value_9;
	Parms.CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1 = CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Value_8 = K2Node_ComponentBoundEvent_Value_8;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SaveShotgunSettings_ReturnValue = CallFunc_SaveShotgunSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Value_7 = K2Node_ComponentBoundEvent_Value_7;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SaveLowReadyStyle_ReturnValue = CallFunc_SaveLowReadyStyle_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Value_6 = K2Node_ComponentBoundEvent_Value_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_SaveDefaultSurfaceCommand_ReturnValue = CallFunc_SaveDefaultSurfaceCommand_ReturnValue;
	Parms.CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue = CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_SaveDefaultDoorOpenCommand_ReturnValue = CallFunc_SaveDefaultDoorOpenCommand_ReturnValue;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue = CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_SaveDefaultDoorLockedCommand_ReturnValue = CallFunc_SaveDefaultDoorLockedCommand_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_SaveScoreReadoutSetting_ReturnValue = CallFunc_SaveScoreReadoutSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState_1 = K2Node_ComponentBoundEvent_bNewCheckState_1;
	Parms.CallFunc_SaveZoomADSSetting_ReturnValue = CallFunc_SaveZoomADSSetting_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_bNewCheckState = K2Node_ComponentBoundEvent_bNewCheckState;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_SetShowFPS_ReturnValue = CallFunc_SetShowFPS_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_DynamicCast_AsReady_or_Not_Game_Instance = K2Node_DynamicCast_AsReady_or_Not_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetReadyOrNotGameUserSettings_ReturnValue = CallFunc_GetReadyOrNotGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewCheckState_2 = K2Node_ComponentBoundEvent_NewCheckState_2;
	Parms.CallFunc_SaveCrossplayEnabled_ReturnValue = CallFunc_SaveCrossplayEnabled_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_ComponentBoundEvent_NewCheckState_1 = K2Node_ComponentBoundEvent_NewCheckState_1;
	Parms.CallFunc_SaveJoinModdedServers_ReturnValue = CallFunc_SaveJoinModdedServers_ReturnValue;
	Parms.CallFunc_SetMouseSensitivity_MouseSensitivity_ImplicitCast = CallFunc_SetMouseSensitivity_MouseSensitivity_ImplicitCast;
	Parms.CallFunc_SetFreelookSensitivity_Sensitivity_ImplicitCast = CallFunc_SetFreelookSensitivity_Sensitivity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


