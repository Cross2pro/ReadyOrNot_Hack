#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AimAssistSystem.UASAimAssistComponent
// (None)

class UClass* UUASAimAssistComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistComponent");

	return Clss;
}


// UASAimAssistComponent AimAssistSystem.Default__UASAimAssistComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistComponent* UUASAimAssistComponent::GetDefaultObj()
{
	static class UUASAimAssistComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistComponent*>(UUASAimAssistComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimAssistSystem.UASAimAssistComponent.ShouldSocketBeConsidered
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// struct FUASAimAssistTargetData     TargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::ShouldSocketBeConsidered(struct FUASAimAssistTargetData& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "ShouldSocketBeConsidered");

	Params::UUASAimAssistComponent_ShouldSocketBeConsidered_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.SetWeaponBulletSpawnLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BulletSpawnLocation                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetWeaponBulletSpawnLocation(const struct FVector& BulletSpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetWeaponBulletSpawnLocation");

	Params::UUASAimAssistComponent_SetWeaponBulletSpawnLocation_Params Parms{};

	Parms.BulletSpawnLocation = BulletSpawnLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetWeaponAimPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   AimPoint                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetWeaponAimPoint(const struct FVector2D& AimPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetWeaponAimPoint");

	Params::UUASAimAssistComponent_SetWeaponAimPoint_Params Parms{};

	Parms.AimPoint = AimPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetScopeSizeFactor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SizeFactor                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetScopeSizeFactor(float SizeFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetScopeSizeFactor");

	Params::UUASAimAssistComponent_SetScopeSizeFactor_Params Parms{};

	Parms.SizeFactor = SizeFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetMouseActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetMouseActive(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetMouseActive");

	Params::UUASAimAssistComponent_SetMouseActive_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetEnableZoneScaling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetEnableZoneScaling(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetEnableZoneScaling");

	Params::UUASAimAssistComponent_SetEnableZoneScaling_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetEnableStickiness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetEnableStickiness(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetEnableStickiness");

	Params::UUASAimAssistComponent_SetEnableStickiness_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetEnableSnapToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetEnableSnapToTarget(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetEnableSnapToTarget");

	Params::UUASAimAssistComponent_SetEnableSnapToTarget_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetEnableMagnetism
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetEnableMagnetism(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetEnableMagnetism");

	Params::UUASAimAssistComponent_SetEnableMagnetism_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetEnableAutoAim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetEnableAutoAim(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetEnableAutoAim");

	Params::UUASAimAssistComponent_SetEnableAutoAim_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetDrawWeights
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetDrawWeights(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetDrawWeights");

	Params::UUASAimAssistComponent_SetDrawWeights_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetDrawSockets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetDrawSockets(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetDrawSockets");

	Params::UUASAimAssistComponent_SetDrawSockets_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetDrawCrosshair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetDrawCrosshair(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetDrawCrosshair");

	Params::UUASAimAssistComponent_SetDrawCrosshair_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetDrawCircles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetDrawCircles(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetDrawCircles");

	Params::UUASAimAssistComponent_SetDrawCircles_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetDrawAimBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetDrawAimBox(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetDrawAimBox");

	Params::UUASAimAssistComponent_SetDrawAimBox_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistDataAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUASAimAssistConfigDataAsset*DataAsset                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetAimAssistDataAsset(class UUASAimAssistConfigDataAsset* DataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetAimAssistDataAsset");

	Params::UUASAimAssistComponent_SetAimAssistDataAsset_Params Parms{};

	Parms.DataAsset = DataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.OnTargetDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::OnTargetDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "OnTargetDestroyed");

	Params::UUASAimAssistComponent_OnTargetDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.IsAnimationBlocking
// (Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::IsAnimationBlocking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "IsAnimationBlocking");

	Params::UUASAimAssistComponent_IsAnimationBlocking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetRotationToCrosshairDirection
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     From                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TraceProfileName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistanceToRotateToTarget                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UUASAimAssistComponent::GetRotationToCrosshairDirection(struct FVector& From, class FName TraceProfileName, float MinDistanceToRotateToTarget, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetRotationToCrosshairDirection");

	Params::UUASAimAssistComponent_GetRotationToCrosshairDirection_Params Parms{};

	Parms.From = From;
	Parms.TraceProfileName = TraceProfileName;
	Parms.MinDistanceToRotateToTarget = MinDistanceToRotateToTarget;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetMouseActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetMouseActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetMouseActive");

	Params::UUASAimAssistComponent_GetMouseActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetEnableZoneScaling
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetEnableZoneScaling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetEnableZoneScaling");

	Params::UUASAimAssistComponent_GetEnableZoneScaling_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetEnableStickiness
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetEnableStickiness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetEnableStickiness");

	Params::UUASAimAssistComponent_GetEnableStickiness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetEnableSnapToTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetEnableSnapToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetEnableSnapToTarget");

	Params::UUASAimAssistComponent_GetEnableSnapToTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetEnableMagnetism
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetEnableMagnetism()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetEnableMagnetism");

	Params::UUASAimAssistComponent_GetEnableMagnetism_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetEnableAutoAim
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetEnableAutoAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetEnableAutoAim");

	Params::UUASAimAssistComponent_GetEnableAutoAim_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetDrawWeights
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetDrawWeights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetDrawWeights");

	Params::UUASAimAssistComponent_GetDrawWeights_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetDrawSockets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetDrawSockets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetDrawSockets");

	Params::UUASAimAssistComponent_GetDrawSockets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetDrawCrosshair
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetDrawCrosshair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetDrawCrosshair");

	Params::UUASAimAssistComponent_GetDrawCrosshair_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetDrawCircles
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetDrawCircles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetDrawCircles");

	Params::UUASAimAssistComponent_GetDrawCircles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetDrawAimBox
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetDrawAimBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetDrawAimBox");

	Params::UUASAimAssistComponent_GetDrawAimBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetCrosshairPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UUASAimAssistComponent::GetCrosshairPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetCrosshairPosition");

	Params::UUASAimAssistComponent_GetCrosshairPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetControlMultipliers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::GetControlMultipliers(float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetControlMultipliers");

	Params::UUASAimAssistComponent_GetControlMultipliers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

}


// Function AimAssistSystem.UASAimAssistComponent.ExecuteSnapToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUASAimAssistComponent::ExecuteSnapToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "ExecuteSnapToTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.CancelSnapToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUASAimAssistComponent::CancelSnapToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "CancelSnapToTarget");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.CalculateSocketWeight
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// struct FUASAimAssistTargetData     TargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUASAimAssistComponent::CalculateSocketWeight(struct FUASAimAssistTargetData& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "CalculateSocketWeight");

	Params::UUASAimAssistComponent_CalculateSocketWeight_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.CalculateSocketDistance
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// struct FUASAimAssistTargetData     TargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUASAimAssistComponent::CalculateSocketDistance(struct FUASAimAssistTargetData& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "CalculateSocketDistance");

	Params::UUASAimAssistComponent_CalculateSocketDistance_Params Parms{};

	Parms.TargetData = TargetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimAssistSystem.UASAimAssistConfigDataAsset
// (None)

class UClass* UUASAimAssistConfigDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistConfigDataAsset");

	return Clss;
}


// UASAimAssistConfigDataAsset AimAssistSystem.Default__UASAimAssistConfigDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistConfigDataAsset* UUASAimAssistConfigDataAsset::GetDefaultObj()
{
	static class UUASAimAssistConfigDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistConfigDataAsset*>(UUASAimAssistConfigDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AimAssistSystem.ASAimAssistSubsystem
// (None)

class UClass* UASAimAssistSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAimAssistSubsystem");

	return Clss;
}


// ASAimAssistSubsystem AimAssistSystem.Default__ASAimAssistSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UASAimAssistSubsystem* UASAimAssistSubsystem::GetDefaultObj()
{
	static class UASAimAssistSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAimAssistSubsystem*>(UASAimAssistSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class AimAssistSystem.UASAimAssistTargetComponent
// (None)

class UClass* UUASAimAssistTargetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistTargetComponent");

	return Clss;
}


// UASAimAssistTargetComponent AimAssistSystem.Default__UASAimAssistTargetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistTargetComponent* UUASAimAssistTargetComponent::GetDefaultObj()
{
	static class UUASAimAssistTargetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistTargetComponent*>(UUASAimAssistTargetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimAssistSystem.UASAimAssistTargetComponent.ShouldConsiderWeight
// (Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistTargetComponent::ShouldConsiderWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "ShouldConsiderWeight");

	Params::UUASAimAssistTargetComponent_ShouldConsiderWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistTargetComponent.ShouldAlwaysBlockTrace
// (Native, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistTargetComponent::ShouldAlwaysBlockTrace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "ShouldAlwaysBlockTrace");

	Params::UUASAimAssistTargetComponent_ShouldAlwaysBlockTrace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistTargetComponent.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*              Mesh                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistTargetComponent::Init(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "Init");

	Params::UUASAimAssistTargetComponent_Init_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistTargetComponent.GetWeightLabel
// (Native, Public)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUASAimAssistTargetComponent::GetWeightLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "GetWeightLabel");

	Params::UUASAimAssistTargetComponent_GetWeightLabel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistTargetComponent.GetWeightByState
// (Native, Public)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUASAimAssistTargetComponent::GetWeightByState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "GetWeightByState");

	Params::UUASAimAssistTargetComponent_GetWeightByState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistTargetComponent.GetMoveSpeed
// (Native, Public)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUASAimAssistTargetComponent::GetMoveSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "GetMoveSpeed");

	Params::UUASAimAssistTargetComponent_GetMoveSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


