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

// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnGridSizeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InGridSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridTeamWidget_C::OnGridSizeChanged(int InGridSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnGridSizeChanged");

	UAthenaEventMatchPlayerGridTeamWidget_C_OnGridSizeChanged_Params params;
	params.InGridSize = InGridSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.AddToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             PlayerWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaEventMatchPlayerGridTeamWidget_C::AddToGrid(class UUserWidget* PlayerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.AddToGrid");

	UAthenaEventMatchPlayerGridTeamWidget_C_AddToGrid_Params params;
	params.PlayerWidget = PlayerWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnPlayerWidgetAdded
// (Event, Public, BlueprintEvent)

void UAthenaEventMatchPlayerGridTeamWidget_C::OnPlayerWidgetAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.OnPlayerWidgetAdded");

	UAthenaEventMatchPlayerGridTeamWidget_C_OnPlayerWidgetAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridTeamWidget_C::ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C.ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget");

	UAthenaEventMatchPlayerGridTeamWidget_C_ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
