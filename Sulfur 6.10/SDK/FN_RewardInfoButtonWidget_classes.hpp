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

// WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C
// 0x0048 (0x0B80 - 0x0B38)
class URewardInfoButtonWidget_C : public UFortRewardInfoButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B38(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              ItemDetails;                                              // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            ItemInfo;                                                 // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       DisplayNameText;                                          // 0x0B50(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DisplayQuantity;                                          // 0x0B68(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C");
		return ptr;
	}


	void GetDisplayName(struct FText* DisplayName);
	void SetShowDescriptionBP(bool* bInShowDescription);
	void HandleDifferentItemOrQuantitySetBP();
	void ExecuteUbergraph_RewardInfoButtonWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
