#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_TugOfWar.GM_TugOfWar_C
// (Actor)

class UClass* AGM_TugOfWar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_TugOfWar_C");

	return Clss;
}


// GM_TugOfWar_C GM_TugOfWar.Default__GM_TugOfWar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_TugOfWar_C* AGM_TugOfWar_C::GetDefaultObj()
{
	static class AGM_TugOfWar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_TugOfWar_C*>(AGM_TugOfWar_C::StaticClass()->DefaultObject);

	return Default;
}

}


