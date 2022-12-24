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

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
struct UAthenaTeamMemberInfo_C_MapPingTimeOut_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
struct UAthenaTeamMemberInfo_C_Mapping_Params
{
	class AFortGameStateAthena*                        AthenaGameState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
struct UAthenaTeamMemberInfo_C_UpdateUniqueID_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
struct UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params
{
	bool                                               bInDisconnected;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
struct UAthenaTeamMemberInfo_C_SetTalking_Params
{
	bool                                               NewTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
struct UAthenaTeamMemberInfo_C_UpdateMicIcon_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
struct UAthenaTeamMemberInfo_C_SetMuted_Params
{
	bool                                               NewMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
struct UAthenaTeamMemberInfo_C_SetReviving_Params
{
	bool                                               Reviving;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
struct UAthenaTeamMemberInfo_C_SetDBNO_Params
{
	bool                                               DBNO;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
struct UAthenaTeamMemberInfo_C_SetDead_Params
{
	bool                                               Dead;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
struct UAthenaTeamMemberInfo_C_SetShield_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
struct UAthenaTeamMemberInfo_C_SetHealth_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
struct UAthenaTeamMemberInfo_C_Construct_Params
{
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
struct UAthenaTeamMemberInfo_C_TalkingStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTalking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
struct UAthenaTeamMemberInfo_C_DBNOStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDBNO;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
struct UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bReviving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
struct UAthenaTeamMemberInfo_C_PlayerNameChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
struct UAthenaTeamMemberInfo_C_HitPointsChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HealthPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ShieldPercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
struct UAthenaTeamMemberInfo_C_MutedStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
struct UAthenaTeamMemberInfo_C_DeadStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DeadStateChanged;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
struct UAthenaTeamMemberInfo_C_DisconnectedStateChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Disconnected;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
struct UAthenaTeamMemberInfo_C_PlayerPlatformChanged_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    CurrentPlatform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnPlayerStateChanged
struct UAthenaTeamMemberInfo_C_OnPlayerStateChanged_Params
{
	class AFortPlayerStateAthena**                     InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnGameModeIconChange
struct UAthenaTeamMemberInfo_C_OnGameModeIconChange_Params
{
	class AFortPlayerStateAthena**                     PS;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 NewGameModeIcon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
struct UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
