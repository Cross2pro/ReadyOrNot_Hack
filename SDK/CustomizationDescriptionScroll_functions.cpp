#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomizationDescriptionScroll.CustomizationDescriptionScroll_C
// (None)

class UClass* UCustomizationDescriptionScroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomizationDescriptionScroll_C");

	return Clss;
}


// CustomizationDescriptionScroll_C CustomizationDescriptionScroll.Default__CustomizationDescriptionScroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomizationDescriptionScroll_C* UCustomizationDescriptionScroll_C::GetDefaultObj()
{
	static class UCustomizationDescriptionScroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomizationDescriptionScroll_C*>(UCustomizationDescriptionScroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


