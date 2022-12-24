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

// WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C
// 0x00C8 (0x0360 - 0x0298)
class UTabGamePadConfig_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (Transient, DuplicateTransient)
	class URotatorSelector_C*                          CustomInputTemplateConfigs;                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelector_C*                          GamepadConfig;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGamepadMappingInfo_C*                       GamepadMappingInfo;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelector_C*                          GamepadPlatformConfig;                                    // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Gamepad_Platform;                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_GamepadMappingInfo;                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBox_InputList;                                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsCombatMode;                                             // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	TArray<struct FString>                             InputPresets;                                             // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PlatformMappingIndex;                                     // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PresetMappingIndex;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    EnableGamepadInputOverlay;                                // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                CustomInputTemplatePresetIndex;                           // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentInputNum;                                          // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    GamepadMappingInfoChanged;                                // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UTexture2D*                                  T_PS4_Unbound;                                            // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  T_Xb1_Unbound;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FText>                               InputPresetNames_NoCustom;                                // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ShowResetToDefaultMessage;                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               PendingInputEnabledValue;                                 // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UOptionsMenuInputOneKeyDisplayOnly_C*        DisplayObject;                                            // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C");
		return ptr;
	}


	void SetupDisplayObject(int InputIndex, class UOptionsMenuInputOneKeyDisplayOnly_C** ReturnObject);
	class UWidget* InputCommonListViewNav(EUINavigation Navigation);
	class UWidget* CustomInputTemplateConfigsNav(EUINavigation Navigation);
	class UWidget* GamepadPlatformConfigNav(EUINavigation Navigation);
	bool IsConsole();
	class UWidget* GamepadConfigNav(EUINavigation Navigation);
	void GetCurrentPlatformIndex(int* Platform_Index);
	bool IsCustomConfig(int PresetIndex);
	void SetInputEnabled(bool Enable);
	void OverlayKeyPressed(const struct FKey& NewKey);
	void HandleGamepadMappingInfoChange();
	void Handle_Mode_Toggled();
	void Update_Data();
	void Initialize_Data();
	void DialogResult_78BE0188450C0D75A0C9159AB760C3B8(EFortDialogResult Result, const struct FName& ResultName);
	void CenterOnTab();
	void Gamepad_Config_Changed(int Selected_Index);
	void UpdateOptionsTab();
	void GamepadPlatformConfigChanged(int Selected_Index);
	void Configuration_Changed(int Selected_Index);
	void Construct();
	void ClearAndConstructKeybindList();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void InputClicked_Bind(int Number_in_List, bool Is_Primary_Button);
	void HandleGamePadToggleMode();
	void UnbindClicked_Bind(int Number_in_List, class UOptionsMenuInputOneKey_C* Widget);
	void BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index);
	void DoResetToDefault();
	void DoNotResetToDefault();
	void TrySetInputEnabled();
	void HandleChangeBinding(const struct FKey& NewKey);
	void ExecuteUbergraph_TabGamePadConfig(int EntryPoint);
	void ShowResetToDefaultMessage__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
	void EnableGamepadInputOverlay__DelegateSignature(bool AcceptInput, const struct FText& OverlayText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
