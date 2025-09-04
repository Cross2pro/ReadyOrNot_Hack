#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScreenFooterBlankButtonStyle.BP_ScreenFooterBlankButtonStyle_C
// (None)

class UClass* UBP_ScreenFooterBlankButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScreenFooterBlankButtonStyle_C");

	return Clss;
}


// BP_ScreenFooterBlankButtonStyle_C BP_ScreenFooterBlankButtonStyle.Default__BP_ScreenFooterBlankButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ScreenFooterBlankButtonStyle_C* UBP_ScreenFooterBlankButtonStyle_C::GetDefaultObj()
{
	static class UBP_ScreenFooterBlankButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ScreenFooterBlankButtonStyle_C*>(UBP_ScreenFooterBlankButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


