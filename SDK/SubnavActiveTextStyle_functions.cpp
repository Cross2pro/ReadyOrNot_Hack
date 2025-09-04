#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SubnavActiveTextStyle.SubnavActiveTextStyle_C
// (None)

class UClass* USubnavActiveTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubnavActiveTextStyle_C");

	return Clss;
}


// SubnavActiveTextStyle_C SubnavActiveTextStyle.Default__SubnavActiveTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubnavActiveTextStyle_C* USubnavActiveTextStyle_C::GetDefaultObj()
{
	static class USubnavActiveTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubnavActiveTextStyle_C*>(USubnavActiveTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


