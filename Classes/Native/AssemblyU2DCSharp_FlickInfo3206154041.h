#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlickInfo
struct  FlickInfo_t3206154041  : public Il2CppObject
{
public:
	// UnityEngine.Color FlickInfo::flickColor
	Color_t4194546905  ___flickColor_0;
	// System.Single FlickInfo::flickPace
	float ___flickPace_1;
	// System.Single FlickInfo::flickTime
	float ___flickTime_2;

public:
	inline static int32_t get_offset_of_flickColor_0() { return static_cast<int32_t>(offsetof(FlickInfo_t3206154041, ___flickColor_0)); }
	inline Color_t4194546905  get_flickColor_0() const { return ___flickColor_0; }
	inline Color_t4194546905 * get_address_of_flickColor_0() { return &___flickColor_0; }
	inline void set_flickColor_0(Color_t4194546905  value)
	{
		___flickColor_0 = value;
	}

	inline static int32_t get_offset_of_flickPace_1() { return static_cast<int32_t>(offsetof(FlickInfo_t3206154041, ___flickPace_1)); }
	inline float get_flickPace_1() const { return ___flickPace_1; }
	inline float* get_address_of_flickPace_1() { return &___flickPace_1; }
	inline void set_flickPace_1(float value)
	{
		___flickPace_1 = value;
	}

	inline static int32_t get_offset_of_flickTime_2() { return static_cast<int32_t>(offsetof(FlickInfo_t3206154041, ___flickTime_2)); }
	inline float get_flickTime_2() const { return ___flickTime_2; }
	inline float* get_address_of_flickTime_2() { return &___flickTime_2; }
	inline void set_flickTime_2(float value)
	{
		___flickTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
