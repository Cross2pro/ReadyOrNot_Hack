#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CustomAnimNode.AnimSuiteMathLibrary
// (None)

class UClass* UAnimSuiteMathLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSuiteMathLibrary");

	return Clss;
}


// AnimSuiteMathLibrary CustomAnimNode.Default__AnimSuiteMathLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSuiteMathLibrary* UAnimSuiteMathLibrary::GetDefaultObj()
{
	static class UAnimSuiteMathLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSuiteMathLibrary*>(UAnimSuiteMathLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class CustomAnimNode.AnimSuiteNodeHelperLibrary
// (None)

class UClass* UAnimSuiteNodeHelperLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSuiteNodeHelperLibrary");

	return Clss;
}


// AnimSuiteNodeHelperLibrary CustomAnimNode.Default__AnimSuiteNodeHelperLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSuiteNodeHelperLibrary* UAnimSuiteNodeHelperLibrary::GetDefaultObj()
{
	static class UAnimSuiteNodeHelperLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSuiteNodeHelperLibrary*>(UAnimSuiteNodeHelperLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTimeByPoseMatching
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              SampleRate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldMatchVelocity                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseOnlyHighestWeightedSample                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldInertiallyBlend                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InertialBlendTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpacePlayerReturnValuesReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpacePlayerReturnValues UAnimSuiteNodeHelperLibrary::SetNormalizedTimeByPoseMatching(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, float SampleRate, bool bShouldMatchVelocity, bool bUseOnlyHighestWeightedSample, bool bShouldInertiallyBlend, float InertialBlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetNormalizedTimeByPoseMatching");

	Params::UAnimSuiteNodeHelperLibrary_SetNormalizedTimeByPoseMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.SampleRate = SampleRate;
	Parms.bShouldMatchVelocity = bShouldMatchVelocity;
	Parms.bUseOnlyHighestWeightedSample = bUseOnlyHighestWeightedSample;
	Parms.bShouldInertiallyBlend = bShouldInertiallyBlend;
	Parms.InertialBlendTime = InertialBlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MatchingDistance                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PrevNormalizedTime                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PlayRateClamp                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DistanceCurveName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdvanceTimeNaturally                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseOnlyHighestWeightedSample                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpacePlayerReturnValuesReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpacePlayerReturnValues UAnimSuiteNodeHelperLibrary::SetNormalizedTimeByDistanceMatching(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, float MatchingDistance, float PrevNormalizedTime, const struct FVector2D& PlayRateClamp, class FName DistanceCurveName, bool bAdvanceTimeNaturally, bool bUseOnlyHighestWeightedSample)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetNormalizedTimeByDistanceMatching");

	Params::UAnimSuiteNodeHelperLibrary_SetNormalizedTimeByDistanceMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.MatchingDistance = MatchingDistance;
	Parms.PrevNormalizedTime = PrevNormalizedTime;
	Parms.PlayRateClamp = PlayRateClamp;
	Parms.DistanceCurveName = DistanceCurveName;
	Parms.bAdvanceTimeNaturally = bAdvanceTimeNaturally;
	Parms.bUseOnlyHighestWeightedSample = bUseOnlyHighestWeightedSample;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetNormalizedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              NormalizedTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpacePlayerReference UAnimSuiteNodeHelperLibrary::SetNormalizedTime(struct FBlendSpacePlayerReference& BlendSpacePlayer, float NormalizedTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetNormalizedTime");

	Params::UAnimSuiteNodeHelperLibrary_SetNormalizedTime_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.NormalizedTime = NormalizedTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              StartPosition                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedStartPosition(struct FSequenceMatcherReference& SequencePlayer, float StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedStartPosition");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.StartPosition = StartPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedSequence(struct FSequenceMatcherReference& SequencePlayer, class UAnimSequenceBase* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedSequence");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedPlayRate(struct FSequenceMatcherReference& SequencePlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedPlayRate");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedBlendSpaceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBlendSpaceMatcherReference BlendSpaceMatchedPlayer                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UBlendSpace*                 BlendSpace                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BlendTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpaceMatcherReference ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpaceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer, class UBlendSpace* BlendSpace, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedBlendSpaceWithInertialBlending");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedBlendSpaceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.BlendSpaceMatchedPlayer = BlendSpaceMatchedPlayer;
	Parms.BlendSpace = BlendSpace;
	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpaceMatcherReference BlendSpaceMatchedPlayer                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UBlendSpace*                 BlendSpace                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpaceMatcherReference ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpaceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedBlendSpace(struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer, class UBlendSpace* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedBlendSpace");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedBlendSpace_Params Parms{};

	Parms.BlendSpaceMatchedPlayer = BlendSpaceMatchedPlayer;
	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetMatchedAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceMatcherReference UAnimSuiteNodeHelperLibrary::SetMatchedAccumulatedTime(struct FSequenceMatcherReference& SequencePlayer, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetMatchedAccumulatedTime");

	Params::UAnimSuiteNodeHelperLibrary_SetMatchedAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.SetExplicitTimeByPoseMatching
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSequencePlayerReference    SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              SampleRate                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldMatchVelocity                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldInertiallyBlend                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InertialBlendTime                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequencePlayerReturnValues ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequencePlayerReturnValues UAnimSuiteNodeHelperLibrary::SetExplicitTimeByPoseMatching(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, float SampleRate, bool bShouldMatchVelocity, bool bShouldInertiallyBlend, float InertialBlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "SetExplicitTimeByPoseMatching");

	Params::UAnimSuiteNodeHelperLibrary_SetExplicitTimeByPoseMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequencePlayer = SequencePlayer;
	Parms.SampleRate = SampleRate;
	Parms.bShouldMatchVelocity = bShouldMatchVelocity;
	Parms.bShouldInertiallyBlend = bShouldInertiallyBlend;
	Parms.InertialBlendTime = InertialBlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetScaledAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::GetScaledAccumulatedTime(struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetScaledAccumulatedTime");

	Params::UAnimSuiteNodeHelperLibrary_GetScaledAccumulatedTime_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::GetMatchingStartPosition(struct FSequenceMatcherReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchingStartPosition");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchingStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::GetMatchingPlayRate(struct FSequenceMatcherReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchingPlayRate");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchingPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchingLoopAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimSuiteNodeHelperLibrary::GetMatchingLoopAnimation(struct FSequenceMatcherReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchingLoopAnimation");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchingLoopAnimation_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedSequencePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimSequenceBase* UAnimSuiteNodeHelperLibrary::GetMatchedSequencePure(struct FSequenceMatcherReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchedSequencePure");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchedSequencePure_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedScaledAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceMatcherReference BlendSpaceMatchedPlayer                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::GetMatchedScaledAccumulatedTime(struct FBlendSpaceMatcherReference& BlendSpaceMatchedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchedScaledAccumulatedTime");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchedScaledAccumulatedTime_Params Parms{};

	Parms.BlendSpaceMatchedPlayer = BlendSpaceMatchedPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.GetMatchedAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::GetMatchedAccumulatedTime(struct FSequenceMatcherReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "GetMatchedAccumulatedTime");

	Params::UAnimSuiteNodeHelperLibrary_GetMatchedAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedSequencePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   SequencePlayer                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimSuiteNodeHelperLibrary::ConvertToMatchedSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequenceMatcherReference* SequencePlayer, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "ConvertToMatchedSequencePlayerPure");

	Params::UAnimSuiteNodeHelperLibrary_ConvertToMatchedSequencePlayerPure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	if (bResult != nullptr)
		*bResult = Parms.bResult;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSequenceMatcherReference   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSequenceMatcherReference UAnimSuiteNodeHelperLibrary::ConvertToMatchedSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "ConvertToMatchedSequencePlayer");

	Params::UAnimSuiteNodeHelperLibrary_ConvertToMatchedSequencePlayer_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedBlendSpacePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FBlendSpaceMatcherReference BlendSpaceMatchedPlayer                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimSuiteNodeHelperLibrary::ConvertToMatchedBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpaceMatcherReference* BlendSpaceMatchedPlayer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "ConvertToMatchedBlendSpacePlayerPure");

	Params::UAnimSuiteNodeHelperLibrary_ConvertToMatchedBlendSpacePlayerPure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpaceMatchedPlayer != nullptr)
		*BlendSpaceMatchedPlayer = std::move(Parms.BlendSpaceMatchedPlayer);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ConvertToMatchedBlendSpacePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlendSpaceMatcherReference ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FBlendSpaceMatcherReference UAnimSuiteNodeHelperLibrary::ConvertToMatchedBlendSpacePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "ConvertToMatchedBlendSpacePlayer");

	Params::UAnimSuiteNodeHelperLibrary_ConvertToMatchedBlendSpacePlayer_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function CustomAnimNode.AnimSuiteNodeHelperLibrary.ComputeMatchedPlayRateFromDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceMatcherReference   SequencePlayer                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimSuiteNodeHelperLibrary::ComputeMatchedPlayRateFromDuration(struct FSequenceMatcherReference& SequencePlayer, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimSuiteNodeHelperLibrary", "ComputeMatchedPlayRateFromDuration");

	Params::UAnimSuiteNodeHelperLibrary_ComputeMatchedPlayRateFromDuration_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


