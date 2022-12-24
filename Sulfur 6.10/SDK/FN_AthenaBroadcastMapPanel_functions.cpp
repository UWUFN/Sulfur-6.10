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

// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ViewProfile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::ViewProfile(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ViewProfile");

	UAthenaBroadcastMapPanel_C_ViewProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnSortMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastMapPanel_C::OnSortMethodChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnSortMethodChanged");

	UAthenaBroadcastMapPanel_C_OnSortMethodChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.InputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::InputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.InputMethodChanged");

	UAthenaBroadcastMapPanel_C_InputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.SetScoreboardInputHandlerStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bScoreboardVisible             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::SetScoreboardInputHandlerStates(bool bScoreboardVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.SetScoreboardInputHandlerStates");

	UAthenaBroadcastMapPanel_C_SetScoreboardInputHandlerStates_Params params;
	params.bScoreboardVisible = bScoreboardVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ShowScoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::ShowScoreboard(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ShowScoreboard");

	UAthenaBroadcastMapPanel_C_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.HideScoreboard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::HideScoreboard(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.HideScoreboard");

	UAthenaBroadcastMapPanel_C_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.SetSortByInputHandlerStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bScoreboardVisible             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::SetSortByInputHandlerStates(bool bScoreboardVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.SetSortByInputHandlerStates");

	UAthenaBroadcastMapPanel_C_SetSortByInputHandlerStates_Params params;
	params.bScoreboardVisible = bScoreboardVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.InitializeInputHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaBroadcastMapPanel_C::InitializeInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.InitializeInputHandlers");

	UAthenaBroadcastMapPanel_C_InitializeInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.IsWidgetLocationVisible
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               WidgetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::IsWidgetLocationVisible(const struct FVector2D& WidgetLocation, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.IsWidgetLocationVisible");

	UAthenaBroadcastMapPanel_C_IsWidgetLocationVisible_Params params;
	params.WidgetLocation = WidgetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.GetScreenToMapWidgetLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ScreenLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               WidgetLocation                 (Parm, OutParm, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::GetScreenToMapWidgetLocation(const struct FVector2D& ScreenLocation, struct FVector2D* WidgetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.GetScreenToMapWidgetLocation");

	UAthenaBroadcastMapPanel_C_GetScreenToMapWidgetLocation_Params params;
	params.ScreenLocation = ScreenLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetLocation != nullptr)
		*WidgetLocation = params.WidgetLocation;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaBroadcastMapPanel_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonUp");

	UAthenaBroadcastMapPanel_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaBroadcastMapPanel_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseButtonDown");

	UAthenaBroadcastMapPanel_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaBroadcastMapPanel_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseMove");

	UAthenaBroadcastMapPanel_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaBroadcastMapPanel_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnMouseWheel");

	UAthenaBroadcastMapPanel_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBroadcastMapPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.Construct");

	UAthenaBroadcastMapPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaBroadcastMapPanel_C_BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::OnInputModeChanged(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnInputModeChanged");

	UAthenaBroadcastMapPanel_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaBroadcastMapPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.OnActivated");

	UAthenaBroadcastMapPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ExecuteUbergraph_AthenaBroadcastMapPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBroadcastMapPanel_C::ExecuteUbergraph_AthenaBroadcastMapPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C.ExecuteUbergraph_AthenaBroadcastMapPanel");

	UAthenaBroadcastMapPanel_C_ExecuteUbergraph_AthenaBroadcastMapPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
