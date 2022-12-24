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

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnGridSizeChanged
struct UAthenaEventMatchPlayerGridTeamWidget_C_OnGridSizeChanged_Params
{
	int                                                InGridSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.AddToGrid
struct UAthenaEventMatchPlayerGridTeamWidget_C_AddToGrid_Params
{
	class UUserWidget*                                 PlayerWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnPlayerWidgetAdded
struct UAthenaEventMatchPlayerGridTeamWidget_C_OnPlayerWidgetAdded_Params
{
};

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget
struct UAthenaEventMatchPlayerGridTeamWidget_C_ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
