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

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetEliminatedGrid
struct UAthenaEventMatchPlayerGridScreen_C_ResetEliminatedGrid_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.IsActiveGridVisible
struct UAthenaEventMatchPlayerGridScreen_C_IsActiveGridVisible_Params
{
	bool                                               bIsVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.CalculateRectangleGridHeight
struct UAthenaEventMatchPlayerGridScreen_C_CalculateRectangleGridHeight_Params
{
	int                                                NumElements;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GridHeight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetTeamGrid
struct UAthenaEventMatchPlayerGridScreen_C_ResetTeamGrid_Params
{
	class UUniformGridPanel*                           InGrid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         InChildWidgets;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InNumColumns;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShouldResizeActiveGrid
struct UAthenaEventMatchPlayerGridScreen_C_ShouldResizeActiveGrid_Params
{
	bool                                               bShouldResize;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumColumns;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.Construct
struct UAthenaEventMatchPlayerGridScreen_C_Construct_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UAthenaEventMatchPlayerGridScreen_C_BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UAthenaEventMatchPlayerGridScreen_C_BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamDied_BP
struct UAthenaEventMatchPlayerGridScreen_C_OnTeamDied_BP_Params
{
	class UAthenaEventMatchTeamWidgetBase**            NewlyDeadTeamWidget;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamAdded_BP
struct UAthenaEventMatchPlayerGridScreen_C_OnTeamAdded_BP_Params
{
	class UAthenaEventMatchTeamWidgetBase**            NewlyAddedTeamWidget;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowActivePlayers
struct UAthenaEventMatchPlayerGridScreen_C_ShowActivePlayers_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowEliminatedPlayers
struct UAthenaEventMatchPlayerGridScreen_C_ShowEliminatedPlayers_Params
{
};

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ExecuteUbergraph_AthenaEventMatchPlayerGridScreen
struct UAthenaEventMatchPlayerGridScreen_C_ExecuteUbergraph_AthenaEventMatchPlayerGridScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
