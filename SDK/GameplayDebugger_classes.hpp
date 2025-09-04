#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x358 - 0x298)
// Class GameplayDebugger.GameplayDebuggerCategoryReplicator
class AGameplayDebuggerCategoryReplicator : public AActor
{
public:
	class APlayerController*                     OwnerPC;                                           // 0x298(0x8)(Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsEnabled;                                        // 0x2A0(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E8E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayDebuggerNetPack              ReplicatedData;                                    // 0x2A8(0x18)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	struct FGameplayDebuggerDebugActor           DebugActor;                                        // 0x2C0(0x14)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayDebuggerVisLogSync           VisLogSync;                                        // 0x2D8(0x10)(Net, Protected, NativeAccessSpecifierProtected)
	class UGameplayDebuggerRenderingComponent*   RenderingComp;                                     // 0x2E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E98[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayDebuggerCategoryReplicator* GetDefaultObj();

	void ServerSetViewPoint(struct FVector& InViewLocation, struct FVector& InViewDirection);
	void ServerSetEnabled(bool bEnable);
	void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);
	void ServerSetCategoryEnabled(int32 CategoryId, bool bEnable);
	void ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId);
	void ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId);
	void ServerResetViewPoint();
	void OnRep_ReplicatedData();
	void ClientDataPackPacket(struct FGameplayDebuggerDataPackRPCParams& Params);
};

// 0x230 (0x258 - 0x28)
// Class GameplayDebugger.GameplayDebuggerConfig
class UGameplayDebuggerConfig : public UObject
{
public:
	struct FKey                                  ActivationKey;                                     // 0x28(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategoryRowNextKey;                                // 0x40(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategoryRowPrevKey;                                // 0x58(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot0;                                     // 0x70(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot1;                                     // 0x88(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot2;                                     // 0xA0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot3;                                     // 0xB8(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot4;                                     // 0xD0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot5;                                     // 0xE8(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot6;                                     // 0x100(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot7;                                     // 0x118(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot8;                                     // 0x130(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CategorySlot9;                                     // 0x148(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingLeft;                            // 0x160(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingRight;                           // 0x164(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingTop;                             // 0x168(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugCanvasPaddingBottom;                          // 0x16C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugCanvasEnableTextShadow;                      // 0x170(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerCategoryConfig> Categories;                                        // 0x178(0x10)(Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayDebuggerExtensionConfig> Extensions;                                        // 0x188(0x10)(Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB9[0xC0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerConfig* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GameplayDebugger.GameplayDebuggerUserSettings
class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
public:
	uint8                                        bEnableGameplayDebuggerInEditor : 1;               // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_62 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxViewDistance;                                   // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxViewAngle;                                      // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayDebuggerUserSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class GameplayDebugger.GameplayDebuggerLocalController
class UGameplayDebuggerLocalController : public UObject
{
public:
	class AGameplayDebuggerCategoryReplicator*   CachedReplicator;                                  // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AGameplayDebuggerPlayerManager*        CachedPlayerManager;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                DebugActorCandidate;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFont*                                 HUDFont;                                           // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F07[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerLocalController* GetDefaultObj();

};

// 0x30 (0x2C8 - 0x298)
// Class GameplayDebugger.GameplayDebuggerPlayerManager
class AGameplayDebuggerPlayerManager : public AActor
{
public:
	uint8                                        Pad_F27[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerPlayerData>   PlayerData;                                        // 0x2A0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;                              // 0x2B0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_F2C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayDebuggerPlayerManager* GetDefaultObj();

};

// 0x60 (0x620 - 0x5C0)
// Class GameplayDebugger.GameplayDebuggerRenderingComponent
class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_F38[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayDebuggerRenderingComponent* GetDefaultObj();

};

}


