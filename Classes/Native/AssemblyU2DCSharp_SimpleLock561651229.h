#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleLock
struct  SimpleLock_t561651229  : public Il2CppObject
{
public:

public:
};

struct SimpleLock_t561651229_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SimpleLock::locks
	Dictionary_2_t1974256870 * ___locks_0;

public:
	inline static int32_t get_offset_of_locks_0() { return static_cast<int32_t>(offsetof(SimpleLock_t561651229_StaticFields, ___locks_0)); }
	inline Dictionary_2_t1974256870 * get_locks_0() const { return ___locks_0; }
	inline Dictionary_2_t1974256870 ** get_address_of_locks_0() { return &___locks_0; }
	inline void set_locks_0(Dictionary_2_t1974256870 * value)
	{
		___locks_0 = value;
		Il2CppCodeGenWriteBarrier(&___locks_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
