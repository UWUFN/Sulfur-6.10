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

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Member Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* PlayerData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaSpectatorTeamStatus_C* TeamStatusWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::Update_Squad_Member_Data(class UAthenaRemotePlayerViewData* PlayerData, class UAthenaSpectatorTeamStatus_C* TeamStatusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Member Data");

	UAthenaSpectatorPlayerStatus_C_Update_Squad_Member_Data_Params params;
	params.PlayerData = PlayerData;
	params.TeamStatusWidget = TeamStatusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Datas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* Squad_1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaRemotePlayerViewData* Squad_2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaRemotePlayerViewData* Squad_3                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::Update_Squad_Datas(class UAthenaRemotePlayerViewData* Squad_1, class UAthenaRemotePlayerViewData* Squad_2, class UAthenaRemotePlayerViewData* Squad_3)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Datas");

	UAthenaSpectatorPlayerStatus_C_Update_Squad_Datas_Params params;
	params.Squad_1 = Squad_1;
	params.Squad_2 = Squad_2;
	params.Squad_3 = Squad_3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorPlayerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Construct");

	UAthenaSpectatorPlayerStatus_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerNameText
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  PlayerNameText                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorPlayerStatus_C::UpdatePlayerNameText(struct FText* PlayerNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerNameText");

	UAthenaSpectatorPlayerStatus_C_UpdatePlayerNameText_Params params;
	params.PlayerNameText = PlayerNameText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerTeam
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TeamNumber                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TeamColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::UpdatePlayerTeam(int* TeamNumber, struct FLinearColor* TeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerTeam");

	UAthenaSpectatorPlayerStatus_C_UpdatePlayerTeam_Params params;
	params.TeamNumber = TeamNumber;
	params.TeamColor = TeamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.FollowedPlayerChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena** NewFollowedPlayer              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::FollowedPlayerChanged(class AFortPlayerStateAthena** NewFollowedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.FollowedPlayerChanged");

	UAthenaSpectatorPlayerStatus_C_FollowedPlayerChanged_Params params;
	params.NewFollowedPlayer = NewFollowedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SquadDatasChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData** SquadMember1                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaRemotePlayerViewData** SquadMember2                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAthenaRemotePlayerViewData** SquadMember3                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::SquadDatasChanged(class UAthenaRemotePlayerViewData** SquadMember1, class UAthenaRemotePlayerViewData** SquadMember2, class UAthenaRemotePlayerViewData** SquadMember3)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SquadDatasChanged");

	UAthenaSpectatorPlayerStatus_C_SquadDatasChanged_Params params;
	params.SquadMember1 = SquadMember1;
	params.SquadMember2 = SquadMember2;
	params.SquadMember3 = SquadMember3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorPlayerStatus_C::ExecuteUbergraph_AthenaSpectatorPlayerStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus");

	UAthenaSpectatorPlayerStatus_C_ExecuteUbergraph_AthenaSpectatorPlayerStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
