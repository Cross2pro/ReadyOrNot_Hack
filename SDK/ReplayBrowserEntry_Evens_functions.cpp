#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReplayBrowserEntry_Evens.ReplayBrowserEntry_Evens_C
// (None)

class UClass* UReplayBrowserEntry_Evens_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplayBrowserEntry_Evens_C");

	return Clss;
}


// ReplayBrowserEntry_Evens_C ReplayBrowserEntry_Evens.Default__ReplayBrowserEntry_Evens_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReplayBrowserEntry_Evens_C* UReplayBrowserEntry_Evens_C::GetDefaultObj()
{
	static class UReplayBrowserEntry_Evens_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplayBrowserEntry_Evens_C*>(UReplayBrowserEntry_Evens_C::StaticClass()->DefaultObject);

	return Default;
}

}


