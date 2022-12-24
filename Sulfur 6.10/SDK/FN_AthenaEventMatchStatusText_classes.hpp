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

// WidgetBlueprintGeneratedClass AthenaEventMatchStatusText.AthenaEventMatchStatusText_C
// 0x00C8 (0x02E0 - 0x0218)
class UAthenaEventMatchStatusText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            HighlightStat3;                                           // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            HighlightStat1;                                           // 0x0228(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            NewTopScore;                                              // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              Font;                                                     // 0x0240(0x0050) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color;                                                    // 0x0290(0x0028) (Edit, BlueprintVisible)
	bool                                               ShowMaterialHighlight;                                    // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class UMaterialInstance*                           HighlightMaterial;                                        // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       TextToDisplay;                                            // 0x02C8(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaEventMatchStatusText.AthenaEventMatchStatusText_C");
		return ptr;
	}


	void ApplyText();
	void HighlightMaterialControl();
	void SetOpacityAndColor(const struct FSlateColor& ColorIn);
	void GetFont(struct FSlateFontInfo* Output);
	void SetFont(const struct FSlateFontInfo& FontIn);
	void SetText(const struct FText& InText, bool ApplyImmediately);
	void PreConstruct(bool* IsDesignTime);
	void ApplyNewText();
	void ExecuteUbergraph_AthenaEventMatchStatusText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
