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

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PreConstruct");

	UAthenaSpectatorNameplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplate_C::OnPlayerDataSet(class UAthenaRemotePlayerViewData** InPlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerDataSet");

	UAthenaSpectatorNameplate_C_OnPlayerDataSet_Params params;
	params.InPlayerData = InPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnDistanceStateChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaSpectatorNameplateDistanceState* NewDistanceState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplate_C::OnDistanceStateChanged(EAthenaSpectatorNameplateDistanceState* NewDistanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnDistanceStateChanged");

	UAthenaSpectatorNameplate_C_OnDistanceStateChanged_Params params;
	params.NewDistanceState = NewDistanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InTeamColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UAthenaSpectatorNameplate_C::OnTeamColorChanged(class UAthenaRemotePlayerViewData** InPlayerData, struct FLinearColor* InTeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamColorChanged");

	UAthenaSpectatorNameplate_C_OnTeamColorChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InTeamColor = InTeamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamNumberChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InTeamNumber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplate_C::OnTeamNumberChanged(class UAthenaRemotePlayerViewData** InPlayerData, int* InTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamNumberChanged");

	UAthenaSpectatorNameplate_C_OnTeamNumberChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InTeamNumber = InTeamNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** InPlayerData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                InPlayerName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaSpectatorNameplate_C::OnPlayerNameChanged(class UAthenaRemotePlayerViewData** InPlayerData, struct FString* InPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerNameChanged");

	UAthenaSpectatorNameplate_C_OnPlayerNameChanged_Params params;
	params.InPlayerData = InPlayerData;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.ExecuteUbergraph_AthenaSpectatorNameplate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplate_C::ExecuteUbergraph_AthenaSpectatorNameplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.ExecuteUbergraph_AthenaSpectatorNameplate");

	UAthenaSpectatorNameplate_C_ExecuteUbergraph_AthenaSpectatorNameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
