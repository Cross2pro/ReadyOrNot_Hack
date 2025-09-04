#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StandinActor.StandInMeshActor
// (Actor)

class UClass* AStandInMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandInMeshActor");

	return Clss;
}


// StandInMeshActor StandinActor.Default__StandInMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AStandInMeshActor* AStandInMeshActor::GetDefaultObj()
{
	static class AStandInMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AStandInMeshActor*>(AStandInMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class StandinActor.StandinProxyContainer
// (None)

class UClass* UStandinProxyContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StandinProxyContainer");

	return Clss;
}


// StandinProxyContainer StandinActor.Default__StandinProxyContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UStandinProxyContainer* UStandinProxyContainer::GetDefaultObj()
{
	static class UStandinProxyContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UStandinProxyContainer*>(UStandinProxyContainer::StaticClass()->DefaultObject);

	return Default;
}

}


