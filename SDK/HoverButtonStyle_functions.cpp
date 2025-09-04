#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HoverButtonStyle.HoverButtonStyle_C
// (None)

class UClass* UHoverButtonStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HoverButtonStyle_C");

	return Clss;
}


// HoverButtonStyle_C HoverButtonStyle.Default__HoverButtonStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHoverButtonStyle_C* UHoverButtonStyle_C::GetDefaultObj()
{
	static class UHoverButtonStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHoverButtonStyle_C*>(UHoverButtonStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


