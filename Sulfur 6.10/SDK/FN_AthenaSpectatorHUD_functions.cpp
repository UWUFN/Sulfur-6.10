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

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindHudContextEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::UnbindHudContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindHudContextEvents");

	UAthenaSpectatorHUD_C_UnbindHudContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindHudContextEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::BindHudContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindHudContextEvents");

	UAthenaSpectatorHUD_C_BindHudContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.IsPlayerInGameOver
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsPlayerInGameOver            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bWasPlayerEliminated           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::IsPlayerInGameOver(bool* bIsPlayerInGameOver, bool* bWasPlayerEliminated)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.IsPlayerInGameOver");

	UAthenaSpectatorHUD_C_IsPlayerInGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsPlayerInGameOver != nullptr)
		*bIsPlayerInGameOver = params.bIsPlayerInGameOver;
	if (bWasPlayerEliminated != nullptr)
		*bWasPlayerEliminated = params.bWasPlayerEliminated;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HideGameOver
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HideGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HideGameOver");

	UAthenaSpectatorHUD_C_HideGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowGameOver
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowEliminated                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ShowGameOver(bool bShowEliminated)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowGameOver");

	UAthenaSpectatorHUD_C_ShowGameOver_Params params;
	params.bShowEliminated = bShowEliminated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnWinnerAnnounced
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WinnerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaSpectatorHUD_C::OnWinnerAnnounced(const struct FString& WinnerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnWinnerAnnounced");

	UAthenaSpectatorHUD_C_OnWinnerAnnounced_Params params;
	params.WinnerName = WinnerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindGameStateEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::UnbindGameStateEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindGameStateEvents");

	UAthenaSpectatorHUD_C_UnbindGameStateEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnKillFeedUpdated
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::OnKillFeedUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnKillFeedUpdated");

	UAthenaSpectatorHUD_C_OnKillFeedUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindGameStateEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::BindGameStateEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindGameStateEvents");

	UAthenaSpectatorHUD_C_BindGameStateEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindBroadcastEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::UnbindBroadcastEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindBroadcastEvents");

	UAthenaSpectatorHUD_C_UnbindBroadcastEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindSpectatingEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::UnbindSpectatingEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.UnbindSpectatingEvents");

	UAthenaSpectatorHUD_C_UnbindSpectatingEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindSpectatingEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::BindSpectatingEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindSpectatingEvents");

	UAthenaSpectatorHUD_C_BindSpectatingEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerDied
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*        InDeadPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnPlayerDied(class AFortPlayerState* InDeadPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerDied");

	UAthenaSpectatorHUD_C_OnPlayerDied_Params params;
	params.InDeadPlayerState = InDeadPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupEventInfoScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetupEventInfoScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupEventInfoScreen");

	UAthenaSpectatorHUD_C_SetupEventInfoScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Game Phase Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhase               NewPhase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::Game_Phase_Changed(EAthenaGamePhase NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Game Phase Changed");

	UAthenaSpectatorHUD_C_Game_Phase_Changed_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupTransportWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetupTransportWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupTransportWidget");

	UAthenaSpectatorHUD_C_SetupTransportWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupBattlebusButton
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetupBattlebusButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupBattlebusButton");

	UAthenaSpectatorHUD_C_SetupBattlebusButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorPlayerStatusVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::SpectatorPlayerStatusVisibilityChanged(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorPlayerStatusVisibilityChanged");

	UAthenaSpectatorHUD_C_SpectatorPlayerStatusVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorMatchStatusVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::SpectatorMatchStatusVisibilityChanged(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorMatchStatusVisibilityChanged");

	UAthenaSpectatorHUD_C_SpectatorMatchStatusVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetQuickbarSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetQuickbarSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetQuickbarSizes");

	UAthenaSpectatorHUD_C_SetQuickbarSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleQuickbarSlot FocusSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 Quickbar_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleQuickbarSlot_FocusSlotChanged(EFortQuickBars Quickbar_Index, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleQuickbarSlot FocusSlotChanged");

	UAthenaSpectatorHUD_C_HandleQuickbarSlot_FocusSlotChanged_Params params;
	params.Quickbar_Index = Quickbar_Index;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindBroadcastEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::BindBroadcastEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindBroadcastEvents");

	UAthenaSpectatorHUD_C_BindBroadcastEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleOffAirWidgetVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleOffAirWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleOffAirWidgetVisibility");

	UAthenaSpectatorHUD_C_ToggleOffAirWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TogglePlayerListVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::TogglePlayerListVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TogglePlayerListVisibility");

	UAthenaSpectatorHUD_C_TogglePlayerListVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCameraChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType           CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleCameraChange(class AFortPlayerControllerSpectating* PlayerController, ESpectatorCameraType CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCameraChange");

	UAthenaSpectatorHUD_C_HandleCameraChange_Params params;
	params.PlayerController = PlayerController;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleViewSettingsVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleViewSettingsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleViewSettingsVisibility");

	UAthenaSpectatorHUD_C_ToggleViewSettingsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnLevelStreamingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStreaming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnLevelStreamingChanged(bool bStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnLevelStreamingChanged");

	UAthenaSpectatorHUD_C_OnLevelStreamingChanged_Params params;
	params.bStreaming = bStreaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Get Display Time in Minutes And Seconds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeInSeconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutText                        (Parm, OutParm)

void UAthenaSpectatorHUD_C::Get_Display_Time_in_Minutes_And_Seconds(float TimeInSeconds, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Get Display Time in Minutes And Seconds");

	UAthenaSpectatorHUD_C_Get_Display_Time_in_Minutes_And_Seconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Bind Replay UI Events
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::Bind_Replay_UI_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Bind Replay UI Events");

	UAthenaSpectatorHUD_C_Bind_Replay_UI_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HudVisibilityChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            NewVisibilty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HudVisibilityChangedFromNative(EHudVisibilityState NewVisibilty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HudVisibilityChangedFromNative");

	UAthenaSpectatorHUD_C_HudVisibilityChangedFromNative_Params params;
	params.NewVisibilty = NewVisibilty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TimelineRangeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::TimelineRangeChangedFromNative(float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TimelineRangeChangedFromNative");

	UAthenaSpectatorHUD_C_TimelineRangeChangedFromNative_Params params;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CurrentTimeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NowTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::CurrentTimeChangedFromNative(float NowTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CurrentTimeChangedFromNative");

	UAthenaSpectatorHUD_C_CurrentTimeChangedFromNative_Params params;
	params.NowTime = NowTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetupCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode");

	UAthenaSpectatorHUD_C_SetupCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 HUDElement                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UAthenaSpectatorHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility");

	UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaSpectatorHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal");

	UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker");

	UAthenaSpectatorHUD_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat");

	UAthenaSpectatorHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu");

	UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat");

	UAthenaSpectatorHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility");

	UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged");

	UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged");

	UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged");

	UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged");

	UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct");

	UAthenaSpectatorHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction");

	UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal");

	UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel** ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ViewModelChanged(class UAthenaPlayerViewModel** ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ViewModelChanged");

	UAthenaSpectatorHUD_C_ViewModelChanged_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetFullScreenMapVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::SetFullScreenMapVisibility(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetFullScreenMapVisibility");

	UAthenaSpectatorHUD_C_SetFullScreenMapVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorHUD_C::BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HUDVisibilitySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            HUDVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HUDVisibilitySound(EHudVisibilityState HUDVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HUDVisibilitySound");

	UAthenaSpectatorHUD_C_HUDVisibilitySound_Params params;
	params.HUDVisibility = HUDVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState");

	UAthenaSpectatorHUD_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HUDScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnHUDScaleChanged(float* HUDScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDScaleChanged");

	UAthenaSpectatorHUD_C_OnHUDScaleChanged_Params params;
	params.HUDScale = HUDScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct");

	UAthenaSpectatorHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorHUD_C::BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorHUD_C::BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByEliminations
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SortEventMatchInfoByEliminations()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByEliminations");

	UAthenaSpectatorHUD_C_SortEventMatchInfoByEliminations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByPlace
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SortEventMatchInfoByPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByPlace");

	UAthenaSpectatorHUD_C_SortEventMatchInfoByPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchStatusVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleEventMatchStatusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchStatusVisibility");

	UAthenaSpectatorHUD_C_ToggleEventMatchStatusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchScoreboardVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleEventMatchScoreboardVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchScoreboardVisibility");

	UAthenaSpectatorHUD_C_ToggleEventMatchScoreboardVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchEliminatedPlayerGridVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleEventMatchEliminatedPlayerGridVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchEliminatedPlayerGridVisibility");

	UAthenaSpectatorHUD_C_ToggleEventMatchEliminatedPlayerGridVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchActivePlayerGridVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleEventMatchActivePlayerGridVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchActivePlayerGridVisibility");

	UAthenaSpectatorHUD_C_ToggleEventMatchActivePlayerGridVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTeamNumbersOnEventMatchScoreboard
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleTeamNumbersOnEventMatchScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTeamNumbersOnEventMatchScoreboard");

	UAthenaSpectatorHUD_C_ToggleTeamNumbersOnEventMatchScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByScore
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SortEventMatchInfoByScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SortEventMatchInfoByScore");

	UAthenaSpectatorHUD_C_SortEventMatchInfoByScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleScoreOnEventMatchScoreboard
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleScoreOnEventMatchScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleScoreOnEventMatchScoreboard");

	UAthenaSpectatorHUD_C_ToggleScoreOnEventMatchScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PreConstruct");

	UAthenaSpectatorHUD_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchScoreboardGroupByTeam
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::ToggleEventMatchScoreboardGroupByTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleEventMatchScoreboardGroupByTeam");

	UAthenaSpectatorHUD_C_ToggleEventMatchScoreboardGroupByTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ExecuteUbergraph_AthenaSpectatorHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD");

	UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
