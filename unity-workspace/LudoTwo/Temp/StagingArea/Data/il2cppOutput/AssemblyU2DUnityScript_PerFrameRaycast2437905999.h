#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PerFrameRaycast
struct  PerFrameRaycast_t2437905999  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RaycastHit PerFrameRaycast::hitInfo
	RaycastHit_t87180320  ___hitInfo_2;
	// UnityEngine.Transform PerFrameRaycast::tr
	Transform_t3275118058 * ___tr_3;

public:
	inline static int32_t get_offset_of_hitInfo_2() { return static_cast<int32_t>(offsetof(PerFrameRaycast_t2437905999, ___hitInfo_2)); }
	inline RaycastHit_t87180320  get_hitInfo_2() const { return ___hitInfo_2; }
	inline RaycastHit_t87180320 * get_address_of_hitInfo_2() { return &___hitInfo_2; }
	inline void set_hitInfo_2(RaycastHit_t87180320  value)
	{
		___hitInfo_2 = value;
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(PerFrameRaycast_t2437905999, ___tr_3)); }
	inline Transform_t3275118058 * get_tr_3() const { return ___tr_3; }
	inline Transform_t3275118058 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t3275118058 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
