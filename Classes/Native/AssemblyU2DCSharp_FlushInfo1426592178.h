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

// FlushInfo
struct  FlushInfo_t1426592178  : public Il2CppObject
{
public:
	// UnityEngine.Color FlushInfo::flushColor
	Color_t4194546905  ___flushColor_0;
	// System.Single FlushInfo::flushTime
	float ___flushTime_1;

public:
	inline static int32_t get_offset_of_flushColor_0() { return static_cast<int32_t>(offsetof(FlushInfo_t1426592178, ___flushColor_0)); }
	inline Color_t4194546905  get_flushColor_0() const { return ___flushColor_0; }
	inline Color_t4194546905 * get_address_of_flushColor_0() { return &___flushColor_0; }
	inline void set_flushColor_0(Color_t4194546905  value)
	{
		___flushColor_0 = value;
	}

	inline static int32_t get_offset_of_flushTime_1() { return static_cast<int32_t>(offsetof(FlushInfo_t1426592178, ___flushTime_1)); }
	inline float get_flushTime_1() const { return ___flushTime_1; }
	inline float* get_address_of_flushTime_1() { return &___flushTime_1; }
	inline void set_flushTime_1(float value)
	{
		___flushTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
