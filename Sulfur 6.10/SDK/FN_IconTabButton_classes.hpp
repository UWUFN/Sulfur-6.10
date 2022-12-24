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

// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// 0x0158 (0x0C70 - 0x0B18)
class UIconTabButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (Transient, DuplicateTransient)
	class UNormalBangWrapper_C*                        BangWrapper;                                              // 0x0B20(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            CenterButtonTextWidget;                                   // 0x0B28(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              ContentHB;                                                // 0x0B30(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      LeftSideImage;                                            // 0x0B38(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxShell;                                             // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x0B48(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 IconBrush;                                                // 0x0B60(0x0088) (Edit, BlueprintVisible)
	bool                                               UseText;                                                  // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BE9(0x0003) MISSED OFFSET
	struct FLinearColor                                SelectedIconTint;                                         // 0x0BEC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DeselectedIconTint;                                       // 0x0BFC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HoveredIconTint;                                          // 0x0C0C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBangEnabled;                                             // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChangeIconColorWhenSelected;                              // 0x0C1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0C1E(0x0002) MISSED OFFSET
	struct FSlateColor                                 SelectedIconColor;                                        // 0x0C20(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 UnSelectedIconColor;                                      // 0x0C48(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C");
		return ptr;
	}


	void Play_Hover_Sound();
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor);
	void Update_Bang_State(bool bBangEnabled);
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void ShowText();
	void Set_Icon(const struct FSlateBrush& IconBrush);
	void Set_Text(const struct FText& ButtonText);
	void PreConstruct(bool* IsDesignTime);
	void SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo);
	void BP_OnSelected();
	void BP_OnDeselected();
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnEnabled();
	void BP_OnDisabled();
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_IconTabButton(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
