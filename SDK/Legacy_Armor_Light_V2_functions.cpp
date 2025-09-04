#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Legacy_Armor_Light_V2.Legacy_Armor_Light_V2_C
// (Actor)

class UClass* ALegacy_Armor_Light_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Legacy_Armor_Light_V2_C");

	return Clss;
}


// Legacy_Armor_Light_V2_C Legacy_Armor_Light_V2.Default__Legacy_Armor_Light_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALegacy_Armor_Light_V2_C* ALegacy_Armor_Light_V2_C::GetDefaultObj()
{
	static class ALegacy_Armor_Light_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALegacy_Armor_Light_V2_C*>(ALegacy_Armor_Light_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


