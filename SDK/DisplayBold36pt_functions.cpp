#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DisplayBold36pt.DisplayBold36pt_C
// (None)

class UClass* UDisplayBold36pt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayBold36pt_C");

	return Clss;
}


// DisplayBold36pt_C DisplayBold36pt.Default__DisplayBold36pt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDisplayBold36pt_C* UDisplayBold36pt_C::GetDefaultObj()
{
	static class UDisplayBold36pt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayBold36pt_C*>(UDisplayBold36pt_C::StaticClass()->DefaultObject);

	return Default;
}

}


