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

// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraRainDrops_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.UserConstructionScript");

	AB_CameraRainDrops_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__FinishedFunc
// (BlueprintEvent)

void AB_CameraRainDrops_02_C::Alpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__FinishedFunc");

	AB_CameraRainDrops_02_C_Alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__UpdateFunc
// (BlueprintEvent)

void AB_CameraRainDrops_02_C::Alpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.Alpha__UpdateFunc");

	AB_CameraRainDrops_02_C_Alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraRainDrops_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ReceiveBeginPlay");

	AB_CameraRainDrops_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ExecuteUbergraph_B_CameraRainDrops_02
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraRainDrops_02_C::ExecuteUbergraph_B_CameraRainDrops_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_02.B_CameraRainDrops_02_C.ExecuteUbergraph_B_CameraRainDrops_02");

	AB_CameraRainDrops_02_C_ExecuteUbergraph_B_CameraRainDrops_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
