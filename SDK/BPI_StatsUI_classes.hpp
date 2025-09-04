#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StatsUI.BPI_StatsUI_C
class IBPI_StatsUI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StatsUI_C* GetDefaultObj();

	void CancelCompare();
	void CompareWithFriend(const struct FFriend& Friend);
};

}


