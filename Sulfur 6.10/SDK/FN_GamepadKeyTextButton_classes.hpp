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

// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
// 0x0150 (0x0C70 - 0x0B20)
class UGamepadKeyTextButton_C : public UFortGamepadCustomListItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (Transient, DuplicateTransient)
	class UKeybindWidget_C*                            BoundKey;                                                 // 0x0B28(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     ContentBorder;                                            // 0x0B30(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_Desc;                                   // 0x0B38(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                          FortRichTextBlock_NoKey;                                  // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Nokey;                                            // 0x0B48(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x0B50(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0B68(0x0088) (Edit, BlueprintVisible)
	class UClass*                                      ControllerInputStyle;                                     // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ButtonClickAction;                                        // 0x0BF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C09(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeTheBinding_Button;                                  // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       ActionNameData;                                           // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        KeyData;                                                  // 0x0C28(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TextData;                                                 // 0x0C40(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        KeyNone;                                                  // 0x0C58(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C");
		return ptr;
	}


	void SetNonInteractableStyle();
	void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);
	void UpdateContentAlignment();
	void OnListItemObjectSet(class UObject** ListItemObject);
	void SetData(const struct FKey& Key, const struct FText& DescText, const struct FName& ActionName);
	void PreConstruct(bool* IsDesignTime);
	void SetDataAndUpdateButton(const struct FKey& Key, const struct FText& DescText, const struct FName& ActionName);
	void UpdateButton(class UGamepadKeyTextButton_C* Button);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void ExecuteUbergraph_GamepadKeyTextButton(int EntryPoint);
	void ChangeTheBinding_Button__DelegateSignature(const struct FName& ActionName, const struct FKey& Key);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
