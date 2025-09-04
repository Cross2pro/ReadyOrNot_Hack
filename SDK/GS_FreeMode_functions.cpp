#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_FreeMode.GS_FreeMode_C
// (Actor)

class UClass* AGS_FreeMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_FreeMode_C");

	return Clss;
}


// GS_FreeMode_C GS_FreeMode.Default__GS_FreeMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_FreeMode_C* AGS_FreeMode_C::GetDefaultObj()
{
	static class AGS_FreeMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_FreeMode_C*>(AGS_FreeMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


