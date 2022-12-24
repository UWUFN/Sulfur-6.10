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

// WidgetBlueprintGeneratedClass ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C
// 0x001E (0x0268 - 0x024A)
class UItemReceivedBattlePassPromiseHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x024A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            BodyMessageWidget;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TextName;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C");
		return ptr;
	}


	void UpdateSeasonText(bool IsDesignTime);
	void PreConstruct(bool* IsDesignTime);
	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
