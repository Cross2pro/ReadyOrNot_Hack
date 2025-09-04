#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2F8 - 0x2C0)
// WidgetBlueprintGeneratedClass W_ReplayMountedSubMesh.W_ReplayMountedSubMesh_C
class UW_ReplayMountedSubMesh_C : public UUserWidget
{
public:
	class UScrollBox*                            ScrollBox_129;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SubMeshName;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FReplaySubMesh                        ReplaySubMesh;                                     // 0x2D0(0x28)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_ReplayMountedSubMesh_C* GetDefaultObj();

};

}


