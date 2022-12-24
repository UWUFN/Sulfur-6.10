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

// Function AthenaSquadList.AthenaSquadList_C.HandleSquadMemberDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSquadList_C::HandleSquadMemberDisconnected(class AFortPlayerStateAthena* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.HandleSquadMemberDisconnected");

	UAthenaSquadList_C_HandleSquadMemberDisconnected_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSquadList.AthenaSquadList_C.ClearSquadMembers
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSquadList_C::ClearSquadMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.ClearSquadMembers");

	UAthenaSquadList_C_ClearSquadMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSquadList.AthenaSquadList_C.RebuildSquadMembersList
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSquadList_C::RebuildSquadMembersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.RebuildSquadMembersList");

	UAthenaSquadList_C_RebuildSquadMembersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSquadList.AthenaSquadList_C.AppendSquadMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSquadList_C::AppendSquadMember(class AFortPlayerStateAthena* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.AppendSquadMember");

	UAthenaSquadList_C_AppendSquadMember_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSquadList.AthenaSquadList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSquadList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.Construct");

	UAthenaSquadList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSquadList.AthenaSquadList_C.ExecuteUbergraph_AthenaSquadList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSquadList_C::ExecuteUbergraph_AthenaSquadList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSquadList.AthenaSquadList_C.ExecuteUbergraph_AthenaSquadList");

	UAthenaSquadList_C_ExecuteUbergraph_AthenaSquadList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
