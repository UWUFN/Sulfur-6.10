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

// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorMatchStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.Construct");

	UAthenaSpectatorMatchStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateMatchTimeText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  MatchTimeText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdateMatchTimeText(struct FText* MatchTimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateMatchTimeText");

	UAthenaSpectatorMatchStatus_C_UpdateMatchTimeText_Params params;
	params.MatchTimeText = MatchTimeText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateStormPhaseText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SafeZonePhaseTxt               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdateStormPhaseText(struct FText* SafeZonePhaseTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdateStormPhaseText");

	UAthenaSpectatorMatchStatus_C_UpdateStormPhaseText_Params params;
	params.SafeZonePhaseTxt = SafeZonePhaseTxt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdatePlayerLocationText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewLocation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorMatchStatus_C::UpdatePlayerLocationText(struct FText* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.UpdatePlayerLocationText");

	UAthenaSpectatorMatchStatus_C_UpdatePlayerLocationText_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorMatchStatus_C::ExecuteUbergraph_AthenaSpectatorMatchStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorMatchStatus.AthenaSpectatorMatchStatus_C.ExecuteUbergraph_AthenaSpectatorMatchStatus");

	UAthenaSpectatorMatchStatus_C_ExecuteUbergraph_AthenaSpectatorMatchStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
