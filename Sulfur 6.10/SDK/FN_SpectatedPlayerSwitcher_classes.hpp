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

// WidgetBlueprintGeneratedClass SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C
// 0x0010 (0x0250 - 0x0240)
class USpectatedPlayerSwitcher_C : public UFortSpectatedPlayerSwitcher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                VerticalBox_0_1;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C");
		return ptr;
	}


	void FocusWidget();
	void PreConstruct(bool* IsDesignTime);
	void OnDisplayedTargetsUpdated();
	void ExecuteUbergraph_SpectatedPlayerSwitcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
