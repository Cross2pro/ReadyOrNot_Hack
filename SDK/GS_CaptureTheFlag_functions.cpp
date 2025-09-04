#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GS_CaptureTheFlag.GS_CaptureTheFlag_C
// (Actor)

class UClass* AGS_CaptureTheFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GS_CaptureTheFlag_C");

	return Clss;
}


// GS_CaptureTheFlag_C GS_CaptureTheFlag.Default__GS_CaptureTheFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGS_CaptureTheFlag_C* AGS_CaptureTheFlag_C::GetDefaultObj()
{
	static class AGS_CaptureTheFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGS_CaptureTheFlag_C*>(AGS_CaptureTheFlag_C::StaticClass()->DefaultObject);

	return Default;
}

}


