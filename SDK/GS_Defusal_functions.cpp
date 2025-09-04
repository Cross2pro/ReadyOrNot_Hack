#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_Defusal.GS_Defusal_C
// (Actor)

class UClass* AGS_Defusal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_Defusal_C");

	return Clss;
}


// GS_Defusal_C GS_Defusal.Default__GS_Defusal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_Defusal_C* AGS_Defusal_C::GetDefaultObj()
{
	static class AGS_Defusal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_Defusal_C*>(AGS_Defusal_C::StaticClass()->DefaultObject);

	return Default;
}

}


