#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HelmetMount_NVG.BP_HelmetMount_NVG_C
// (Actor)

class UClass* ABP_HelmetMount_NVG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HelmetMount_NVG_C");

	return Clss;
}


// BP_HelmetMount_NVG_C BP_HelmetMount_NVG.Default__BP_HelmetMount_NVG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HelmetMount_NVG_C* ABP_HelmetMount_NVG_C::GetDefaultObj()
{
	static class ABP_HelmetMount_NVG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HelmetMount_NVG_C*>(ABP_HelmetMount_NVG_C::StaticClass()->DefaultObject);

	return Default;
}

}


