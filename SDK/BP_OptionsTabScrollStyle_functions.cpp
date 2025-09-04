#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OptionsTabScrollStyle.BP_OptionsTabScrollStyle_C
// (None)

class UClass* UBP_OptionsTabScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OptionsTabScrollStyle_C");

	return Clss;
}


// BP_OptionsTabScrollStyle_C BP_OptionsTabScrollStyle.Default__BP_OptionsTabScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OptionsTabScrollStyle_C* UBP_OptionsTabScrollStyle_C::GetDefaultObj()
{
	static class UBP_OptionsTabScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OptionsTabScrollStyle_C*>(UBP_OptionsTabScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


