#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Lobby.GM_Lobby_C
// (Actor)

class UClass* AGM_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Lobby_C");

	return Clss;
}


// GM_Lobby_C GM_Lobby.Default__GM_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Lobby_C* AGM_Lobby_C::GetDefaultObj()
{
	static class AGM_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Lobby_C*>(AGM_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


