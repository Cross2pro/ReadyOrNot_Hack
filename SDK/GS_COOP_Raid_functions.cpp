#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_COOP_Raid.GS_COOP_Raid_C
// (Actor)

class UClass* AGS_COOP_Raid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_COOP_Raid_C");

	return Clss;
}


// GS_COOP_Raid_C GS_COOP_Raid.Default__GS_COOP_Raid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_COOP_Raid_C* AGS_COOP_Raid_C::GetDefaultObj()
{
	static class AGS_COOP_Raid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_COOP_Raid_C*>(AGS_COOP_Raid_C::StaticClass()->DefaultObject);

	return Default;
}

}


