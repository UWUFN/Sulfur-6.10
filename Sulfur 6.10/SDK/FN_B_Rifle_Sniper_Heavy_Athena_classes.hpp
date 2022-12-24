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

// BlueprintGeneratedClass B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C
// 0x0008 (0x0FD0 - 0x0FC8)
class AB_Rifle_Sniper_Heavy_Athena_C : public AB_Rifle_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C");
		return ptr;
	}


	void CalculateTraceDistance(struct FVector* StartPoint, struct FVector* EndPoint);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
