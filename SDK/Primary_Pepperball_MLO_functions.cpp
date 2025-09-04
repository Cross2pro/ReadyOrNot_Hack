#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Primary_Pepperball_MLO.Primary_Pepperball_MLO_C
// (Actor)

class UClass* APrimary_Pepperball_MLO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Primary_Pepperball_MLO_C");

	return Clss;
}


// Primary_Pepperball_MLO_C Primary_Pepperball_MLO.Default__Primary_Pepperball_MLO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimary_Pepperball_MLO_C* APrimary_Pepperball_MLO_C::GetDefaultObj()
{
	static class APrimary_Pepperball_MLO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimary_Pepperball_MLO_C*>(APrimary_Pepperball_MLO_C::StaticClass()->DefaultObject);

	return Default;
}

}


