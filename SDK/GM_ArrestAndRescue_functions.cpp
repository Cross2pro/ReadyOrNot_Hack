#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_ArrestAndRescue.GM_ArrestAndRescue_C
// (Actor)

class UClass* AGM_ArrestAndRescue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_ArrestAndRescue_C");

	return Clss;
}


// GM_ArrestAndRescue_C GM_ArrestAndRescue.Default__GM_ArrestAndRescue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_ArrestAndRescue_C* AGM_ArrestAndRescue_C::GetDefaultObj()
{
	static class AGM_ArrestAndRescue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_ArrestAndRescue_C*>(AGM_ArrestAndRescue_C::StaticClass()->DefaultObject);

	return Default;
}

}


