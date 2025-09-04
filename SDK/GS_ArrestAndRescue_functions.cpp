#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_ArrestAndRescue.GS_ArrestAndRescue_C
// (Actor)

class UClass* AGS_ArrestAndRescue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_ArrestAndRescue_C");

	return Clss;
}


// GS_ArrestAndRescue_C GS_ArrestAndRescue.Default__GS_ArrestAndRescue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_ArrestAndRescue_C* AGS_ArrestAndRescue_C::GetDefaultObj()
{
	static class AGS_ArrestAndRescue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_ArrestAndRescue_C*>(AGS_ArrestAndRescue_C::StaticClass()->DefaultObject);

	return Default;
}

}


