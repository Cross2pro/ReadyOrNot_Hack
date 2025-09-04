#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Facewear_Gasmask.BP_Facewear_Gasmask_C
// (Actor)

class UClass* ABP_Facewear_Gasmask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Facewear_Gasmask_C");

	return Clss;
}


// BP_Facewear_Gasmask_C BP_Facewear_Gasmask.Default__BP_Facewear_Gasmask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Facewear_Gasmask_C* ABP_Facewear_Gasmask_C::GetDefaultObj()
{
	static class ABP_Facewear_Gasmask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Facewear_Gasmask_C*>(ABP_Facewear_Gasmask_C::StaticClass()->DefaultObject);

	return Default;
}

}


