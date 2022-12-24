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

// Function BP_Launcher_FrontAction.BP_Launcher_FrontAction_C.ExecuteUbergraph_BP_Launcher_FrontAction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Launcher_FrontAction_C::ExecuteUbergraph_BP_Launcher_FrontAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Launcher_FrontAction.BP_Launcher_FrontAction_C.ExecuteUbergraph_BP_Launcher_FrontAction");

	UBP_Launcher_FrontAction_C_ExecuteUbergraph_BP_Launcher_FrontAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
