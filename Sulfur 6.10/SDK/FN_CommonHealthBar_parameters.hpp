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

// Function CommonHealthBar.CommonHealthBar_C.SetDeltaVisibility
struct UCommonHealthBar_C_SetDeltaVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.SetSwitcherTextIndex
struct UCommonHealthBar_C_SetSwitcherTextIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.SetColors
struct UCommonHealthBar_C_SetColors_Params
{
	struct FLinearColor                                ColorA;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                BevelColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                BaseplateColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.Set Timer
struct UCommonHealthBar_C_Set_Timer_Params
{
	bool                                               InEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.Update
struct UCommonHealthBar_C_Update_Params
{
};

// Function CommonHealthBar.CommonHealthBar_C.Update HP Delta Bar
struct UCommonHealthBar_C_Update_HP_Delta_Bar_Params
{
};

// Function CommonHealthBar.CommonHealthBar_C.Update HP Fill Bar
struct UCommonHealthBar_C_Update_HP_Fill_Bar_Params
{
};

// Function CommonHealthBar.CommonHealthBar_C.Update Current HP Value
struct UCommonHealthBar_C_Update_Current_HP_Value_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.Update Max HP Value
struct UCommonHealthBar_C_Update_Max_HP_Value_Params
{
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.InitializeBar
struct UCommonHealthBar_C_InitializeBar_Params
{
};

// Function CommonHealthBar.CommonHealthBar_C.PreConstruct
struct UCommonHealthBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonHealthBar.CommonHealthBar_C.ExecuteUbergraph_CommonHealthBar
struct UCommonHealthBar_C_ExecuteUbergraph_CommonHealthBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
