#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Incrimination.GS_Incrimination_C
// (Actor)

class UClass* AGS_Incrimination_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Incrimination_C");

	return Clss;
}


// GS_Incrimination_C GS_Incrimination.Default__GS_Incrimination_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Incrimination_C* AGS_Incrimination_C::GetDefaultObj()
{
	static class AGS_Incrimination_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Incrimination_C*>(AGS_Incrimination_C::StaticClass()->DefaultObject);

	return Default;
}

}


