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
// SignalSender
struct SignalSender_t1204926691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MechAnimationTest
struct  MechAnimationTest_t372588337  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MechAnimationTest::turning
	float ___turning_2;
	// System.Single MechAnimationTest::walking
	float ___walking_3;
	// System.Single MechAnimationTest::turnOffset
	float ___turnOffset_4;
	// UnityEngine.Rigidbody MechAnimationTest::rigid
	Rigidbody_t4233889191 * ___rigid_5;
	// UnityEngine.AnimationClip MechAnimationTest::idle
	AnimationClip_t3510324950 * ___idle_6;
	// UnityEngine.AnimationClip MechAnimationTest::walk
	AnimationClip_t3510324950 * ___walk_7;
	// UnityEngine.AnimationClip MechAnimationTest::turnLeft
	AnimationClip_t3510324950 * ___turnLeft_8;
	// UnityEngine.AnimationClip MechAnimationTest::turnRight
	AnimationClip_t3510324950 * ___turnRight_9;
	// SignalSender MechAnimationTest::footstepSignals
	SignalSender_t1204926691 * ___footstepSignals_10;

public:
	inline static int32_t get_offset_of_turning_2() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___turning_2)); }
	inline float get_turning_2() const { return ___turning_2; }
	inline float* get_address_of_turning_2() { return &___turning_2; }
	inline void set_turning_2(float value)
	{
		___turning_2 = value;
	}

	inline static int32_t get_offset_of_walking_3() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___walking_3)); }
	inline float get_walking_3() const { return ___walking_3; }
	inline float* get_address_of_walking_3() { return &___walking_3; }
	inline void set_walking_3(float value)
	{
		___walking_3 = value;
	}

	inline static int32_t get_offset_of_turnOffset_4() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___turnOffset_4)); }
	inline float get_turnOffset_4() const { return ___turnOffset_4; }
	inline float* get_address_of_turnOffset_4() { return &___turnOffset_4; }
	inline void set_turnOffset_4(float value)
	{
		___turnOffset_4 = value;
	}

	inline static int32_t get_offset_of_rigid_5() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___rigid_5)); }
	inline Rigidbody_t4233889191 * get_rigid_5() const { return ___rigid_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rigid_5() { return &___rigid_5; }
	inline void set_rigid_5(Rigidbody_t4233889191 * value)
	{
		___rigid_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_5, value);
	}

	inline static int32_t get_offset_of_idle_6() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___idle_6)); }
	inline AnimationClip_t3510324950 * get_idle_6() const { return ___idle_6; }
	inline AnimationClip_t3510324950 ** get_address_of_idle_6() { return &___idle_6; }
	inline void set_idle_6(AnimationClip_t3510324950 * value)
	{
		___idle_6 = value;
		Il2CppCodeGenWriteBarrier(&___idle_6, value);
	}

	inline static int32_t get_offset_of_walk_7() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___walk_7)); }
	inline AnimationClip_t3510324950 * get_walk_7() const { return ___walk_7; }
	inline AnimationClip_t3510324950 ** get_address_of_walk_7() { return &___walk_7; }
	inline void set_walk_7(AnimationClip_t3510324950 * value)
	{
		___walk_7 = value;
		Il2CppCodeGenWriteBarrier(&___walk_7, value);
	}

	inline static int32_t get_offset_of_turnLeft_8() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___turnLeft_8)); }
	inline AnimationClip_t3510324950 * get_turnLeft_8() const { return ___turnLeft_8; }
	inline AnimationClip_t3510324950 ** get_address_of_turnLeft_8() { return &___turnLeft_8; }
	inline void set_turnLeft_8(AnimationClip_t3510324950 * value)
	{
		___turnLeft_8 = value;
		Il2CppCodeGenWriteBarrier(&___turnLeft_8, value);
	}

	inline static int32_t get_offset_of_turnRight_9() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___turnRight_9)); }
	inline AnimationClip_t3510324950 * get_turnRight_9() const { return ___turnRight_9; }
	inline AnimationClip_t3510324950 ** get_address_of_turnRight_9() { return &___turnRight_9; }
	inline void set_turnRight_9(AnimationClip_t3510324950 * value)
	{
		___turnRight_9 = value;
		Il2CppCodeGenWriteBarrier(&___turnRight_9, value);
	}

	inline static int32_t get_offset_of_footstepSignals_10() { return static_cast<int32_t>(offsetof(MechAnimationTest_t372588337, ___footstepSignals_10)); }
	inline SignalSender_t1204926691 * get_footstepSignals_10() const { return ___footstepSignals_10; }
	inline SignalSender_t1204926691 ** get_address_of_footstepSignals_10() { return &___footstepSignals_10; }
	inline void set_footstepSignals_10(SignalSender_t1204926691 * value)
	{
		___footstepSignals_10 = value;
		Il2CppCodeGenWriteBarrier(&___footstepSignals_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
