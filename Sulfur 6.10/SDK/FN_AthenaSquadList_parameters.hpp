#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSquadList.AthenaSquadList_C.HandleSquadMemberDisconnected
struct UAthenaSquadList_C_HandleSquadMemberDisconnected_Params
{
	class AFortPlayerStateAthena*                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSquadList.AthenaSquadList_C.ClearSquadMembers
struct UAthenaSquadList_C_ClearSquadMembers_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.RebuildSquadMembersList
struct UAthenaSquadList_C_RebuildSquadMembersList_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.AppendSquadMember
struct UAthenaSquadList_C_AppendSquadMember_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSquadList.AthenaSquadList_C.Construct
struct UAthenaSquadList_C_Construct_Params
{
};

// Function AthenaSquadList.AthenaSquadList_C.ExecuteUbergraph_AthenaSquadList
struct UAthenaSquadList_C_ExecuteUbergraph_AthenaSquadList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
