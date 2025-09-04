#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x210 (0x290 - 0x80)
// Class RedpointEOSNetworking.RedpointEOSControlChannel
class URedpointEOSControlChannel : public UControlChannel
{
public:
	uint8                                        Pad_DF9[0x210];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URedpointEOSControlChannel* GetDefaultObj();

};

// 0x0 (0x1E88 - 0x1E88)
// Class RedpointEOSNetworking.RedpointEOSIpNetConnection
class URedpointEOSIpNetConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class URedpointEOSIpNetConnection* GetDefaultObj();

};

// 0x10 (0x1E08 - 0x1DF8)
// Class RedpointEOSNetworking.RedpointEOSNetConnection
class URedpointEOSNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_E07[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URedpointEOSNetConnection* GetDefaultObj();

};

// 0x10 (0x8B0 - 0x8A0)
// Class RedpointEOSNetworking.RedpointEOSNetDriver
class URedpointEOSNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_E25[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URedpointEOSNetDriver* GetDefaultObj();

};

}


