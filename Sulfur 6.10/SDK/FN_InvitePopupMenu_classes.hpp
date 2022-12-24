#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InvitePopupMenu.InvitePopupMenu_C
// 0x00F0 (0x0410 - 0x0320)
class UInvitePopupMenu_C : public UCommonPopupMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (Transient, DuplicateTransient)
	class UIconTextButton_C*                           CancelButton;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           InviteAsFriendButton;                                     // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           InviteToPartyButton;                                      // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MainButtonVerticalBox;                                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                            UniqueNetId;                                              // 0x0348(0x0028) (Edit, BlueprintVisible)
	struct FUniqueNetIdRepl                            ConsoleUniqueNetId;                                       // 0x0370(0x0028) (Edit, BlueprintVisible)
	struct FText                                       PlayerName;                                               // 0x0398(0x0018) (Edit, BlueprintVisible)
	struct FText                                       AddFriendText;                                            // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptInviteText;                                         // 0x03C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SentInviteText;                                           // 0x03E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       AcceptedInviteText;                                       // 0x03F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InvitePopupMenu.InvitePopupMenu_C");
		return ptr;
	}


	void GetNetId(struct FUniqueNetIdRepl* NetId, bool* bIsConsoleUniqueId);
	void InitializeValues(const struct FUniqueNetIdRepl& InUniqueNetId, const struct FUniqueNetIdRepl& InConsoleNetId, const struct FText& InPlayerName);
	void InvitePlayerToParty();
	void InvitePlayerAsFriend();
	void CanAddAsFriend(bool* bCanFriendPlayer);
	void CanInviteToParty(bool* CanInviteToParty);
	void BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void ExecuteUbergraph_InvitePopupMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
