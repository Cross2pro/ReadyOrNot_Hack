#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemRedpointEOS.EOSSubsystem
// (None)

class UClass* UEOSSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSSubsystem");

	return Clss;
}


// EOSSubsystem OnlineSubsystemRedpointEOS.Default__EOSSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSSubsystem* UEOSSubsystem::GetDefaultObj()
{
	static class UEOSSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSSubsystem*>(UEOSSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


