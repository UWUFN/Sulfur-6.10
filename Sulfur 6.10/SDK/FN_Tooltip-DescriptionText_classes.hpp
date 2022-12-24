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

// WidgetBlueprintGeneratedClass Tooltip-DescriptionText.Tooltip-DescriptionText_C
// 0x0028 (0x0240 - 0x0218)
class UTooltip_DescriptionText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  TextItemDescription;                                      // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       DescriptionText;                                          // 0x0228(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tooltip-DescriptionText.Tooltip-DescriptionText_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Tooltip_DescriptionText(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
