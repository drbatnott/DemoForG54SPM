#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// SignalSender
struct SignalSender_t1204926691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnObject
struct  SpawnObject_t1174160328  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SpawnObject::objectToSpawn
	GameObject_t1756533147 * ___objectToSpawn_2;
	// SignalSender SpawnObject::onDestroyedSignals
	SignalSender_t1204926691 * ___onDestroyedSignals_3;
	// UnityEngine.GameObject SpawnObject::spawned
	GameObject_t1756533147 * ___spawned_4;

public:
	inline static int32_t get_offset_of_objectToSpawn_2() { return static_cast<int32_t>(offsetof(SpawnObject_t1174160328, ___objectToSpawn_2)); }
	inline GameObject_t1756533147 * get_objectToSpawn_2() const { return ___objectToSpawn_2; }
	inline GameObject_t1756533147 ** get_address_of_objectToSpawn_2() { return &___objectToSpawn_2; }
	inline void set_objectToSpawn_2(GameObject_t1756533147 * value)
	{
		___objectToSpawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToSpawn_2, value);
	}

	inline static int32_t get_offset_of_onDestroyedSignals_3() { return static_cast<int32_t>(offsetof(SpawnObject_t1174160328, ___onDestroyedSignals_3)); }
	inline SignalSender_t1204926691 * get_onDestroyedSignals_3() const { return ___onDestroyedSignals_3; }
	inline SignalSender_t1204926691 ** get_address_of_onDestroyedSignals_3() { return &___onDestroyedSignals_3; }
	inline void set_onDestroyedSignals_3(SignalSender_t1204926691 * value)
	{
		___onDestroyedSignals_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDestroyedSignals_3, value);
	}

	inline static int32_t get_offset_of_spawned_4() { return static_cast<int32_t>(offsetof(SpawnObject_t1174160328, ___spawned_4)); }
	inline GameObject_t1756533147 * get_spawned_4() const { return ___spawned_4; }
	inline GameObject_t1756533147 ** get_address_of_spawned_4() { return &___spawned_4; }
	inline void set_spawned_4(GameObject_t1756533147 * value)
	{
		___spawned_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawned_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
