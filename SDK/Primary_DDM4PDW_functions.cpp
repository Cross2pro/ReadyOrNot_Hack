#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_DDM4PDW.Primary_DDM4PDW_C
// (Actor)

class UClass* APrimary_DDM4PDW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_DDM4PDW_C");

	return Clss;
}


// Primary_DDM4PDW_C Primary_DDM4PDW.Default__Primary_DDM4PDW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_DDM4PDW_C* APrimary_DDM4PDW_C::GetDefaultObj()
{
	static class APrimary_DDM4PDW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_DDM4PDW_C*>(APrimary_DDM4PDW_C::StaticClass()->DefaultObject);

	return Default;
}

}


