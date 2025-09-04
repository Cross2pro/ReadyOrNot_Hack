#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BatteringRam_GunGame.BP_BatteringRam_GunGame_C
// (Actor)

class UClass* ABP_BatteringRam_GunGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BatteringRam_GunGame_C");

	return Clss;
}


// BP_BatteringRam_GunGame_C BP_BatteringRam_GunGame.Default__BP_BatteringRam_GunGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BatteringRam_GunGame_C* ABP_BatteringRam_GunGame_C::GetDefaultObj()
{
	static class ABP_BatteringRam_GunGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BatteringRam_GunGame_C*>(ABP_BatteringRam_GunGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


