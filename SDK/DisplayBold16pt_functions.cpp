#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DisplayBold16pt.DisplayBold16pt_C
// (None)

class UClass* UDisplayBold16pt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DisplayBold16pt_C");

	return Clss;
}


// DisplayBold16pt_C DisplayBold16pt.Default__DisplayBold16pt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDisplayBold16pt_C* UDisplayBold16pt_C::GetDefaultObj()
{
	static class UDisplayBold16pt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDisplayBold16pt_C*>(UDisplayBold16pt_C::StaticClass()->DefaultObject);

	return Default;
}

}


