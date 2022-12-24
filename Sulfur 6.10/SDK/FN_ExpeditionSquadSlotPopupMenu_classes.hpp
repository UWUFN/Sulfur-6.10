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

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C
// 0x009D (0x03C5 - 0x0328)
class UExpeditionSquadSlotPopupMenu_C : public UFortSquadSlotSelectorPopupMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut_;                                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            FadeIn;                                                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           CancelButton;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           EditSlotButton;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           InspectButton;                                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MainButtonVerticalBox;                                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       CollectionBookItemSlotId;                                 // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSlotItemInCollectionBook;                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FText                                       CollectionBookConfirmationDialogTitle;                    // 0x0370(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       CollectionBookConfirmationDialogMessage;                  // 0x0388(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SlotItemInCollectionBookAction;                           // 0x03A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BackAction;                                               // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortDialogExternalLatentActionHandle       CollectionBookLatentDialogHandle;                         // 0x03C0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ExpeditionSquadSlotPopupMenuButtons>   SelectedButton;                                           // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C");
		return ptr;
	}


	void GetItemInSlot(class UFortItem** Item);
	void OnActivated();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginOutro();
	void OnBeginIntro();
	void BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void HandlePostDifferentContextProviderSet();
	void Initialize();
	void ExecuteUbergraph_ExpeditionSquadSlotPopupMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
