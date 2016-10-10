#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankingRecord
struct  RankingRecord_t2992559111  : public Il2CppObject
{
public:
	// System.String RankingRecord::reqCode
	String_t* ___reqCode_0;
	// System.String RankingRecord::category
	String_t* ___category_1;
	// System.String RankingRecord::name
	String_t* ___name_2;
	// System.Int32 RankingRecord::rank
	int32_t ___rank_3;
	// System.Int32 RankingRecord::point
	int32_t ___point_4;
	// System.DateTime RankingRecord::createdAt
	DateTime_t4283661327  ___createdAt_5;

public:
	inline static int32_t get_offset_of_reqCode_0() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___reqCode_0)); }
	inline String_t* get_reqCode_0() const { return ___reqCode_0; }
	inline String_t** get_address_of_reqCode_0() { return &___reqCode_0; }
	inline void set_reqCode_0(String_t* value)
	{
		___reqCode_0 = value;
		Il2CppCodeGenWriteBarrier(&___reqCode_0, value);
	}

	inline static int32_t get_offset_of_category_1() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___category_1)); }
	inline String_t* get_category_1() const { return ___category_1; }
	inline String_t** get_address_of_category_1() { return &___category_1; }
	inline void set_category_1(String_t* value)
	{
		___category_1 = value;
		Il2CppCodeGenWriteBarrier(&___category_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_rank_3() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___rank_3)); }
	inline int32_t get_rank_3() const { return ___rank_3; }
	inline int32_t* get_address_of_rank_3() { return &___rank_3; }
	inline void set_rank_3(int32_t value)
	{
		___rank_3 = value;
	}

	inline static int32_t get_offset_of_point_4() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___point_4)); }
	inline int32_t get_point_4() const { return ___point_4; }
	inline int32_t* get_address_of_point_4() { return &___point_4; }
	inline void set_point_4(int32_t value)
	{
		___point_4 = value;
	}

	inline static int32_t get_offset_of_createdAt_5() { return static_cast<int32_t>(offsetof(RankingRecord_t2992559111, ___createdAt_5)); }
	inline DateTime_t4283661327  get_createdAt_5() const { return ___createdAt_5; }
	inline DateTime_t4283661327 * get_address_of_createdAt_5() { return &___createdAt_5; }
	inline void set_createdAt_5(DateTime_t4283661327  value)
	{
		___createdAt_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
