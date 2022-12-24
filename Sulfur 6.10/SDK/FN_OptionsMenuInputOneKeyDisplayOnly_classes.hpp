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

// WidgetBlueprintGeneratedClass OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C
// 0x0038 (0x0258 - 0x0220)
class UOptionsMenuInputOneKeyDisplayOnly_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            ActionText;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UKeybindWidget_C*                            KeybindWidget;                                            // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    Input_Clicked;                                            // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnbindClicked;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C");
		return ptr;
	}


	class UObject* GetListItemObject();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly(int EntryPoint);
	void UnbindClicked__DelegateSignature(int Number_in_List, class UOptionsMenuInputOneKey_C* Widget);
	void Input_Clicked__DelegateSignature(int Number_in_List, bool Is_Primary_Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
