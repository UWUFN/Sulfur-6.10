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

// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
// 0x0110 (0x03A8 - 0x0298)
class UTabGamePadConfig_v3_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (Transient, DuplicateTransient)
	class UGamepadInfoSelectorPanel_v3_C*              GamepadInfoSelectorPanel_v3;                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGamepadMappingInfo_v3_C*                    GamepadMappingInfo_v3;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    GamepadMappingInfoChanged;                                // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FString>                             InputPresets;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               InputPresetNames_NoCustom;                                // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PresetMappingIndex;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlatformMappingIndex;                                     // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomInputTemplatePresetIndex;                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	class UGamepadKeyTextButton_C*                     DisplayObject;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	EFortInputActionGroup                              CurrentInputActionGroup;                                  // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	int                                                CustomResetToDefaultConfig;                               // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        CustomKeySelection;                                       // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CustomActionSelection;                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomInputActionGroupSelectionIndex;                     // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomActionSelectionIndex;                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        Key_None;                                                 // 0x0328(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RadioButtonClass;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RadioButtonStyle;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UFortOptionsMenuInputData*>           InputDataForActionsPanel;                                 // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CombatModeIdName;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BuildModeIdName;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TabGamePadConfigBack;                                     // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TabGamePadConfigApply;                                    // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TabGamePadActionsThatNeedBinds;                           // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       EditModeIdName;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C");
		return ptr;
	}


	void GamepadInfoSelectorNavRight();
	void AreWeOkayWithThisChange(const struct FName& ActionName, const struct FKey& Key, bool* IsOkay);
	void HandleGamepadInfoSelectorFocus();
	void NavigateToSelectedConfig();
	void ChangeCustomClearVisibilityForInputType(ECommonInputType InputType);
	void ChangeCustomResetVisibilityForInputType(ECommonInputType InputType);
	void HandleGamepadInfoSelectorApply();
	void HandleGamepadInfoSelectorBack();
	void ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection);
	TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList();
	void CloseCustomActionsPanel(bool FocusLastButton);
	void SelectSameItemInActionsList();
	void SetupDisplayObject(const struct FName& ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** DisplayObject);
	bool IsCustomConfig(int PresetIndex);
	bool IsConsole();
	void HandleGamepadMappingInfoChange();
	void GetCurrentPlatformIndex(int* PlatformIndex);
	void UpdateData();
	void PreConstructData();
	void InitializeData();
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(EFortDialogResult Result, const struct FName& ResultName);
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(EFortDialogResult Result, const struct FName& ResultName);
	void Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int ButtonIndex);
	void GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int ButtonIndex);
	void CenterOnTab();
	void UpdateOptionsTab();
	void CustomDoResetToDefault();
	void CustomKeySelected_Bind(const struct FKey& Key);
	void CustomActionSelected_Bind(int SelectedIndex, const struct FName& ActionName);
	void CustomClosedUsingBack_Bind();
	void CustomClearButton_Bind();
	void PreConstruct(bool* IsDesignTime);
	void ModesTabSelected_Bind(const struct FName& TabId);
	void HandleUsingGamepadChanged(ECommonInputType* NewInputType);
	void Construct();
	void OnTabDeactivated_Bind();
	void OnTabActivated_Bind();
	void ExecuteUbergraph_TabGamePadConfig_v3(int EntryPoint);
	void TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<struct FText>* ScreenLabels);
	void TabGamePadConfigApply__DelegateSignature();
	void TabGamePadConfigBack__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
