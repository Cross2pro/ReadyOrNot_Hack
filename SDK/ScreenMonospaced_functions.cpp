#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScreenMonospaced.ScreenMonospaced_C
// (None)

class UClass* UScreenMonospaced_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScreenMonospaced_C");

	return Clss;
}


// ScreenMonospaced_C ScreenMonospaced.Default__ScreenMonospaced_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScreenMonospaced_C* UScreenMonospaced_C::GetDefaultObj()
{
	static class UScreenMonospaced_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScreenMonospaced_C*>(UScreenMonospaced_C::StaticClass()->DefaultObject);

	return Default;
}

}


