#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default14ptSemiboldTextStyle.Default14ptSemiboldTextStyle_C
// (None)

class UClass* UDefault14ptSemiboldTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default14ptSemiboldTextStyle_C");

	return Clss;
}


// Default14ptSemiboldTextStyle_C Default14ptSemiboldTextStyle.Default__Default14ptSemiboldTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault14ptSemiboldTextStyle_C* UDefault14ptSemiboldTextStyle_C::GetDefaultObj()
{
	static class UDefault14ptSemiboldTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault14ptSemiboldTextStyle_C*>(UDefault14ptSemiboldTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


