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

// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_SpectateSpecialActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_SpectateSpecialActor(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_SpectateSpecialActor");

	UAthenaGameOverWidget_C_Handle_SpectateSpecialActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowSpecialActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaGameOverWidget_C::CanFollowSpecialActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowSpecialActor");

	UAthenaGameOverWidget_C_CanFollowSpecialActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.FocusPlayerSwitcher
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::FocusPlayerSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.FocusPlayerSwitcher");

	UAthenaGameOverWidget_C_FocusPlayerSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerLost
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndOfMatchReason              LostReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::OnPlayerLost(EEndOfMatchReason LostReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerLost");

	UAthenaGameOverWidget_C_OnPlayerLost_Params params;
	params.LostReason = LostReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinningScoreDetermined
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::OnWinningScoreDetermined(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinningScoreDetermined");

	UAthenaGameOverWidget_C_OnWinningScoreDetermined_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_CancelMatchmaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_CancelMatchmaking(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_CancelMatchmaking");

	UAthenaGameOverWidget_C_Handle_CancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_Matchmake
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_Matchmake(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_Matchmake");

	UAthenaGameOverWidget_C_Handle_Matchmake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InGameMatchmakingComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::InGameMatchmakingComplete(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.InGameMatchmakingComplete");

	UAthenaGameOverWidget_C_InGameMatchmakingComplete_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetViewModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*  ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::SetViewModel(class UAthenaPlayerViewModel* ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetViewModel");

	UAthenaGameOverWidget_C_SetViewModel_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowNextOrPreviousTeammate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaGameOverWidget_C::CanFollowNextOrPreviousTeammate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.CanFollowNextOrPreviousTeammate");

	UAthenaGameOverWidget_C_CanFollowNextOrPreviousTeammate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetKillersName
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  FortPlayerDeathReport          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaGameOverWidget_C::SetKillersName(struct FFortPlayerDeathReport* FortPlayerDeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.SetKillersName");

	UAthenaGameOverWidget_C_SetKillersName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPlayerDeathReport != nullptr)
		*FortPlayerDeathReport = params.FortPlayerDeathReport;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerOrTeamWon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnPlayerOrTeamWon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlayerOrTeamWon");

	UAthenaGameOverWidget_C_OnPlayerOrTeamWon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ViewMatchStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_ViewMatchStats(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ViewMatchStats");

	UAthenaGameOverWidget_C_Handle_ViewMatchStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReportPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_ReportPlayer(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReportPlayer");

	UAthenaGameOverWidget_C_Handle_ReportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::InputSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputSetup");

	UAthenaGameOverWidget_C_InputSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowPreviousTeammate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_FollowPreviousTeammate(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowPreviousTeammate");

	UAthenaGameOverWidget_C_Handle_FollowPreviousTeammate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowNextTeammate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_FollowNextTeammate(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_FollowNextTeammate");

	UAthenaGameOverWidget_C_Handle_FollowNextTeammate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::InputRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.InputRefresh");

	UAthenaGameOverWidget_C_InputRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReturnToLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::Handle_ReturnToLobby(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Handle_ReturnToLobby");

	UAthenaGameOverWidget_C_Handle_ReturnToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HighlightCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HighlightCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::HighlightCountChanged(int HighlightCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.HighlightCountChanged");

	UAthenaGameOverWidget_C_HighlightCountChanged_Params params;
	params.HighlightCount = HighlightCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinnerAnnounced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Winner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaGameOverWidget_C::OnWinnerAnnounced(const struct FString& Winner)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnWinnerAnnounced");

	UAthenaGameOverWidget_C_OnWinnerAnnounced_Params params;
	params.Winner = Winner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.HideExtraStuffForSpectating
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::HideExtraStuffForSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.HideExtraStuffForSpectating");

	UAthenaGameOverWidget_C_HideExtraStuffForSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnViewTargetChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnViewTargetChanged");

	UAthenaGameOverWidget_C_OnViewTargetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlaceChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::OnPlaceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPlaceChanged");

	UAthenaGameOverWidget_C_OnPlaceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPawnDied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaGameOverWidget_C::OnPawnDied(struct FFortPlayerDeathReport* DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnPawnDied");

	UAthenaGameOverWidget_C_OnPawnDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathReport != nullptr)
		*DeathReport = params.DeathReport;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGameOverWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Construct");

	UAthenaGameOverWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.On Kill Feed Updated
// (BlueprintCallable, BlueprintEvent)

void UAthenaGameOverWidget_C::On_Kill_Feed_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.On Kill Feed Updated");

	UAthenaGameOverWidget_C_On_Kill_Feed_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaGameOverWidget_C::BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature");

	UAthenaGameOverWidget_C_BndEvt__OpenShadowPlayHighlights_K2Node_ComponentBoundEvent_188_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaGameOverWidget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnDeactivated");

	UAthenaGameOverWidget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGameOverWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.Destruct");

	UAthenaGameOverWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaGameOverWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnActivated");

	UAthenaGameOverWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnToggleFullscreenMap_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFullscreenMapVisible          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::OnToggleFullscreenMap_Bind(bool bFullscreenMapVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.OnToggleFullscreenMap_Bind");

	UAthenaGameOverWidget_C_OnToggleFullscreenMap_Bind_Params params;
	params.bFullscreenMapVisible = bFullscreenMapVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.SpectatorStreamingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpectatorStreaming            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::SpectatorStreamingChanged(bool bSpectatorStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.SpectatorStreamingChanged");

	UAthenaGameOverWidget_C_SpectatorStreamingChanged_Params params;
	params.bSpectatorStreaming = bSpectatorStreaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGameOverWidget.AthenaGameOverWidget_C.ExecuteUbergraph_AthenaGameOverWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGameOverWidget_C::ExecuteUbergraph_AthenaGameOverWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGameOverWidget.AthenaGameOverWidget_C.ExecuteUbergraph_AthenaGameOverWidget");

	UAthenaGameOverWidget_C_ExecuteUbergraph_AthenaGameOverWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
