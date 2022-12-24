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

// BlueprintGeneratedClass BP_Decal_Lightning.BP_Decal_Lightning_C
// 0x0008 (0x0338 - 0x0330)
class ABP_Decal_Lightning_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Lightning.BP_Decal_Lightning_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Decal_Lightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
