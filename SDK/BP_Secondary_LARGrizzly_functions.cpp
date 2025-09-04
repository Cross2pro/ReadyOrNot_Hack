#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Secondary_LARGrizzly.BP_Secondary_LARGrizzly_C
// (Actor)

class UClass* ABP_Secondary_LARGrizzly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Secondary_LARGrizzly_C");

	return Clss;
}


// BP_Secondary_LARGrizzly_C BP_Secondary_LARGrizzly.Default__BP_Secondary_LARGrizzly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Secondary_LARGrizzly_C* ABP_Secondary_LARGrizzly_C::GetDefaultObj()
{
	static class ABP_Secondary_LARGrizzly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Secondary_LARGrizzly_C*>(ABP_Secondary_LARGrizzly_C::StaticClass()->DefaultObject);

	return Default;
}

}


