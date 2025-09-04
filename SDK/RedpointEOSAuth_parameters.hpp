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

// 0x28 (0x28 - 0x0)
// Function RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode.SetupUserInterface
struct IEOSUserInterface_EnterDevicePinCode_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_EnterDevicePinCode_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VerificationUrl;                                   // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PinCode;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount.SetupUserInterface
struct IEOSUserInterface_SignInOrCreateAccount_SetupUserInterface_Params
{
public:
	class UEOSUserInterface_SignInOrCreateAccount_Context* Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context.SelectChoice
struct UEOSUserInterface_SignInOrCreateAccount_Context_SelectChoice_Params
{
public:
	enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


