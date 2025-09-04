#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DisplayClusterLightCardExtender.DisplayClusterStageActorTemplate
// (None)

class UClass* UDisplayClusterStageActorTemplate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayClusterStageActorTemplate");

	return Clss;
}


// DisplayClusterStageActorTemplate DisplayClusterLightCardExtender.Default__DisplayClusterStageActorTemplate
// (Public, ClassDefaultObject, ArchetypeObject)

class UDisplayClusterStageActorTemplate* UDisplayClusterStageActorTemplate::GetDefaultObj()
{
	static class UDisplayClusterStageActorTemplate* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayClusterStageActorTemplate*>(UDisplayClusterStageActorTemplate::StaticClass()->DefaultObject);

	return Default;
}


// Class DisplayClusterLightCardExtender.DisplayClusterStageActor
// (None)

class UClass* IDisplayClusterStageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayClusterStageActor");

	return Clss;
}


// DisplayClusterStageActor DisplayClusterLightCardExtender.Default__DisplayClusterStageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class IDisplayClusterStageActor* IDisplayClusterStageActor::GetDefaultObj()
{
	static class IDisplayClusterStageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<IDisplayClusterStageActor*>(IDisplayClusterStageActor::StaticClass()->DefaultObject);

	return Default;
}

}


