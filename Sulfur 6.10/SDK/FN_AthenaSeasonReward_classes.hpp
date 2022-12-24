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

// WidgetBlueprintGeneratedClass AthenaSeasonReward.AthenaSeasonReward_C
// 0x007C (0x0B94 - 0x0B18)
class UAthenaSeasonReward_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            Intro;                                                    // 0x0B20(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ClaimedImage;                                             // 0x0B28(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      ItemCard;                                                 // 0x0B30(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      LockedImage;                                              // 0x0B38(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      RarityFlare;                                              // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      RevealOverlay;                                            // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortItem*                                   StrongItemToRepresent;                                    // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnReveal;                                            // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ViewOnHover;                                              // 0x0B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B61(0x0007) MISSED OFFSET
	class UFortItem*                                   SecondaryItem;                                            // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ShowVariantTimer;                                         // 0x0B70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ResetVariantTimer;                                        // 0x0B78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                VariantIndex;                                             // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingForVaultToChange;                                  // 0x0B84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B85(0x0003) MISSED OFFSET
	float                                              TimeBetweenVariants;                                      // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenVariantsRestart;                               // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VariantTimerIndex;                                        // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaSeasonReward.AthenaSeasonReward_C");
		return ptr;
	}


	void ResetVariantToDefault();
	void GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>* Cosmetics, TArray<class UFortItem*>* Temporary_Items);
	void CancelVariantTimer();
	void StartVariantTimer(float OverrideTimer);
	void GetAthenaItemCharacterItemDefinition(class UAthenaCharacterItemDefinition** AsAthena_Character_Item_Definition);
	void OnVaultItemsChanged(TArray<class UFortItem*>* Items);
	void ShowNextVariant();
	void StopCyclingVariants();
	void BeginCyclingVariants();
	void ViewInVaultByUser();
	void ViewInVault(TArray<class UFortItem*> Additional_Items);
	void SetSecondaryItem(class UFortItem* SecondaryItem);
	void EnableRarityFlare();
	void SetViewOnHover(bool ShouldViewOnHover);
	void SetState(bool Claimed, bool Locked, bool LevelAchieved);
	void Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, EFortItemCardSize ItemCardSize);
	void BP_OnHovered();
	void PlayIntro();
	void ViewItem();
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaSeasonReward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
