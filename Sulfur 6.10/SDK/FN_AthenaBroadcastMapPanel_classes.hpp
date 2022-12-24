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

// WidgetBlueprintGeneratedClass AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C
// 0x01C8 (0x0500 - 0x0338)
class UAthenaBroadcastMapPanel_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UAthenaBroadcastScoreboard_C*                AthenaBroadcastScoreboard;                                // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaGamePhaseWidget_C*                    AthenaGamePhaseWidget;                                    // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaMapLayer*                             AthenaMapLayer;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UAthenaPlayersLeftWidget_C*                  AthenaPlayersLeftWidget;                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    ScoreboardSB;                                             // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UIconTextButton_C*                           ToggleScoreboardButton;                                   // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 LeftArrowBrush;                                           // 0x0370(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 RightArrowBrush;                                          // 0x03F8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortByTeamInput;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortByNameInput;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortByKillsInput;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         SortByStateInput;                                         // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>                 SortByInputs;                                             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                         ShowScoreboardInput;                                      // 0x04D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         HideScoreboardInput;                                      // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ViewProfileInput;                                         // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaBroadcastMapPanel.AthenaBroadcastMapPanel_C");
		return ptr;
	}


	void ViewProfile(bool* bPassThrough);
	void OnSortMethodChanged();
	void InputMethodChanged(bool bUsingGamepad);
	void SetScoreboardInputHandlerStates(bool bScoreboardVisible);
	void ShowScoreboard(bool* bPassThrough);
	void HideScoreboard(bool* bPassThrough);
	void SetSortByInputHandlerStates(bool bScoreboardVisible);
	void InitializeInputHandlers();
	void IsWidgetLocationVisible(const struct FVector2D& WidgetLocation, bool* Visible);
	void GetScreenToMapWidgetLocation(const struct FVector2D& ScreenLocation, struct FVector2D* WidgetLocation);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void Construct();
	void BndEvt__ToggleScoreboardButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputModeChanged(bool* bUsingGamepad);
	void OnActivated();
	void ExecuteUbergraph_AthenaBroadcastMapPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
