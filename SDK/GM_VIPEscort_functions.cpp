#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_VIPEscort.GM_VIPEscort_C
// (Actor)

class UClass* AGM_VIPEscort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_VIPEscort_C");

	return Clss;
}


// GM_VIPEscort_C GM_VIPEscort.Default__GM_VIPEscort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_VIPEscort_C* AGM_VIPEscort_C::GetDefaultObj()
{
	static class AGM_VIPEscort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_VIPEscort_C*>(AGM_VIPEscort_C::StaticClass()->DefaultObject);

	return Default;
}

}


