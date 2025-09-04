#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReplayBrowserEntry.ReplayBrowserEntry_C
// (None)

class UClass* UReplayBrowserEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplayBrowserEntry_C");

	return Clss;
}


// ReplayBrowserEntry_C ReplayBrowserEntry.Default__ReplayBrowserEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReplayBrowserEntry_C* UReplayBrowserEntry_C::GetDefaultObj()
{
	static class UReplayBrowserEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplayBrowserEntry_C*>(UReplayBrowserEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


