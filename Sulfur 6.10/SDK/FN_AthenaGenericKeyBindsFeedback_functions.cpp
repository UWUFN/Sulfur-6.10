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

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.RefreshGhostModeKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::RefreshGhostModeKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.RefreshGhostModeKeys");

	UAthenaGenericKeyBindsFeedback_C_RefreshGhostModeKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.GetKeybindInputType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECommonInputType               InputType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaGenericKeyBindsFeedback_C::GetKeybindInputType(ECommonInputType* InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.GetKeybindInputType");

	UAthenaGenericKeyBindsFeedback_C_GetKeybindInputType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputType != nullptr)
		*InputType = params.InputType;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.Construct");

	UAthenaGenericKeyBindsFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HideFeedback
// (BlueprintCallable, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::HideFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HideFeedback");

	UAthenaGenericKeyBindsFeedback_C_HideFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ShowFeedback
// (BlueprintCallable, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::ShowFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ShowFeedback");

	UAthenaGenericKeyBindsFeedback_C_ShowFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.OnKeybindsChanged_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::OnKeybindsChanged_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.OnKeybindsChanged_Bind");

	UAthenaGenericKeyBindsFeedback_C_OnKeybindsChanged_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnGhostModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnteredGhostMode              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGenericKeyBindsFeedback_C::HandleOnGhostModeChanged(bool bEnteredGhostMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnGhostModeChanged");

	UAthenaGenericKeyBindsFeedback_C_HandleOnGhostModeChanged_Params params;
	params.bEnteredGhostMode = bEnteredGhostMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnEnterExitVehicle
// (BlueprintCallable, BlueprintEvent)

void UAthenaGenericKeyBindsFeedback_C::HandleOnEnterExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnEnterExitVehicle");

	UAthenaGenericKeyBindsFeedback_C_HandleOnEnterExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ExecuteUbergraph_AthenaGenericKeyBindsFeedback
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaGenericKeyBindsFeedback_C::ExecuteUbergraph_AthenaGenericKeyBindsFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ExecuteUbergraph_AthenaGenericKeyBindsFeedback");

	UAthenaGenericKeyBindsFeedback_C_ExecuteUbergraph_AthenaGenericKeyBindsFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
