// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Set View Model
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerViewModel*  View_Model                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusLocalPlayerInfo_C::Set_View_Model(class UAthenaPlayerViewModel* View_Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Set View Model");

	UBacchusLocalPlayerInfo_C_Set_View_Model_Params params;
	params.View_Model = View_Model;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBacchusLocalPlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.Construct");

	UBacchusLocalPlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Player Name Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBacchusLocalPlayerInfo_C::On_Player_Name_Change(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Player Name Change");

	UBacchusLocalPlayerInfo_C_On_Player_Name_Change_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Local Player View Target Change
// (BlueprintCallable, BlueprintEvent)

void UBacchusLocalPlayerInfo_C::On_Local_Player_View_Target_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.On Local Player View Target Change");

	UBacchusLocalPlayerInfo_C_On_Local_Player_View_Target_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.ExecuteUbergraph_BacchusLocalPlayerInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusLocalPlayerInfo_C::ExecuteUbergraph_BacchusLocalPlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusLocalPlayerInfo.BacchusLocalPlayerInfo_C.ExecuteUbergraph_BacchusLocalPlayerInfo");

	UBacchusLocalPlayerInfo_C_ExecuteUbergraph_BacchusLocalPlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
