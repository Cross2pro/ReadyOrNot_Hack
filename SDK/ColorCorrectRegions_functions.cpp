#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ColorCorrectRegions.ColorCorrectRegion
// (Actor)

class UClass* AColorCorrectRegion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectRegion");

	return Clss;
}


// ColorCorrectRegion ColorCorrectRegions.Default__ColorCorrectRegion
// (Public, ClassDefaultObject, ArchetypeObject)

class AColorCorrectRegion* AColorCorrectRegion::GetDefaultObj()
{
	static class AColorCorrectRegion* Default = nullptr;

	if (!Default)
		Default = static_cast<AColorCorrectRegion*>(AColorCorrectRegion::StaticClass()->DefaultObject);

	return Default;
}


// Class ColorCorrectRegions.ColorCorrectionRegion
// (Actor)

class UClass* AColorCorrectionRegion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectionRegion");

	return Clss;
}


// ColorCorrectionRegion ColorCorrectRegions.Default__ColorCorrectionRegion
// (Public, ClassDefaultObject, ArchetypeObject)

class AColorCorrectionRegion* AColorCorrectionRegion::GetDefaultObj()
{
	static class AColorCorrectionRegion* Default = nullptr;

	if (!Default)
		Default = static_cast<AColorCorrectionRegion*>(AColorCorrectionRegion::StaticClass()->DefaultObject);

	return Default;
}


// Class ColorCorrectRegions.ColorCorrectionInvisibleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UColorCorrectionInvisibleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectionInvisibleComponent");

	return Clss;
}


// ColorCorrectionInvisibleComponent ColorCorrectRegions.Default__ColorCorrectionInvisibleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UColorCorrectionInvisibleComponent* UColorCorrectionInvisibleComponent::GetDefaultObj()
{
	static class UColorCorrectionInvisibleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorCorrectionInvisibleComponent*>(UColorCorrectionInvisibleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ColorCorrectRegions.ColorCorrectRegionsSubsystem
// (None)

class UClass* UColorCorrectRegionsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectRegionsSubsystem");

	return Clss;
}


// ColorCorrectRegionsSubsystem ColorCorrectRegions.Default__ColorCorrectRegionsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UColorCorrectRegionsSubsystem* UColorCorrectRegionsSubsystem::GetDefaultObj()
{
	static class UColorCorrectRegionsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorCorrectRegionsSubsystem*>(UColorCorrectRegionsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorCorrectRegions.ColorCorrectRegionsSubsystem.RefreshStenciIdAssignmentForAllCCR
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UColorCorrectRegionsSubsystem::RefreshStenciIdAssignmentForAllCCR()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectRegionsSubsystem", "RefreshStenciIdAssignmentForAllCCR");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ColorCorrectRegions.ColorCorrectionWindow
// (Actor)

class UClass* AColorCorrectionWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectionWindow");

	return Clss;
}


// ColorCorrectionWindow ColorCorrectRegions.Default__ColorCorrectionWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class AColorCorrectionWindow* AColorCorrectionWindow::GetDefaultObj()
{
	static class AColorCorrectionWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<AColorCorrectionWindow*>(AColorCorrectionWindow::StaticClass()->DefaultObject);

	return Default;
}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetYaw
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetYaw(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetYaw");

	Params::AColorCorrectionWindow_SetYaw_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetSpin
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetSpin(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetSpin");

	Params::AColorCorrectionWindow_SetSpin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetScale
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InScale                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetScale(struct FVector2D& InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetScale");

	Params::AColorCorrectionWindow_SetScale_Params Parms{};

	Parms.InScale = InScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetRadialOffset
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetRadialOffset(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetRadialOffset");

	Params::AColorCorrectionWindow_SetRadialOffset_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetPositionalParams
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDisplayClusterPositionalParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetPositionalParams(struct FDisplayClusterPositionalParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetPositionalParams");

	Params::AColorCorrectionWindow_SetPositionalParams_Params Parms{};

	Parms.InParams = InParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetPitch
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetPitch(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetPitch");

	Params::AColorCorrectionWindow_SetPitch_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetOrigin
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InOrigin                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetOrigin(struct FTransform& InOrigin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetOrigin");

	Params::AColorCorrectionWindow_SetOrigin_Params Parms{};

	Parms.InOrigin = InOrigin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetLongitude
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetLongitude(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetLongitude");

	Params::AColorCorrectionWindow_SetLongitude_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetLatitude
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetLatitude(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetLatitude");

	Params::AColorCorrectionWindow_SetLatitude_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.SetDistanceFromCenter
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AColorCorrectionWindow::SetDistanceFromCenter(double InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "SetDistanceFromCenter");

	Params::AColorCorrectionWindow_SetDistanceFromCenter_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetYaw
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetYaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetYaw");

	Params::AColorCorrectionWindow_GetYaw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetSpin
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetSpin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetSpin");

	Params::AColorCorrectionWindow_GetSpin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetScale
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D AColorCorrectionWindow::GetScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetScale");

	Params::AColorCorrectionWindow_GetScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetRadialOffset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetRadialOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetRadialOffset");

	Params::AColorCorrectionWindow_GetRadialOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetPositionalParams
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDisplayClusterPositionalParamsReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDisplayClusterPositionalParams AColorCorrectionWindow::GetPositionalParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetPositionalParams");

	Params::AColorCorrectionWindow_GetPositionalParams_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetPitch
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetPitch");

	Params::AColorCorrectionWindow_GetPitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetOrigin
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform AColorCorrectionWindow::GetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetOrigin");

	Params::AColorCorrectionWindow_GetOrigin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetLongitude
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetLongitude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetLongitude");

	Params::AColorCorrectionWindow_GetLongitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetLatitude
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetLatitude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetLatitude");

	Params::AColorCorrectionWindow_GetLatitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ColorCorrectRegions.ColorCorrectionWindow.GetDistanceFromCenter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double AColorCorrectionWindow::GetDistanceFromCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorCorrectionWindow", "GetDistanceFromCenter");

	Params::AColorCorrectionWindow_GetDistanceFromCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ColorCorrectRegions.ColorCorrectWindow
// (Actor)

class UClass* AColorCorrectWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorCorrectWindow");

	return Clss;
}


// ColorCorrectWindow ColorCorrectRegions.Default__ColorCorrectWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class AColorCorrectWindow* AColorCorrectWindow::GetDefaultObj()
{
	static class AColorCorrectWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<AColorCorrectWindow*>(AColorCorrectWindow::StaticClass()->DefaultObject);

	return Default;
}

}


