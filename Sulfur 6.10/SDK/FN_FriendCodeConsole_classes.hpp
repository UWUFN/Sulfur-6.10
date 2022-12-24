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

// WidgetBlueprintGeneratedClass FriendCodeConsole.FriendCodeConsole_C
// 0x0038 (0x0B50 - 0x0B18)
class UFriendCodeConsole_C : public UFriendCodeEntryBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (Transient, DuplicateTransient)
	class UEditableTextBox*                            CodeDetailsText;                                          // 0x0B20(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            CodeDisplayText;                                          // 0x0B28(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFriendCode                                 FriendCode;                                               // 0x0B30(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendCodeConsole.FriendCodeConsole_C");
		return ptr;
	}


	void Construct();
	void OnSendFriendCodeMessageComplete(bool bMessageSent);
	void BP_OnClicked();
	void ExecuteUbergraph_FriendCodeConsole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
