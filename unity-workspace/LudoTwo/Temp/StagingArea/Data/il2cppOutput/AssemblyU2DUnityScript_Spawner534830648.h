#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Spawner
struct Spawner_t534830648;
// ObjectCache[]
struct ObjectCacheU5BU5D_t1759149002;
// System.Collections.Hashtable
struct Hashtable_t909839986;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t534830648  : public MonoBehaviour_t1158329972
{
public:
	// ObjectCache[] Spawner::caches
	ObjectCacheU5BU5D_t1759149002* ___caches_3;
	// System.Collections.Hashtable Spawner::activeCachedObjects
	Hashtable_t909839986 * ___activeCachedObjects_4;

public:
	inline static int32_t get_offset_of_caches_3() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___caches_3)); }
	inline ObjectCacheU5BU5D_t1759149002* get_caches_3() const { return ___caches_3; }
	inline ObjectCacheU5BU5D_t1759149002** get_address_of_caches_3() { return &___caches_3; }
	inline void set_caches_3(ObjectCacheU5BU5D_t1759149002* value)
	{
		___caches_3 = value;
		Il2CppCodeGenWriteBarrier(&___caches_3, value);
	}

	inline static int32_t get_offset_of_activeCachedObjects_4() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___activeCachedObjects_4)); }
	inline Hashtable_t909839986 * get_activeCachedObjects_4() const { return ___activeCachedObjects_4; }
	inline Hashtable_t909839986 ** get_address_of_activeCachedObjects_4() { return &___activeCachedObjects_4; }
	inline void set_activeCachedObjects_4(Hashtable_t909839986 * value)
	{
		___activeCachedObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___activeCachedObjects_4, value);
	}
};

struct Spawner_t534830648_StaticFields
{
public:
	// Spawner Spawner::spawner
	Spawner_t534830648 * ___spawner_2;

public:
	inline static int32_t get_offset_of_spawner_2() { return static_cast<int32_t>(offsetof(Spawner_t534830648_StaticFields, ___spawner_2)); }
	inline Spawner_t534830648 * get_spawner_2() const { return ___spawner_2; }
	inline Spawner_t534830648 ** get_address_of_spawner_2() { return &___spawner_2; }
	inline void set_spawner_2(Spawner_t534830648 * value)
	{
		___spawner_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawner_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
