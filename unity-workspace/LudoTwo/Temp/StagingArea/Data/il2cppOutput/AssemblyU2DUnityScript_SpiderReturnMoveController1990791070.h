#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MovementMotor
struct MovementMotor_t1612021398;
// AI
struct AI_t2476083018;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpiderReturnMoveController
struct  SpiderReturnMoveController_t1990791070  : public MonoBehaviour_t1158329972
{
public:
	// MovementMotor SpiderReturnMoveController::motor
	MovementMotor_t1612021398 * ___motor_2;
	// AI SpiderReturnMoveController::ai
	AI_t2476083018 * ___ai_3;
	// UnityEngine.Transform SpiderReturnMoveController::character
	Transform_t3275118058 * ___character_4;
	// UnityEngine.Vector3 SpiderReturnMoveController::spawnPos
	Vector3_t2243707580  ___spawnPos_5;
	// UnityEngine.MonoBehaviour SpiderReturnMoveController::animationBehaviour
	MonoBehaviour_t1158329972 * ___animationBehaviour_6;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(SpiderReturnMoveController_t1990791070, ___motor_2)); }
	inline MovementMotor_t1612021398 * get_motor_2() const { return ___motor_2; }
	inline MovementMotor_t1612021398 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(MovementMotor_t1612021398 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_ai_3() { return static_cast<int32_t>(offsetof(SpiderReturnMoveController_t1990791070, ___ai_3)); }
	inline AI_t2476083018 * get_ai_3() const { return ___ai_3; }
	inline AI_t2476083018 ** get_address_of_ai_3() { return &___ai_3; }
	inline void set_ai_3(AI_t2476083018 * value)
	{
		___ai_3 = value;
		Il2CppCodeGenWriteBarrier(&___ai_3, value);
	}

	inline static int32_t get_offset_of_character_4() { return static_cast<int32_t>(offsetof(SpiderReturnMoveController_t1990791070, ___character_4)); }
	inline Transform_t3275118058 * get_character_4() const { return ___character_4; }
	inline Transform_t3275118058 ** get_address_of_character_4() { return &___character_4; }
	inline void set_character_4(Transform_t3275118058 * value)
	{
		___character_4 = value;
		Il2CppCodeGenWriteBarrier(&___character_4, value);
	}

	inline static int32_t get_offset_of_spawnPos_5() { return static_cast<int32_t>(offsetof(SpiderReturnMoveController_t1990791070, ___spawnPos_5)); }
	inline Vector3_t2243707580  get_spawnPos_5() const { return ___spawnPos_5; }
	inline Vector3_t2243707580 * get_address_of_spawnPos_5() { return &___spawnPos_5; }
	inline void set_spawnPos_5(Vector3_t2243707580  value)
	{
		___spawnPos_5 = value;
	}

	inline static int32_t get_offset_of_animationBehaviour_6() { return static_cast<int32_t>(offsetof(SpiderReturnMoveController_t1990791070, ___animationBehaviour_6)); }
	inline MonoBehaviour_t1158329972 * get_animationBehaviour_6() const { return ___animationBehaviour_6; }
	inline MonoBehaviour_t1158329972 ** get_address_of_animationBehaviour_6() { return &___animationBehaviour_6; }
	inline void set_animationBehaviour_6(MonoBehaviour_t1158329972 * value)
	{
		___animationBehaviour_6 = value;
		Il2CppCodeGenWriteBarrier(&___animationBehaviour_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
