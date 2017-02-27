#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DiceReal
struct  DiceReal_t3577752731  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DiceReal::spacePressed
	bool ___spacePressed_4;

public:
	inline static int32_t get_offset_of_spacePressed_4() { return static_cast<int32_t>(offsetof(DiceReal_t3577752731, ___spacePressed_4)); }
	inline bool get_spacePressed_4() const { return ___spacePressed_4; }
	inline bool* get_address_of_spacePressed_4() { return &___spacePressed_4; }
	inline void set_spacePressed_4(bool value)
	{
		___spacePressed_4 = value;
	}
};

struct DiceReal_t3577752731_StaticFields
{
public:
	// UnityEngine.Animator DiceReal::anim
	Animator_t69676727 * ___anim_2;
	// System.Int32 DiceReal::roll
	int32_t ___roll_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(DiceReal_t3577752731_StaticFields, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_roll_3() { return static_cast<int32_t>(offsetof(DiceReal_t3577752731_StaticFields, ___roll_3)); }
	inline int32_t get_roll_3() const { return ___roll_3; }
	inline int32_t* get_address_of_roll_3() { return &___roll_3; }
	inline void set_roll_3(int32_t value)
	{
		___roll_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
