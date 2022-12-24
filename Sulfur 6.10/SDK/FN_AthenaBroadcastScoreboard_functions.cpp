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

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaBroadcastScoreboard_C::UpdateListUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI");

	UAthenaBroadcastScoreboard_C_UpdateListUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::SortByState(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByState");

	UAthenaBroadcastScoreboard_C_SortByState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::SortByName(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByName");

	UAthenaBroadcastScoreboard_C_SortByName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::SortByTeam(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByTeam");

	UAthenaBroadcastScoreboard_C_SortByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByKills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::SortByKills(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByKills");

	UAthenaBroadcastScoreboard_C_SortByKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetArrowStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::SetArrowStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetArrowStates");

	UAthenaBroadcastScoreboard_C_SetArrowStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::SetButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetButtonStates");

	UAthenaBroadcastScoreboard_C_SetButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D*              MapWidgetLocation              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaBroadcastScoreboard_C::IsMapWidgetLocationVisible(struct FVector2D* MapWidgetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible");

	UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params params;
	params.MapWidgetLocation = MapWidgetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct");

	UAthenaBroadcastScoreboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetSortMethod
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EScoreboardSortMethod*         InSortMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::SetSortMethod(EScoreboardSortMethod* InSortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetSortMethod");

	UAthenaBroadcastScoreboard_C_SetSortMethod_Params params;
	params.InSortMethod = InSortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastScoreboard_C::ResetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus");

	UAthenaBroadcastScoreboard_C_ResetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastScoreboard_C::ExecuteUbergraph_AthenaBroadcastScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard");

	UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
