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

// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// 0x0250 (0x0588 - 0x0338)
class UOptionsMenu_C : public UFortOptionsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               BackgroundBorder;                                         // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               BorderBackground;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                       CurrentTabSwitcher;                                       // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_0_1;                                                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               MESSAGE;                                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            OverlayText;                                              // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_0_1;                                             // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1_2;                                             // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  SavingLayer;                                              // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalTabList_C*                        SettingsTabs;                                             // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Title;                                                    // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           VideoSettingsAccept;                                      // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           VideoSettingsCancel;                                      // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SelectedOption;                                           // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FName                                       Current_Tab;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Accept_Input;                                             // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Video_Tab_Selected;                                       // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Apply_Visible;                                            // 0x03BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03BB(0x0005) MISSED OFFSET
	TArray<class UFortOptionsTab*>                     AllTabWidgets;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UProgressModalWidget_C*                      SavingModal;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      VideoTabClass;                                            // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AccountTabClass;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GamepadTabClass;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      InputTabClass;                                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoadCount;                                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x03FC(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabGamePad
	unsigned char                                      UnknownData04[0x28];                                      // 0x0428(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabAccount
	unsigned char                                      UnknownData05[0x28];                                      // 0x0450(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabVideoOptions
	unsigned char                                      UnknownData06[0x28];                                      // 0x0478(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabInputOptions
	struct FDataTableRowHandle                         ToggleModeAction;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ApplyAction;                                              // 0x04B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         ResetToDefault;                                           // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FDataTableRowHandle                         Back;                                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTimerHandle                                ResetVideoOptionsTimer;                                   // 0x04E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData07[0x28];                                      // 0x04E8(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabAccessibilityOptions
	class UClass*                                      AccessibilityTabClass;                                    // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x28];                                      // 0x0518(0x0028) UNKNOWN PROPERTY: SoftClassProperty OptionsMenu.OptionsMenu_C.TabBrightnessOptions
	class UClass*                                      BrightnessTabClass;                                       // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFortTabButtonLabelInfo>             TabLabels;                                                // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TabIds;                                                   // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSettingsApplied;                                        // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FDataTableRowHandle                         ChoosePreset;                                             // 0x0578(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C");
		return ptr;
	}


	void NotifyTabsOfActivationState(class UFortOptionsTab* ActivatedTab);
	void HandleInputResetToDefault(bool* Passthrough);
	void HandleResetAvailableActionHandlerStates();
	void Update_Header_Text_by_Tab_ID(const struct FName& TabId);
	void DoResetKBMToDefault(int Preset_To_Set);
	void HandleResetCustomGamepadToDefault();
	void UpdateAllOptionsTabs();
	void ResetActionHandlerStates(bool DisableBack);
	void UpdateBasedOnActiveWidget(class UObject* ActiveWidget, bool ShouldCenterOnTab);
	void ApplySettings();
	void DoResetHUDOptionsToDefault();
	void DoResetGameOptionsToDefault(class UFortOptionsTab* Tab_To_Reset);
	void HandleTabGamepadConfigActionHandlerStates();
	void HandleResetUnavailableActionHandlerStates(bool ShouldShowApply);
	void HandleTabInputOptionsActionHandlerStates(class UTabInputOptions_C* TabInputOptionsActor);
	void HandleTabGameOptionsActionHandlerStates(int Active_Widget_Index);
	void CenterOnActiveTab();
	void SetBackground();
	void AddTab(class UClass* WidgetClass, const struct FText& DisplayName, const struct FName& NameId, const struct FSlateBrush& Icon, ESettingTab Tab_Type);
	void HandleCursorModeChanging(bool IsEnabled);
	void Handle_Toggle_Mode(bool* Passthrough);
	void Set_Input_Action_Handlers();
	void HandleBack(bool* Passthrough);
	void Handle_Reset(bool* Passthrough);
	void HandleResetToDefault(bool* Passthrough);
	void Handle_Apply(bool* Passthrough);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Initialize();
	void OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426(class UClass* Loaded);
	void OnLoaded_56F757014AB176CE2140009FB54D0D23(class UClass* Loaded);
	void OnLoaded_488EE90943BFF7AA4DB2049A7D72238C(class UClass* Loaded);
	void OnLoaded_598823E641B8288CD371F0B50BE07C91(class UClass* Loaded);
	void OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD(class UClass* Loaded);
	void OnLoaded_EF0A182C49925D83A3E55080FA222F7D(class UClass* Loaded);
	void DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_865D48E84DB087F08A2C9797E6CB619E(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_505313CB4EC9E510DD07E6B544334958(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_826C59EC4C294BC872A644878B35A13B(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(EFortDialogResult Result, const struct FName& ResultName);
	void Enable_Overlay_Input(bool Accept_Input, const struct FText& Overlay_Text);
	void Enable_Overlay_Video(bool Accept_Input);
	void Disable_Overlay();
	void BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void Tab_Setting_Changed();
	void OnActivated();
	void Disable_Overlay_Input();
	void Gamepad_Changed(bool Gamepad_Enabled);
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleBenchmarkComplete();
	void BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleSettingsErrorMessageClosed();
	void OnHandleBack();
	void BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void Construct();
	void TabGameOptions_OnActiveWidgetChanged_Bind(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void HandleSettingsSaveComplete();
	void OnDeactivated();
	void LoadTabClasses();
	void ResetVideoOptionsTimerDelegate();
	void BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature(const struct FName& TabId);
	void ShowResetDefaultConfirmation();
	void ShowLangaugeConfirmation();
	void ShowInputReset_DefaultConfirmation();
	void OnHandleApply();
	void HandleTabGamePadActionsNeedBinds(TArray<struct FText>* ScreenLabels);
	void ExecuteUbergraph_OptionsMenu(int EntryPoint);
	void OnSettingsApplied__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
