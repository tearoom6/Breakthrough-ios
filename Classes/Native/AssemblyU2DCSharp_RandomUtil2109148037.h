#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t4255898871;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomUtil
struct  RandomUtil_t2109148037  : public Il2CppObject
{
public:

public:
};

struct RandomUtil_t2109148037_StaticFields
{
public:
	// System.Random RandomUtil::random
	Random_t4255898871 * ___random_0;
	// System.Int32 RandomUtil::previousInt
	int32_t ___previousInt_1;
	// System.String RandomUtil::charSeeds
	String_t* ___charSeeds_2;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(RandomUtil_t2109148037_StaticFields, ___random_0)); }
	inline Random_t4255898871 * get_random_0() const { return ___random_0; }
	inline Random_t4255898871 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t4255898871 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier(&___random_0, value);
	}

	inline static int32_t get_offset_of_previousInt_1() { return static_cast<int32_t>(offsetof(RandomUtil_t2109148037_StaticFields, ___previousInt_1)); }
	inline int32_t get_previousInt_1() const { return ___previousInt_1; }
	inline int32_t* get_address_of_previousInt_1() { return &___previousInt_1; }
	inline void set_previousInt_1(int32_t value)
	{
		___previousInt_1 = value;
	}

	inline static int32_t get_offset_of_charSeeds_2() { return static_cast<int32_t>(offsetof(RandomUtil_t2109148037_StaticFields, ___charSeeds_2)); }
	inline String_t* get_charSeeds_2() const { return ___charSeeds_2; }
	inline String_t** get_address_of_charSeeds_2() { return &___charSeeds_2; }
	inline void set_charSeeds_2(String_t* value)
	{
		___charSeeds_2 = value;
		Il2CppCodeGenWriteBarrier(&___charSeeds_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
