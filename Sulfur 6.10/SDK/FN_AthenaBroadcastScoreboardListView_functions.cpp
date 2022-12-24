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

// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorScoreboardRowData* RowToSelect                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardListView_C::ResetFocus(class UAthenaSpectatorScoreboardRowData* RowToSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus");

	UAthenaBroadcastScoreboardListView_C_ResetFocus_Params params;
	params.RowToSelect = RowToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardListView_C::BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature");

	UAthenaBroadcastScoreboardListView_C_BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ExecuteUbergraph_AthenaBroadcastScoreboardListView
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboardListView_C::ExecuteUbergraph_AthenaBroadcastScoreboardListView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ExecuteUbergraph_AthenaBroadcastScoreboardListView");

	UAthenaBroadcastScoreboardListView_C_ExecuteUbergraph_AthenaBroadcastScoreboardListView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
