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

// Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PDW_C::ExecuteUbergraph_BP_PDW(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW");

	UBP_PDW_C_ExecuteUbergraph_BP_PDW_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
