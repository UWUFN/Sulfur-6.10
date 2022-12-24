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

// WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C
// 0x0044 (0x0B5C - 0x0B18)
class UTimelineMarker_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      MarkerIcon;                                               // 0x0B20(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              RelativeTime;                                             // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortReplayEventType                               EventType;                                                // 0x0B2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	struct FSlateColor                                 HoveredColor;                                             // 0x0B30(0x0028) (Edit, BlueprintVisible)
	int                                                EventIndex;                                               // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TimelineMarker.TimelineMarker_C");
		return ptr;
	}


	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void ExecuteUbergraph_TimelineMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
