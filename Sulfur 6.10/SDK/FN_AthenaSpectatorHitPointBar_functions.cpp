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

// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.InitializeBar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHitPointBar_C::InitializeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.InitializeBar");

	UAthenaSpectatorHitPointBar_C_InitializeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.PreConstruct");

	UAthenaSpectatorHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBars_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHitPointBar_C::UpdateBars_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.UpdateBars_BP");

	UAthenaSpectatorHitPointBar_C_UpdateBars_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHitPointBar_C::OnDBNOChanged_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged_BP");

	UAthenaSpectatorHitPointBar_C_OnDBNOChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInIsDBNO                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHitPointBar_C::OnDBNOChanged(bool* bInIsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDBNOChanged");

	UAthenaSpectatorHitPointBar_C_OnDBNOChanged_Params params;
	params.bInIsDBNO = bInIsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnCurrentValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHitPointBar_C::OnCurrentValueChanged(float* InCurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnCurrentValueChanged");

	UAthenaSpectatorHitPointBar_C_OnCurrentValueChanged_Params params;
	params.InCurrentValue = InCurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDeltaValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDeltaValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHitPointBar_C::OnDeltaValueChanged(float* InDeltaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.OnDeltaValueChanged");

	UAthenaSpectatorHitPointBar_C_OnDeltaValueChanged_Params params;
	params.InDeltaValue = InDeltaValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.ExecuteUbergraph_AthenaSpectatorHitPointBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHitPointBar_C::ExecuteUbergraph_AthenaSpectatorHitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C.ExecuteUbergraph_AthenaSpectatorHitPointBar");

	UAthenaSpectatorHitPointBar_C_ExecuteUbergraph_AthenaSpectatorHitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
