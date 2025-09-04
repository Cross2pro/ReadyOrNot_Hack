#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OpenXRInput.OpenXRInputFunctionLibrary
class UOpenXRInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenXRInputFunctionLibrary* GetDefaultObj();

	void EndXRSession();
	bool BeginXRSession(class UPlayerMappableInputConfig* InputConfig);
};

// 0x20 (0x48 - 0x28)
// Class OpenXRInput.OpenXRInputSettings
class UOpenXRInputSettings : public UObject
{
public:
	struct FSoftObjectPath                       MappableInputConfig;                               // 0x28(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOpenXRInputSettings* GetDefaultObj();

};

}


