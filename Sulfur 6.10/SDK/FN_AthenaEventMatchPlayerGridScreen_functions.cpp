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

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetEliminatedGrid
// (Private, BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::ResetEliminatedGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetEliminatedGrid");

	UAthenaEventMatchPlayerGridScreen_C_ResetEliminatedGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.IsActiveGridVisible
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::IsActiveGridVisible(bool* bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.IsActiveGridVisible");

	UAthenaEventMatchPlayerGridScreen_C_IsActiveGridVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsVisible != nullptr)
		*bIsVisible = params.bIsVisible;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.CalculateRectangleGridHeight
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumElements                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GridHeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::CalculateRectangleGridHeight(int NumElements, int* GridHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.CalculateRectangleGridHeight");

	UAthenaEventMatchPlayerGridScreen_C_CalculateRectangleGridHeight_Params params;
	params.NumElements = NumElements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GridHeight != nullptr)
		*GridHeight = params.GridHeight;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetTeamGrid
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniformGridPanel*       InGrid                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     InChildWidgets                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InNumColumns                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::ResetTeamGrid(class UUniformGridPanel* InGrid, int InNumColumns, TArray<class UUserWidget*>* InChildWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetTeamGrid");

	UAthenaEventMatchPlayerGridScreen_C_ResetTeamGrid_Params params;
	params.InGrid = InGrid;
	params.InNumColumns = InNumColumns;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InChildWidgets != nullptr)
		*InChildWidgets = params.InChildWidgets;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShouldResizeActiveGrid
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldResize                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumColumns                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::ShouldResizeActiveGrid(bool* bShouldResize, int* NumColumns)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShouldResizeActiveGrid");

	UAthenaEventMatchPlayerGridScreen_C_ShouldResizeActiveGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldResize != nullptr)
		*bShouldResize = params.bShouldResize;
	if (NumColumns != nullptr)
		*NumColumns = params.NumColumns;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.Construct");

	UAthenaEventMatchPlayerGridScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UAthenaEventMatchPlayerGridScreen_C_BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAthenaEventMatchPlayerGridScreen_C_BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamDied_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchTeamWidgetBase** NewlyDeadTeamWidget            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::OnTeamDied_BP(class UAthenaEventMatchTeamWidgetBase** NewlyDeadTeamWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamDied_BP");

	UAthenaEventMatchPlayerGridScreen_C_OnTeamDied_BP_Params params;
	params.NewlyDeadTeamWidget = NewlyDeadTeamWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamAdded_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchTeamWidgetBase** NewlyAddedTeamWidget           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::OnTeamAdded_BP(class UAthenaEventMatchTeamWidgetBase** NewlyAddedTeamWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamAdded_BP");

	UAthenaEventMatchPlayerGridScreen_C_OnTeamAdded_BP_Params params;
	params.NewlyAddedTeamWidget = NewlyAddedTeamWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowActivePlayers
// (BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::ShowActivePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowActivePlayers");

	UAthenaEventMatchPlayerGridScreen_C_ShowActivePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowEliminatedPlayers
// (BlueprintCallable, BlueprintEvent)

void UAthenaEventMatchPlayerGridScreen_C::ShowEliminatedPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowEliminatedPlayers");

	UAthenaEventMatchPlayerGridScreen_C_ShowEliminatedPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ExecuteUbergraph_AthenaEventMatchPlayerGridScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEventMatchPlayerGridScreen_C::ExecuteUbergraph_AthenaEventMatchPlayerGridScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ExecuteUbergraph_AthenaEventMatchPlayerGridScreen");

	UAthenaEventMatchPlayerGridScreen_C_ExecuteUbergraph_AthenaEventMatchPlayerGridScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
