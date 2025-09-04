#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E0 (0x7A0 - 0x2C0)
// Class RedpointEOSAuth.EOSDefaultUserInterface_EnterDevicePinCode
class UEOSDefaultUserInterface_EnterDevicePinCode : public UUserWidget
{
public:
	uint8                                        Pad_DF1[0x420];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        TitleFont;                                         // 0x6E0(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        RegularFont;                                       // 0x738(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEOSUserInterface_EnterDevicePinCode_Context* Context;                                           // 0x790(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E04[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSDefaultUserInterface_EnterDevicePinCode* GetDefaultObj();

};

// 0x4C0 (0x780 - 0x2C0)
// Class RedpointEOSAuth.EOSDefaultUserInterface_SignInOrCreateAccount
class UEOSDefaultUserInterface_SignInOrCreateAccount : public UUserWidget
{
public:
	uint8                                        Pad_E09[0x400];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        TitleFont;                                         // 0x6C0(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        RegularFont;                                       // 0x718(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEOSUserInterface_SignInOrCreateAccount_Context* Context;                                           // 0x770(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSDefaultUserInterface_SignInOrCreateAccount* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode
class IEOSUserInterface_EnterDevicePinCode : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_EnterDevicePinCode* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, const class FString& VerificationUrl, const class FString& PinCode);
};

// 0x10 (0x38 - 0x28)
// Class RedpointEOSAuth.EOSUserInterface_EnterDevicePinCode_Context
class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{
public:
	uint8                                        Pad_E8F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSUserInterface_EnterDevicePinCode_Context* GetDefaultObj();

	void CancelLogin();
};

// 0x0 (0x28 - 0x28)
// Class RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount
class IEOSUserInterface_SignInOrCreateAccount : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEOSUserInterface_SignInOrCreateAccount* GetDefaultObj();

	void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);
};

// 0x10 (0x38 - 0x28)
// Class RedpointEOSAuth.EOSUserInterface_SignInOrCreateAccount_Context
class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{
public:
	uint8                                        Pad_EF2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSUserInterface_SignInOrCreateAccount_Context* GetDefaultObj();

	void SelectChoice(enum class EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
};

}


