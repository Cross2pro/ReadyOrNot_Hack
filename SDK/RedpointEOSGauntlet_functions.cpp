#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSGauntlet.RedpointEOSDeviceTestController
// (None)

class UClass* URedpointEOSDeviceTestController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSDeviceTestController");

	return Clss;
}


// RedpointEOSDeviceTestController RedpointEOSGauntlet.Default__RedpointEOSDeviceTestController
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSDeviceTestController* URedpointEOSDeviceTestController::GetDefaultObj()
{
	static class URedpointEOSDeviceTestController* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSDeviceTestController*>(URedpointEOSDeviceTestController::StaticClass()->DefaultObject);

	return Default;
}

}


