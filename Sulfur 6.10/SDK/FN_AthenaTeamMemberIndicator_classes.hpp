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

// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
// 0x001C (0x02AC - 0x0290)
class UAthenaTeamMemberIndicator_C : public UAthenaPlayerIndicatorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UAthenaTeamMemberDBNOState_C*                DBNOIndicator;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  PlayerName;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Team_Member_Index;                                        // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C");
		return ptr;
	}


	void DBNOStateChanged(class AFortPlayerStateAthena** PS, bool* bDBNO);
	void TalkingStateChanged(class AFortPlayerStateAthena** PS, bool* bTalking);
	void BeingRevivedStateChanged(class AFortPlayerStateAthena** PS, bool* bReviving);
	void PlayerNameChanged(class AFortPlayerStateAthena** PS, struct FString* PlayerName);
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
