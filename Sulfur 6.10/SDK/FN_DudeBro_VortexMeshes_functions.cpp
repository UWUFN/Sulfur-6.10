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

// Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.UpdateCachedTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RatioComplete                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADudeBro_VortexMeshes_C::UpdateCachedTime(float Time, float RatioComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.UpdateCachedTime");

	ADudeBro_VortexMeshes_C_UpdateCachedTime_Params params;
	params.Time = Time;
	params.RatioComplete = RatioComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADudeBro_VortexMeshes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.UserConstructionScript");

	ADudeBro_VortexMeshes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADudeBro_VortexMeshes_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.ReceiveBeginPlay");

	ADudeBro_VortexMeshes_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.ExecuteUbergraph_DudeBro_VortexMeshes
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADudeBro_VortexMeshes_C::ExecuteUbergraph_DudeBro_VortexMeshes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DudeBro_VortexMeshes.DudeBro_VortexMeshes_C.ExecuteUbergraph_DudeBro_VortexMeshes");

	ADudeBro_VortexMeshes_C_ExecuteUbergraph_DudeBro_VortexMeshes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
