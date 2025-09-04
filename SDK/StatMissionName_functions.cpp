#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StatMissionName.StatMissionName_C
// (None)

class UClass* UStatMissionName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatMissionName_C");

	return Clss;
}


// StatMissionName_C StatMissionName.Default__StatMissionName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatMissionName_C* UStatMissionName_C::GetDefaultObj()
{
	static class UStatMissionName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatMissionName_C*>(UStatMissionName_C::StaticClass()->DefaultObject);

	return Default;
}

}


