#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Firefight.GM_Firefight_C
// (Actor)

class UClass* AGM_Firefight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Firefight_C");

	return Clss;
}


// GM_Firefight_C GM_Firefight.Default__GM_Firefight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Firefight_C* AGM_Firefight_C::GetDefaultObj()
{
	static class AGM_Firefight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Firefight_C*>(AGM_Firefight_C::StaticClass()->DefaultObject);

	return Default;
}

}


