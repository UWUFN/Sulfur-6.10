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

// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
// 0x00D4 (0x040C - 0x0338)
class UProgressModalWidget_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class ULightbox_C*                                 Lightbox;                                                 // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressWidget_C*                           ProgressWidget;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Title;                                                    // 0x0350(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0368(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Icon;                                                     // 0x0380(0x0088) (Edit, BlueprintVisible)
	bool                                               bIntroOutrEnabled;                                        // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInitialize;                                          // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusSelf;                                               // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumeAnalogInput;                                      // 0x040B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C");
		return ptr;
	}


	struct FEventReply OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent);
	void SetIcon(const struct FSlateBrush& Icon);
	void SetDescription(const struct FText& Description);
	void SetTitle(const struct FText& Title);
	void Initialize();
	void Construct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void Destruct();
	void ExecuteUbergraph_ProgressModalWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
