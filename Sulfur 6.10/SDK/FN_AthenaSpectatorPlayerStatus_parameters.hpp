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

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Member Data
struct UAthenaSpectatorPlayerStatus_C_Update_Squad_Member_Data_Params
{
	class UAthenaRemotePlayerViewData*                 PlayerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaSpectatorTeamStatus_C*                TeamStatusWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Datas
struct UAthenaSpectatorPlayerStatus_C_Update_Squad_Datas_Params
{
	class UAthenaRemotePlayerViewData*                 Squad_1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaRemotePlayerViewData*                 Squad_2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaRemotePlayerViewData*                 Squad_3;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Construct
struct UAthenaSpectatorPlayerStatus_C_Construct_Params
{
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerNameText
struct UAthenaSpectatorPlayerStatus_C_UpdatePlayerNameText_Params
{
	struct FText*                                      PlayerNameText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerTeam
struct UAthenaSpectatorPlayerStatus_C_UpdatePlayerTeam_Params
{
	int*                                               TeamNumber;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TeamColor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.FollowedPlayerChanged
struct UAthenaSpectatorPlayerStatus_C_FollowedPlayerChanged_Params
{
	class AFortPlayerStateAthena**                     NewFollowedPlayer;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SquadDatasChanged
struct UAthenaSpectatorPlayerStatus_C_SquadDatasChanged_Params
{
	class UAthenaRemotePlayerViewData**                SquadMember1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaRemotePlayerViewData**                SquadMember2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAthenaRemotePlayerViewData**                SquadMember3;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus
struct UAthenaSpectatorPlayerStatus_C_ExecuteUbergraph_AthenaSpectatorPlayerStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
