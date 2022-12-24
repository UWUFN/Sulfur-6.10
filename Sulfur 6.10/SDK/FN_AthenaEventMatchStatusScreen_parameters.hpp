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

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate1Pulse
struct UAthenaEventMatchStatusScreen_C_NewStatUpdate1Pulse_Params
{
	class UAthenaEventMatchStatusText_C*               TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SkipTextUpdate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewStatUpdate3Pulse
struct UAthenaEventMatchStatusScreen_C_NewStatUpdate3Pulse_Params
{
	class UAthenaEventMatchStatusText_C*               TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SkipTextUpdate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopScore
struct UAthenaEventMatchStatusScreen_C_NewTopScore_Params
{
	class UAthenaEventMatchStatusText_C*               TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.NewTopPlayer
struct UAthenaEventMatchStatusScreen_C_NewTopPlayer_Params
{
	class UAthenaMatchStatusTextPlayer_C*              TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMatchTimeText
struct UAthenaEventMatchStatusScreen_C_UpdateMatchTimeText_Params
{
	struct FText*                                      MatchTimeText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateCircleRadiusText
struct UAthenaEventMatchStatusScreen_C_UpdateCircleRadiusText_Params
{
	struct FText*                                      CircleRadiusText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsText
struct UAthenaEventMatchStatusScreen_C_UpdateMostKillsText_Params
{
	struct FText*                                      MostKillsText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateFastestKillText
struct UAthenaEventMatchStatusScreen_C_UpdateFastestKillText_Params
{
	struct FText*                                      FastestKillText;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      FastestKillTime;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.Construct
struct UAthenaEventMatchStatusScreen_C_Construct_Params
{
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateSupplyDropsLootedText
struct UAthenaEventMatchStatusScreen_C_UpdateSupplyDropsLootedText_Params
{
	struct FText*                                      SupplyDropsLootedText;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateShotsFiredText
struct UAthenaEventMatchStatusScreen_C_UpdateShotsFiredText_Params
{
	struct FText*                                      ShotsFiredText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesDestroyedText
struct UAthenaEventMatchStatusScreen_C_UpdatePiecesDestroyedText_Params
{
	struct FText*                                      PiecesDestroyedText;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePiecesBuiltText
struct UAthenaEventMatchStatusScreen_C_UpdatePiecesBuiltText_Params
{
	struct FText*                                      PiecesBuiltText;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationText
struct UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationText_Params
{
	struct FText*                                      LongestEliminationText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageTakenText
struct UAthenaEventMatchStatusScreen_C_UpdateDamageTakenText_Params
{
	struct FText*                                      DamageTakenText;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageHealedText
struct UAthenaEventMatchStatusScreen_C_UpdateDamageHealedText_Params
{
	struct FText*                                      DamageHealedText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateDamageInflictedText
struct UAthenaEventMatchStatusScreen_C_UpdateDamageInflictedText_Params
{
	struct FText*                                      DamageInflictedText;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateChestsLootedText
struct UAthenaEventMatchStatusScreen_C_UpdateChestsLootedText_Params
{
	struct FText*                                      ChestsLootedText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateMostKillsScore
struct UAthenaEventMatchStatusScreen_C_UpdateMostKillsScore_Params
{
	struct FText*                                      MostKillsScore;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateLongestEliminationScore
struct UAthenaEventMatchStatusScreen_C_UpdateLongestEliminationScore_Params
{
	struct FText*                                      LongestEliminationScore;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeText
struct UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeText_Params
{
	struct FText*                                      GamePhaseTimeText;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseTimeTitleText
struct UAthenaEventMatchStatusScreen_C_UpdateGamePhaseTimeTitleText_Params
{
	struct FText*                                      GamePhaseTimeTitleText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdatePlayersRemainingText
struct UAthenaEventMatchStatusScreen_C_UpdatePlayersRemainingText_Params
{
	struct FText*                                      PlayersRemainingText;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateTimeSinceLastKillText
struct UAthenaEventMatchStatusScreen_C_UpdateTimeSinceLastKillText_Params
{
	struct FText*                                      TimeSinceLastKillText;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.UpdateGamePhaseText
struct UAthenaEventMatchStatusScreen_C_UpdateGamePhaseText_Params
{
	struct FText*                                      GamePhaseText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.OnPlayerDeadStateChanged_BP
struct UAthenaEventMatchStatusScreen_C_OnPlayerDeadStateChanged_BP_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInIsDead;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchStatusScreen.AthenaEventMatchStatusScreen_C.ExecuteUbergraph_AthenaEventMatchStatusScreen
struct UAthenaEventMatchStatusScreen_C_ExecuteUbergraph_AthenaEventMatchStatusScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
