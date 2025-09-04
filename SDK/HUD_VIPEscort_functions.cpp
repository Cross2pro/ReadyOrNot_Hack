#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_VIPEscort.HUD_VIPEscort_C
// (Actor)

class UClass* AHUD_VIPEscort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_VIPEscort_C");

	return Clss;
}


// HUD_VIPEscort_C HUD_VIPEscort.Default__HUD_VIPEscort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_VIPEscort_C* AHUD_VIPEscort_C::GetDefaultObj()
{
	static class AHUD_VIPEscort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_VIPEscort_C*>(AHUD_VIPEscort_C::StaticClass()->DefaultObject);

	return Default;
}

}


