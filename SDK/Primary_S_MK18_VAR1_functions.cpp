#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_S_MK18_VAR1.Primary_S_MK18_VAR1_C
// (Actor)

class UClass* APrimary_S_MK18_VAR1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_S_MK18_VAR1_C");

	return Clss;
}


// Primary_S_MK18_VAR1_C Primary_S_MK18_VAR1.Default__Primary_S_MK18_VAR1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_S_MK18_VAR1_C* APrimary_S_MK18_VAR1_C::GetDefaultObj()
{
	static class APrimary_S_MK18_VAR1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_S_MK18_VAR1_C*>(APrimary_S_MK18_VAR1_C::StaticClass()->DefaultObject);

	return Default;
}

}


