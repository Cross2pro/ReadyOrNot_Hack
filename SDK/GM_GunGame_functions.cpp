#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_GunGame.GM_GunGame_C
// (Actor)

class UClass* AGM_GunGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_GunGame_C");

	return Clss;
}


// GM_GunGame_C GM_GunGame.Default__GM_GunGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_GunGame_C* AGM_GunGame_C::GetDefaultObj()
{
	static class AGM_GunGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_GunGame_C*>(AGM_GunGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


