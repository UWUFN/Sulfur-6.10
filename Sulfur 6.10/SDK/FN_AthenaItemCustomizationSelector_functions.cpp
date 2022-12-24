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

// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::UpdateToggleFavoriteVisibility(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility");

	UAthenaItemCustomizationSelector_C_UpdateToggleFavoriteVisibility_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCosmeticItemDefinition* Cosmetic_Item_Definition       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition");

	UAthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cosmetic_Item_Definition != nullptr)
		*Cosmetic_Item_Definition = params.Cosmetic_Item_Definition;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::ShowSavingModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal");

	UAthenaItemCustomizationSelector_C_ShowSavingModal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaItemCustomizationSelector_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem");

	UAthenaItemCustomizationSelector_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::ToggleFavorite(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite");

	UAthenaItemCustomizationSelector_C_ToggleFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack");

	UAthenaItemCustomizationSelector_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct");

	UAthenaItemCustomizationSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature");

	UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave
// (Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnFinsihedItemSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave");

	UAthenaItemCustomizationSelector_C_OnFinsihedItemSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted
// (Event, Public, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnSavingItemStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted");

	UAthenaItemCustomizationSelector_C_OnSavingItemStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaItemCustomizationSelector_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnActivated");

	UAthenaItemCustomizationSelector_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannel                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, bool IsOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature");

	UAthenaItemCustomizationSelector_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_0_OnVariantChangedEvent__DelegateSignature_Params params;
	params.VariantChannel = VariantChannel;
	params.VariantTag = VariantTag;
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShowingVariants               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::OnTabSelectionChanged(bool* bShowingVariants)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged");

	UAthenaItemCustomizationSelector_C_OnTabSelectionChanged_Params params;
	params.bShowingVariants = bShowingVariants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::OnCurrentItemChanged(class UFortItem** SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged");

	UAthenaItemCustomizationSelector_C_OnCurrentItemChanged_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaItemCustomizationSelector_C::ExecuteUbergraph_AthenaItemCustomizationSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector");

	UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
