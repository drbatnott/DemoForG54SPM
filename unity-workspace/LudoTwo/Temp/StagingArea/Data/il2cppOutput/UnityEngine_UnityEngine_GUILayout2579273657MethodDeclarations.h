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

// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t4183744904;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m3466110979 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_Label_m616748838 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  void GUILayout_DoLabel_m3790214718 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_Button_m3322709003 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  bool GUILayout_DoButton_m1965952312 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_TextArea_m2850908253 (Il2CppObject * __this /* static, unused */, String_t* ___text0, GUIStyle_t1799908754 * ___style1, GUILayoutOptionU5BU5D_t2108882777* ___options2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  String_t* GUILayout_DoTextField_m1395012445 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___maxLength1, bool ___multiline2, GUIStyle_t1799908754 * ___style3, GUILayoutOptionU5BU5D_t2108882777* ___options4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_HorizontalSlider_m2178689167 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUILayoutOptionU5BU5D_t2108882777* ___options3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  float GUILayout_DoHorizontalSlider_m814227090 (Il2CppObject * __this /* static, unused */, float ___value0, float ___leftValue1, float ___rightValue2, GUIStyle_t1799908754 * ___slider3, GUIStyle_t1799908754 * ___thumb4, GUILayoutOptionU5BU5D_t2108882777* ___options5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t2243707579  GUILayout_BeginScrollView_m4280181007 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___scrollPosition0, GUILayoutOptionU5BU5D_t2108882777* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C"  Vector2_t2243707579  GUILayout_BeginScrollView_m3658586336 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___scrollPosition0, bool ___alwaysShowHorizontal1, bool ___alwaysShowVertical2, GUIStyle_t1799908754 * ___horizontalScrollbar3, GUIStyle_t1799908754 * ___verticalScrollbar4, GUIStyle_t1799908754 * ___background5, GUILayoutOptionU5BU5D_t2108882777* ___options6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C"  void GUILayout_EndScrollView_m1883730923 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C"  void GUILayout_EndScrollView_m630360730 (Il2CppObject * __this /* static, unused */, bool ___handleScrollWheel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Width_m261136689 (Il2CppObject * __this /* static, unused */, float ___width0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_Height_m607115982 (Il2CppObject * __this /* static, unused */, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C"  GUILayoutOption_t4183744904 * GUILayout_ExpandWidth_m2515540937 (Il2CppObject * __this /* static, unused */, bool ___expand0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
