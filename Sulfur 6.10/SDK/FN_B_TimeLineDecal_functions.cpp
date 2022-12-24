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

// Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_TimeLineDecal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript");

	AB_TimeLineDecal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_TimeLineDecal_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__FinishedFunc");

	AB_TimeLineDecal_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_TimeLineDecal_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__UpdateFunc");

	AB_TimeLineDecal_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TimeLineDecal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay");

	AB_TimeLineDecal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TimeLineDecal_C::ExecuteUbergraph_B_TimeLineDecal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal");

	AB_TimeLineDecal_C_ExecuteUbergraph_B_TimeLineDecal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
