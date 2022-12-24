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

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP
struct UShowdownEventTileInfo_C_RefreshDataBP_Params
{
};

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus
struct UShowdownEventTileInfo_C_EventAnimFocus_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket
struct UShowdownEventTileInfo_C_EventStyleSocket_Params
{
};

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover
struct UShowdownEventTileInfo_C_EventAnimHover_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo
struct UShowdownEventTileInfo_C_ExecuteUbergraph_ShowdownEventTileInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature
struct UShowdownEventTileInfo_C_SetEventState__DelegateSignature_Params
{
	EFortShowdownEventState                            EventState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
