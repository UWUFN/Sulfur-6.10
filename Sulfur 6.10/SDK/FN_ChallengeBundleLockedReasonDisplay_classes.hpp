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

// WidgetBlueprintGeneratedClass ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C
// 0x0030 (0x0248 - 0x0218)
class UChallengeBundleLockedReasonDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UCommonTextBlock*                            LockedText;                                               // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFortChallengeBundleInfoLockedReason        LockReason;                                               // 0x0228(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TScriptInterface<class UFortTimespanDataSource>    TimespanSource;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C");
		return ptr;
	}


	void GetTimespanValue(struct FTimespan* Result);
	void HandleTick(class UObject* Source);
	void SetTimespanSource(const TScriptInterface<class UFortTimespanDataSource>& Value);
	void UpdateLockReasonDisplay();
	void SetLockReason(const struct FFortChallengeBundleInfoLockedReason& Value);
	void Construct();
	void ExecuteUbergraph_ChallengeBundleLockedReasonDisplay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
