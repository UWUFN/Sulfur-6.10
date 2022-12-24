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

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Set View Model
struct UBacchusLocalPlayerInfo_C_Set_View_Model_Params
{
	class UAthenaPlayerViewModel*                      View_Model;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Construct
struct UBacchusLocalPlayerInfo_C_Construct_Params
{
};

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Player Name Change
struct UBacchusLocalPlayerInfo_C_On_Player_Name_Change_Params
{
	struct FString                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Local Player View Target Change
struct UBacchusLocalPlayerInfo_C_On_Local_Player_View_Target_Change_Params
{
};

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.ExecuteUbergraph_BacchusLocalPlayerInfo
struct UBacchusLocalPlayerInfo_C_ExecuteUbergraph_BacchusLocalPlayerInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
