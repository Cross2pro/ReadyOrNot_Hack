#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GamepadFooterNormalTextStyle.BP_GamepadFooterNormalTextStyle_C
// (None)

class UClass* UBP_GamepadFooterNormalTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GamepadFooterNormalTextStyle_C");

	return Clss;
}


// BP_GamepadFooterNormalTextStyle_C BP_GamepadFooterNormalTextStyle.Default__BP_GamepadFooterNormalTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GamepadFooterNormalTextStyle_C* UBP_GamepadFooterNormalTextStyle_C::GetDefaultObj()
{
	static class UBP_GamepadFooterNormalTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GamepadFooterNormalTextStyle_C*>(UBP_GamepadFooterNormalTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


