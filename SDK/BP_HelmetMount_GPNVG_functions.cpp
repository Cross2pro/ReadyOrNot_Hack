#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HelmetMount_GPNVG.BP_HelmetMount_GPNVG_C
// (Actor)

class UClass* ABP_HelmetMount_GPNVG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HelmetMount_GPNVG_C");

	return Clss;
}


// BP_HelmetMount_GPNVG_C BP_HelmetMount_GPNVG.Default__BP_HelmetMount_GPNVG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HelmetMount_GPNVG_C* ABP_HelmetMount_GPNVG_C::GetDefaultObj()
{
	static class ABP_HelmetMount_GPNVG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HelmetMount_GPNVG_C*>(ABP_HelmetMount_GPNVG_C::StaticClass()->DefaultObject);

	return Default;
}

}


