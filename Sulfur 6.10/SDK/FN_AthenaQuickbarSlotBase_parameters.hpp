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

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SwitchToNative
struct UAthenaQuickbarSlotBase_C_SwitchToNative_Params
{
	bool                                               UseNative;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeInvalidation
struct UAthenaQuickbarSlotBase_C_InitializeInvalidation_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.UpdateItemBoxSize
struct UAthenaQuickbarSlotBase_C_UpdateItemBoxSize_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStopped
struct UAthenaQuickbarSlotBase_C_OnCooldownStopped_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.OnCooldownStarted
struct UAthenaQuickbarSlotBase_C_OnCooldownStarted_Params
{
	EFortItemCooldownType                              CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.InitializeCooldowns
struct UAthenaQuickbarSlotBase_C_InitializeCooldowns_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeStarted
struct UAthenaQuickbarSlotBase_C_HandleMaximizeStarted_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeFinished
struct UAthenaQuickbarSlotBase_C_HandleMinimizeFinished_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMaximizeFinished
struct UAthenaQuickbarSlotBase_C_HandleMaximizeFinished_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.HandleMinimizeStarted
struct UAthenaQuickbarSlotBase_C_HandleMinimizeStarted_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.Construct
struct UAthenaQuickbarSlotBase_C_Construct_Params
{
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.PreConstruct
struct UAthenaQuickbarSlotBase_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetAnimatedBoxScaleFactor
struct UAthenaQuickbarSlotBase_C_SetAnimatedBoxScaleFactor_Params
{
	float                                              AnimatedBoxScaleFactor;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MaximizeSlot
struct UAthenaQuickbarSlotBase_C_MaximizeSlot_Params
{
	bool*                                              bShouldSkipAnimation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.MinimizeSlot
struct UAthenaQuickbarSlotBase_C_MinimizeSlot_Params
{
	bool*                                              bShouldSkipAnimation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.SetSlotSelected
struct UAthenaQuickbarSlotBase_C_SetSlotSelected_Params
{
	bool*                                              bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuickbarSlotBase.AthenaQuickbarSlotBase_C.ExecuteUbergraph_AthenaQuickbarSlotBase
struct UAthenaQuickbarSlotBase_C_ExecuteUbergraph_AthenaQuickbarSlotBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
