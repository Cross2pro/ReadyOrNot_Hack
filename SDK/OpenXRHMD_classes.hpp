#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class OpenXRHMD.OpenXRHMDSettings
class UOpenXRHMDSettings : public UObject
{
public:
	bool                                         bIsFBFoveationEnabled;                             // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenXRHMDSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class OpenXRHMD.OpenXRBlueprintFunctionLibrary
class UOpenXRBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenXRBlueprintFunctionLibrary* GetDefaultObj();

	void SetEnvironmentBlendMode(int32 NewBlendMode);
};

}


