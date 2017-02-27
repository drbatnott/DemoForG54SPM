#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GenerateTrack
struct  GenerateTrack_t1738158094  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GenerateTrack::theTrack
	GameObjectU5BU5D_t3057952154* ___theTrack_2;
	// UnityEngine.GameObject GenerateTrack::square
	GameObject_t1756533147 * ___square_3;
	// UnityEngine.Vector3 GenerateTrack::offset
	Vector3_t2243707580  ___offset_4;
	// UnityEngine.Vector3 GenerateTrack::startPosition
	Vector3_t2243707580  ___startPosition_5;

public:
	inline static int32_t get_offset_of_theTrack_2() { return static_cast<int32_t>(offsetof(GenerateTrack_t1738158094, ___theTrack_2)); }
	inline GameObjectU5BU5D_t3057952154* get_theTrack_2() const { return ___theTrack_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_theTrack_2() { return &___theTrack_2; }
	inline void set_theTrack_2(GameObjectU5BU5D_t3057952154* value)
	{
		___theTrack_2 = value;
		Il2CppCodeGenWriteBarrier(&___theTrack_2, value);
	}

	inline static int32_t get_offset_of_square_3() { return static_cast<int32_t>(offsetof(GenerateTrack_t1738158094, ___square_3)); }
	inline GameObject_t1756533147 * get_square_3() const { return ___square_3; }
	inline GameObject_t1756533147 ** get_address_of_square_3() { return &___square_3; }
	inline void set_square_3(GameObject_t1756533147 * value)
	{
		___square_3 = value;
		Il2CppCodeGenWriteBarrier(&___square_3, value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(GenerateTrack_t1738158094, ___offset_4)); }
	inline Vector3_t2243707580  get_offset_4() const { return ___offset_4; }
	inline Vector3_t2243707580 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector3_t2243707580  value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_startPosition_5() { return static_cast<int32_t>(offsetof(GenerateTrack_t1738158094, ___startPosition_5)); }
	inline Vector3_t2243707580  get_startPosition_5() const { return ___startPosition_5; }
	inline Vector3_t2243707580 * get_address_of_startPosition_5() { return &___startPosition_5; }
	inline void set_startPosition_5(Vector3_t2243707580  value)
	{
		___startPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
