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

// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
// 0x0058 (0x02F0 - 0x0298)
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               OverlayBorder;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Currently_Selected_Input;                                 // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Currently_Primary;                                     // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    Enable_Overlay;                                           // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Disable_Overlay;                                          // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Using_Gamepad;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Gamepad_Changed;                                          // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UOptionsMenuInputDisplayOnly_C*              DisplayObject;                                            // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C");
		return ptr;
	}


	void SetupDisplayOption(int InputIndex, class UOptionsMenuInputDisplayOnly_C** ReturnObject);
	void Set_Input_Enabled(bool Enabled);
	void Overlay_Key_Pressed(const struct FKey& NewKey);
	void DialogResult_018CEC524FAF598D4D7A358441037217(EFortDialogResult Result, const struct FName& ResultName);
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(ECommonInputType* NewInputType);
	void UnbindClicked(int Number_in_List, class UOptionsMenuInput_C* Widget);
	void ClearAndConstructKeybindList();
	void Input_Clicked(int Number_in_List, bool Is_Primary_Button);
	void UpdateOptionsTab();
	void Construct();
	void HandleChangeBinding(const struct FKey& NewKey);
	void ExecuteUbergraph_TabInputOptions(int EntryPoint);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, const struct FText& Overlay_Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
