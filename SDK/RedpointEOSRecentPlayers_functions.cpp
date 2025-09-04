#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSRecentPlayers.RecentPlayersWorldSubsystem
// (None)

class UClass* URecentPlayersWorldSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RecentPlayersWorldSubsystem");

	return Clss;
}


// RecentPlayersWorldSubsystem RedpointEOSRecentPlayers.Default__RecentPlayersWorldSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class URecentPlayersWorldSubsystem* URecentPlayersWorldSubsystem::GetDefaultObj()
{
	static class URecentPlayersWorldSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<URecentPlayersWorldSubsystem*>(URecentPlayersWorldSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


