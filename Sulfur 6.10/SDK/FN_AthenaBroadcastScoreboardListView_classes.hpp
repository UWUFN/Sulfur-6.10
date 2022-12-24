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

// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C
// 0x0010 (0x0230 - 0x0220)
class UAthenaBroadcastScoreboardListView_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UCommonListView*                             List;                                                     // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C");
		return ptr;
	}


	void ResetFocus(class UAthenaSpectatorScoreboardRowData* RowToSelect);
	void BndEvt__List_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void ExecuteUbergraph_AthenaBroadcastScoreboardListView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
