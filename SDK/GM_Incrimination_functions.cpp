#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Incrimination.GM_Incrimination_C
// (Actor)

class UClass* AGM_Incrimination_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Incrimination_C");

	return Clss;
}


// GM_Incrimination_C GM_Incrimination.Default__GM_Incrimination_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Incrimination_C* AGM_Incrimination_C::GetDefaultObj()
{
	static class AGM_Incrimination_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Incrimination_C*>(AGM_Incrimination_C::StaticClass()->DefaultObject);

	return Default;
}

}


