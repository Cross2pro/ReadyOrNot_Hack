#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_KingOfTheHill.GS_KingOfTheHill_C
// (Actor)

class UClass* AGS_KingOfTheHill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_KingOfTheHill_C");

	return Clss;
}


// GS_KingOfTheHill_C GS_KingOfTheHill.Default__GS_KingOfTheHill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_KingOfTheHill_C* AGS_KingOfTheHill_C::GetDefaultObj()
{
	static class AGS_KingOfTheHill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_KingOfTheHill_C*>(AGS_KingOfTheHill_C::StaticClass()->DefaultObject);

	return Default;
}

}


