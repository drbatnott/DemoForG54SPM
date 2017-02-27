#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpiderAnimationTest
struct  SpiderAnimationTest_t3642224283  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody SpiderAnimationTest::rigid
	Rigidbody_t4233889191 * ___rigid_2;
	// UnityEngine.AnimationClip SpiderAnimationTest::forwardAnim
	AnimationClip_t3510324950 * ___forwardAnim_3;
	// UnityEngine.AnimationClip SpiderAnimationTest::backAnim
	AnimationClip_t3510324950 * ___backAnim_4;
	// UnityEngine.AnimationClip SpiderAnimationTest::leftAnim
	AnimationClip_t3510324950 * ___leftAnim_5;
	// UnityEngine.AnimationClip SpiderAnimationTest::rightAnim
	AnimationClip_t3510324950 * ___rightAnim_6;
	// System.Single SpiderAnimationTest::walking
	float ___walking_7;
	// System.Single SpiderAnimationTest::angle
	float ___angle_8;
	// UnityEngine.Transform SpiderAnimationTest::tr
	Transform_t3275118058 * ___tr_9;

public:
	inline static int32_t get_offset_of_rigid_2() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___rigid_2)); }
	inline Rigidbody_t4233889191 * get_rigid_2() const { return ___rigid_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigid_2() { return &___rigid_2; }
	inline void set_rigid_2(Rigidbody_t4233889191 * value)
	{
		___rigid_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_2, value);
	}

	inline static int32_t get_offset_of_forwardAnim_3() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___forwardAnim_3)); }
	inline AnimationClip_t3510324950 * get_forwardAnim_3() const { return ___forwardAnim_3; }
	inline AnimationClip_t3510324950 ** get_address_of_forwardAnim_3() { return &___forwardAnim_3; }
	inline void set_forwardAnim_3(AnimationClip_t3510324950 * value)
	{
		___forwardAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___forwardAnim_3, value);
	}

	inline static int32_t get_offset_of_backAnim_4() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___backAnim_4)); }
	inline AnimationClip_t3510324950 * get_backAnim_4() const { return ___backAnim_4; }
	inline AnimationClip_t3510324950 ** get_address_of_backAnim_4() { return &___backAnim_4; }
	inline void set_backAnim_4(AnimationClip_t3510324950 * value)
	{
		___backAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___backAnim_4, value);
	}

	inline static int32_t get_offset_of_leftAnim_5() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___leftAnim_5)); }
	inline AnimationClip_t3510324950 * get_leftAnim_5() const { return ___leftAnim_5; }
	inline AnimationClip_t3510324950 ** get_address_of_leftAnim_5() { return &___leftAnim_5; }
	inline void set_leftAnim_5(AnimationClip_t3510324950 * value)
	{
		___leftAnim_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftAnim_5, value);
	}

	inline static int32_t get_offset_of_rightAnim_6() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___rightAnim_6)); }
	inline AnimationClip_t3510324950 * get_rightAnim_6() const { return ___rightAnim_6; }
	inline AnimationClip_t3510324950 ** get_address_of_rightAnim_6() { return &___rightAnim_6; }
	inline void set_rightAnim_6(AnimationClip_t3510324950 * value)
	{
		___rightAnim_6 = value;
		Il2CppCodeGenWriteBarrier(&___rightAnim_6, value);
	}

	inline static int32_t get_offset_of_walking_7() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___walking_7)); }
	inline float get_walking_7() const { return ___walking_7; }
	inline float* get_address_of_walking_7() { return &___walking_7; }
	inline void set_walking_7(float value)
	{
		___walking_7 = value;
	}

	inline static int32_t get_offset_of_angle_8() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___angle_8)); }
	inline float get_angle_8() const { return ___angle_8; }
	inline float* get_address_of_angle_8() { return &___angle_8; }
	inline void set_angle_8(float value)
	{
		___angle_8 = value;
	}

	inline static int32_t get_offset_of_tr_9() { return static_cast<int32_t>(offsetof(SpiderAnimationTest_t3642224283, ___tr_9)); }
	inline Transform_t3275118058 * get_tr_9() const { return ___tr_9; }
	inline Transform_t3275118058 ** get_address_of_tr_9() { return &___tr_9; }
	inline void set_tr_9(Transform_t3275118058 * value)
	{
		___tr_9 = value;
		Il2CppCodeGenWriteBarrier(&___tr_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
