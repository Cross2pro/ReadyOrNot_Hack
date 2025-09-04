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

// 0x10 (0x10 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.AnimGraph
struct UANIMBP_Player_TP_V4_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetActiveTurnRecoveryAnim
struct UANIMBP_Player_TP_V4_C_SetActiveTurnRecoveryAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
	struct FSequencePlayerReference              CallFunc_SetAccumulatedTime_ReturnValue;           // 0x48(0x10)(NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetActiveTurnAnim
struct UANIMBP_Player_TP_V4_C_SetActiveTurnAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x48(0x10)(NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateActiveTurnAnim
struct UANIMBP_Player_TP_V4_C_UpdateActiveTurnAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_321B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x38(0x10)(NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateItemIdleOverridePose
struct UANIMBP_Player_TP_V4_C_UpdateItemIdleOverridePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateShieldAimPose
struct UANIMBP_Player_TP_V4_C_UpdateShieldAimPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateTaserLoopAnim
struct UANIMBP_Player_TP_V4_C_UpdateTaserLoopAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3305[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateStunLoopAnim
struct UANIMBP_Player_TP_V4_C_UpdateStunLoopAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLeanRightPose
struct UANIMBP_Player_TP_V4_C_UpdateLeanRightPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_340F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3411[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x60(0x10)(NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLeanLeftPose
struct UANIMBP_Player_TP_V4_C_UpdateLeanLeftPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_345E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
	float                                        K2Node_Select_Default_1;                           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3483[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x60(0x10)(NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateJumpLoopAnim
struct UANIMBP_Player_TP_V4_C_UpdateJumpLoopAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetJumpStartAnim
struct UANIMBP_Player_TP_V4_C_SetJumpStartAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetCrouchToStandAnim
struct UANIMBP_Player_TP_V4_C_SetCrouchToStandAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetStandToCrouchAnim
struct UANIMBP_Player_TP_V4_C_SetStandToCrouchAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequencePlayerReference              CallFunc_ConvertToSequencePlayerPure_SequencePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequencePlayerPure_Result;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x38(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateHighLeanAdditivePose
struct UANIMBP_Player_TP_V4_C_UpdateHighLeanAdditivePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3664[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateJumpRecoveryAnim
struct UANIMBP_Player_TP_V4_C_UpdateJumpRecoveryAnim_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetExplicitTime_ReturnValue;              // 0x38(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateQuickLeanRightPose
struct UANIMBP_Player_TP_V4_C_UpdateQuickLeanRightPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3739[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateQuickLeanLeftPose
struct UANIMBP_Player_TP_V4_C_UpdateQuickLeanLeftPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3761[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x60 (0x60 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateRetentionAdditivePose
struct UANIMBP_Player_TP_V4_C_UpdateRetentionAdditivePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3816[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     K2Node_Select_Default_1;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimSequenceBase*                     K2Node_Select_Default_2;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x50(0x10)(NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateSightsAdditivePose
struct UANIMBP_Player_TP_V4_C_UpdateSightsAdditivePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3864[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateLoweredAdditivePose
struct UANIMBP_Player_TP_V4_C_UpdateLoweredAdditivePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3898[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x48(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateBaseOverridePose
struct UANIMBP_Player_TP_V4_C_UpdateBaseOverridePose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSequenceEvaluatorReference           CallFunc_SetSequenceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.UpdateCurrentAOBS
struct UANIMBP_Player_TP_V4_C_UpdateCurrentAOBS_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FBlendSpacePlayerReference            CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer; // 0x20(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToBlendSpacePlayerPure_Result;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3936[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAimOffsetBlendSpace*                  K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FBlendSpacePlayerReference            CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue; // 0x40(0x10)(NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.SetWeaponGripPose
struct UANIMBP_Player_TP_V4_C_SetWeaponGripPose_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSequenceEvaluatorReference           SeqEval;                                           // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator; // 0x30(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToSequenceEvaluatorPure_Result;    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_398A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue;                  // 0x48(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue_1;                // 0x58(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue_2;                // 0x68(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue_3;                // 0x78(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue_4;                // 0x88(0x10)(NoDestructor)
	struct FSequenceEvaluatorReference           CallFunc_SetSequence_ReturnValue_5;                // 0x98(0x10)(NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.BlueprintUpdateAnimation
struct UANIMBP_Player_TP_V4_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function ANIMBP_Player_TP_V4.ANIMBP_Player_TP_V4_C.ExecuteUbergraph_ANIMBP_Player_TP_V4
struct UANIMBP_Player_TP_V4_C_ExecuteUbergraph_ANIMBP_Player_TP_V4_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character_1;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetItemMesh_ReturnValue;                  // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABaseItem*                             CallFunc_GetEquippedItem_ReturnValue_1;            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetItemMesh_ReturnValue_1;                // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AReadyOrNotCharacter*                  K2Node_DynamicCast_AsReady_or_Not_Character;       // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


