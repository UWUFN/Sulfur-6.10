#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
// 0x00B8 (0x03F0 - 0x0338)
class UGamepadCustomActionSelectorPanel_v3_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button_Clear;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               CommonBorder_Clear;                                       // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonListView*                             CommonListView_GamepadActions;                            // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Clear1;                                 // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Clear2;                                 // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UKeybindWidget_C*                            KeybindWidget_Clear;                                      // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuHeader_C*                        OptionsMenuHeader;                                        // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         Back;                                                     // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    CustomActionSelected;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UFortOptionsMenuInputData*>           CurrentInputData;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    CustomClosedUsingBack;                                    // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CustomClearButton;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FKey                                        KeyNone;                                                  // 0x03C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Clear;                                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C");
		return ptr;
	}


	void HandleClear(bool* Passthrough);
	void CreateCustomListItem(const struct FName& ActionName, EFortInputActionGroup InputActionGroup, class UGamepadKeyTextButton_C** ReturnItem);
	void HandleBack(bool* Passthrough);
	void Construct();
	void UpdatePanel(TArray<class UFortOptionsMenuInputData*> InputData);
	void BP_OnItemClicked_Bind(class UObject* Item);
	void OnActivated();
	void OnDeactivated();
	void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int EntryPoint);
	void CustomClearButton__DelegateSignature();
	void CustomClosedUsingBack__DelegateSignature();
	void CustomActionSelected__DelegateSignature(int SelectedIndex, const struct FName& ActionName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
