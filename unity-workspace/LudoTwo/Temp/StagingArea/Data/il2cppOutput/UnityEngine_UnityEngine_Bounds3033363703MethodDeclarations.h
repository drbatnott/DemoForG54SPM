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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C"  int32_t Bounds_GetHashCode_m4284443179 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C"  bool Bounds_Equals_m839506137 (Bounds_t3033363703 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C"  Vector3_t2243707580  Bounds_get_center_m129401026 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C"  Vector3_t2243707580  Bounds_get_extents_m4077324178 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C"  Vector3_t2243707580  Bounds_get_min_m2405290441 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C"  Vector3_t2243707580  Bounds_get_max_m4247050707 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
extern "C"  bool Bounds_Intersects_m1670918536 (Bounds_t3033363703 * __this, Bounds_t3033363703  ___bounds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C"  String_t* Bounds_ToString_m1966597703 (Bounds_t3033363703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
