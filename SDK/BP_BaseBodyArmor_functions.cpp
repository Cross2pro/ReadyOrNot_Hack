#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseBodyArmor.BP_BaseBodyArmor_C
// (Actor)

class UClass* ABP_BaseBodyArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseBodyArmor_C");

	return Clss;
}


// BP_BaseBodyArmor_C BP_BaseBodyArmor.Default__BP_BaseBodyArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseBodyArmor_C* ABP_BaseBodyArmor_C::GetDefaultObj()
{
	static class ABP_BaseBodyArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseBodyArmor_C*>(ABP_BaseBodyArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


