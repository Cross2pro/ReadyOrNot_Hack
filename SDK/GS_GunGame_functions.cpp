#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_GunGame.GS_GunGame_C
// (Actor)

class UClass* AGS_GunGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_GunGame_C");

	return Clss;
}


// GS_GunGame_C GS_GunGame.Default__GS_GunGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_GunGame_C* AGS_GunGame_C::GetDefaultObj()
{
	static class AGS_GunGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_GunGame_C*>(AGS_GunGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


