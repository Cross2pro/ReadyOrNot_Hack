#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CivilianExplosiveVest.CivilianExplosiveVest_C
// (Actor)

class UClass* ACivilianExplosiveVest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CivilianExplosiveVest_C");

	return Clss;
}


// CivilianExplosiveVest_C CivilianExplosiveVest.Default__CivilianExplosiveVest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACivilianExplosiveVest_C* ACivilianExplosiveVest_C::GetDefaultObj()
{
	static class ACivilianExplosiveVest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACivilianExplosiveVest_C*>(ACivilianExplosiveVest_C::StaticClass()->DefaultObject);

	return Default;
}

}


