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

// WidgetBlueprintGeneratedClass VehicleInfoIndicator.VehicleInfoIndicator_C
// 0x0010 (0x02A0 - 0x0290)
class UVehicleInfoIndicator_C : public UFortVehicleInfoIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UCommonHealthBar_C*                          CommonHealthBar;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VehicleInfoIndicator.VehicleInfoIndicator_C");
		return ptr;
	}


	void OnVehicleChanged();
	void OnVehicleHealthChanged();
	void ExecuteUbergraph_VehicleInfoIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
