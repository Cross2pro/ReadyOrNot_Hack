#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_TDM.HUD_TDM_C
// (Actor)

class UClass* AHUD_TDM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_TDM_C");

	return Clss;
}


// HUD_TDM_C HUD_TDM.Default__HUD_TDM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_TDM_C* AHUD_TDM_C::GetDefaultObj()
{
	static class AHUD_TDM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_TDM_C*>(AHUD_TDM_C::StaticClass()->DefaultObject);

	return Default;
}

}


