#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScreenFooterDefaultButtonStyle.BP_ScreenFooterDefaultButtonStyle_C
// (None)

class UClass* UBP_ScreenFooterDefaultButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScreenFooterDefaultButtonStyle_C");

	return Clss;
}


// BP_ScreenFooterDefaultButtonStyle_C BP_ScreenFooterDefaultButtonStyle.Default__BP_ScreenFooterDefaultButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScreenFooterDefaultButtonStyle_C* UBP_ScreenFooterDefaultButtonStyle_C::GetDefaultObj()
{
	static class UBP_ScreenFooterDefaultButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScreenFooterDefaultButtonStyle_C*>(UBP_ScreenFooterDefaultButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


