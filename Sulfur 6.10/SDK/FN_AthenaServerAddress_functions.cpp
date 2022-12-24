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

// Function AthenaServerAddress.AthenaServerAddress_C.UpdateServerAddress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaServerAddress_C::UpdateServerAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaServerAddress.AthenaServerAddress_C.UpdateServerAddress");

	UAthenaServerAddress_C_UpdateServerAddress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaServerAddress.AthenaServerAddress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaServerAddress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaServerAddress.AthenaServerAddress_C.Construct");

	UAthenaServerAddress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaServerAddress.AthenaServerAddress_C.ExecuteUbergraph_AthenaServerAddress
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaServerAddress_C::ExecuteUbergraph_AthenaServerAddress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaServerAddress.AthenaServerAddress_C.ExecuteUbergraph_AthenaServerAddress");

	UAthenaServerAddress_C_ExecuteUbergraph_AthenaServerAddress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
