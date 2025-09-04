#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x60 - 0x38)
// Class FMODStudioNiagara.FMODNiagaraEventPlayer
class UFMODNiagaraEventPlayer : public UNiagaraDataInterface
{
public:
	class UFMODEvent*                            EventToPlay;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ParameterNames;                                    // 0x40(0x10)(Edit, ZeroConstructor, EditConst, NoClear, NativeAccessSpecifierPublic)
	bool                                         bLimitPlaysPerTick;                                // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPlaysPerTick;                                   // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFMODNiagaraEventPlayer* GetDefaultObj();

};

}


