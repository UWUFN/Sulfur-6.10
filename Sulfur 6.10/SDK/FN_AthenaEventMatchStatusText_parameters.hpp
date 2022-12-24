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

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyText
struct UAthenaEventMatchStatusText_C_ApplyText_Params
{
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.HighlightMaterialControl
struct UAthenaEventMatchStatusText_C_HighlightMaterialControl_Params
{
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetOpacityAndColor
struct UAthenaEventMatchStatusText_C_SetOpacityAndColor_Params
{
	struct FSlateColor                                 ColorIn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.GetFont
struct UAthenaEventMatchStatusText_C_GetFont_Params
{
	struct FSlateFontInfo                              Output;                                                   // (Parm, OutParm)
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetFont
struct UAthenaEventMatchStatusText_C_SetFont_Params
{
	struct FSlateFontInfo                              FontIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.SetText
struct UAthenaEventMatchStatusText_C_SetText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ApplyImmediately;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.PreConstruct
struct UAthenaEventMatchStatusText_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ApplyNewText
struct UAthenaEventMatchStatusText_C_ApplyNewText_Params
{
};

// Function AthenaEventMatchStatusText.AthenaEventMatchStatusText_C.ExecuteUbergraph_AthenaEventMatchStatusText
struct UAthenaEventMatchStatusText_C_ExecuteUbergraph_AthenaEventMatchStatusText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
