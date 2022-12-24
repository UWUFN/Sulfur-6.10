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

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardGroupByTeam
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::ToggleScoreboardGroupByTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardGroupByTeam");

	UAthenaEventMatchInfoScreen_C_ToggleScoreboardGroupByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleEventScoreOnScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::ToggleEventScoreOnScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleEventScoreOnScoreboard");

	UAthenaEventMatchInfoScreen_C_ToggleEventScoreOnScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleTeamNumbersOnScoreboard
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::ToggleTeamNumbersOnScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleTeamNumbersOnScoreboard");

	UAthenaEventMatchInfoScreen_C_ToggleTeamNumbersOnScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScreenVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*       InScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bInHideIfAlreadyVisible        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchInfoScreen_C::ToggleScreenVisibility(class UCommonUserWidget* InScreen, bool bInHideIfAlreadyVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScreenVisibility");

	UAthenaEventMatchInfoScreen_C_ToggleScreenVisibility_Params params;
	params.InScreen = InScreen;
	params.bInHideIfAlreadyVisible = bInHideIfAlreadyVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::ToggleScoreboardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardVisibility");

	UAthenaEventMatchInfoScreen_C_ToggleScoreboardVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleMatchStatusVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::ToggleMatchStatusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleMatchStatusVisibility");

	UAthenaEventMatchInfoScreen_C_ToggleMatchStatusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.TogglePlayerGridVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInShowActivePlayers           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchInfoScreen_C::TogglePlayerGridVisibility(bool bInShowActivePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.TogglePlayerGridVisibility");

	UAthenaEventMatchInfoScreen_C_TogglePlayerGridVisibility_Params params;
	params.bInShowActivePlayers = bInShowActivePlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.SetCurrentScreenSortMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaEventMatchInfoSortMethod InSortMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchInfoScreen_C::SetCurrentScreenSortMethod(EAthenaEventMatchInfoSortMethod InSortMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.SetCurrentScreenSortMethod");

	UAthenaEventMatchInfoScreen_C_SetCurrentScreenSortMethod_Params params;
	params.InSortMethod = InSortMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.Construct");

	UAthenaEventMatchInfoScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaEventMatchInfoScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaEventMatchInfoScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UAthenaEventMatchInfoScreen_C_BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UAthenaEventMatchInfoScreen_C_BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaEventMatchInfoScreen_C::BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UAthenaEventMatchInfoScreen_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ExecuteUbergraph_AthenaEventMatchInfoScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchInfoScreen_C::ExecuteUbergraph_AthenaEventMatchInfoScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ExecuteUbergraph_AthenaEventMatchInfoScreen");

	UAthenaEventMatchInfoScreen_C_ExecuteUbergraph_AthenaEventMatchInfoScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
