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

// WidgetBlueprintGeneratedClass AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C
// 0x0010 (0x02B0 - 0x02A0)
class UAthenaSpectatorNameplateLayer_C : public UAthenaSpectatorNameplateLayerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class UFortActorCanvas*                            NameplateIndicatorsCanvas;                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaSpectatorNameplateLayer.AthenaSpectatorNameplateLayer_C");
		return ptr;
	}


	void AddNameplate(class UAthenaSpectatorNameplateBase** NameplateWidget);
	void RemoveNameplate(class UAthenaSpectatorNameplateBase** NameplateWidget);
	void ExecuteUbergraph_AthenaSpectatorNameplateLayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
