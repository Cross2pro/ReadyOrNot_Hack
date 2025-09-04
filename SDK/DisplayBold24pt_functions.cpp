#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DisplayBold24pt.DisplayBold24pt_C
// (None)

class UClass* UDisplayBold24pt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayBold24pt_C");

	return Clss;
}


// DisplayBold24pt_C DisplayBold24pt.Default__DisplayBold24pt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDisplayBold24pt_C* UDisplayBold24pt_C::GetDefaultObj()
{
	static class UDisplayBold24pt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayBold24pt_C*>(UDisplayBold24pt_C::StaticClass()->DefaultObject);

	return Default;
}

}


