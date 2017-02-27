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

// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t578636151;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C"  Rigidbody_t4233889191 * Collider_get_attachedRigidbody_m3279305420 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Collider_ClosestPointOnBounds_m4211637205 (Collider_t3497673348 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_CALL_ClosestPointOnBounds(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Collider_INTERNAL_CALL_ClosestPointOnBounds_m2142005186 (Il2CppObject * __this /* static, unused */, Collider_t3497673348 * ___self0, Vector3_t2243707580 * ___position1, Vector3_t2243707580 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
extern "C"  PhysicMaterial_t578636151 * Collider_get_sharedMaterial_m2977820719 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C"  Bounds_t3033363703  Collider_get_bounds_m3534458178 (Collider_t3497673348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Collider_INTERNAL_get_bounds_m4035290675 (Collider_t3497673348 * __this, Bounds_t3033363703 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
