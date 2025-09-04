#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GenericCommonInputKeyboard.BP_GenericCommonInputKeyboard_C
// (None)

class UClass* UBP_GenericCommonInputKeyboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GenericCommonInputKeyboard_C");

	return Clss;
}


// BP_GenericCommonInputKeyboard_C BP_GenericCommonInputKeyboard.Default__BP_GenericCommonInputKeyboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GenericCommonInputKeyboard_C* UBP_GenericCommonInputKeyboard_C::GetDefaultObj()
{
	static class UBP_GenericCommonInputKeyboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GenericCommonInputKeyboard_C*>(UBP_GenericCommonInputKeyboard_C::StaticClass()->DefaultObject);

	return Default;
}

}


