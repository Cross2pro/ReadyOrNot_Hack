#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSAuth.EOSDefaultUserInterface_EnterDevicePinCode
// (None)

class UClass* UEOSDefaultUserInterface_EnterDevicePinCode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSDefaultUserInterface_EnterDevicePinCode");

	return Clss;
}


// EOSDefaultUserInterface_EnterDevicePinCode RedpointEOSAuth.Default__EOSDefaultUserInterface_EnterDevicePinCode
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSDefaultUserInterface_EnterDevicePinCode* UEOSDefaultUserInterface_EnterDevicePinCode::GetDefaultObj()
{
	static class UEOSDefaultUserInterface_EnterDevicePinCode* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSDefaultUserInterface_EnterDevicePinCode*>(UEOSDefaultUserInterface_EnterDevicePinCode::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSAuth.EOSDefaultUserInterface_SignInOrCreateAccount
// (None)

class UClass* UEOSDefaultUserInterface_SignInOrCreateAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSDefaultUserInterface_SignInOrCreateAccount");

	return Clss;
}


// EOSDefaultUserInterface_SignInOrCreateAccount RedpointEOSAuth.Default__EOSDefaultUserInterface_SignInOrCreateAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSDefaultUserInterface_SignInOrCreateAccount* UEOSDefaultUserInterface_SignInOrCreateAccount::GetDefaultObj()
{
	static class UEOSDefaultUserInterface_SignInOrCreateAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSDefaultUserInterface_SignInOrCreateAccount*>(UEOSDefaultUserInterface_SignInOrCreateAccount::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode
// (None)

class UClass* IEOSUserInterface_EnterDevicePinCode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_EnterDevicePinCode");

	return Clss;
}


// EOSUserInterface_EnterDevicePinCode RedpointEOSAuth.Default__EOSUserInterface_EnterDevicePinCode
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_EnterDevicePinCode* IEOSUserInterface_EnterDevicePinCode::GetDefaultObj()
{
	static class IEOSUserInterface_EnterDevicePinCode* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_EnterDevicePinCode*>(IEOSUserInterface_EnterDevicePinCode::StaticClass()->DefaultObject);

	return Default;
}


// Function RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_EnterDevicePinCode_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      VerificationUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PinCode                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEOSUserInterface_EnterDevicePinCode::SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode", "SetupUserInterface");

	Params::IEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params Parms{};

	Parms.Context = Context;
	Parms.VerificationUrl = VerificationUrl;
	Parms.PinCode = PinCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode_Context
// (None)

class UClass* UEOSUserInterface_EnterDevicePinCode_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_EnterDevicePinCode_Context");

	return Clss;
}


// EOSUserInterface_EnterDevicePinCode_Context RedpointEOSAuth.Default__EOSUserInterface_EnterDevicePinCode_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_EnterDevicePinCode_Context* UEOSUserInterface_EnterDevicePinCode_Context::GetDefaultObj()
{
	static class UEOSUserInterface_EnterDevicePinCode_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_EnterDevicePinCode_Context*>(UEOSUserInterface_EnterDevicePinCode_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode_Context.CancelLogin
// (Native, Public, BlueprintCallable)
// Parameters:

void UEOSUserInterface_EnterDevicePinCode_Context::CancelLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_EnterDevicePinCode_Context", "CancelLogin");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount
// (None)

class UClass* IEOSUserInterface_SignInOrCreateAccount::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SignInOrCreateAccount");

	return Clss;
}


// EOSUserInterface_SignInOrCreateAccount RedpointEOSAuth.Default__EOSUserInterface_SignInOrCreateAccount
// (Public, ClassDefaultObject, ArchetypeObject)

class IEOSUserInterface_SignInOrCreateAccount* IEOSUserInterface_SignInOrCreateAccount::GetDefaultObj()
{
	static class IEOSUserInterface_SignInOrCreateAccount* Default = nullptr;

	if (!Default)
		Default = static_cast<IEOSUserInterface_SignInOrCreateAccount*>(IEOSUserInterface_SignInOrCreateAccount::StaticClass()->DefaultObject);

	return Default;
}


// Function RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEOSUserInterface_SignInOrCreateAccount_Context*Context                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEOSUserInterface_SignInOrCreateAccount::SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount", "SetupUserInterface");

	Params::IEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context
// (None)

class UClass* UEOSUserInterface_SignInOrCreateAccount_Context::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSUserInterface_SignInOrCreateAccount_Context");

	return Clss;
}


// EOSUserInterface_SignInOrCreateAccount_Context RedpointEOSAuth.Default__EOSUserInterface_SignInOrCreateAccount_Context
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSUserInterface_SignInOrCreateAccount_Context* UEOSUserInterface_SignInOrCreateAccount_Context::GetDefaultObj()
{
	static class UEOSUserInterface_SignInOrCreateAccount_Context* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSUserInterface_SignInOrCreateAccount_Context*>(UEOSUserInterface_SignInOrCreateAccount_Context::StaticClass()->DefaultObject);

	return Default;
}


// Function RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EEOSUserInterface_SignInOrCreateAccount_ChoiceSelectedChoice                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEOSUserInterface_SignInOrCreateAccount_Context::SelectChoice(enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EOSUserInterface_SignInOrCreateAccount_Context", "SelectChoice");

	Params::UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params Parms{};

	Parms.SelectedChoice = SelectedChoice;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


