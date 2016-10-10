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

// PathInfo
struct  PathInfo_t1298728595  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 PathInfo::Origin
	Vector3_t4282066566  ___Origin_0;
	// UnityEngine.Vector3 PathInfo::Destination
	Vector3_t4282066566  ___Destination_1;
	// UnityEngine.Vector3 PathInfo::Direction
	Vector3_t4282066566  ___Direction_2;
	// System.Single PathInfo::Distance
	float ___Distance_3;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(PathInfo_t1298728595, ___Origin_0)); }
	inline Vector3_t4282066566  get_Origin_0() const { return ___Origin_0; }
	inline Vector3_t4282066566 * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3_t4282066566  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_Destination_1() { return static_cast<int32_t>(offsetof(PathInfo_t1298728595, ___Destination_1)); }
	inline Vector3_t4282066566  get_Destination_1() const { return ___Destination_1; }
	inline Vector3_t4282066566 * get_address_of_Destination_1() { return &___Destination_1; }
	inline void set_Destination_1(Vector3_t4282066566  value)
	{
		___Destination_1 = value;
	}

	inline static int32_t get_offset_of_Direction_2() { return static_cast<int32_t>(offsetof(PathInfo_t1298728595, ___Direction_2)); }
	inline Vector3_t4282066566  get_Direction_2() const { return ___Direction_2; }
	inline Vector3_t4282066566 * get_address_of_Direction_2() { return &___Direction_2; }
	inline void set_Direction_2(Vector3_t4282066566  value)
	{
		___Direction_2 = value;
	}

	inline static int32_t get_offset_of_Distance_3() { return static_cast<int32_t>(offsetof(PathInfo_t1298728595, ___Distance_3)); }
	inline float get_Distance_3() const { return ___Distance_3; }
	inline float* get_address_of_Distance_3() { return &___Distance_3; }
	inline void set_Distance_3(float value)
	{
		___Distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
