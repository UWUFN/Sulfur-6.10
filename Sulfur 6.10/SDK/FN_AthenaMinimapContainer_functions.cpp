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

// Function AthenaMinimapContainer.AthenaMinimapContainer_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaMinimapContainer_C::BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMinimapContainer.AthenaMinimapContainer_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAthenaMinimapContainer_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMinimapContainer.AthenaMinimapContainer_C.ExecuteUbergraph_AthenaMinimapContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMinimapContainer_C::ExecuteUbergraph_AthenaMinimapContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMinimapContainer.AthenaMinimapContainer_C.ExecuteUbergraph_AthenaMinimapContainer");

	UAthenaMinimapContainer_C_ExecuteUbergraph_AthenaMinimapContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
