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

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinnerOverlay_v2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.PreConstruct");

	UWinnerOverlay_v2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWinnerOverlay_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.Construct");

	UWinnerOverlay_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaVictoryUIType           GameType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinnerOverlay_v2_C::PlayVictoryAnim(EAthenaVictoryUIType GameType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim");

	UWinnerOverlay_v2_C_PlayVictoryAnim_Params params;
	params.GameType = GameType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinnerOverlay_v2_C::ExecuteUbergraph_WinnerOverlay_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2");

	UWinnerOverlay_v2_C_ExecuteUbergraph_WinnerOverlay_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
