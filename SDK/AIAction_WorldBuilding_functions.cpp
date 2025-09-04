#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAction_WorldBuilding.AIAction_WorldBuilding_C
// (None)

class UClass* UAIAction_WorldBuilding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAction_WorldBuilding_C");

	return Clss;
}


// AIAction_WorldBuilding_C AIAction_WorldBuilding.Default__AIAction_WorldBuilding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAction_WorldBuilding_C* UAIAction_WorldBuilding_C::GetDefaultObj()
{
	static class UAIAction_WorldBuilding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAction_WorldBuilding_C*>(UAIAction_WorldBuilding_C::StaticClass()->DefaultObject);

	return Default;
}

}


