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

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType875112366.h"

// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
extern "C"  TouchScreenKeyboard_t601950206 * TouchScreenKeyboard_Open_m2760130151 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C"  TouchScreenKeyboard_t601950206 * TouchScreenKeyboard_Open_m3410222954 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C"  String_t* TouchScreenKeyboard_get_text_m538529702 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_done()
extern "C"  bool TouchScreenKeyboard_get_done_m406461410 (TouchScreenKeyboard_t601950206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern "C"  bool TouchScreenKeyboard_get_isSupported_m798827778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
