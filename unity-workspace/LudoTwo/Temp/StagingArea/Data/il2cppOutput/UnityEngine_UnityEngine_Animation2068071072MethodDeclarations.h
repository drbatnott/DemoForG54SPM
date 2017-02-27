﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AnimationState
struct AnimationState_t1303741697;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_PlayMode1184682879.h"
#include "UnityEngine_UnityEngine_Animation2068071072.h"

// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C"  AnimationState_t1303741697 * Animation_get_Item_m4198128320 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C"  void Animation_CrossFade_m3167311838 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
extern "C"  void Animation_CrossFade_m1757328910 (Animation_t2068071072 * __this, String_t* ___animation0, float ___fadeLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C"  void Animation_CrossFade_m3878519673 (Animation_t2068071072 * __this, String_t* ___animation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
extern "C"  void Animation_SyncLayer_m3054866342 (Animation_t2068071072 * __this, int32_t ___layer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C"  void Animation_INTERNAL_CALL_SyncLayer_m1902251804 (Il2CppObject * __this /* static, unused */, Animation_t2068071072 * ___self0, int32_t ___layer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C"  Il2CppObject * Animation_GetEnumerator_m3067441975 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C"  AnimationState_t1303741697 * Animation_GetState_m1608765041 (Animation_t2068071072 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C"  AnimationState_t1303741697 * Animation_GetStateAtIndex_m2774853377 (Animation_t2068071072 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C"  int32_t Animation_GetStateCount_m1145090795 (Animation_t2068071072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
