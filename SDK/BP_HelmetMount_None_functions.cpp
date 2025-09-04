#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HelmetMount_None.BP_HelmetMount_None_C
// (Actor)

class UClass* ABP_HelmetMount_None_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HelmetMount_None_C");

	return Clss;
}


// BP_HelmetMount_None_C BP_HelmetMount_None.Default__BP_HelmetMount_None_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HelmetMount_None_C* ABP_HelmetMount_None_C::GetDefaultObj()
{
	static class ABP_HelmetMount_None_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HelmetMount_None_C*>(ABP_HelmetMount_None_C::StaticClass()->DefaultObject);

	return Default;
}

}


