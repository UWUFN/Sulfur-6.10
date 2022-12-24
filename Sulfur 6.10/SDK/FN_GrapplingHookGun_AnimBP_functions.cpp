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

// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118
// (BlueprintEvent)

void UGrapplingHookGun_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118");

	UGrapplingHookGun_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_GrapplingHookGun_AnimBP_AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrapplingHookGun_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation");

	UGrapplingHookGun_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrapplingHookGun_AnimBP_C::ExecuteUbergraph_GrapplingHookGun_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP");

	UGrapplingHookGun_AnimBP_C_ExecuteUbergraph_GrapplingHookGun_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
