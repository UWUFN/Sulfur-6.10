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

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.AddNameplate
struct UAthenaSpectatorNameplateLayer_C_AddNameplate_Params
{
	class UAthenaSpectatorNameplateBase**              NameplateWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.RemoveNameplate
struct UAthenaSpectatorNameplateLayer_C_RemoveNameplate_Params
{
	class UAthenaSpectatorNameplateBase**              NameplateWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.ExecuteUbergraph_AthenaSpectatorNameplateLayer
struct UAthenaSpectatorNameplateLayer_C_ExecuteUbergraph_AthenaSpectatorNameplateLayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
