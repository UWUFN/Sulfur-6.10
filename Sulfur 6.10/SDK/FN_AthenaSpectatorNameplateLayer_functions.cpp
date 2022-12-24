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

// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.AddNameplate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorNameplateBase** NameplateWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorNameplateLayer_C::AddNameplate(class UAthenaSpectatorNameplateBase** NameplateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.AddNameplate");

	UAthenaSpectatorNameplateLayer_C_AddNameplate_Params params;
	params.NameplateWidget = NameplateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.RemoveNameplate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaSpectatorNameplateBase** NameplateWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSpectatorNameplateLayer_C::RemoveNameplate(class UAthenaSpectatorNameplateBase** NameplateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.RemoveNameplate");

	UAthenaSpectatorNameplateLayer_C_RemoveNameplate_Params params;
	params.NameplateWidget = NameplateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.ExecuteUbergraph_AthenaSpectatorNameplateLayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorNameplateLayer_C::ExecuteUbergraph_AthenaSpectatorNameplateLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C.ExecuteUbergraph_AthenaSpectatorNameplateLayer");

	UAthenaSpectatorNameplateLayer_C_ExecuteUbergraph_AthenaSpectatorNameplateLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
