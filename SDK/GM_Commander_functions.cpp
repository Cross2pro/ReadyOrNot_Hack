#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Commander.GM_Commander_C
// (Actor)

class UClass* AGM_Commander_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Commander_C");

	return Clss;
}


// GM_Commander_C GM_Commander.Default__GM_Commander_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Commander_C* AGM_Commander_C::GetDefaultObj()
{
	static class AGM_Commander_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Commander_C*>(AGM_Commander_C::StaticClass()->DefaultObject);

	return Default;
}

}


