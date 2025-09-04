#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Lobby.GS_Lobby_C
// (Actor)

class UClass* AGS_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Lobby_C");

	return Clss;
}


// GS_Lobby_C GS_Lobby.Default__GS_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Lobby_C* AGS_Lobby_C::GetDefaultObj()
{
	static class AGS_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Lobby_C*>(AGS_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


