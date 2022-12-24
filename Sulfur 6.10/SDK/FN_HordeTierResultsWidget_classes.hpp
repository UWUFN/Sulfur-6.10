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

// WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C
// 0x0068 (0x0370 - 0x0308)
class UHordeTierResultsWidget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0308(0x0008) (Transient, DuplicateTransient)
	class UMovieWidget_C*                              Movie;                                                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UResults_NameplateWidget_C*                  ResultsNameplate;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnTierResultsWidgetComplete;                              // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	EFortCompletionResult                              CompletionResult;                                         // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	class UMediaSource*                                DefaultDefeatMedia;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaSource*                                DefaultVictoryMedia;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  VictorySound;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DefeatSound;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovieTextDelay;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FString                                     NameplateIntroFunctionName;                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C");
		return ptr;
	}


	void OnEndOfMovieReached();
	void ChooseMediaToUse(class UMediaSource** MediaToUse);
	void Initialize(EFortCompletionResult Result);
	void InitializeMovie();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_HordeTierResultsWidget(int EntryPoint);
	void OnTierResultsWidgetComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
