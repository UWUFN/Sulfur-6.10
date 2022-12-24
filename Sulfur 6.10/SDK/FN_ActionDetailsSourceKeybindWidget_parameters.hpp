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

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.HandleActionSourceValueChange
struct UActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.BindActionSourceEvents
struct UActionDetailsSourceKeybindWidget_C_BindActionSourceEvents_Params
{
};

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UnbindActionSourceEvents
struct UActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents_Params
{
};

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.SetActionSource
struct UActionDetailsSourceKeybindWidget_C_SetActionSource_Params
{
	TScriptInterface<class UFortGlobalActionDetailsDataSource> Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UpdateInputAction
struct UActionDetailsSourceKeybindWidget_C_UpdateInputAction_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
