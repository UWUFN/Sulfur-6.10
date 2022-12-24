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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.DBNOStateChanged
struct UAthenaTeamMemberIndicator_C_DBNOStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDBNO;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.TalkingStateChanged
struct UAthenaTeamMemberIndicator_C_TalkingStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTalking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.BeingRevivedStateChanged
struct UAthenaTeamMemberIndicator_C_BeingRevivedStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReviving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.PlayerNameChanged
struct UAthenaTeamMemberIndicator_C_PlayerNameChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
struct UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
