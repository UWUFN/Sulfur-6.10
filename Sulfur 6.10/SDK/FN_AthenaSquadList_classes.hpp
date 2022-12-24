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

// WidgetBlueprintGeneratedClass AthenaSquadList.AthenaSquadList_C
// 0x0020 (0x0268 - 0x0248)
class UAthenaSquadList_C : public UAthenaSquadListBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UFortDynamicEntryBox*                        SquadList;                                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USoundBase*                                  Sound_SquadMemberDisconnected;                            // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_LastSquadMemberDisconnected;                        // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaSquadList.AthenaSquadList_C");
		return ptr;
	}


	void HandleSquadMemberDisconnected(class AFortPlayerStateAthena* Player);
	void ClearSquadMembers();
	void RebuildSquadMembersList();
	void AppendSquadMember(class AFortPlayerStateAthena* PlayerState);
	void Construct();
	void ExecuteUbergraph_AthenaSquadList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
