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

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.UpdateStatusText
struct UAthenaEventMatchScoreboardPlayerWidget_C_UpdateStatusText_Params
{
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetRowBordersVisibility
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetRowBordersVisibility_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.PreConstruct
struct UAthenaEventMatchScoreboardPlayerWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ClearTextWidgets
struct UAthenaEventMatchScoreboardPlayerWidget_C_ClearTextWidgets_Params
{
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamNumberChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamNumberChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InTeamNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnTeamColorChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnTeamColorChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTeamColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerNameChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerNameChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    InPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDeadStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDeadStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDead;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDBNOStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDBNOStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDBNO;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnBeingRevivedStateChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnBeingRevivedStateChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsBeingRevived;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnKillScoreChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnKillScoreChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InKillScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDisconnectedChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDisconnectedChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsDisconnected;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnDistanceToStormChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnDistanceToStormChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InDistanceToStorm;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlaceChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlaceChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InPlace;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnPlayerDataChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnPlayerDataChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.OnEventScoreChanged
struct UAthenaEventMatchScoreboardPlayerWidget_C_OnEventScoreChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetEventScoreVisible
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetEventScoreVisible_Params
{
	bool*                                              InVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetTeamNumberVisible
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetTeamNumberVisible_Params
{
	bool*                                              InVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.SetUsingAlternateRowStyle
struct UAthenaEventMatchScoreboardPlayerWidget_C_SetUsingAlternateRowStyle_Params
{
	bool*                                              bUseAlternateStyle;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchScoreboardPlayerWidget.AthenaEventMatchScoreboardPlayerWidget_C.ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget
struct UAthenaEventMatchScoreboardPlayerWidget_C_ExecuteUbergraph_AthenaEventMatchScoreboardPlayerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
