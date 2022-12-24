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

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x0068 (0x0450 - 0x03E8)
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            NewModeViolation;                                         // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaGenericLobbyViolator_C*               AthenaGenericLobbyViolator;                               // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaMatchmakingModeButton_C*              AthenaMatchmakingModeButton;                              // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      MatchmakingSpinner;                                       // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UShowdownLobbyViolator_C*                    ShowdownLobbyViolator;                                    // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    ViolatorContent;                                          // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                             ViolatorSwitcher;                                         // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    PlaylistsUpdated;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                ShowNewPlaylistTimer;                                     // 0x0438(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlaylistChanged;                                        // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C");
		return ptr;
	}


	void OpenPlayOptions();
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnAvailablePlaylistsUpdated();
	void OnPlayButtonUpdated(bool* bShowPlayButton);
	void OnSetPlayButtonText(struct FText* PlayButtonText);
	void OnSetCancelButtonText(struct FText* CancelButtonText);
	void PlaylistChanged(struct FPlaylistFrontEndData* NewPlaylist, struct FText* PlaylistCMSOverrideName, EFortLobbyType* LobbyType);
	void BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetSquadFillText(bool* InCurrentSquadFill);
	void OnNewModeViolatorUpdated(bool* bShouldShow);
	void Animate();
	void UpdateCustomViolatorText(struct FText* ModeName, struct FText* SubText);
	void ExecuteUbergraph_AthenaMatchmakingPlay(int EntryPoint);
	void OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, const struct FText& Playlist_CMS_Override_Name, EFortLobbyType Lobby_Type);
	void PlaylistsUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
