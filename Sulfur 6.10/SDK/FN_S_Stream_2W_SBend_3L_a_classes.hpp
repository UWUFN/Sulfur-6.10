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

// BlueprintGeneratedClass S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C
// 0x0001 (0x03EC - 0x03EB)
class AS_Stream_2W_SBend_3L_a_C : public A_WaterMeshBlueprintMaster_C
{
public:
	bool                                               ShowTestMesh_0_1;                                         // 0x03EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
