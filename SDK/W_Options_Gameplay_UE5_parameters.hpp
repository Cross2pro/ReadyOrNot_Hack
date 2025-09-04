#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Get_JoinModdedServers_Visibility
struct UW_Options_Gameplay_UE5_C_Get_JoinModdedServers_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConsole_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Get_AllowModdedPlayers_Visibility
struct UW_Options_Gameplay_UE5_C_Get_AllowModdedPlayers_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConsole_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BP_GetDesiredFocusTarget
struct UW_Options_Gameplay_UE5_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.PopulateGameSettings
struct UW_Options_Gameplay_UE5_C_PopulateGameSettings_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_2;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_3;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_4;                               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadCrossplayEnabled_bCrossplayEnabled;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadCrossplayEnabled_ReturnValue;         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Options_Button_With_Status_C*       K2Node_DynamicCast_AsW_Options_Button_with_Status; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_4;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadAllowModdedPlayers_bAllowModdedPlayers; // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadAllowModdedPlayers_ReturnValue;       // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadJoinModdedServers_bJoinModdedServers; // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadJoinModdedServers_ReturnValue;        // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1203[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Options_Button_With_Status_C*       K2Node_DynamicCast_AsW_Options_Button_with_Status_1; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadZoomADSSetting_bZoomADS;              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadZoomADSSetting_ReturnValue;           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultSurfaceCommand_DefaultCommand; // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex; // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultSurfaceCommand_ReturnValue;    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadLowReadyStyle_bUseHighReady;          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadLowReadyStyle_ReturnValue;            // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                CallFunc_LoadShotgunSettings_ShotgunReloadType;    // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShotgunSettings_ReturnValue;          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameVersionEnabled_ReturnValue;         // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_8;                               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadReplayEnabled_bReplayEnabled;         // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadReplayEnabled_ReturnValue;            // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1219[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_9;                               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_121A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSendMapStatistics_bSendMapStatistics;  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSendMapStatistics_ReturnValue;         // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1228[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Options_Button_With_Status_C*       K2Node_DynamicCast_AsW_Options_Button_with_Status_2; // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFreelookSensitivity_Sensitivity;       // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFreelookSensitivity_ReturnValue;       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1233[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetMouseSensitivity_MouseSensitvity;      // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseSensitivity_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1234[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetFloatValue_NewValue;                   // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommand; // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1235[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorLockedCommand_DefaultDoorLockedCommandIndex; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorLockedCommand_ReturnValue; // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1238[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetFloatValue_NewValue_1;                 // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommand; // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1239[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorUnlockedCommand_DefaultDoorUnlockedCommandIndex; // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorUnlockedCommand_ReturnValue; // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommand; // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorOpenCommand_DefaultDoorOpenCommandIndex; // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorOpenCommand_ReturnValue;   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommand; // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultDoorUnknownCommand_DefaultDoorUnknownCommandIndex; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultDoorUnknownCommand_ReturnValue; // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      CallFunc_LoadDefaultSurfaceCommand_DefaultCommand_1; // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1298[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LoadDefaultSurfaceCommand_DefaultCommandIndex_1; // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadDefaultSurfaceCommand_ReturnValue_1;  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          CallFunc_LoadGrenadeSettings_GrenadeThrowType;     // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadGrenadeSettings_ReturnValue;          // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_2;                           // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_3;                           // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_bShowCommandContextHint; // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowCommandContextHintSetting_ReturnValue; // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHotkeyHintSetting_bShowHotkeyHint;    // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadHotkeyHintSetting_ReturnValue;        // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowHealthIconSetting_bShowHealthIcons; // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowHealthIconSetting_ReturnValue;    // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowCompass_bShowCompass;             // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowCompass_ReturnValue;              // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Load2DReload_b2DReload;                   // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Load2DReload_ReturnValue;                 // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowMultiplayerNames_bShowMultiplayerNames; // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowMultiplayerNames_ReturnValue;     // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowChat_bShowChat;                   // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowChat_ReturnValue;                 // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowTeamStatus_bShowTeamStatus;       // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowTeamStatus_ReturnValue;           // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSwayHUD_bSwayHUD;                     // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadSwayHUD_ReturnValue;                  // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 CallFunc_LoadScoreReadoutSetting_OutScoreReadoutMode; // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadScoreReadoutSetting_ReturnValue;      // 0xFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_4;                           // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowHUD_bShowHud;                     // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadShowHUD_ReturnValue;                  // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowFPS_bShowFPS;                      // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetShowFPS_ReturnValue;                   // 0x11D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12ED[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetFloatValue_NewFloat_ImplicitCast;      // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetFloatValue_NewFloat_ImplicitCast_1;    // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_SwayHUD_K2Node_ComponentBoundEvent_7_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowTeamStatus_K2Node_ComponentBoundEvent_8_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowChat_K2Node_ComponentBoundEvent_9_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowNames_K2Node_ComponentBoundEvent_10_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_StaticReload_K2Node_ComponentBoundEvent_11_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCompass_K2Node_ComponentBoundEvent_12_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHealthIcons_K2Node_ComponentBoundEvent_13_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHotkeys_K2Node_ComponentBoundEvent_14_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowCommandContextHint_K2Node_ComponentBoundEvent_15_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_GrenadeStyle_K2Node_ComponentBoundEvent_17_FocusLostDispatcher__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowIcons_K2Node_ComponentBoundEvent_122_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHesitationBar_K2Node_ComponentBoundEvent_124_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__Options_Combo_LastMagReloadStyle_1_K2Node_ComponentBoundEvent_87_OnNewOptionSelected__DelegateSignature_Params
{
public:
	int32                                        NewOption;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__Options_Slider_MouseSensitivity_K2Node_ComponentBoundEvent_52_OnFloatValueChanged__DelegateSignature_Params
{
public:
	double                                       NewFloatValue;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewSliderValue;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__Options_Slider_FreelookSensitivity_K2Node_ComponentBoundEvent_20_OnFloatValueChanged__DelegateSignature_Params
{
public:
	double                                       NewFloatValue;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewSliderValue;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_46_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_W_OnOffButton_K2Node_ComponentBoundEvent_91_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_ClearModioUserData_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_MapAnalytics_K2Node_ComponentBoundEvent_94_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_Replay_K2Node_ComponentBoundEvent_30_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.LanguageCancelClicked
struct UW_Options_Gameplay_UE5_C_LanguageCancelClicked_Params
{
public:
	class UStandardModal*                        CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.LanguageOkClicked
struct UW_Options_Gameplay_UE5_C_LanguageOkClicked_Params
{
public:
	class UW_StandardModal_C*                    CallingModal;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextEntry;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_CopySupporterCodeButton_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature_Params
{
public:
	class UW_Button_C*                           Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowHUD_K2Node_ComponentBoundEvent_3_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LanguageSelection_K2Node_ComponentBoundEvent_0_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1489[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_ShotgunReloadStyle_K2Node_ComponentBoundEvent_13_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1490[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LowReadyStyle_K2Node_ComponentBoundEvent_15_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1497[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultSurfaceCommand_K2Node_ComponentBoundEvent_6_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_149D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultUnknownDoorCommand_K2Node_ComponentBoundEvent_16_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_DefaultOpenDoorCommand_K2Node_ComponentBoundEvent_17_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_UnlockedDoorCommand_K2Node_ComponentBoundEvent_18_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_LockedDoorcommand_K2Node_ComponentBoundEvent_19_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_Options_ScoreReadoutMode_K2Node_ComponentBoundEvent_21_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_OnOff_ADSZoom_K2Node_ComponentBoundEvent_92_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_SimpleGraphics_Carousel_NVGStyle_K2Node_ComponentBoundEvent_136_OnPageIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_SettingsMenuGamepad_Options_OnOff_ShowFPS_K2Node_ComponentBoundEvent_2_OnValueStateChange__DelegateSignature_Params
{
public:
	bool                                         bNewCheckState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_InputMethodListener_K2Node_ComponentBoundEvent_4_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_CrossplayButton_K2Node_ComponentBoundEvent_23_OnValueChange__DelegateSignature_Params
{
public:
	bool                                         NewCheckState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.Tick
struct UW_Options_Gameplay_UE5_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_JoinModdedServersButton_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature_Params
{
public:
	bool                                         NewCheckState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature
struct UW_Options_Gameplay_UE5_C_BndEvt__W_Options_Gameplay_UE5_AllowModdedPlayerButton_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature_Params
{
public:
	bool                                         NewCheckState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F4 (0x4F4 - 0x0)
// Function W_Options_Gameplay_UE5.W_Options_Gameplay_UE5_C.ExecuteUbergraph_W_Options_Gameplay_UE5
struct UW_Options_Gameplay_UE5_C_ExecuteUbergraph_W_Options_Gameplay_UE5_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_NewCheckState;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveAllowModdedPlayers_ReturnValue;       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_2;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               Temp_byte_Variable_3;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1843[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_4;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_5;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_6;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_7;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_8;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_9;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_10;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1864[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_11;                             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_12;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_13;                             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_14;                             // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_15;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_16;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_17;                             // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_18;                             // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_19;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_20;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_21;                             // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_22;                             // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_23;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_24;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_25;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_26;                             // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_27;                             // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_28;                             // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_29;                             // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_30;                             // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      Temp_byte_Variable_31;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_188E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_6;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_188F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_7;                               // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_32;                             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_33;                             // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_34;                             // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 Temp_byte_Variable_35;                             // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_StandardModal_C*                    CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_8;                               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_36;                             // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                Temp_byte_Variable_37;                             // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEOSMultiplayerSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryLinkEpicAccount_ReturnValue;           // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ReferenceParm)
	class UEOSMultiplayerSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(None)
	class FString                                CallFunc_GetEOSAccountName_ReturnValue;            // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD8(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x128(0x18)(None)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_17;      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x148(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_SaveSwayHUD_ReturnValue;                  // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x1A0(0x10)(ReferenceParm)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_16;      // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x1B8(0x18)(None)
	bool                                         CallFunc_SaveShowTeamStatus_ReturnValue;           // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1902[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1D8(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_15;      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1903[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x230(0x10)(ReferenceParm)
	bool                                         CallFunc_SaveShowChat_ReturnValue;                 // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1915[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x248(0x18)(None)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_14;      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_13;      // 0x261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowMultiplayerNames_ReturnValue;     // 0x262(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Save2DReload_ReturnValue;                 // 0x263(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_12;      // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_11;      // 0x265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowCompass_ReturnValue;              // 0x266(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowHealthIconSetting_ReturnValue;    // 0x267(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_10;      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_9;       // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveHotkeyHintSetting_ReturnValue;        // 0x26A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowCommandContextHintSetting_ReturnValue; // 0x26B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_10;               // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_8;       // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_7;       // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowPlayerIconSetting_ReturnValue;    // 0x272(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowHesitationBarSetting_ReturnValue; // 0x273(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewOption;              // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewFloatValue_1;        // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewSliderValue_1;       // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMouseSensitivity_ReturnValue;          // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEmptyMagReloadType               K2Node_Select_Default;                             // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1956[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewFloatValue;          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewSliderValue;         // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveEmptyMagReloadSettings_ReturnValue;   // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetFreelookSensitivity_ReturnValue;       // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertVertical;         // 0x2A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_bInvertHorizontal;       // 0x2A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetMouseInverted_ReturnValue;             // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_6;       // 0x2A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_5;       // 0x2A6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMouseInverted_ReturnValue;             // 0x2A7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMouseInverted_ReturnValue_1;           // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button_1;               // 0x2B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UModioManager*                         CallFunc_GetInstance_ReturnValue;                  // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_4;       // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_3;       // 0x2C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSendMapStatistics_ReturnValue;         // 0x2C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveReplayEnabled_ReturnValue;            // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x2C8(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStandardModal*                        K2Node_CustomEvent_CallingModal_1;                 // 0x2D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_9;                               // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrenadeThrowSettingType          K2Node_Select_Default_1;                           // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGrenadeSettings_ReturnValue;          // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UW_StandardModal_C*                    K2Node_CustomEvent_CallingModal;                   // 0x300(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextEntry;                      // 0x308(0x18)(None)
	bool                                         CallFunc_SetCurrentLanguageAndLocale_ReturnValue;  // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentCulture_ReturnValue;            // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_Button_C*                           K2Node_ComponentBoundEvent_Button;                 // 0x340(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_2;       // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShowHUD_ReturnValue;                  // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A30[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_9;                // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_9;                // 0x350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetCurrentLanguageAndLocale_ReturnValue_1; // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_8;                // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_8;                // 0x368(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EShotgunReloadType                K2Node_Select_Default_2;                           // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveShotgunSettings_ReturnValue;          // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A39[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_7;                // 0x380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_3;                           // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveLowReadyStyle_ReturnValue;            // 0x391(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A43[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_6;                // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_Value_5;                // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_4;                           // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_5;                           // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultSurfaceCommand_ReturnValue;    // 0x3C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorUnknownCommand_ReturnValue; // 0x3C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_4;                // 0x3C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_Value_3;                // 0x3E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_6;                           // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorOpenCommand_ReturnValue;   // 0x3F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_7;                           // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A61[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_2;                // 0x3F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorUnlockedCommand_ReturnValue; // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESwatCommand                      K2Node_Select_Default_8;                           // 0x409(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveDefaultDoorLockedCommand_ReturnValue; // 0x40A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A64[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x40C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value_1;                // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EScoreReadoutMode                 K2Node_Select_Default_9;                           // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveScoreReadoutSetting_ReturnValue;      // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState_1;       // 0x422(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveZoomADSSetting_ReturnValue;           // 0x423(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_Value;                  // 0x428(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bNewCheckState;         // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetShowFPS_ReturnValue;                   // 0x43A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AA1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x448(0x18)(ConstParm)
	class UReadyOrNotGameInstance*               K2Node_DynamicCast_AsReady_or_Not_Game_Instance;   // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UReadyOrNotGameUserSettings*           CallFunc_GetReadyOrNotGameUserSettings_ReturnValue; // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_NewCheckState_2;        // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveCrossplayEnabled_ReturnValue;         // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x47C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x4B8(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x4D0(0x18)(ConstParm)
	bool                                         K2Node_ComponentBoundEvent_NewCheckState_1;        // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveJoinModdedServers_ReturnValue;        // 0x4E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AAC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetMouseSensitivity_MouseSensitivity_ImplicitCast; // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFreelookSensitivity_Sensitivity_ImplicitCast; // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


