#pragma once
#include <cstdint>
#include <Windows.h>
#ifndef _DEBUG111
#define DEBUG_LOG(format, ...) do { \
    char buffer[1024]; \
    sprintf_s(buffer, sizeof(buffer), format, ##__VA_ARGS__); \
    OutputDebugStringA(buffer); \
} while(0)
#else
#define DEBUG_LOG(format, ...)
#endif
/*
	guttir14 https://github.com/guttir14/CheatIt
*/

bool Compare(byte* data, byte* sig, uint64_t size);
byte* FindSignature(byte* start, byte* end, byte* sig, uint64_t size);
void* FindPointer(HMODULE mod, byte* sig, uint64_t size, int addition);

