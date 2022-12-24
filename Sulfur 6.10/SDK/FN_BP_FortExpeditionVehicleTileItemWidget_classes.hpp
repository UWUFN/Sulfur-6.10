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

// WidgetBlueprintGeneratedClass BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C
// 0x0038 (0x0B60 - 0x0B28)
class UBP_FortExpeditionVehicleTileItemWidget_C : public UFortExpeditionVehicleTileItemWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B28(0x0008) (Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                        BasicRatingWidget;                                        // 0x0B30(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Name;                                                     // 0x0B38(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      VehicleIcon;                                              // 0x0B40(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       SquadIdName;                                              // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnVehicleSelected;                                        // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C");
		return ptr;
	}


	void Set_Name(const struct FName& SquadId);
	void Set_Rating(const struct FName& SquadId);
	void Set_Icon(const struct FName& SquadId);
	void OnListItemObjectSet(class UObject** ListItemObject);
	void BP_OnClicked();
	void ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int EntryPoint);
	void OnVehicleSelected__DelegateSignature(const struct FName& SquadId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
