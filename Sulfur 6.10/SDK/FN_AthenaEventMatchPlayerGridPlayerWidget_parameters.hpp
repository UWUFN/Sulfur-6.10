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

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.StopDamageAnimations
struct UAthenaEventMatchPlayerGridPlayerWidget_C_StopDamageAnimations_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.IsGamePreAircraft
struct UAthenaEventMatchPlayerGridPlayerWidget_C_IsGamePreAircraft_Params
{
	bool                                               bIsGamePreAircraft;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.IsAliveAndNotInAircraft
struct UAthenaEventMatchPlayerGridPlayerWidget_C_IsAliveAndNotInAircraft_Params
{
	bool                                               bAliveAndNotInAircraft;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateKillsWidget
struct UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateKillsWidget_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateHitPointBars
struct UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateHitPointBars_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.SetupBackgrounds
struct UAthenaEventMatchPlayerGridPlayerWidget_C_SetupBackgrounds_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnGridSizeChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnGridSizeChanged_Params
{
	int                                                InGridSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateNameText
struct UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateNameText_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateStatus
struct UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateStatus_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.UpdateBackground
struct UAthenaEventMatchPlayerGridPlayerWidget_C_UpdateBackground_Params
{
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerNameChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerNameChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    InPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnHealthDamaged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnHealthDamaged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InHealthPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnShieldDamaged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnShieldDamaged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InShieldPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDBNOStateChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnDBNOStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDBNO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDeadStateChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnDeadStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDead;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnBeingRevivedStateChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnBeingRevivedStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsBeingRevived;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerStateChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena**                     InPlayerState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnHealthHealed
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnHealthHealed_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InHealthPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnShieldHealed
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnShieldHealed_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InShieldPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnDisconnectedChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnDisconnectedChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDisconnected;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.PreConstruct
struct UAthenaEventMatchPlayerGridPlayerWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.OnPlayerDataChanged
struct UAthenaEventMatchPlayerGridPlayerWidget_C_OnPlayerDataChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget
struct UAthenaEventMatchPlayerGridPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
