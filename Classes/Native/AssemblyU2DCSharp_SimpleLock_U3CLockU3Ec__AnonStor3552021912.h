#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleLock/<Lock>c__AnonStorey6
struct  U3CLockU3Ec__AnonStorey6_t3552021912  : public Il2CppObject
{
public:
	// System.Action SimpleLock/<Lock>c__AnonStorey6::action
	Action_t3771233898 * ___action_0;
	// System.String SimpleLock/<Lock>c__AnonStorey6::key
	String_t* ___key_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CLockU3Ec__AnonStorey6_t3552021912, ___action_0)); }
	inline Action_t3771233898 * get_action_0() const { return ___action_0; }
	inline Action_t3771233898 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t3771233898 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier(&___action_0, value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(U3CLockU3Ec__AnonStorey6_t3552021912, ___key_1)); }
	inline String_t* get_key_1() const { return ___key_1; }
	inline String_t** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(String_t* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier(&___key_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
