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

// BlueprintGeneratedClass GE_GasGrenade_PulseDamage.GE_GasGrenade_PulseDamage_C
// 0x0000 (0x05F0 - 0x05F0)
class UGE_GasGrenade_PulseDamage_C : public UGET_DirectBallisticDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_GasGrenade_PulseDamage.GE_GasGrenade_PulseDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
