#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_COOP_ActiveShooter.GM_COOP_ActiveShooter_C
// (Actor)

class UClass* AGM_COOP_ActiveShooter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_COOP_ActiveShooter_C");

	return Clss;
}


// GM_COOP_ActiveShooter_C GM_COOP_ActiveShooter.Default__GM_COOP_ActiveShooter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_COOP_ActiveShooter_C* AGM_COOP_ActiveShooter_C::GetDefaultObj()
{
	static class AGM_COOP_ActiveShooter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_COOP_ActiveShooter_C*>(AGM_COOP_ActiveShooter_C::StaticClass()->DefaultObject);

	return Default;
}

}


