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

// WidgetBlueprintGeneratedClass AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C
// 0x00B8 (0x0300 - 0x0248)
class UAthenaSpectatorHitPointBar_C : public UAthenaSpectatorHitPointBarBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class USimpleMaterialProgressBar_C*                ProgressBarDelta;                                         // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USimpleMaterialProgressBar_C*                ProgressBarFill;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                HealthFillColorA;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthFillColorB;                                         // 0x0270(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthDeltaColorA;                                        // 0x0280(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthDeltaColorB;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthBackgroundColor;                                    // 0x02A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldFillColorA;                                         // 0x02B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldFillColorB;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldDeltaColorA;                                        // 0x02D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldDeltaColorB;                                        // 0x02E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldBackgroundColor;                                    // 0x02F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C");
		return ptr;
	}


	void InitializeBar();
	void PreConstruct(bool* IsDesignTime);
	void UpdateBars_BP();
	void OnDBNOChanged_BP();
	void OnDBNOChanged(bool* bInIsDBNO);
	void OnCurrentValueChanged(float* InCurrentValue);
	void OnDeltaValueChanged(float* InDeltaValue);
	void ExecuteUbergraph_AthenaSpectatorHitPointBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
