#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavPressedTextStyle.SubnavPressedTextStyle_C
// (None)

class UClass* USubnavPressedTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavPressedTextStyle_C");

	return Clss;
}


// SubnavPressedTextStyle_C SubnavPressedTextStyle.Default__SubnavPressedTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavPressedTextStyle_C* USubnavPressedTextStyle_C::GetDefaultObj()
{
	static class USubnavPressedTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavPressedTextStyle_C*>(USubnavPressedTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


