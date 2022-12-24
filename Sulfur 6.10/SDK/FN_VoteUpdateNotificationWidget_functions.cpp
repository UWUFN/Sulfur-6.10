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

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateKeybindWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::UpdateKeybindWidget(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateKeybindWidget");

	UVoteUpdateNotificationWidget_C_UpdateKeybindWidget_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UnbindEvents");

	UVoteUpdateNotificationWidget_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BindEvents");

	UVoteUpdateNotificationWidget_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::UpdateVoteTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteTimer");

	UVoteUpdateNotificationWidget_C_UpdateVoteTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ClearVoteTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::ClearVoteTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ClearVoteTimer");

	UVoteUpdateNotificationWidget_C_ClearVoteTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupVoteTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::SetupVoteTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupVoteTimer");

	UVoteUpdateNotificationWidget_C_SetupVoteTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::SetupText()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupText");

	UVoteUpdateNotificationWidget_C_SetupText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteAction
// (Public, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::UpdateVoteAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteAction");

	UVoteUpdateNotificationWidget_C_UpdateVoteAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            YesVoteCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NoVoteCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::UpdateVoteCounts(int YesVoteCount, int NoVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts");

	UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params params;
	params.YesVoteCount = YesVoteCount;
	params.NoVoteCount = NoVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType*                 VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           YesVoteCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NoVoteCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::OnVoteUpdated(EFortVoteType* VoteType, int* YesVoteCount, int* NoVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteUpdated");

	UVoteUpdateNotificationWidget_C_OnVoteUpdated_Params params;
	params.VoteType = VoteType;
	params.YesVoteCount = YesVoteCount;
	params.NoVoteCount = NoVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType*                 VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteArbitratorType*       ArbitratorType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           YesVoteCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NoVoteCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::OnVoteStarted(EFortVoteType* VoteType, EFortVoteArbitratorType* ArbitratorType, int* YesVoteCount, int* NoVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteStarted");

	UVoteUpdateNotificationWidget_C_OnVoteStarted_Params params;
	params.VoteType = VoteType;
	params.ArbitratorType = ArbitratorType;
	params.YesVoteCount = YesVoteCount;
	params.NoVoteCount = NoVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType*                 VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteArbitratorType*       ArbitratorType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          VoteSucceeded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::OnVoteEnded(EFortVoteType* VoteType, EFortVoteArbitratorType* ArbitratorType, bool* VoteSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteEnded");

	UVoteUpdateNotificationWidget_C_OnVoteEnded_Params params;
	params.VoteType = VoteType;
	params.ArbitratorType = ArbitratorType;
	params.VoteSucceeded = VoteSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Construct");

	UVoteUpdateNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	UVoteUpdateNotificationWidget_C_BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct");

	UVoteUpdateNotificationWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleOnOpenVoteDialog
// (BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::HandleOnOpenVoteDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleOnOpenVoteDialog");

	UVoteUpdateNotificationWidget_C_HandleOnOpenVoteDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::ExecuteUbergraph_VoteUpdateNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget");

	UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
