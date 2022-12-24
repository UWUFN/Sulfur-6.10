// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainTabsScreenNew.MainTabsScreenNew_C.Determine If Any non-MTX offers are purchasable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowBang                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Determine_If_Any_non_MTX_offers_are_purchasable(bool* ShowBang)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Determine If Any non-MTX offers are purchasable");

	UMainTabsScreenNew_C_Determine_If_Any_non_MTX_offers_are_purchasable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowBang != nullptr)
		*ShowBang = params.ShowBang;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.CheckDisplayCriteria
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EStoreOfferCosts>  InCustomStoreOfferCost         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCardPackOffer          InCardPackOffer                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bPassedDisplayCriteria         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::CheckDisplayCriteria(TEnumAsByte<EStoreOfferCosts> InCustomStoreOfferCost, const struct FCardPackOffer& InCardPackOffer, bool* bPassedDisplayCriteria)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.CheckDisplayCriteria");

	UMainTabsScreenNew_C_CheckDisplayCriteria_Params params;
	params.InCustomStoreOfferCost = InCustomStoreOfferCost;
	params.InCardPackOffer = InCardPackOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassedDisplayCriteria != nullptr)
		*bPassedDisplayCriteria = params.bPassedDisplayCriteria;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.GetCustomStoreOfferCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCardPackOffer          InCardPackOffer                (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EStoreOfferCosts>  OutCustomStoreOfferCost        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::GetCustomStoreOfferCost(const struct FCardPackOffer& InCardPackOffer, TEnumAsByte<EStoreOfferCosts>* OutCustomStoreOfferCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.GetCustomStoreOfferCost");

	UMainTabsScreenNew_C_GetCustomStoreOfferCost_Params params;
	params.InCardPackOffer = InCardPackOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomStoreOfferCost != nullptr)
		*OutCustomStoreOfferCost = params.OutCustomStoreOfferCost;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.CheckHighestPriorityOffer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCardPackOffer>  inOfferArray                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FCardPackOffer          outPriorityOffer               (Parm, OutParm)
// bool                           FoundOffer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::CheckHighestPriorityOffer(TArray<struct FCardPackOffer>* inOfferArray, struct FCardPackOffer* outPriorityOffer, bool* FoundOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.CheckHighestPriorityOffer");

	UMainTabsScreenNew_C_CheckHighestPriorityOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inOfferArray != nullptr)
		*inOfferArray = params.inOfferArray;
	if (outPriorityOffer != nullptr)
		*outPriorityOffer = params.outPriorityOffer;
	if (FoundOffer != nullptr)
		*FoundOffer = params.FoundOffer;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Get Valid Offers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCardPackOffer>  Offers                         (Parm, OutParm, ZeroConstructor)

