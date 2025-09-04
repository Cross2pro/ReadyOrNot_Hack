#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x320 - 0x320)
// WidgetBlueprintGeneratedClass W_VOIPTalker.W_VOIPTalker_C
class UW_VOIPTalker_C : public UVOIPTalkerWidget
{
public:

	static class UClass* StaticClass();
	static class UW_VOIPTalker_C* GetDefaultObj();

	void RefeshMultiplayer();
	void Refresh_Player_States_If_Not_Exists(bool PlayerStateFound);
};

}


