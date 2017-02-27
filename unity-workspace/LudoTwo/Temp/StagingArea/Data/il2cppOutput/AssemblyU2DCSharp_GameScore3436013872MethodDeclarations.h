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

// GameScore
struct GameScore_t3436013872;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t2981295538;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GameScore::.ctor()
extern "C"  void GameScore__ctor_m2514496205 (GameScore_t3436013872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScore GameScore::get_Instance()
extern "C"  GameScore_t3436013872 * GameScore_get_Instance_m4068966642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::OnApplicationQuit()
extern "C"  void GameScore_OnApplicationQuit_m812757659 (GameScore_t3436013872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::get_Deaths()
extern "C"  int32_t GameScore_get_Deaths_m205666117 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> GameScore::get_KillTypes()
extern "C"  Il2CppObject* GameScore_get_KillTypes_m3433987739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameScore::GetKills(System.String)
extern "C"  int32_t GameScore_GetKills_m1147222082 (Il2CppObject * __this /* static, unused */, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameScore::get_GameTime()
extern "C"  float GameScore_get_GameTime_m1697993925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::RegisterDeath(UnityEngine.GameObject)
extern "C"  void GameScore_RegisterDeath_m1363602484 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___deadObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameScore::Awake()
extern "C"  void GameScore_Awake_m2765514236 (GameScore_t3436013872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
