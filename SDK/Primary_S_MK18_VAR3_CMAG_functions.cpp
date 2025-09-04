#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_S_MK18_VAR3_CMAG.Primary_S_MK18_VAR3_CMAG_C
// (Actor)

class UClass* APrimary_S_MK18_VAR3_CMAG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_S_MK18_VAR3_CMAG_C");

	return Clss;
}


// Primary_S_MK18_VAR3_CMAG_C Primary_S_MK18_VAR3_CMAG.Default__Primary_S_MK18_VAR3_CMAG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_S_MK18_VAR3_CMAG_C* APrimary_S_MK18_VAR3_CMAG_C::GetDefaultObj()
{
	static class APrimary_S_MK18_VAR3_CMAG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_S_MK18_VAR3_CMAG_C*>(APrimary_S_MK18_VAR3_CMAG_C::StaticClass()->DefaultObject);

	return Default;
}

}


