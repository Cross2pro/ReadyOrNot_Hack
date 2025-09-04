#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_TugOfWar.GS_TugOfWar_C
// (Actor)

class UClass* AGS_TugOfWar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_TugOfWar_C");

	return Clss;
}


// GS_TugOfWar_C GS_TugOfWar.Default__GS_TugOfWar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_TugOfWar_C* AGS_TugOfWar_C::GetDefaultObj()
{
	static class AGS_TugOfWar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_TugOfWar_C*>(AGS_TugOfWar_C::StaticClass()->DefaultObject);

	return Default;
}

}


