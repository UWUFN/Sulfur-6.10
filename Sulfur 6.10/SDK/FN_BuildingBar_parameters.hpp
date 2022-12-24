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

// Function BuildingBar.BuildingBar_C.UpdateBuildingTrap
struct UBuildingBar_C_UpdateBuildingTrap_Params
{
	class ABuildingTrap*                               BuildingTrap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Set Display Mode
struct UBuildingBar_C_Set_Display_Mode_Params
{
	EFortBuildingInteraction                           InDisplayMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Durability Text
struct UBuildingBar_C_Update_Durability_Text_Params
{
};

// Function BuildingBar.BuildingBar_C.Update Current Durability Value
struct UBuildingBar_C_Update_Current_Durability_Value_Params
{
	float                                              CurrentDurability;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Max Durability Value
struct UBuildingBar_C_Update_Max_Durability_Value_Params
{
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Current HP Value
struct UBuildingBar_C_Update_Current_HP_Value_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuildingBar.BuildingBar_C.Update Max HP Value
struct UBuildingBar_C_Update_Max_HP_Value_Params
{
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
