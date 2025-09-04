#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class XRBase.HeadMountedDisplayFunctionLibrary
// (None)

class UClass* UHeadMountedDisplayFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadMountedDisplayFunctionLibrary");

	return Clss;
}


// HeadMountedDisplayFunctionLibrary XRBase.Default__HeadMountedDisplayFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UHeadMountedDisplayFunctionLibrary* UHeadMountedDisplayFunctionLibrary::GetDefaultObj()
{
	static class UHeadMountedDisplayFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeadMountedDisplayFunctionLibrary*>(UHeadMountedDisplayFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(struct FTransform& ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "UpdateExternalTrackingHMDPosition");

	Params::UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Params Parms{};

	Parms.ExternalTrackingTransform = ExternalTrackingTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 InDelegate                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(class FName& ActionName, FDelegateProperty_& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 InDisconnectedDelegate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(FDelegateProperty_& InDisconnectedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRDisconnectDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Params Parms{};

	Parms.InDisconnectedDelegate = InDisconnectedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(class UObject* WorldContext, float NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(enum class EHMDTrackingOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    InTexture                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenTexture");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params Parms{};

	Parms.InTexture = InTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   EyeRectMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   EyeRectMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   TextureRectMin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   TextureRectMax                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawEyeFirst                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bClearBlack                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseAlpha                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenModeTexturePlusEyeLayout");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params Parms{};

	Parms.EyeRectMin = EyeRectMin;
	Parms.EyeRectMax = EyeRectMax;
	Parms.TextureRectMin = TextureRectMin;
	Parms.TextureRectMax = TextureRectMax;
	Parms.bDrawEyeFirst = bDrawEyeFirst;
	Parms.bClearBlack = bClearBlack;
	Parms.bUseAlpha = bUseAlpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ESpectatorScreenMode    Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenMode");

	Params::UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Near                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Far                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "SetClippingPlanes");

	Params::UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params Parms{};

	Parms.Near = Near;
	Parms.Far = Far;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOrientPositionSelector Options                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params Parms{};

	Parms.Yaw = Yaw;
	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");

	Params::UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");

	Params::UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(struct FXRDeviceId& XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");

	Params::UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Params Parms{};

	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");

	Params::UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetXRSystemFlags");

	Params::UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");

	Params::UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetVRFocusState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bUseFocus                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHasFocus                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool* bUseFocus, bool* bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVRFocusState");

	Params::UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bUseFocus != nullptr)
		*bUseFocus = Parms.bUseFocus;

	if (bHasFocus != nullptr)
		*bHasFocus = Parms.bHasFocus;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVersionString");

	Params::UHeadMountedDisplayFunctionLibrary_GetVersionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              LeftFOV                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RightFOV                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TopFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BottomFOV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NearPlane                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FarPlane                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingSensorParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

	if (LeftFOV != nullptr)
		*LeftFOV = Parms.LeftFOV;

	if (RightFOV != nullptr)
		*RightFOV = Parms.RightFOV;

	if (TopFOV != nullptr)
		*TopFOV = Parms.TopFOV;

	if (BottomFOV != nullptr)
		*BottomFOV = Parms.BottomFOV;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

	if (NearPlane != nullptr)
		*NearPlane = Parms.NearPlane;

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OutTransform                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(enum class EHMDTrackingOrigin Origin, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOriginTransform");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Params Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDTrackingOrigin      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");

	Params::UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     CameraOrigin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    CameraRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              HFOV                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VFOV                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CameraDistance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NearPlane                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FarPlane                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPositionalTrackingCameraParameters");

	Params::UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CameraOrigin != nullptr)
		*CameraOrigin = std::move(Parms.CameraOrigin);

	if (CameraRotation != nullptr)
		*CameraRotation = std::move(Parms.CameraRotation);

	if (HFOV != nullptr)
		*HFOV = Parms.HFOV;

	if (VFOV != nullptr)
		*VFOV = Parms.VFOV;

	if (CameraDistance != nullptr)
		*CameraDistance = Parms.CameraDistance;

	if (NearPlane != nullptr)
		*NearPlane = Parms.NearPlane;

	if (FarPlane != nullptr)
		*FarPlane = Parms.FarPlane;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  OutTransform                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   OutRect                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(struct FTransform* OutTransform, struct FVector2D* OutRect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaRect");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);

	if (OutRect != nullptr)
		*OutRect = std::move(Parms.OutRect);

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EHMDTrackingOrigin      Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(enum class EHMDTrackingOrigin Origin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPlayAreaBounds");

	Params::UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Params Parms{};

	Parms.Origin = Origin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetPixelDensity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPixelDensity");

	Params::UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    DeviceRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     DevicePosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");

	Params::UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeviceRotation != nullptr)
		*DeviceRotation = std::move(Parms.DeviceRotation);

	if (DevicePosition != nullptr)
		*DevicePosition = std::move(Parms.DevicePosition);

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetNumOfTrackingSensors");

	Params::UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRMotionControllerData     MotionControllerData                                             (Parm, OutParm, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(class UObject* WorldContext, enum class EControllerHand Hand, struct FXRMotionControllerData* MotionControllerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");

	Params::UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionControllerData != nullptr)
		*MotionControllerData = std::move(Parms.MotionControllerData);

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetHMDWornState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EHMDWornState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDDeviceName");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetHMDData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRHMDData                  HMDData                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetHMDData(class UObject* WorldContext, struct FXRHMDData* HMDData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");

	Params::UHeadMountedDisplayFunctionLibrary_GetHMDData_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HMDData != nullptr)
		*HMDData = std::move(Parms.HMDData);

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsTracked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bHasPositionalTracking                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetDevicePose
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsTracked                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bHasPositionalTracking                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");

	Params::UHeadMountedDisplayFunctionLibrary_GetDevicePose_Params Parms{};

	Parms.XRDeviceId = XRDeviceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsTracked != nullptr)
		*bIsTracked = Parms.bIsTracked;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (bHasPositionalTracking != nullptr)
		*bHasPositionalTracking = Parms.bHasPositionalTracking;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetCurrentInteractionProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EControllerHand         Hand                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InteractionProfile                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(enum class EControllerHand Hand, class FString* InteractionProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetCurrentInteractionProfile");

	Params::UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Params Parms{};

	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime2
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MotionSource                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   Time                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTimeWasUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProvidedLinearVelocity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProvidedAngularVelocity                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bProvidedLinearAcceleration                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearAcceleration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime2(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FRotator* AngularVelocity, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime2");

	Params::UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime2_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.ControllerIndex = ControllerIndex;
	Parms.MotionSource = MotionSource;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTimeWasUsed != nullptr)
		*bTimeWasUsed = Parms.bTimeWasUsed;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (bProvidedLinearVelocity != nullptr)
		*bProvidedLinearVelocity = Parms.bProvidedLinearVelocity;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (bProvidedAngularVelocity != nullptr)
		*bProvidedAngularVelocity = Parms.bProvidedAngularVelocity;

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (bProvidedLinearAcceleration != nullptr)
		*bProvidedLinearAcceleration = Parms.bProvidedLinearAcceleration;

	if (LinearAcceleration != nullptr)
		*LinearAcceleration = std::move(Parms.LinearAcceleration);

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MotionSource                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   Time                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTimeWasUsed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProvidedLinearVelocity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProvidedAngularVelocity                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     AngularVelocityAsAxisAndLength                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProvidedLinearAcceleration                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearAcceleration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(class UObject* WorldContext, int32 ControllerIndex, class FName MotionSource, const struct FTimespan& Time, bool* bTimeWasUsed, struct FRotator* Orientation, struct FVector* Position, bool* bProvidedLinearVelocity, struct FVector* LinearVelocity, bool* bProvidedAngularVelocity, struct FVector* AngularVelocityAsAxisAndLength, bool* bProvidedLinearAcceleration, struct FVector* LinearAcceleration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");

	Params::UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.ControllerIndex = ControllerIndex;
	Parms.MotionSource = MotionSource;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bTimeWasUsed != nullptr)
		*bTimeWasUsed = Parms.bTimeWasUsed;

	if (Orientation != nullptr)
		*Orientation = std::move(Parms.Orientation);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (bProvidedLinearVelocity != nullptr)
		*bProvidedLinearVelocity = Parms.bProvidedLinearVelocity;

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

	if (bProvidedAngularVelocity != nullptr)
		*bProvidedAngularVelocity = Parms.bProvidedAngularVelocity;

	if (AngularVelocityAsAxisAndLength != nullptr)
		*AngularVelocityAsAxisAndLength = std::move(Parms.AngularVelocityAsAxisAndLength);

	if (bProvidedLinearAcceleration != nullptr)
		*bProvidedLinearAcceleration = Parms.bProvidedLinearAcceleration;

	if (LinearAcceleration != nullptr)
		*LinearAcceleration = std::move(Parms.LinearAcceleration);

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        SystemId                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EXRTrackedDeviceType    DeviceType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FXRDeviceId>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(class FName SystemId, enum class EXRTrackedDeviceType DeviceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");

	Params::UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Params Parms{};

	Parms.SystemId = SystemId;
	Parms.DeviceType = DeviceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");

	Params::UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.EnableHMD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");

	Params::UHeadMountedDisplayFunctionLibrary_EnableHMD_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "DisconnectRemoteXRDevice");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      IpAddress                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitRate                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EXRDeviceConnectionResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EXRDeviceConnectionResult UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(const class FString& IpAddress, int32 BitRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConnectRemoteXRDevice");

	Params::UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Params Parms{};

	Parms.IpAddress = IpAddress;
	Parms.BitRate = BitRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.ConfigureGestures
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FXRGestureConfig            GestureConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(struct FXRGestureConfig& GestureConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");

	Params::UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Params Parms{};

	Parms.GestureConfig = GestureConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionPath                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(class FName& ActionPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "ClearXRTimedInputActionDelegate");

	Params::UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Params Parms{};

	Parms.ActionPath = ActionPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  ExternalTrackingTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(struct FTransform& ExternalTrackingTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "CalibrateExternalTrackingToHMD");

	Params::UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Params Parms{};

	Parms.ExternalTrackingTransform = ExternalTrackingTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.HeadMountedDisplayFunctionLibrary.BreakKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        InKey                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InteractionProfile                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MotionSource                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Indentifier                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Component                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHeadMountedDisplayFunctionLibrary::BreakKey(const struct FKey& InKey, class FString* InteractionProfile, enum class EControllerHand* Hand, class FName* MotionSource, class FString* Indentifier, class FString* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadMountedDisplayFunctionLibrary", "BreakKey");

	Params::UHeadMountedDisplayFunctionLibrary_BreakKey_Params Parms{};

	Parms.InKey = InKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InteractionProfile != nullptr)
		*InteractionProfile = std::move(Parms.InteractionProfile);

	if (Hand != nullptr)
		*Hand = Parms.Hand;

	if (MotionSource != nullptr)
		*MotionSource = Parms.MotionSource;

	if (Indentifier != nullptr)
		*Indentifier = std::move(Parms.Indentifier);

	if (Component != nullptr)
		*Component = std::move(Parms.Component);

}


// Class XRBase.MotionTrackedDeviceFunctionLibrary
// (None)

class UClass* UMotionTrackedDeviceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionTrackedDeviceFunctionLibrary");

	return Clss;
}


// MotionTrackedDeviceFunctionLibrary XRBase.Default__MotionTrackedDeviceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionTrackedDeviceFunctionLibrary* UMotionTrackedDeviceFunctionLibrary::GetDefaultObj()
{
	static class UMotionTrackedDeviceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionTrackedDeviceFunctionLibrary*>(UMotionTrackedDeviceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");

	Params::UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SourceName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32 PlayerIndex, enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SourceName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");

	Params::UMotionTrackedDeviceFunctionLibrary_IsMotionSourceTracking_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMotionTrackingEnabledControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMaximumMotionTrackedControllerCount");

	Params::UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetActiveTrackingSystemName");

	Params::UMotionTrackedDeviceFunctionLibrary_GetActiveTrackingSystemName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnumerateMotionSources");

	Params::UMotionTrackedDeviceFunctionLibrary_EnumerateMotionSources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SourceName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SourceName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32 PlayerIndex, class FName SourceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfSource_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.SourceName = SourceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EControllerHand         Hand                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32 PlayerIndex, enum class EControllerHand Hand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.Hand = Hand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params Parms{};

	Parms.PlayerIndex = PlayerIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfAllControllers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMotionControllerComponent*  MotionControllerComponent                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingForComponent");

	Params::UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params Parms{};

	Parms.MotionControllerComponent = MotionControllerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class XRBase.VRNotificationsComponent
// (None)

class UClass* UVRNotificationsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VRNotificationsComponent");

	return Clss;
}


// VRNotificationsComponent XRBase.Default__VRNotificationsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVRNotificationsComponent* UVRNotificationsComponent::GetDefaultObj()
{
	static class UVRNotificationsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVRNotificationsComponent*>(UVRNotificationsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class XRBase.XRAssetFunctionLibrary
// (None)

class UClass* UXRAssetFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRAssetFunctionLibrary");

	return Clss;
}


// XRAssetFunctionLibrary XRBase.Default__XRAssetFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRAssetFunctionLibrary* UXRAssetFunctionLibrary::GetDefaultObj()
{
	static class UXRAssetFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRAssetFunctionLibrary*>(UXRAssetFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SystemName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DeviceName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bManualAttachment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  RelativeTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId                 XRDeviceId                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddNamedDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	return Parms.ReturnValue;

}


// Function XRBase.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bManualAttachment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  RelativeTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");

	Params::UXRAssetFunctionLibrary_AddDeviceVisualizationComponentBlocking_Params Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = XRDeviceId;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class XRBase.AsyncTask_LoadXRDeviceVisComponent
// (None)

class UClass* UAsyncTask_LoadXRDeviceVisComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTask_LoadXRDeviceVisComponent");

	return Clss;
}


// AsyncTask_LoadXRDeviceVisComponent XRBase.Default__AsyncTask_LoadXRDeviceVisComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::GetDefaultObj()
{
	static class UAsyncTask_LoadXRDeviceVisComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTask_LoadXRDeviceVisComponent*>(UAsyncTask_LoadXRDeviceVisComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SystemName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DeviceName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bManualAttachment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  RelativeTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId                 XRDeviceId                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         NewComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(class AActor* Target, class FName SystemName, class FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddNamedDeviceVisualizationComponentAsync_Params Parms{};

	Parms.Target = Target;
	Parms.SystemName = SystemName;
	Parms.DeviceName = DeviceName;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (XRDeviceId != nullptr)
		*XRDeviceId = std::move(Parms.XRDeviceId);

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

	return Parms.ReturnValue;

}


// Function XRBase.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FXRDeviceId                 XRDeviceId                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bManualAttachment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  RelativeTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         NewComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTask_LoadXRDeviceVisComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(class AActor* Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, class UPrimitiveComponent** NewComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");

	Params::UAsyncTask_LoadXRDeviceVisComponent_AddDeviceVisualizationComponentAsync_Params Parms{};

	Parms.Target = Target;
	Parms.XRDeviceId = XRDeviceId;
	Parms.bManualAttachment = bManualAttachment;
	Parms.RelativeTransform = RelativeTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewComponent != nullptr)
		*NewComponent = Parms.NewComponent;

	return Parms.ReturnValue;

}


// Class XRBase.XRDeviceVisualizationComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UXRDeviceVisualizationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRDeviceVisualizationComponent");

	return Clss;
}


// XRDeviceVisualizationComponent XRBase.Default__XRDeviceVisualizationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRDeviceVisualizationComponent* UXRDeviceVisualizationComponent::GetDefaultObj()
{
	static class UXRDeviceVisualizationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRDeviceVisualizationComponent*>(UXRDeviceVisualizationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.XRDeviceVisualizationComponent.SetIsVisualizationActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewVisualizationState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRDeviceVisualizationComponent::SetIsVisualizationActive(bool bNewVisualizationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetIsVisualizationActive");

	Params::UXRDeviceVisualizationComponent_SetIsVisualizationActive_Params Parms{};

	Parms.bNewVisualizationState = bNewVisualizationState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRDeviceVisualizationComponent.SetIsRenderingActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRenderingIsActive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRDeviceVisualizationComponent::SetIsRenderingActive(bool bRenderingIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetIsRenderingActive");

	Params::UXRDeviceVisualizationComponent_SetIsRenderingActive_Params Parms{};

	Parms.bRenderingIsActive = bRenderingIsActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRDeviceVisualizationComponent.SetDisplayModelSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        NewDisplayModelSource                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRDeviceVisualizationComponent::SetDisplayModelSource(class FName NewDisplayModelSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetDisplayModelSource");

	Params::UXRDeviceVisualizationComponent_SetDisplayModelSource_Params Parms{};

	Parms.NewDisplayModelSource = NewDisplayModelSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRDeviceVisualizationComponent.SetCustomDisplayMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 NewDisplayMesh                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRDeviceVisualizationComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRDeviceVisualizationComponent", "SetCustomDisplayMesh");

	Params::UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Params Parms{};

	Parms.NewDisplayMesh = NewDisplayMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class XRBase.XRLoadingScreenFunctionLibrary
// (None)

class UClass* UXRLoadingScreenFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XRLoadingScreenFunctionLibrary");

	return Clss;
}


// XRLoadingScreenFunctionLibrary XRBase.Default__XRLoadingScreenFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UXRLoadingScreenFunctionLibrary* UXRLoadingScreenFunctionLibrary::GetDefaultObj()
{
	static class UXRLoadingScreenFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UXRLoadingScreenFunctionLibrary*>(UXRLoadingScreenFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function XRBase.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "ShowLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRLoadingScreenFunctionLibrary.SetLoadingScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowLoadingMovie                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowOnSet                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");

	Params::UXRLoadingScreenFunctionLibrary_SetLoadingScreen_Params Parms{};

	Parms.Texture = Texture;
	Parms.Scale = Scale;
	Parms.Offset = Offset;
	Parms.bShowLoadingMovie = bShowLoadingMovie;
	Parms.bShowOnSet = bShowOnSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRLoadingScreenFunctionLibrary.HideLoadingScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "HideLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "ClearLoadingScreenSplashes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function XRBase.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DeltaRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bClearBeforeAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(class UTexture* Texture, const struct FVector& Translation, const struct FRotator& Rotation, const struct FVector2D& Size, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");

	Params::UXRLoadingScreenFunctionLibrary_AddLoadingScreenSplash_Params Parms{};

	Parms.Texture = Texture;
	Parms.Translation = Translation;
	Parms.Rotation = Rotation;
	Parms.Size = Size;
	Parms.DeltaRotation = DeltaRotation;
	Parms.bClearBeforeAdd = bClearBeforeAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


