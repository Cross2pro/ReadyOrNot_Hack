#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x930 - 0x928)
// BlueprintGeneratedClass GS_Firefight.GS_Firefight_C
class AGS_Firefight_C : public AFirefightGS
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x928(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGS_Firefight_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GS_Firefight(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


