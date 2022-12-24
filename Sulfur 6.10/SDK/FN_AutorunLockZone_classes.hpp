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

// WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C
// 0x0128 (0x0490 - 0x0368)
class UAutorunLockZone_C : public UFortAutorunLockZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_80_81;                                              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              Target_Opacity;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 RunLockHighlight;                                         // 0x0380(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 RunLockNormal;                                            // 0x0408(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C");
		return ptr;
	}


	void OnInZoneChanged(bool* bNewIsInZone);
	void ExecuteUbergraph_AutorunLockZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
