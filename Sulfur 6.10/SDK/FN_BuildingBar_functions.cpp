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

// Function BuildingBar.BuildingBar_C.UpdateBuildingTrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*           BuildingTrap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::UpdateBuildingTrap(class ABuildingTrap* BuildingTrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.UpdateBuildingTrap");

	UBuildingBar_C_UpdateBuildingTrap_Params params;
	params.BuildingTrap = BuildingTrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Set Display Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortBuildingInteraction       InDisplayMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Set_Display_Mode(EFortBuildingInteraction InDisplayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Set Display Mode");

	UBuildingBar_C_Set_Display_Mode_Params params;
	params.InDisplayMode = InDisplayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Durability Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBuildingBar_C::Update_Durability_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Durability Text");

	UBuildingBar_C_Update_Durability_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current Durability Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentDurability              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Current_Durability_Value(float CurrentDurability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current Durability Value");

	UBuildingBar_C_Update_Current_Durability_Value_Params params;
	params.CurrentDurability = CurrentDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max Durability Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Max_Durability_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max Durability Value");

	UBuildingBar_C_Update_Max_Durability_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Current HP Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Current_HP_Value(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Current HP Value");

	UBuildingBar_C_Update_Current_HP_Value_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuildingBar.BuildingBar_C.Update Max HP Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBuildingBar_C::Update_Max_HP_Value(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuildingBar.BuildingBar_C.Update Max HP Value");

	UBuildingBar_C_Update_Max_HP_Value_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
