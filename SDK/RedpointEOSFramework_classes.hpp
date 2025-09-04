#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2D8 - 0x298)
// Class RedpointEOSFramework.RedpointEOSPartyMember
class ARedpointEOSPartyMember : public AActor
{
public:
	uint8                                        Pad_131E[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PartyMemberSlot;                                   // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARedpointEOSPartyMember* GetDefaultObj();

	void PartyMemberChanged(struct FRedpointEOSPartyMemberInfo& PartyMember);
};

// 0x18 (0x690 - 0x678)
// Class RedpointEOSFramework.RedpointEOSStarterCharacter
class ARedpointEOSStarterCharacter : public ACharacter
{
public:
	class UStaticMeshComponent*                  Sphere;                                            // 0x678(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraComponent*                      Camera;                                            // 0x680(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1360[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARedpointEOSStarterCharacter* GetDefaultObj();

};

// 0x0 (0x338 - 0x338)
// Class RedpointEOSFramework.RedpointEOSStarterGameMode
class ARedpointEOSStarterGameMode : public AGameModeBase
{
public:

	static class UClass* StaticClass();
	static class ARedpointEOSStarterGameMode* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class RedpointEOSFramework.RedpointEOSStarterInputMappingContext
class URedpointEOSStarterInputMappingContext : public UInputMappingContext
{
public:

	static class UClass* StaticClass();
	static class URedpointEOSStarterInputMappingContext* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class RedpointEOSFramework.RedpointEOSStarterJumpAction
class URedpointEOSStarterJumpAction : public UInputAction
{
public:

	static class UClass* StaticClass();
	static class URedpointEOSStarterJumpAction* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class RedpointEOSFramework.RedpointEOSStarterMoveAction
class URedpointEOSStarterMoveAction : public UInputAction
{
public:

	static class UClass* StaticClass();
	static class URedpointEOSStarterMoveAction* GetDefaultObj();

};

// 0x80 (0x8D8 - 0x858)
// Class RedpointEOSFramework.RedpointEOSStarterPlayerController
class ARedpointEOSStarterPlayerController : public APlayerController
{
public:
	TSoftObjectPtr<class UInputAction>           MoveAction;                                        // 0x858(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UInputAction>           JumpAction;                                        // 0x880(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x8A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipInputMappingContext;                          // 0x8D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARedpointEOSStarterPlayerController* GetDefaultObj();

};

}


