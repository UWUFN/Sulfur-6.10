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

// WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C
// 0x0080 (0x0548 - 0x04C8)
class UCollectionBookSectionPanel_C : public UFortCollectionBookSectionPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_0_1;                                                // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_2_3;                                                // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMainModeItemDetailsHostPanel_C*             MainModeItemDetailsHostPanel;                             // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         SlotItemInputAction;                                      // 0x04E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         InspectInputAction;                                       // 0x04F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemTitle;                                     // 0x0508(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ConfirmSlotItemMessage;                                   // 0x0520(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         BackInputActionName;                                      // 0x0538(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C");
		return ptr;
	}


	void OnUnslotItemConfirm(class UFortItem* Item);
	void OnResearchItemConfirm(class UFortItem* ResearchItem, const struct FFortCollectionBookSlotData& SlotData);
	void OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem);
	void OnSlotItemConfirm(class UFortItem* ItemToSlot);
	void ShowItemDetail(class UFortItem* SelectedItem);
	void Construct();
	void OnSectionChanged(class UFortCollectionBookSection** Section);
	void OnActivated();
	void Destruct();
	void ExecuteUbergraph_CollectionBookSectionPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
