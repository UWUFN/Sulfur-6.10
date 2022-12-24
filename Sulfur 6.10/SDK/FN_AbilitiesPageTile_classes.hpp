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

// WidgetBlueprintGeneratedClass AbilitiesPageTile.AbilitiesPageTile_C
// 0x010C (0x0C4C - 0x0B40)
class UAbilitiesPageTile_C : public UFortAbilitiesPageTileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (Transient, DuplicateTransient)
	class UFortSZAwareImage*                           AbilityImage;                                             // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            AbilityName;                                              // 0x0B50(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxAbilityKeybind;                                    // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortAbilityKit*                             AbilityKit;                                               // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortGadgetItemDefinition*                   GadgetItemDef;                                            // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortItem*                                   AbilityItem;                                              // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityLocked;                                            // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET
	struct FFortUIPerk                                 AbilityUIPerk;                                            // 0x0B80(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                LockedColor;                                              // 0x0C18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                UnlockedColor;                                            // 0x0C28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        AbilityIconBrushSize;                                     // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	struct FLinearColor                                LockedAbilityIconColor;                                   // 0x0C3C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AbilitiesPageTile.AbilitiesPageTile_C");
		return ptr;
	}


	void SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk);
	void UpdateKeyBinding();
	void SetAbilityItemInfo(class UFortItem* SlottedAbilityItem);
	void Construct();
	void HandleInputMethodChanged(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_AbilitiesPageTile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
