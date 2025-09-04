#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Defusal.GM_Defusal_C
// (Actor)

class UClass* AGM_Defusal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Defusal_C");

	return Clss;
}


// GM_Defusal_C GM_Defusal.Default__GM_Defusal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Defusal_C* AGM_Defusal_C::GetDefaultObj()
{
	static class AGM_Defusal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Defusal_C*>(AGM_Defusal_C::StaticClass()->DefaultObject);

	return Default;
}

}


