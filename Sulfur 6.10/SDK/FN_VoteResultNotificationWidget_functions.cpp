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

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.IsSinglePlayerVote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::IsSinglePlayerVote(EFortVoteType VoteType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.IsSinglePlayerVote");

	UVoteResultNotificationWidget_C_IsSinglePlayerVote_Params params;
	params.VoteType = VoteType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteArbitratorType        ArbitratorType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           VoteSucceeded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::Initialize(EFortVoteType VoteType, EFortVoteArbitratorType ArbitratorType, bool VoteSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize");

	UVoteResultNotificationWidget_C_Initialize_Params params;
	params.VoteType = VoteType;
	params.ArbitratorType = ArbitratorType;
	params.VoteSucceeded = VoteSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoteResultNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Construct");

	UVoteResultNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.HandleShowWidgetAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UVoteResultNotificationWidget_C::HandleShowWidgetAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.HandleShowWidgetAnimFinished");

	UVoteResultNotificationWidget_C_HandleShowWidgetAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType*                 VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteArbitratorType*       ArbitratorType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           YesVoteCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NoVoteCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::OnVoteStarted(EFortVoteType* VoteType, EFortVoteArbitratorType* ArbitratorType, int* YesVoteCount, int* NoVoteCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteStarted");

	UVoteResultNotificationWidget_C_OnVoteStarted_Params params;
	params.VoteType = VoteType;
	params.ArbitratorType = ArbitratorType;
	params.YesVoteCount = YesVoteCount;
	params.NoVoteCount = NoVoteCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType*                 VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteArbitratorType*       ArbitratorType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          VoteSucceeded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::OnVoteEnded(EFortVoteType* VoteType, EFortVoteArbitratorType* ArbitratorType, bool* VoteSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnVoteEnded");

	UVoteResultNotificationWidget_C_OnVoteEnded_Params params;
	params.VoteType = VoteType;
	params.ArbitratorType = ArbitratorType;
	params.VoteSucceeded = VoteSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::ExecuteUbergraph_VoteResultNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget");

	UVoteResultNotificationWidget_C_ExecuteUbergraph_VoteResultNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
