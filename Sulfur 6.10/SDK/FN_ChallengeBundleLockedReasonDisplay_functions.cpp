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

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.GetTimespanValue
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTimespan               Result                         (Parm, OutParm)

void UChallengeBundleLockedReasonDisplay_C::GetTimespanValue(struct FTimespan* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.GetTimespanValue");

	UChallengeBundleLockedReasonDisplay_C_GetTimespanValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.HandleTick
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundleLockedReasonDisplay_C::HandleTick(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.HandleTick");

	UChallengeBundleLockedReasonDisplay_C_HandleTick_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetTimespanSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortTimespanDataSource> Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundleLockedReasonDisplay_C::SetTimespanSource(const TScriptInterface<class UFortTimespanDataSource>& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetTimespanSource");

	UChallengeBundleLockedReasonDisplay_C_SetTimespanSource_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.UpdateLockReasonDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeBundleLockedReasonDisplay_C::UpdateLockReasonDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.UpdateLockReasonDisplay");

	UChallengeBundleLockedReasonDisplay_C_UpdateLockReasonDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetLockReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortChallengeBundleInfoLockedReason Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeBundleLockedReasonDisplay_C::SetLockReason(const struct FFortChallengeBundleInfoLockedReason& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetLockReason");

	UChallengeBundleLockedReasonDisplay_C_SetLockReason_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeBundleLockedReasonDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.Construct");

	UChallengeBundleLockedReasonDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.ExecuteUbergraph_ChallengeBundleLockedReasonDisplay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeBundleLockedReasonDisplay_C::ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.ExecuteUbergraph_ChallengeBundleLockedReasonDisplay");

	UChallengeBundleLockedReasonDisplay_C_ExecuteUbergraph_ChallengeBundleLockedReasonDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
