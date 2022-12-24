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

// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
// 0x0018 (0x0288 - 0x0270)
class UTabAudioOptions_C : public UFortOptionsTab
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            CommonTextBlock_0_1;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TooltipDisplayReference;                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C");
		return ptr;
	}


	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Setting_Value_Changed();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_TabAudioOptions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
