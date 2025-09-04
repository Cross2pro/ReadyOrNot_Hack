#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatMissionNameCompare.StatMissionNameCompare_C
// (None)

class UClass* UStatMissionNameCompare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatMissionNameCompare_C");

	return Clss;
}


// StatMissionNameCompare_C StatMissionNameCompare.Default__StatMissionNameCompare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatMissionNameCompare_C* UStatMissionNameCompare_C::GetDefaultObj()
{
	static class UStatMissionNameCompare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatMissionNameCompare_C*>(UStatMissionNameCompare_C::StaticClass()->DefaultObject);

	return Default;
}

}


