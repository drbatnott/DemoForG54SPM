#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SignalSender
struct SignalSender_t1204926691;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriggerOnMouseOrJoystick
struct  TriggerOnMouseOrJoystick_t2646678581  : public MonoBehaviour_t1158329972
{
public:
	// SignalSender TriggerOnMouseOrJoystick::mouseDownSignals
	SignalSender_t1204926691 * ___mouseDownSignals_2;
	// SignalSender TriggerOnMouseOrJoystick::mouseUpSignals
	SignalSender_t1204926691 * ___mouseUpSignals_3;
	// System.Boolean TriggerOnMouseOrJoystick::state
	bool ___state_4;

public:
	inline static int32_t get_offset_of_mouseDownSignals_2() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t2646678581, ___mouseDownSignals_2)); }
	inline SignalSender_t1204926691 * get_mouseDownSignals_2() const { return ___mouseDownSignals_2; }
	inline SignalSender_t1204926691 ** get_address_of_mouseDownSignals_2() { return &___mouseDownSignals_2; }
	inline void set_mouseDownSignals_2(SignalSender_t1204926691 * value)
	{
		___mouseDownSignals_2 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDownSignals_2, value);
	}

	inline static int32_t get_offset_of_mouseUpSignals_3() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t2646678581, ___mouseUpSignals_3)); }
	inline SignalSender_t1204926691 * get_mouseUpSignals_3() const { return ___mouseUpSignals_3; }
	inline SignalSender_t1204926691 ** get_address_of_mouseUpSignals_3() { return &___mouseUpSignals_3; }
	inline void set_mouseUpSignals_3(SignalSender_t1204926691 * value)
	{
		___mouseUpSignals_3 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUpSignals_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t2646678581, ___state_4)); }
	inline bool get_state_4() const { return ___state_4; }
	inline bool* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(bool value)
	{
		___state_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
