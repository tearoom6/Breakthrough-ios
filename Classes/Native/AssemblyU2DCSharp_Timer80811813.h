#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t817370046;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t80811813  : public MonoBehaviour_t667441552
{
public:

public:
};

struct Timer_t80811813_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Timer::timers
	Dictionary_2_t817370046 * ___timers_2;

public:
	inline static int32_t get_offset_of_timers_2() { return static_cast<int32_t>(offsetof(Timer_t80811813_StaticFields, ___timers_2)); }
	inline Dictionary_2_t817370046 * get_timers_2() const { return ___timers_2; }
	inline Dictionary_2_t817370046 ** get_address_of_timers_2() { return &___timers_2; }
	inline void set_timers_2(Dictionary_2_t817370046 * value)
	{
		___timers_2 = value;
		Il2CppCodeGenWriteBarrier(&___timers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
