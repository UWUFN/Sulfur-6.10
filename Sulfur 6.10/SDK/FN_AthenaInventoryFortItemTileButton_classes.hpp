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

// WidgetBlueprintGeneratedClass AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C
// 0x0020 (0x0B68 - 0x0B48)
class UAthenaInventoryFortItemTileButton_C : public UAthenaInventoryFortItemTileButtonBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B48(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      DropTarget;                                               // 0x0B50(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    InputActionWrapper;                                       // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     ItemWidgetHolder;                                         // 0x0B60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaInventoryFortItemTileButton.AthenaInventoryFortItemTileButton_C");
		return ptr;
	}


	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	struct FEventReply On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	void UpdateInteractionWidgetVisibility();
	void OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void UpdateStyle();
	void BP_OnSelected();
	void ExecuteUbergraph_AthenaInventoryFortItemTileButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
