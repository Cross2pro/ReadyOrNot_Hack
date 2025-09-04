#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DisplayClusterLightCardExtender.DisplayClusterStageActorTemplate
class UDisplayClusterStageActorTemplate : public UObject
{
public:
	bool                                         bIsFavorite;                                       // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplayClusterStageActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DisplayClusterLightCardExtender.DisplayClusterStageActor
class IDisplayClusterStageActor : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDisplayClusterStageActor* GetDefaultObj();

};

}


