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

// WidgetBlueprintGeneratedClass MainTabsScreenNew.MainTabsScreenNew_C
// 0x0028 (0x0398 - 0x0370)
class UMainTabsScreenNew_C : public UFortMainTabsScreenBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                       TopTabContentWidgetSwitcher;                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       LastActiveTabId;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnclaimedResearchBangThreshold;                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	struct FTimerHandle                                UnclaimedResearchPointsHandle;                            // 0x0390(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainTabsScreenNew.MainTabsScreenNew_C");
		return ptr;
	}


	void Determine_If_Any_non_MTX_offers_are_purchasable(bool* ShowBang);
	void CheckDisplayCriteria(TEnumAsByte<EStoreOfferCosts> InCustomStoreOfferCost, const struct FCardPackOffer& InCardPackOffer, bool* bPassedDisplayCriteria);
	void GetCustomStoreOfferCost(const struct FCardPackOffer& InCardPackOffer, TEnumAsByte<EStoreOfferCosts>* OutCustomStoreOfferCost);
	void CheckHighestPriorityOffer(TArray<struct FCardPackOffer>* inOfferArray, struct FCardPackOffer* outPriorityOffer, bool* FoundOffer);
	void Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers);
	bool Is_Transform_Feature_Unlocked();
	void HandleCardPackStore(const struct FName& TabId);
	void HandleMtxStore(const struct FName& Tab_Id);
	void Handle_Unclaimed_Resources_Updated();
	void Toggle_Unclaimed_Research_Timer(bool Enable);
	void Determine_Unclaimed_Resources_at_Threshold(bool* Result);
	bool Are_Any_Nodes_Available_For_Purchase(const struct FName& NodePageId);
	void Update_Skills_Tab_Button_Bang(const struct FName& Tab);
	void Update_Store_Tab_Button_Bang(const struct FName& Tab);
	void Are_Any_Inventory_Items_Unseen(bool* Unseen);
	void Are_Any_Transform_Keys_Unseen(bool* Unseen);
	void Get_FortPC(class AFortPlayerController** FortPC);
	void Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem);
	void Update_Armory_Tab_Button_Bang(const struct FName& Tab);
	void Update_Quest_Tab_Button_Bang(const struct FName& Tab);
	void Update_Tab_Button_Bangs(const struct FName& InTab);
	void Update_Hero_Tab_Button_Bang(const struct FName& Tab);
	void Update_Squad_Tab_Button_Bang(const struct FName& Tab);
	void HandleTabSelected(const struct FName& TabName);
	void HandleTabCreated(const struct FName& TabId, class UCommonButton* TabButton);
	void OnActivated();
	void CustomEvent(const struct FName& TabId, class UCommonButton* TabButton);
	void Construct();
	void OnHomebaseInventoryUpdated();
	void HandleRefreshSkillTreeNodePage();
	void Destruct();
	void OnQuestSeen_Event_0_1(class UFortQuestItem* Quest);
	void SquadSlotMarkedAsSeen_Event_0_1();
	void HandleMainTabSelected(struct FName* TabNameID);
	void HandleMainTabCreated(struct FName* TabNameID, class UCommonButton** TabButton);
	void ExecuteUbergraph_MainTabsScreenNew(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
