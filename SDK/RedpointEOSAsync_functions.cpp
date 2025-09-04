#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSAsync.TestAsyncUObject
// (None)

class UClass* UTestAsyncUObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TestAsyncUObject");

	return Clss;
}


// TestAsyncUObject RedpointEOSAsync.Default__TestAsyncUObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UTestAsyncUObject* UTestAsyncUObject::GetDefaultObj()
{
	static class UTestAsyncUObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UTestAsyncUObject*>(UTestAsyncUObject::StaticClass()->DefaultObject);

	return Default;
}

}


