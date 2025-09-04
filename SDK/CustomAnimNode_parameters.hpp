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

// 0x48 (0x48 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTimeByPoseMatching
struct UAnimSuiteNodeHelperLibrary_SetNormalizedTimeByPoseMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SampleRate;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldMatchVelocity;                              // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOnlyHighestWeightedSample;                     // 0x25(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldInertiallyBlend;                            // 0x26(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_910[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InertialBlendTime;                                 // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_913[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReturnValues         ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTimeByDistanceMatching
struct UAnimSuiteNodeHelperLibrary_SetNormalizedTimeByDistanceMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MatchingDistance;                                  // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrevNormalizedTime;                                // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PlayRateClamp;                                     // 0x28(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DistanceCurveName;                                 // 0x38(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvanceTimeNaturally;                             // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOnlyHighestWeightedSample;                     // 0x41(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_933[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReturnValues         ReturnValue;                                       // 0x48(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTime
struct UAnimSuiteNodeHelperLibrary_SetNormalizedTime_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NormalizedTime;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_961[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedStartPosition
struct UAnimSuiteNodeHelperLibrary_SetMatchedStartPosition_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartPosition;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceMatcherReference             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedSequence
struct UAnimSuiteNodeHelperLibrary_SetMatchedSequence_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSequenceMatcherReference             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedPlayRate
struct UAnimSuiteNodeHelperLibrary_SetMatchedPlayRate_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceMatcherReference             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedBlendSpaceWithInertialBlending
struct UAnimSuiteNodeHelperLibrary_SetMatchedBlendSpaceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBlendSpaceMatcherReference           BlendSpaceMatchedPlayer;                           // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpaceMatcherReference           ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedBlendSpace
struct UAnimSuiteNodeHelperLibrary_SetMatchedBlendSpace_Params
{
public:
	struct FBlendSpaceMatcherReference           BlendSpaceMatchedPlayer;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlendSpace*                           BlendSpace;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlendSpaceMatcherReference           ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedAccumulatedTime
struct UAnimSuiteNodeHelperLibrary_SetMatchedAccumulatedTime_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceMatcherReference             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetExplicitTimeByPoseMatching
struct UAnimSuiteNodeHelperLibrary_SetExplicitTimeByPoseMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SampleRate;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldMatchVelocity;                              // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldInertiallyBlend;                            // 0x25(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InertialBlendTime;                                 // 0x28(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReturnValues           ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetScaledAccumulatedTime
struct UAnimSuiteNodeHelperLibrary_GetScaledAccumulatedTime_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingStartPosition
struct UAnimSuiteNodeHelperLibrary_GetMatchingStartPosition_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A48[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingPlayRate
struct UAnimSuiteNodeHelperLibrary_GetMatchingPlayRate_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A69[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingLoopAnimation
struct UAnimSuiteNodeHelperLibrary_GetMatchingLoopAnimation_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedSequencePure
struct UAnimSuiteNodeHelperLibrary_GetMatchedSequencePure_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedScaledAccumulatedTime
struct UAnimSuiteNodeHelperLibrary_GetMatchedScaledAccumulatedTime_Params
{
public:
	struct FBlendSpaceMatcherReference           BlendSpaceMatchedPlayer;                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedAccumulatedTime
struct UAnimSuiteNodeHelperLibrary_GetMatchedAccumulatedTime_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedSequencePlayerPure
struct UAnimSuiteNodeHelperLibrary_ConvertToMatchedSequencePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x10(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B14[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedSequencePlayer
struct UAnimSuiteNodeHelperLibrary_ConvertToMatchedSequencePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceMatcherReference             ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedBlendSpacePlayerPure
struct UAnimSuiteNodeHelperLibrary_ConvertToMatchedBlendSpacePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBlendSpaceMatcherReference           BlendSpaceMatchedPlayer;                           // 0x10(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedBlendSpacePlayer
struct UAnimSuiteNodeHelperLibrary_ConvertToMatchedBlendSpacePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpaceMatcherReference           ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ComputeMatchedPlayRateFromDuration
struct UAnimSuiteNodeHelperLibrary_ComputeMatchedPlayRateFromDuration_Params
{
public:
	struct FSequenceMatcherReference             SequencePlayer;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


