#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// Class StandinActor.StandInMeshActor
class AStandInMeshActor : public AActor
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AStandInMeshActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class StandinActor.StandinProxyContainer
class UStandinProxyContainer : public UObject
{
public:
	TArray<struct FStandinProxyEntry>            Standins;                                          // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UStandinProxyContainer* GetDefaultObj();

};

}


