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

// WidgetBlueprintGeneratedClass TopMenu_HelpButton.TopMenu_HelpButton_C
// 0x0071 (0x0291 - 0x0220)
class UTopMenu_HelpButton_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UIconTextButton_C*                           HelpButtonInner;                                          // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBoxContainer;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateVisibility;                                       // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty TopMenu_HelpButton.TopMenu_HelpButton_C.HelpContextSoftObject
	bool                                               bLoading;                                                 // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TopMenu_HelpButton.TopMenu_HelpButton_C");
		return ptr;
	}


	ESlateVisibility GetButtonVisibility();
	void OnLoaded_A64379784E473AB391B349B478F10865(class UObject* Loaded);
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_TopMenu_HelpButton(int EntryPoint);
	void OnButtonHovered__DelegateSignature(class UCommonButton* Button);
	void OnUpdateVisibility__DelegateSignature(bool Visibility);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
