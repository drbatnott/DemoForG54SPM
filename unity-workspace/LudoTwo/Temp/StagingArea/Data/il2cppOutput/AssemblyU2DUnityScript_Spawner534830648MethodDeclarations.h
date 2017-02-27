#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Spawner
struct Spawner_t534830648;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m929082488 (Spawner_t534830648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Awake()
extern "C"  void Spawner_Awake_m1560756707 (Spawner_t534830648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spawner::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t1756533147 * Spawner_Spawn_m4269243264 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___prefab0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Destroy(UnityEngine.GameObject)
extern "C"  void Spawner_Destroy_m590425740 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___objectToDestroy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Main()
extern "C"  void Spawner_Main_m985549929 (Spawner_t534830648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
