#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_Training.GM_Training_C
// (Actor)

class UClass* AGM_Training_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_Training_C");

	return Clss;
}


// GM_Training_C GM_Training.Default__GM_Training_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_Training_C* AGM_Training_C::GetDefaultObj()
{
	static class AGM_Training_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_Training_C*>(AGM_Training_C::StaticClass()->DefaultObject);

	return Default;
}

}


