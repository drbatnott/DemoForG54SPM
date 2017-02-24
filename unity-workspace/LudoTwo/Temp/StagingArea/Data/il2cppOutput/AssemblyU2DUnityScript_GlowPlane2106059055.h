#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlowPlane
struct  GlowPlane_t2106059055  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform GlowPlane::playerTransform
	Transform_t3275118058 * ___playerTransform_2;
	// UnityEngine.Vector3 GlowPlane::pos
	Vector3_t2243707580  ___pos_3;
	// UnityEngine.Vector3 GlowPlane::scale
	Vector3_t2243707580  ___scale_4;
	// System.Single GlowPlane::minGlow
	float ___minGlow_5;
	// System.Single GlowPlane::maxGlow
	float ___maxGlow_6;
	// UnityEngine.Color GlowPlane::glowColor
	Color_t2020392075  ___glowColor_7;
	// UnityEngine.Material GlowPlane::mat
	Material_t193706927 * ___mat_8;

public:
	inline static int32_t get_offset_of_playerTransform_2() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___playerTransform_2)); }
	inline Transform_t3275118058 * get_playerTransform_2() const { return ___playerTransform_2; }
	inline Transform_t3275118058 ** get_address_of_playerTransform_2() { return &___playerTransform_2; }
	inline void set_playerTransform_2(Transform_t3275118058 * value)
	{
		___playerTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerTransform_2, value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___pos_3)); }
	inline Vector3_t2243707580  get_pos_3() const { return ___pos_3; }
	inline Vector3_t2243707580 * get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(Vector3_t2243707580  value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___scale_4)); }
	inline Vector3_t2243707580  get_scale_4() const { return ___scale_4; }
	inline Vector3_t2243707580 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t2243707580  value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_minGlow_5() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___minGlow_5)); }
	inline float get_minGlow_5() const { return ___minGlow_5; }
	inline float* get_address_of_minGlow_5() { return &___minGlow_5; }
	inline void set_minGlow_5(float value)
	{
		___minGlow_5 = value;
	}

	inline static int32_t get_offset_of_maxGlow_6() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___maxGlow_6)); }
	inline float get_maxGlow_6() const { return ___maxGlow_6; }
	inline float* get_address_of_maxGlow_6() { return &___maxGlow_6; }
	inline void set_maxGlow_6(float value)
	{
		___maxGlow_6 = value;
	}

	inline static int32_t get_offset_of_glowColor_7() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___glowColor_7)); }
	inline Color_t2020392075  get_glowColor_7() const { return ___glowColor_7; }
	inline Color_t2020392075 * get_address_of_glowColor_7() { return &___glowColor_7; }
	inline void set_glowColor_7(Color_t2020392075  value)
	{
		___glowColor_7 = value;
	}

	inline static int32_t get_offset_of_mat_8() { return static_cast<int32_t>(offsetof(GlowPlane_t2106059055, ___mat_8)); }
	inline Material_t193706927 * get_mat_8() const { return ___mat_8; }
	inline Material_t193706927 ** get_address_of_mat_8() { return &___mat_8; }
	inline void set_mat_8(Material_t193706927 * value)
	{
		___mat_8 = value;
		Il2CppCodeGenWriteBarrier(&___mat_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
