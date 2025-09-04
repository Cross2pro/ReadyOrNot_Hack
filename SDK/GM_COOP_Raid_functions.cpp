#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_COOP_Raid.GM_COOP_Raid_C
// (Actor)

class UClass* AGM_COOP_Raid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_COOP_Raid_C");

	return Clss;
}


// GM_COOP_Raid_C GM_COOP_Raid.Default__GM_COOP_Raid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_COOP_Raid_C* AGM_COOP_Raid_C::GetDefaultObj()
{
	static class AGM_COOP_Raid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_COOP_Raid_C*>(AGM_COOP_Raid_C::StaticClass()->DefaultObject);

	return Default;
}

}


