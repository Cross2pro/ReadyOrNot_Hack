#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedpointEOSNetworking.RedpointEOSControlChannel
// (None)

class UClass* URedpointEOSControlChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSControlChannel");

	return Clss;
}


// RedpointEOSControlChannel RedpointEOSNetworking.Default__RedpointEOSControlChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSControlChannel* URedpointEOSControlChannel::GetDefaultObj()
{
	static class URedpointEOSControlChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSControlChannel*>(URedpointEOSControlChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSNetworking.RedpointEOSIpNetConnection
// (None)

class UClass* URedpointEOSIpNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSIpNetConnection");

	return Clss;
}


// RedpointEOSIpNetConnection RedpointEOSNetworking.Default__RedpointEOSIpNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSIpNetConnection* URedpointEOSIpNetConnection::GetDefaultObj()
{
	static class URedpointEOSIpNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSIpNetConnection*>(URedpointEOSIpNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSNetworking.RedpointEOSNetConnection
// (None)

class UClass* URedpointEOSNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSNetConnection");

	return Clss;
}


// RedpointEOSNetConnection RedpointEOSNetworking.Default__RedpointEOSNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSNetConnection* URedpointEOSNetConnection::GetDefaultObj()
{
	static class URedpointEOSNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSNetConnection*>(URedpointEOSNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class RedpointEOSNetworking.RedpointEOSNetDriver
// (None)

class UClass* URedpointEOSNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedpointEOSNetDriver");

	return Clss;
}


// RedpointEOSNetDriver RedpointEOSNetworking.Default__RedpointEOSNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class URedpointEOSNetDriver* URedpointEOSNetDriver::GetDefaultObj()
{
	static class URedpointEOSNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<URedpointEOSNetDriver*>(URedpointEOSNetDriver::StaticClass()->DefaultObject);

	return Default;
}

}


