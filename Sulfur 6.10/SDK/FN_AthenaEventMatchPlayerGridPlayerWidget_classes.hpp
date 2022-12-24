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

// WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C
// 0x05A8 (0x07D8 - 0x0230)
class UAthenaEventMatchPlayerGridPlayerWidget_C : public UAthenaEventMatchPlayerWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnShieldDamagedAnim;                                      // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            OnHealthDamagedAnim;                                      // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               ActiveBorder;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaSpectatorKillsWidget_C*               AthenaSpectatorKillsWidget;                               // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               BeingRevivedBorder;                                       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               DBNOBorder;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               EliminatedBorder;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaSpectatorHitPointBar_C*               HealthBar;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               HealthDamagedBorder;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   HitPointBarsScaleBox;                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   KillsScaleBox;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               LowHealthBorder;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            PlayerName;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   PlayerNameScaleBox;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaSpectatorHitPointBar_C*               ShieldBar;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonBorder*                               ShieldDamagedBorder;                                      // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                DesignTime_GridSize;                                      // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowHealthPercent;                                         // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ActiveColor;                                              // 0x02C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                LowHealthColor;                                           // 0x02D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DBNOColor;                                                // 0x02E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BeingRevivedColor;                                        // 0x02F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                EliminatedColor;                                          // 0x0300(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                HealthDamagedColor;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShieldDamagedColor;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FSlateColor                                 TextColorActive;                                          // 0x0330(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColorEliminated;                                      // 0x0358(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EAthenaEventMatchPlayerGridStatus>     PlayerStatus;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DesignTime_ApplyHealthDamage;                             // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DesignTime_ApplyShieldDamage;                             // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0383(0x0005) MISSED OFFSET
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0388(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LowHealthBrush;                                           // 0x0410(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DBNOBrush;                                                // 0x0498(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BeingRevivedBrush;                                        // 0x0520(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EliminatedBrush;                                          // 0x05A8(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HealthDamagedBrush;                                       // 0x0630(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ShieldDamagedBrush;                                       // 0x06B8(0x0088) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ShadowBrush;                                              // 0x0740(0x0088) (Edit, BlueprintVisible)
	TArray<class UCommonBorder*>                       Backgrounds;                                              // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C");
		return ptr;
	}


	void StopDamageAnimations();
	void IsGamePreAircraft(bool* bIsGamePreAircraft);
	void IsAliveAndNotInAircraft(bool* bAliveAndNotInAircraft);
	void UpdateKillsWidget();
	void UpdateHitPointBars();
	void SetupBackgrounds();
	void OnGridSizeChanged(int InGridSize);
	void UpdateNameText();
	void UpdateStatus();
	void UpdateBackground();
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData** InPlayerData, struct FString* InPlayerName);
	void OnHealthDamaged(class UAthenaRemotePlayerViewData** InPlayerData, float* InHealthPercent);
	void OnShieldDamaged(class UAthenaRemotePlayerViewData** InPlayerData, float* InShieldPercent);
	void OnDBNOStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDBNO);
	void OnDeadStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDead);
	void OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsBeingRevived);
	void OnPlayerStateChanged(class UAthenaRemotePlayerViewData** InPlayerData, class AFortPlayerStateAthena** InPlayerState);
	void OnHealthHealed(class UAthenaRemotePlayerViewData** InPlayerData, float* InHealthPercent);
	void OnShieldHealed(class UAthenaRemotePlayerViewData** InPlayerData, float* InShieldPercent);
	void OnDisconnectedChanged(class UAthenaRemotePlayerViewData** InPlayerData, bool* bIsDisconnected);
	void PreConstruct(bool* IsDesignTime);
	void OnPlayerDataChanged(class UAthenaRemotePlayerViewData** InPlayerData);
	void ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
