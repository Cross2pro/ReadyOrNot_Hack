#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenXRInput.OpenXRInputFunctionLibrary
// (None)

class UClass* UOpenXRInputFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenXRInputFunctionLibrary");

	return Clss;
}


// OpenXRInputFunctionLibrary OpenXRInput.Default__OpenXRInputFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenXRInputFunctionLibrary* UOpenXRInputFunctionLibrary::GetDefaultObj()
{
	static class UOpenXRInputFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenXRInputFunctionLibrary*>(UOpenXRInputFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenXRInput.OpenXRInputFunctionLibrary.EndXRSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UOpenXRInputFunctionLibrary::EndXRSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenXRInputFunctionLibrary", "EndXRSession");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenXRInput.OpenXRInputFunctionLibrary.BeginXRSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  InputConfig                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenXRInputFunctionLibrary::BeginXRSession(class UPlayerMappableInputConfig* InputConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenXRInputFunctionLibrary", "BeginXRSession");

	Params::UOpenXRInputFunctionLibrary_BeginXRSession_Params Parms{};

	Parms.InputConfig = InputConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OpenXRInput.OpenXRInputSettings
// (None)

class UClass* UOpenXRInputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenXRInputSettings");

	return Clss;
}


// OpenXRInputSettings OpenXRInput.Default__OpenXRInputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenXRInputSettings* UOpenXRInputSettings::GetDefaultObj()
{
	static class UOpenXRInputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenXRInputSettings*>(UOpenXRInputSettings::StaticClass()->DefaultObject);

	return Default;
}

}


