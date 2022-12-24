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

// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ToggleRespawnState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canRespawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnIndicator_C::ToggleRespawnState(bool canRespawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ToggleRespawnState");

	UAthenaRespawnIndicator_C_ToggleRespawnState_Params params;
	params.canRespawn = canRespawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.SetVisibilty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnIndicator_C::SetVisibilty(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.SetVisibilty");

	UAthenaRespawnIndicator_C_SetVisibilty_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnIndicator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.PreConstruct");

	UAthenaRespawnIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.OnUpdateRespawnState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnIndicator_C::OnUpdateRespawnState(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.OnUpdateRespawnState");

	UAthenaRespawnIndicator_C_OnUpdateRespawnState_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ExecuteUbergraph_AthenaRespawnIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnIndicator_C::ExecuteUbergraph_AthenaRespawnIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnIndicator.AthenaRespawnIndicator_C.ExecuteUbergraph_AthenaRespawnIndicator");

	UAthenaRespawnIndicator_C_ExecuteUbergraph_AthenaRespawnIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
