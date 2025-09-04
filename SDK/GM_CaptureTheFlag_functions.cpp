#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GM_CaptureTheFlag.GM_CaptureTheFlag_C
// (Actor)

class UClass* AGM_CaptureTheFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GM_CaptureTheFlag_C");

	return Clss;
}


// GM_CaptureTheFlag_C GM_CaptureTheFlag.Default__GM_CaptureTheFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGM_CaptureTheFlag_C* AGM_CaptureTheFlag_C::GetDefaultObj()
{
	static class AGM_CaptureTheFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGM_CaptureTheFlag_C*>(AGM_CaptureTheFlag_C::StaticClass()->DefaultObject);

	return Default;
}

}


