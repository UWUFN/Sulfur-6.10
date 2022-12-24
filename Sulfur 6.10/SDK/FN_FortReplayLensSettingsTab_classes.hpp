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

// WidgetBlueprintGeneratedClass FortReplayLensSettingsTab.FortReplayLensSettingsTab_C
// 0x009C (0x03DC - 0x0340)
class UFortReplayLensSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*            ApertureSelector;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuSliderReplay_C*                  ApertureSlider;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            AutoExposureSelector;                                     // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            AutoFocusSelector;                                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuSliderReplay_C*                  ExposureSlider;                                           // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            FocalLengthSelector;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuSliderReplay_C*                  FocalLengthSlider;                                        // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOptionsMenuSliderReplay_C*                  FocusDistanceSlider;                                      // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URotatorSelectorReplaySettings_C*            HighQualityFX;                                            // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              MaxFocusDistance;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultNormalizedFocusDistance;                           // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      AvailableApertures;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               ApertureTexts;                                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AvailableFocalLengths;                                    // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               FocalLengthTexts;                                         // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CustomFocalLengthIndex;                                   // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayLensSettingsTab.FortReplayLensSettingsTab_C");
		return ptr;
	}


	void RefreshHighQualityFXState(const struct FFortReplayFXState& FX_State);
	void InitFocalLengthOptions(float CurrentFocalLength);
	void SetFocusDistanceWidget();
	void SetFocusVisibility();
	void SetExposureVisibility();
	void SetWidgetValues();
	void OnActivated();
	void BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value);
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating** FortPlayerControllerSpectating, ESpectatorCameraType* CameraType);
	void ResetToDefault();
	void CenterOnTab();
	void BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature(int Selected_Index);
	void BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature(int Selected_Index);
	void PreConstruct(bool* IsDesignTime);
	void InitializeWidgets();
	void BndEvt__HighQualityFX_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int Selected_Index);
	void ExecuteUbergraph_FortReplayLensSettingsTab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
