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

// WidgetBlueprintGeneratedClass AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C
// 0x0021 (0x0B51 - 0x0B30)
class UAthenaInventoryEquipSlot_C : public UAthenaInventoryEquipButtonBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B30(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      DropTarget;                                               // 0x0B38(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ItemLocked;                                               // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaGadgetFuelGauge_C*                    JetpackFuelGauge;                                         // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsDragHovered;                                            // 0x0B50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C");
		return ptr;
	}


	void Show_Athena_Gadget_Fuel_Widget(class UFortItem* Item);
	void Hide_Athena_Gadget_Fuel_Widget();
	void Update_Athena_Gadget_Fuel_Widget(class UFortItem* ItemInSlot);
	void IsFocusOfDrop(bool* IsDragHovered);
	bool CanEquipFortItem(class UObject* Object);
	bool OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	bool IsDraggingEquipableItem();
	void TryAndShowDropTarget();
	void OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void RefreshItem();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnQuickbarContentsChanged_Event_0_1(EFortQuickBars QuickbarIndex, TArray<int> ChangedSlots);
	void BP_OnClicked();
	void OnAddedToFocusPath(struct FFocusEvent* InFocusEvent);
	void BP_OnSelected();
	void BP_OnDeselected();
	void BP_OnDoubleClicked();
	void OnInventoryItemSelected_Event_0_1(class UFortItem* Item);
	void OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void ExecuteUbergraph_AthenaInventoryEquipSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
