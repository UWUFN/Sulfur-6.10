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

// Function AthenaReplayHUD.AthenaReplayHUD_C.TogglePlayerListVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::TogglePlayerListVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.TogglePlayerListVisibility");

	UAthenaReplayHUD_C_TogglePlayerListVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ShowCameraControls
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::ShowCameraControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ShowCameraControls");

	UAthenaReplayHUD_C_ShowCameraControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HideCameraControlsOnTimeout
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::HideCameraControlsOnTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HideCameraControlsOnTimeout");

	UAthenaReplayHUD_C_HideCameraControlsOnTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::HandleInputModeChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleInputModeChanged");

	UAthenaReplayHUD_C_HandleInputModeChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCameraChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType           CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::HandleCameraChange(class AFortPlayerControllerSpectating* PlayerController, ESpectatorCameraType CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCameraChange");

	UAthenaReplayHUD_C_HandleCameraChange_Params params;
	params.PlayerController = PlayerController;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleViewSettingsVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::ToggleViewSettingsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleViewSettingsVisibility");

	UAthenaReplayHUD_C_ToggleViewSettingsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.OnLevelStreamingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStreaming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::OnLevelStreamingChanged(bool bStreaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.OnLevelStreamingChanged");

	UAthenaReplayHUD_C_OnLevelStreamingChanged_Params params;
	params.bStreaming = bStreaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.Get Display Time in Minutes And Seconds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeInSeconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutText                        (Parm, OutParm)

void UAthenaReplayHUD_C::Get_Display_Time_in_Minutes_And_Seconds(float TimeInSeconds, struct FText* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.Get Display Time in Minutes And Seconds");

	UAthenaReplayHUD_C_Get_Display_Time_in_Minutes_And_Seconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.Bind Replay UI Events
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::Bind_Replay_UI_Events()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.Bind Replay UI Events");

	UAthenaReplayHUD_C_Bind_Replay_UI_Events_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HudVisibilityChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            NewVisibilty                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::HudVisibilityChangedFromNative(EHudVisibilityState NewVisibilty)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HudVisibilityChangedFromNative");

	UAthenaReplayHUD_C_HudVisibilityChangedFromNative_Params params;
	params.NewVisibilty = NewVisibilty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.TimelineRangeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::TimelineRangeChangedFromNative(float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.TimelineRangeChangedFromNative");

	UAthenaReplayHUD_C_TimelineRangeChangedFromNative_Params params;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.CurrentTimeChangedFromNative
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NowTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::CurrentTimeChangedFromNative(float NowTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.CurrentTimeChangedFromNative");

	UAthenaReplayHUD_C_CurrentTimeChangedFromNative_Params params;
	params.NowTime = NowTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::SetupCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.SetupCameraMode");

	UAthenaReplayHUD_C_SetupCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.CheckHUDElementVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 HUDElement                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UAthenaReplayHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.CheckHUDElementVisibility");

	UAthenaReplayHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaReplayHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.PopContentWidgetInternal");

	UAthenaReplayHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ShowPicker");

	UAthenaReplayHUD_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleFocusChat");

	UAthenaReplayHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleTopLevelMenu");

	UAthenaReplayHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ToggleChat");

	UAthenaReplayHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.SetPersistentHUDContentVisibility");

	UAthenaReplayHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleIndicatorModeChanged");

	UAthenaReplayHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.OnPlayerTargetingChanged");

	UAthenaReplayHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaReplayHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleKeybindsChanged");

	UAthenaReplayHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaReplayHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HandleCursorModeChanged");

	UAthenaReplayHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.OnEnterState");

	UAthenaReplayHUD_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.Destruct");

	UAthenaReplayHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)

void UAthenaReplayHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UAthenaReplayHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)

void UAthenaReplayHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UAthenaReplayHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaReplayHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.OnUnableToPerformAction");

	UAthenaReplayHUD_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaReplayHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.PushContentWidgetInternal");

	UAthenaReplayHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel** ViewModel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::ViewModelChanged(class UAthenaPlayerViewModel** ViewModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ViewModelChanged");

	UAthenaReplayHUD_C_ViewModelChanged_Params params;
	params.ViewModel = ViewModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.SetFullScreenMapVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::SetFullScreenMapVisibility(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.SetFullScreenMapVisibility");

	UAthenaReplayHUD_C_SetFullScreenMapVisibility_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaReplayHUD_C::BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature");

	UAthenaReplayHUD_C_BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.HUDVisibilitySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            HUDVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::HUDVisibilitySound(EHudVisibilityState HUDVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.HUDVisibilitySound");

	UAthenaReplayHUD_C_HUDVisibilitySound_Params params;
	params.HUDVisibility = HUDVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaReplayHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.Construct");

	UAthenaReplayHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HUDScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::OnHUDScaleChanged(float* HUDScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.OnHUDScaleChanged");

	UAthenaReplayHUD_C_OnHUDScaleChanged_Params params;
	params.HUDScale = HUDScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaReplayHUD.AthenaReplayHUD_C.ExecuteUbergraph_AthenaReplayHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaReplayHUD_C::ExecuteUbergraph_AthenaReplayHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaReplayHUD.AthenaReplayHUD_C.ExecuteUbergraph_AthenaReplayHUD");

	UAthenaReplayHUD_C_ExecuteUbergraph_AthenaReplayHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
