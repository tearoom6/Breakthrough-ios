#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInfo
struct  TouchInfo_t2367430765  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 TouchInfo::touchScreenPoint
	Vector3_t4282066566  ___touchScreenPoint_0;
	// UnityEngine.Vector3 TouchInfo::touchViewportPoint
	Vector3_t4282066566  ___touchViewportPoint_1;
	// UnityEngine.Vector3 TouchInfo::originScreenPoint
	Vector3_t4282066566  ___originScreenPoint_2;
	// UnityEngine.Vector3 TouchInfo::originViewportPoint
	Vector3_t4282066566  ___originViewportPoint_3;
	// System.Single TouchInfo::deltaTime
	float ___deltaTime_4;
	// System.Boolean TouchInfo::isFirstTouch
	bool ___isFirstTouch_5;

public:
	inline static int32_t get_offset_of_touchScreenPoint_0() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___touchScreenPoint_0)); }
	inline Vector3_t4282066566  get_touchScreenPoint_0() const { return ___touchScreenPoint_0; }
	inline Vector3_t4282066566 * get_address_of_touchScreenPoint_0() { return &___touchScreenPoint_0; }
	inline void set_touchScreenPoint_0(Vector3_t4282066566  value)
	{
		___touchScreenPoint_0 = value;
	}

	inline static int32_t get_offset_of_touchViewportPoint_1() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___touchViewportPoint_1)); }
	inline Vector3_t4282066566  get_touchViewportPoint_1() const { return ___touchViewportPoint_1; }
	inline Vector3_t4282066566 * get_address_of_touchViewportPoint_1() { return &___touchViewportPoint_1; }
	inline void set_touchViewportPoint_1(Vector3_t4282066566  value)
	{
		___touchViewportPoint_1 = value;
	}

	inline static int32_t get_offset_of_originScreenPoint_2() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___originScreenPoint_2)); }
	inline Vector3_t4282066566  get_originScreenPoint_2() const { return ___originScreenPoint_2; }
	inline Vector3_t4282066566 * get_address_of_originScreenPoint_2() { return &___originScreenPoint_2; }
	inline void set_originScreenPoint_2(Vector3_t4282066566  value)
	{
		___originScreenPoint_2 = value;
	}

	inline static int32_t get_offset_of_originViewportPoint_3() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___originViewportPoint_3)); }
	inline Vector3_t4282066566  get_originViewportPoint_3() const { return ___originViewportPoint_3; }
	inline Vector3_t4282066566 * get_address_of_originViewportPoint_3() { return &___originViewportPoint_3; }
	inline void set_originViewportPoint_3(Vector3_t4282066566  value)
	{
		___originViewportPoint_3 = value;
	}

	inline static int32_t get_offset_of_deltaTime_4() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___deltaTime_4)); }
	inline float get_deltaTime_4() const { return ___deltaTime_4; }
	inline float* get_address_of_deltaTime_4() { return &___deltaTime_4; }
	inline void set_deltaTime_4(float value)
	{
		___deltaTime_4 = value;
	}

	inline static int32_t get_offset_of_isFirstTouch_5() { return static_cast<int32_t>(offsetof(TouchInfo_t2367430765, ___isFirstTouch_5)); }
	inline bool get_isFirstTouch_5() const { return ___isFirstTouch_5; }
	inline bool* get_address_of_isFirstTouch_5() { return &___isFirstTouch_5; }
	inline void set_isFirstTouch_5(bool value)
	{
		___isFirstTouch_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
