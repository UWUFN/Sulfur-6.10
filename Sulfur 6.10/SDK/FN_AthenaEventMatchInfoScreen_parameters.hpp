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

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardGroupByTeam
struct UAthenaEventMatchInfoScreen_C_ToggleScoreboardGroupByTeam_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleEventScoreOnScoreboard
struct UAthenaEventMatchInfoScreen_C_ToggleEventScoreOnScoreboard_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleTeamNumbersOnScoreboard
struct UAthenaEventMatchInfoScreen_C_ToggleTeamNumbersOnScoreboard_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScreenVisibility
struct UAthenaEventMatchInfoScreen_C_ToggleScreenVisibility_Params
{
	class UCommonUserWidget*                           InScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInHideIfAlreadyVisible;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardVisibility
struct UAthenaEventMatchInfoScreen_C_ToggleScoreboardVisibility_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleMatchStatusVisibility
struct UAthenaEventMatchInfoScreen_C_ToggleMatchStatusVisibility_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.TogglePlayerGridVisibility
struct UAthenaEventMatchInfoScreen_C_TogglePlayerGridVisibility_Params
{
	bool                                               bInShowActivePlayers;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.SetCurrentScreenSortMethod
struct UAthenaEventMatchInfoScreen_C_SetCurrentScreenSortMethod_Params
{
	EAthenaEventMatchInfoSortMethod                    InSortMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.Construct
struct UAthenaEventMatchInfoScreen_C_Construct_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaEventMatchInfoScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UAthenaEventMatchInfoScreen_C_BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UAthenaEventMatchInfoScreen_C_BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UAthenaEventMatchInfoScreen_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ExecuteUbergraph_AthenaEventMatchInfoScreen
struct UAthenaEventMatchInfoScreen_C_ExecuteUbergraph_AthenaEventMatchInfoScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
