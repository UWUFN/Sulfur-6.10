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

// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
// 0x0008 (0x20F8 - 0x20F0)
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x20F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
