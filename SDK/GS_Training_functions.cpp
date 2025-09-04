#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Training.GS_Training_C
// (Actor)

class UClass* AGS_Training_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Training_C");

	return Clss;
}


// GS_Training_C GS_Training.Default__GS_Training_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Training_C* AGS_Training_C::GetDefaultObj()
{
	static class AGS_Training_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Training_C*>(AGS_Training_C::StaticClass()->DefaultObject);

	return Default;
}

}


