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

// BlueprintGeneratedClass BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C
// 0x0008 (0x0338 - 0x0330)
class ABP_Decal_Tomato_Splat_C : public ADecalActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_Tomato_Splat.BP_Decal_Tomato_Splat_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Decal_Tomato_Splat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
