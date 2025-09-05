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


// 获取结构体自定义偏移量的指针宏
// 用法: GETPOINTER<TArray<AActor*>>(Config::gWorld->PersistentLevel, 0x98)
#define GETPOINTER(type, obj, offset) reinterpret_cast<type*>((uintptr_t)(obj) + (offset))

// 获取结构体自定义偏移量的引用宏
// 用法: GETREFERENCE<TArray<AActor*>>(Config::gWorld->PersistentLevel, 0x98)
#define GETREFERENCE(type, obj, offset) (*reinterpret_cast<type*>((uintptr_t)(obj) + (offset)))

// 距离计算宏
// 用法: DIST(vec1, vec2) 计算两个FVector之间的距离并转换为游戏单位
#define DIST(vec1, vec2) (sqrt(pow((vec1).X - (vec2).X, 2) + pow((vec1).Y - (vec2).Y, 2) + pow((vec1).Z - (vec2).Z, 2)) / 100.0f)


/*
	guttir14 https://github.com/guttir14/CheatIt
*/

bool Compare(byte* data, byte* sig, uint64_t size);
byte* FindSignature(byte* start, byte* end, byte* sig, uint64_t size);
void* FindPointer(HMODULE mod, byte* sig, uint64_t size, int addition);



