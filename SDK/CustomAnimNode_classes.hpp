#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CustomAnimNode.AnimSuiteMathLibrary
class UAnimSuiteMathLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimSuiteMathLibrary* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CustomAnimNode.AnimSuiteNodeHelperLibrary
class UAnimSuiteNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimSuiteNodeHelperLibrary* GetDefaultObj();

	struct FBlendSpacePlayerReturnValues SetNormalizedTimeByPoseMatching(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, float SampleRate, bool bShouldMatchVelocity, bool bUseOnlyHighestWeightedSample, bool bShouldInertiallyBlend, float InertialBlendTime);
	struct FBlendSpacePlayerReturnValues SetNormalizedTimeByDistanceMatching(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, float MatchingDistance, float PrevNormalizedTime, const struct FVector2D& PlayRateClamp, class FName DistanceCurveName, bool bAdvanceTimeNaturally, bool bUseOnlyHighestWeightedSample);
	struct FBlendSpacePlayerReference SetNormalizedTime(struct FBlendSpacePlayerReference& BlendSpacePlayer, float NormalizedTime);
	struct FSequenceMatcherReference SetMatchedStartPosition(struct FSequenceMatcherReference& SequencePlayer, float StartPosition);
	struct FSequenceMatcherReference SetMatchedSequence(struct FSequenceMatcherReference& SequencePlayer, class UAnimSequenceBase* Sequence);
	struct FSequenceMatcherReference SetMatchedPlayRate(struct FSequenceMatcherReference& SequencePlayer, float PlayRate);
	struct FBlendSpaceMatcherReference SetMatchedBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer, class UBlendSpace* BlendSpace, float BlendTime);
	struct FBlendSpaceMatcherReference SetMatchedBlendSpace(struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer, class UBlendSpace* BlendSpace);
	struct FSequenceMatcherReference SetMatchedAccumulatedTime(struct FSequenceMatcherReference& SequencePlayer, float Time);
	struct FSequencePlayerReturnValues SetExplicitTimeByPoseMatching(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, float SampleRate, bool bShouldMatchVelocity, bool bShouldInertiallyBlend, float InertialBlendTime);
	float GetScaledAccumulatedTime(struct FBlendSpacePlayerReference& BlendSpacePlayer);
	float GetMatchingStartPosition(struct FSequenceMatcherReference& SequencePlayer);
	float GetMatchingPlayRate(struct FSequenceMatcherReference& SequencePlayer);
	bool GetMatchingLoopAnimation(struct FSequenceMatcherReference& SequencePlayer);
	class UAnimSequenceBase* GetMatchedSequencePure(struct FSequenceMatcherReference& SequencePlayer);
	float GetMatchedScaledAccumulatedTime(struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer);
	float GetMatchedAccumulatedTime(struct FSequenceMatcherReference& SequencePlayer);
	void ConvertToMatchedSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequenceMatcherReference* SequencePlayer, bool* bResult);
	struct FSequenceMatcherReference ConvertToMatchedSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
	void ConvertToMatchedBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpaceMatcherReference* BlendSpaceMatchedPlayer, bool* Result);
	struct FBlendSpaceMatcherReference ConvertToMatchedBlendSpacePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result);
	float ComputeMatchedPlayRateFromDuration(struct FSequenceMatcherReference& SequencePlayer, float Duration);
};

}


