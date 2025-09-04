#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_KingOfTheHill.GM_KingOfTheHill_C
// (Actor)

class UClass* AGM_KingOfTheHill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_KingOfTheHill_C");

	return Clss;
}


// GM_KingOfTheHill_C GM_KingOfTheHill.Default__GM_KingOfTheHill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_KingOfTheHill_C* AGM_KingOfTheHill_C::GetDefaultObj()
{
	static class AGM_KingOfTheHill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_KingOfTheHill_C*>(AGM_KingOfTheHill_C::StaticClass()->DefaultObject);

	return Default;
}

}


