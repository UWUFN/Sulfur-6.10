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

// WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C
// 0x059B (0x07BB - 0x0220)
class UItemStackCounter_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class USizeBox*                                    _SizeBox_;                                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               BorderBase;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextCounter;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFortMultiSizeBrush                         MultiSizeBase;                                            // 0x0240(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeFont                          MultiSizeFont;                                            // 0x0570(0x01E0) (Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                          // 0x0750(0x0060) (Edit, BlueprintVisible)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysVisible;                                            // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TruncateValue;                                            // 0x07B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibilityWithNoStack;                                    // 0x07BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C");
		return ptr;
	}


	void Refresh_Visibility();
	void Set_Stack_Count(int Count);
	void Update(TEnumAsByte<EFortBrushSize> Brush_Size, int Count);
	void PreConstruct(bool* IsDesignTime);
	void ExecuteUbergraph_ItemStackCounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
