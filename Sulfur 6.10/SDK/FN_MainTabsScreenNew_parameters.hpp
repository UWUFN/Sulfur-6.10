#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MainTabsScreenNew.MainTabsScreenNew_C.Determine If Any non-MTX offers are purchasable
struct UMainTabsScreenNew_C_Determine_If_Any_non_MTX_offers_are_purchasable_Params
{
	bool                                               ShowBang;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.CheckDisplayCriteria
struct UMainTabsScreenNew_C_CheckDisplayCriteria_Params
{
	TEnumAsByte<EStoreOfferCosts>                      InCustomStoreOfferCost;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCardPackOffer                              InCardPackOffer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bPassedDisplayCriteria;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.GetCustomStoreOfferCost
struct UMainTabsScreenNew_C_GetCustomStoreOfferCost_Params
{
	struct FCardPackOffer                              InCardPackOffer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EStoreOfferCosts>                      OutCustomStoreOfferCost;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.CheckHighestPriorityOffer
struct UMainTabsScreenNew_C_CheckHighestPriorityOffer_Params
{
	TArray<struct FCardPackOffer>                      inOfferArray;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FCardPackOffer                              outPriorityOffer;                                         // (Parm, OutParm)
	bool                                               FoundOffer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Get Valid Offers
struct UMainTabsScreenNew_C_Get_Valid_Offers_Params
{
	TArray<struct FCardPackOffer>                      Offers;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Is Transform Feature Unlocked
struct UMainTabsScreenNew_C_Is_Transform_Feature_Unlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleCardPackStore
struct UMainTabsScreenNew_C_HandleCardPackStore_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMtxStore
struct UMainTabsScreenNew_C_HandleMtxStore_Params
{
	struct FName                                       Tab_Id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Handle Unclaimed Resources Updated
struct UMainTabsScreenNew_C_Handle_Unclaimed_Resources_Updated_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Toggle Unclaimed Research Timer
struct UMainTabsScreenNew_C_Toggle_Unclaimed_Research_Timer_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Determine Unclaimed Resources at Threshold
struct UMainTabsScreenNew_C_Determine_Unclaimed_Resources_at_Threshold_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Nodes Available For Purchase
struct UMainTabsScreenNew_C_Are_Any_Nodes_Available_For_Purchase_Params
{
	struct FName                                       NodePageId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Skills Tab Button Bang
struct UMainTabsScreenNew_C_Update_Skills_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Store Tab Button Bang
struct UMainTabsScreenNew_C_Update_Store_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Inventory Items Unseen
struct UMainTabsScreenNew_C_Are_Any_Inventory_Items_Unseen_Params
{
	bool                                               Unseen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Are Any Transform Keys Unseen
struct UMainTabsScreenNew_C_Are_Any_Transform_Keys_Unseen_Params
{
	bool                                               Unseen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Get FortPC
struct UMainTabsScreenNew_C_Get_FortPC_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Get Item from Transform Seen State
struct UMainTabsScreenNew_C_Get_Item_from_Transform_Seen_State_Params
{
	class UFortAccountItem*                            TransformKey;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAccountItem*                            OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Armory Tab Button Bang
struct UMainTabsScreenNew_C_Update_Armory_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Quest Tab Button Bang
struct UMainTabsScreenNew_C_Update_Quest_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Tab Button Bangs
struct UMainTabsScreenNew_C_Update_Tab_Button_Bangs_Params
{
	struct FName                                       InTab;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Hero Tab Button Bang
struct UMainTabsScreenNew_C_Update_Hero_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Update Squad Tab Button Bang
struct UMainTabsScreenNew_C_Update_Squad_Tab_Button_Bang_Params
{
	struct FName                                       Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabSelected
struct UMainTabsScreenNew_C_HandleTabSelected_Params
{
	struct FName                                       TabName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleTabCreated
struct UMainTabsScreenNew_C_HandleTabCreated_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.OnActivated
struct UMainTabsScreenNew_C_OnActivated_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.CustomEvent
struct UMainTabsScreenNew_C_CustomEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Construct
struct UMainTabsScreenNew_C_Construct_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.OnHomebaseInventoryUpdated
struct UMainTabsScreenNew_C_OnHomebaseInventoryUpdated_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleRefreshSkillTreeNodePage
struct UMainTabsScreenNew_C_HandleRefreshSkillTreeNodePage_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.Destruct
struct UMainTabsScreenNew_C_Destruct_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.OnQuestSeen_Event_0_1
struct UMainTabsScreenNew_C_OnQuestSeen_Event_0_1_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.SquadSlotMarkedAsSeen_Event_0_1
struct UMainTabsScreenNew_C_SquadSlotMarkedAsSeen_Event_0_1_Params
{
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabSelected
struct UMainTabsScreenNew_C_HandleMainTabSelected_Params
{
	struct FName*                                      TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.HandleMainTabCreated
struct UMainTabsScreenNew_C_HandleMainTabCreated_Params
{
	struct FName*                                      TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton**                              TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainTabsScreenNew.MainTabsScreenNew_C.ExecuteUbergraph_MainTabsScreenNew
struct UMainTabsScreenNew_C_ExecuteUbergraph_MainTabsScreenNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
