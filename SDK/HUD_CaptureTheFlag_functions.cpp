#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_CaptureTheFlag.HUD_CaptureTheFlag_C
// (Actor)

class UClass* AHUD_CaptureTheFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_CaptureTheFlag_C");

	return Clss;
}


// HUD_CaptureTheFlag_C HUD_CaptureTheFlag.Default__HUD_CaptureTheFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUD_CaptureTheFlag_C* AHUD_CaptureTheFlag_C::GetDefaultObj()
{
	static class AHUD_CaptureTheFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUD_CaptureTheFlag_C*>(AHUD_CaptureTheFlag_C::StaticClass()->DefaultObject);

	return Default;
}

}


