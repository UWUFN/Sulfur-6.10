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

// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
// 0x0030 (0x0380 - 0x0350)
class USocialPanel_C : public UFortSocialMenuPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	class USafeZone*                                   SafeZone_0_1;                                             // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         InputClose;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    SocialPanelCloseRequested;                                // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C");
		return ptr;
	}


	void HandleAction_Close(bool* Passthrough);
	void InitializeInput();
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_SocialPanel(int EntryPoint);
	void SocialPanelCloseRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
