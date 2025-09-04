#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Default_16pt_TextStyle.Default_16pt_TextStyle_C
// (None)

class UClass* UDefault_16pt_TextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Default_16pt_TextStyle_C");

	return Clss;
}


// Default_16pt_TextStyle_C Default_16pt_TextStyle.Default__Default_16pt_TextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefault_16pt_TextStyle_C* UDefault_16pt_TextStyle_C::GetDefaultObj()
{
	static class UDefault_16pt_TextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefault_16pt_TextStyle_C*>(UDefault_16pt_TextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


