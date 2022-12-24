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

// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// 0x0028 (0x0330 - 0x0308)
class UWebPurchase_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (Transient, DuplicateTransient)
	class UCircularThrobber*                           Throbber;                                                 // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     WebContent;                                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         BackAction;                                               // 0x0320(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C");
		return ptr;
	}


	void HandleBack(bool* bPassThrough);
	void BindDelegates();
	void Dismiss();
	void Display(class UWidget* WebWidget, const struct FString& AttemptedMTXOfferId);
	void OnActivated();
	void ExecuteUbergraph_WebPurchase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
