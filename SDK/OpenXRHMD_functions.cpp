#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenXRHMD.OpenXRHMDSettings
// (None)

class UClass* UOpenXRHMDSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenXRHMDSettings");

	return Clss;
}


// OpenXRHMDSettings OpenXRHMD.Default__OpenXRHMDSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenXRHMDSettings* UOpenXRHMDSettings::GetDefaultObj()
{
	static class UOpenXRHMDSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenXRHMDSettings*>(UOpenXRHMDSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenXRHMD.OpenXRBlueprintFunctionLibrary
// (None)

class UClass* UOpenXRBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenXRBlueprintFunctionLibrary");

	return Clss;
}


// OpenXRBlueprintFunctionLibrary OpenXRHMD.Default__OpenXRBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenXRBlueprintFunctionLibrary* UOpenXRBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UOpenXRBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenXRBlueprintFunctionLibrary*>(UOpenXRBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenXRHMD.OpenXRBlueprintFunctionLibrary.SetEnvironmentBlendMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              NewBlendMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenXRBlueprintFunctionLibrary::SetEnvironmentBlendMode(int32 NewBlendMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenXRBlueprintFunctionLibrary", "SetEnvironmentBlendMode");

	Params::UOpenXRBlueprintFunctionLibrary_SetEnvironmentBlendMode_Params Parms{};

	Parms.NewBlendMode = NewBlendMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


