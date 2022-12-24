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

// WidgetBlueprintGeneratedClass FortReplayNotification.FortReplayNotification_C
// 0x0089 (0x02A9 - 0x0220)
class UFortReplayNotification_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UCommonBorder*                               Border;                                                   // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            Notification;                                             // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              TimeToDisplay;                                            // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInterpSpeed;                                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFading;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              RemainingTime;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FullyVisible;                                             // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FullyHidden;                                              // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       GameOnly;                                                 // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ReplayOnly;                                               // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	ESlateVisibility                                   PendingVisibility;                                        // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayNotification.FortReplayNotification_C");
		return ptr;
	}


	void GetVisibilityText(EHudVisibilityState Visibility, struct FText* Text);
	void IsVisibilityNotification(const struct FText& Notification, bool* IsVisibilityNotification);
	void SetNotificationVisibility(ESlateVisibility Visibility);
	void TickRemainingTime(float DeltaTime);
	void StartFading();
	void TickFade(float DeltaTime);
	void ShowNotification(const struct FText& NotificationText);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_FortReplayNotification(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
