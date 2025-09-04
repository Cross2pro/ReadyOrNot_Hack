#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadialSegmentTextStyle.RadialSegmentTextStyle_C
// (None)

class UClass* URadialSegmentTextStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialSegmentTextStyle_C");

	return Clss;
}


// RadialSegmentTextStyle_C RadialSegmentTextStyle.Default__RadialSegmentTextStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URadialSegmentTextStyle_C* URadialSegmentTextStyle_C::GetDefaultObj()
{
	static class URadialSegmentTextStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialSegmentTextStyle_C*>(URadialSegmentTextStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


