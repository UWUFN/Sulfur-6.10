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

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyText
struct UAthenaMatchStatusTextPlayer_C_ApplyText_Params
{
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialControl
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialControl_Params
{
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetOpacityAndColor
struct UAthenaMatchStatusTextPlayer_C_SetOpacityAndColor_Params
{
	struct FSlateColor                                 ColorIn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.GetFont
struct UAthenaMatchStatusTextPlayer_C_GetFont_Params
{
	struct FSlateFontInfo                              Output;                                                   // (Parm, OutParm)
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetFont
struct UAthenaMatchStatusTextPlayer_C_SetFont_Params
{
	struct FSlateFontInfo                              FontIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.SetText
struct UAthenaMatchStatusTextPlayer_C_SetText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ApplyImmediately;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.PreConstruct
struct UAthenaMatchStatusTextPlayer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOn
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialOn_Params
{
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.HighlightMaterialOff
struct UAthenaMatchStatusTextPlayer_C_HighlightMaterialOff_Params
{
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ApplyNewText
struct UAthenaMatchStatusTextPlayer_C_ApplyNewText_Params
{
};

// Function AthenaMatchStatusTextPlayer.AthenaMatchStatusTextPlayer_C.ExecuteUbergraph_AthenaMatchStatusTextPlayer
struct UAthenaMatchStatusTextPlayer_C_ExecuteUbergraph_AthenaMatchStatusTextPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
