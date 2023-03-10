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

// Function AthenaMapPanel.AthenaMapPanel_C.OnKeyDown
struct UAthenaMapPanel_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMapPanel.AthenaMapPanel_C.Clear Touches
struct UAthenaMapPanel_C_Clear_Touches_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.OnTouchStarted
struct UAthenaMapPanel_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMapPanel.AthenaMapPanel_C.Construct
struct UAthenaMapPanel_C_Construct_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.FlashPlayerIcon
struct UAthenaMapPanel_C_FlashPlayerIcon_Params
{
};

// Function AthenaMapPanel.AthenaMapPanel_C.OpenOrClose
struct UAthenaMapPanel_C_OpenOrClose_Params
{
	bool                                               bOpen;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMapPanel.AthenaMapPanel_C.ExecuteUbergraph_AthenaMapPanel
struct UAthenaMapPanel_C_ExecuteUbergraph_AthenaMapPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
