#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t296684972;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scheduler
struct  Scheduler_t1843257499  : public MonoBehaviour_t667441552
{
public:

public:
};

struct Scheduler_t1843257499_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> Scheduler::schedules
	Dictionary_2_t296684972 * ___schedules_2;

public:
	inline static int32_t get_offset_of_schedules_2() { return static_cast<int32_t>(offsetof(Scheduler_t1843257499_StaticFields, ___schedules_2)); }
	inline Dictionary_2_t296684972 * get_schedules_2() const { return ___schedules_2; }
	inline Dictionary_2_t296684972 ** get_address_of_schedules_2() { return &___schedules_2; }
	inline void set_schedules_2(Dictionary_2_t296684972 * value)
	{
		___schedules_2 = value;
		Il2CppCodeGenWriteBarrier(&___schedules_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
