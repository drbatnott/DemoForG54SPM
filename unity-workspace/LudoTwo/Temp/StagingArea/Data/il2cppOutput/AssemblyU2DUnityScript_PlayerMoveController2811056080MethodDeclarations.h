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

// PlayerMoveController
struct PlayerMoveController_t2811056080;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void PlayerMoveController::.ctor()
extern "C"  void PlayerMoveController__ctor_m1137400478 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Awake()
extern "C"  void PlayerMoveController_Awake_m2020416037 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Start()
extern "C"  void PlayerMoveController_Start_m1875097022 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnDisable()
extern "C"  void PlayerMoveController_OnDisable_m2779455277 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnEnable()
extern "C"  void PlayerMoveController_OnEnable_m2956590558 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Update()
extern "C"  void PlayerMoveController_Update_m2700824225 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::PlaneRayIntersection(UnityEngine.Plane,UnityEngine.Ray)
extern "C"  Vector3_t2243707580  PlayerMoveController_PlaneRayIntersection_m2000116583 (Il2CppObject * __this /* static, unused */, Plane_t3727654732  ___plane0, Ray_t2469606224  ___ray1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::ScreenPointToWorldPointOnPlane(UnityEngine.Vector3,UnityEngine.Plane,UnityEngine.Camera)
extern "C"  Vector3_t2243707580  PlayerMoveController_ScreenPointToWorldPointOnPlane_m1526574694 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___screenPoint0, Plane_t3727654732  ___plane1, Camera_t189460977 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::HandleCursorAlignment(UnityEngine.Vector3)
extern "C"  void PlayerMoveController_HandleCursorAlignment_m937938588 (PlayerMoveController_t2811056080 * __this, Vector3_t2243707580  ___cursorWorldPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Main()
extern "C"  void PlayerMoveController_Main_m3485452087 (PlayerMoveController_t2811056080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
