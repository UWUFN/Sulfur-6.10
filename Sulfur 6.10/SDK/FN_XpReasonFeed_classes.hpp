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

// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
// 0x0011 (0x0229 - 0x0218)
class UXpReasonFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)
	class UDynamicEntryBox*                            DynamicXpFeed;                                            // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Animating;                                                // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C");
		return ptr;
	}


	void ImmediatelyShowXpRewards(TArray<struct FAthenaMatchXpReward>* XpRewards);
	void IsReadyForNextXpReward(bool* Ready);
	void Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward);
	void Reset_Feed();
	void Destruct();
	void ExecuteUbergraph_XpReasonFeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
