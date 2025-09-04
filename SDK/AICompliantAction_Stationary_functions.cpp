#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AICompliantAction_Stationary.AICompliantAction_Stationary_C
// (None)

class UClass* UAICompliantAction_Stationary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AICompliantAction_Stationary_C");

	return Clss;
}


// AICompliantAction_Stationary_C AICompliantAction_Stationary.Default__AICompliantAction_Stationary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAICompliantAction_Stationary_C* UAICompliantAction_Stationary_C::GetDefaultObj()
{
	static class UAICompliantAction_Stationary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAICompliantAction_Stationary_C*>(UAICompliantAction_Stationary_C::StaticClass()->DefaultObject);

	return Default;
}

}


