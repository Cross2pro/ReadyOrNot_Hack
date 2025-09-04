#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OptionsTextScrollStyle.BP_OptionsTextScrollStyle_C
// (None)

class UClass* UBP_OptionsTextScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OptionsTextScrollStyle_C");

	return Clss;
}


// BP_OptionsTextScrollStyle_C BP_OptionsTextScrollStyle.Default__BP_OptionsTextScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OptionsTextScrollStyle_C* UBP_OptionsTextScrollStyle_C::GetDefaultObj()
{
	static class UBP_OptionsTextScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OptionsTextScrollStyle_C*>(UBP_OptionsTextScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


