#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveAnimation
struct  MoveAnimation_t3061523661  : public Il2CppObject
{
public:
	// UnityEngine.AnimationClip MoveAnimation::clip
	AnimationClip_t3510324950 * ___clip_0;
	// UnityEngine.Vector3 MoveAnimation::velocity
	Vector3_t2243707580  ___velocity_1;
	// System.Single MoveAnimation::weight
	float ___weight_2;
	// System.Boolean MoveAnimation::currentBest
	bool ___currentBest_3;
	// System.Single MoveAnimation::speed
	float ___speed_4;
	// System.Single MoveAnimation::angle
	float ___angle_5;

public:
	inline static int32_t get_offset_of_clip_0() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___clip_0)); }
	inline AnimationClip_t3510324950 * get_clip_0() const { return ___clip_0; }
	inline AnimationClip_t3510324950 ** get_address_of_clip_0() { return &___clip_0; }
	inline void set_clip_0(AnimationClip_t3510324950 * value)
	{
		___clip_0 = value;
		Il2CppCodeGenWriteBarrier(&___clip_0, value);
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___velocity_1)); }
	inline Vector3_t2243707580  get_velocity_1() const { return ___velocity_1; }
	inline Vector3_t2243707580 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(Vector3_t2243707580  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___weight_2)); }
	inline float get_weight_2() const { return ___weight_2; }
	inline float* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(float value)
	{
		___weight_2 = value;
	}

	inline static int32_t get_offset_of_currentBest_3() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___currentBest_3)); }
	inline bool get_currentBest_3() const { return ___currentBest_3; }
	inline bool* get_address_of_currentBest_3() { return &___currentBest_3; }
	inline void set_currentBest_3(bool value)
	{
		___currentBest_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(MoveAnimation_t3061523661, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
