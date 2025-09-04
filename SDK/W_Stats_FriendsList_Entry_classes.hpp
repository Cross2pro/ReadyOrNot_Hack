#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x208 (0x17E0 - 0x15D8)
// WidgetBlueprintGeneratedClass W_Stats_FriendsList_Entry.W_Stats_FriendsList_Entry_C
class UW_Stats_FriendsList_Entry_C : public UCommonButtonImplementation
{
public:
	uint8                                        Pad_2AE4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_PlayerPlatformName;                             // 0x15E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_CrossplayIcon;                                 // 0x15F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icn_PlatformIcon;                                  // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Avatar;                                        // 0x1600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayerName;                                    // 0x1608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_PlayerName_Platform;                           // 0x1610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFriend                               Friend;                                            // 0x1618(0x1C8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Stats_FriendsList_Entry_C* GetDefaultObj();

	void UpdatePlatformIcon(enum class EGamePlatform CallFunc_GetPlatform_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetPlatformIcon_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UpdateFriend(const struct FFriend& Friend, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnImageFetched(class UTexture2D* InTexture);
	void OnCurrentTextStyleChanged();
	void UpdateAvatar();
	void ExecuteUbergraph_W_Stats_FriendsList_Entry(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_GetProfileResizedURI_ReturnValue, class UTexture2D* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


