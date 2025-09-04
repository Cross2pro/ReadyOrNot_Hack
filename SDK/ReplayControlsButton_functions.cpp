#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReplayControlsButton.ReplayControlsButton_C
// (None)

class UClass* UReplayControlsButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplayControlsButton_C");

	return Clss;
}


// ReplayControlsButton_C ReplayControlsButton.Default__ReplayControlsButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReplayControlsButton_C* UReplayControlsButton_C::GetDefaultObj()
{
	static class UReplayControlsButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplayControlsButton_C*>(UReplayControlsButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


