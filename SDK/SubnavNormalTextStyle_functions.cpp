#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavNormalTextStyle.SubnavNormalTextStyle_C
// (None)

class UClass* USubnavNormalTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavNormalTextStyle_C");

	return Clss;
}


// SubnavNormalTextStyle_C SubnavNormalTextStyle.Default__SubnavNormalTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavNormalTextStyle_C* USubnavNormalTextStyle_C::GetDefaultObj()
{
	static class USubnavNormalTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavNormalTextStyle_C*>(USubnavNormalTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


