#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t578636151;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DUnityScript_FootType3548411356.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FootstepHandler
struct  FootstepHandler_t2514543022  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource FootstepHandler::audioSource
	AudioSource_t1135106623 * ___audioSource_2;
	// FootType FootstepHandler::footType
	int32_t ___footType_3;
	// UnityEngine.PhysicMaterial FootstepHandler::physicMaterial
	PhysicMaterial_t578636151 * ___physicMaterial_4;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(FootstepHandler_t2514543022, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_footType_3() { return static_cast<int32_t>(offsetof(FootstepHandler_t2514543022, ___footType_3)); }
	inline int32_t get_footType_3() const { return ___footType_3; }
	inline int32_t* get_address_of_footType_3() { return &___footType_3; }
	inline void set_footType_3(int32_t value)
	{
		___footType_3 = value;
	}

	inline static int32_t get_offset_of_physicMaterial_4() { return static_cast<int32_t>(offsetof(FootstepHandler_t2514543022, ___physicMaterial_4)); }
	inline PhysicMaterial_t578636151 * get_physicMaterial_4() const { return ___physicMaterial_4; }
	inline PhysicMaterial_t578636151 ** get_address_of_physicMaterial_4() { return &___physicMaterial_4; }
	inline void set_physicMaterial_4(PhysicMaterial_t578636151 * value)
	{
		___physicMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___physicMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