void UMainTabsScreenNew_C::Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Get Valid Offers");

	UMainTabsScreenNew_C_Get_Valid_Offers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offers != nullptr)
		*Offers = params.Offers;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Is Transform Feature Unlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainTabsScreenNew_C::Is_Transform_Feature_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Is Transform Feature Unlocked");

	UMainTabsScreenNew_C_Is_Transform_Feature_Unlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleCardPackStore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::HandleCardPackStore(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleCardPackStore");

	UMainTabsScreenNew_C_HandleCardPackStore_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMtxStore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab_Id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::HandleMtxStore(const struct FName& Tab_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMtxStore");

	UMainTabsScreenNew_C_HandleMtxStore_Params params;
	params.Tab_Id = Tab_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Handle Unclaimed Resources Updated
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabsScreenNew_C::Handle_Unclaimed_Resources_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Handle Unclaimed Resources Updated");

	UMainTabsScreenNew_C_Handle_Unclaimed_Resources_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Toggle Unclaimed Research Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Toggle_Unclaimed_Research_Timer(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Toggle Unclaimed Research Timer");

	UMainTabsScreenNew_C_Toggle_Unclaimed_Research_Timer_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Determine Unclaimed Resources at Threshold
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Determine_Unclaimed_Resources_at_Threshold(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Determine Unclaimed Resources at Threshold");

	UMainTabsScreenNew_C_Determine_Unclaimed_Resources_at_Threshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Nodes Available For Purchase
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NodePageId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainTabsScreenNew_C::Are_Any_Nodes_Available_For_Purchase(const struct FName& NodePageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Nodes Available For Purchase");

	UMainTabsScreenNew_C_Are_Any_Nodes_Available_For_Purchase_Params params;
	params.NodePageId = NodePageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Skills Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Skills_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Skills Tab Button Bang");

	UMainTabsScreenNew_C_Update_Skills_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Store Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Store_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Store Tab Button Bang");

	UMainTabsScreenNew_C_Update_Store_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Inventory Items Unseen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unseen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Are_Any_Inventory_Items_Unseen(bool* Unseen)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Inventory Items Unseen");

	UMainTabsScreenNew_C_Are_Any_Inventory_Items_Unseen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unseen != nullptr)
		*Unseen = params.Unseen;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Transform Keys Unseen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unseen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Are_Any_Transform_Keys_Unseen(bool* Unseen)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Transform Keys Unseen");

	UMainTabsScreenNew_C_Are_Any_Transform_Keys_Unseen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unseen != nullptr)
		*Unseen = params.Unseen;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Get FortPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   FortPC                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Get_FortPC(class AFortPlayerController** FortPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Get FortPC");

	UMainTabsScreenNew_C_Get_FortPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPC != nullptr)
		*FortPC = params.FortPC;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Get Item from Transform Seen State
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*        TransformKey                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAccountItem*        OutItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Get Item from Transform Seen State");

	UMainTabsScreenNew_C_Get_Item_from_Transform_Seen_State_Params params;
	params.TransformKey = TransformKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Armory Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Armory_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Armory Tab Button Bang");

	UMainTabsScreenNew_C_Update_Armory_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Quest Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Quest_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Quest Tab Button Bang");

	UMainTabsScreenNew_C_Update_Quest_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Tab Button Bangs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTab                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Tab_Button_Bangs(const struct FName& InTab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Tab Button Bangs");

	UMainTabsScreenNew_C_Update_Tab_Button_Bangs_Params params;
	params.InTab = InTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Hero Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Hero_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Hero Tab Button Bang");

	UMainTabsScreenNew_C_Update_Hero_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Squad Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::Update_Squad_Tab_Button_Bang(const struct FName& Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Update Squad Tab Button Bang");

	UMainTabsScreenNew_C_Update_Squad_Tab_Button_Bang_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::HandleTabSelected(const struct FName& TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabSelected");

	UMainTabsScreenNew_C_HandleTabSelected_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainTabsScreenNew_C::HandleTabCreated(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabCreated");

	UMainTabsScreenNew_C_HandleTabCreated_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMainTabsScreenNew_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.OnActivated");

	UMainTabsScreenNew_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainTabsScreenNew_C::CustomEvent(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.CustomEvent");

	UMainTabsScreenNew_C_CustomEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainTabsScreenNew_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Construct");

	UMainTabsScreenNew_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.OnHomebaseInventoryUpdated
// (BlueprintCallable, BlueprintEvent)

void UMainTabsScreenNew_C::OnHomebaseInventoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.OnHomebaseInventoryUpdated");

	UMainTabsScreenNew_C_OnHomebaseInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleRefreshSkillTreeNodePage
// (Event, Protected, BlueprintEvent)

void UMainTabsScreenNew_C::HandleRefreshSkillTreeNodePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleRefreshSkillTreeNodePage");

	UMainTabsScreenNew_C_HandleRefreshSkillTreeNodePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainTabsScreenNew_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.Destruct");

	UMainTabsScreenNew_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.OnQuestSeen_Event_0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::OnQuestSeen_Event_0_1(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.OnQuestSeen_Event_0_1");

	UMainTabsScreenNew_C_OnQuestSeen_Event_0_1_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.SquadSlotMarkedAsSeen_Event_0_1
// (BlueprintCallable, BlueprintEvent)

void UMainTabsScreenNew_C::SquadSlotMarkedAsSeen_Event_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.SquadSlotMarkedAsSeen_Event_0_1");

	UMainTabsScreenNew_C_SquadSlotMarkedAsSeen_Event_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::HandleMainTabSelected(struct FName* TabNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabSelected");

	UMainTabsScreenNew_C_HandleMainTabSelected_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton**          TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainTabsScreenNew_C::HandleMainTabCreated(struct FName* TabNameID, class UCommonButton** TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabCreated");

	UMainTabsScreenNew_C_HandleMainTabCreated_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabsScreenNew.MainTabsScreenNew_C.ExecuteUbergraph_MainTabsScreenNew
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabsScreenNew_C::ExecuteUbergraph_MainTabsScreenNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabsScreenNew.MainTabsScreenNew_C.ExecuteUbergraph_MainTabsScreenNew");

	UMainTabsScreenNew_C_ExecuteUbergraph_MainTabsScreenNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
