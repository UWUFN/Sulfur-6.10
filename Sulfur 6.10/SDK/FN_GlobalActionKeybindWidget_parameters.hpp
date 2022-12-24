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

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext
struct UGlobalActionKeybindWidget_C_PropagateActionDetailsContext_Params
{
};

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext
struct UGlobalActionKeybindWidget_C_SetActionDetailsContext_Params
{
	struct FFortGlobalActionDetailsFunctionContext     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction
struct UGlobalActionKeybindWidget_C_SetGlobalAction_Params
{
	EFortGlobalAction                                  Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction
struct UGlobalActionKeybindWidget_C_PropagateGlobalAction_Params
{
};

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized
struct UGlobalActionKeybindWidget_C_OnInitialized_Params
{
};

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget
struct UGlobalActionKeybindWidget_C_ExecuteUbergraph_GlobalActionKeybindWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
