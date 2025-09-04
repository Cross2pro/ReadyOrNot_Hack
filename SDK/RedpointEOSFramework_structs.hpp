#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERedpointEOSPartyAttributeType : uint8
{
	String                         = 0,
	Int64                          = 1,
	Double                         = 2,
	Bool                           = 3,
	ERedpointEOSPartyAttributeType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct RedpointEOSFramework.RedpointEOSPartyAttributeValue
struct FRedpointEOSPartyAttributeValue
{
public:
	uint8                                        Pad_13C4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct RedpointEOSFramework.RedpointEOSPartyMemberInfo
struct FRedpointEOSPartyMemberInfo
{
public:
	bool                                         bHasPartyMember;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           PlayerUserAttributes;                              // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<class FString, struct FRedpointEOSPartyAttributeValue> PartyMemberAttributes;                             // 0x98(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}


