#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSLicenseValidation.VerifyFreeEditionLicenseCommandlet
// (None)

class UClass* UVerifyFreeEditionLicenseCommandlet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerifyFreeEditionLicenseCommandlet");

	return Clss;
}


// VerifyFreeEditionLicenseCommandlet RedpointEOSLicenseValidation.Default__VerifyFreeEditionLicenseCommandlet
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerifyFreeEditionLicenseCommandlet* UVerifyFreeEditionLicenseCommandlet::GetDefaultObj()
{
	static class UVerifyFreeEditionLicenseCommandlet* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerifyFreeEditionLicenseCommandlet*>(UVerifyFreeEditionLicenseCommandlet::StaticClass()->DefaultObject);

	return Default;
}

}


