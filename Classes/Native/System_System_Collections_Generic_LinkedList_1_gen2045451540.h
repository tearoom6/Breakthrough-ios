﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t3787551078;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedList`1<System.Object>
struct  LinkedList_1_t2045451540  : public Il2CppObject
{
public:
	// System.UInt32 System.Collections.Generic.LinkedList`1::count
	uint32_t ___count_0;
	// System.UInt32 System.Collections.Generic.LinkedList`1::version
	uint32_t ___version_1;
	// System.Object System.Collections.Generic.LinkedList`1::syncRoot
	Il2CppObject * ___syncRoot_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1::first
	LinkedListNode_1_t3787551078 * ___first_3;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1::si
	SerializationInfo_t2185721892 * ___si_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(LinkedList_1_t2045451540, ___count_0)); }
	inline uint32_t get_count_0() const { return ___count_0; }
	inline uint32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(uint32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(LinkedList_1_t2045451540, ___version_1)); }
	inline uint32_t get_version_1() const { return ___version_1; }
	inline uint32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_syncRoot_2() { return static_cast<int32_t>(offsetof(LinkedList_1_t2045451540, ___syncRoot_2)); }
	inline Il2CppObject * get_syncRoot_2() const { return ___syncRoot_2; }
	inline Il2CppObject ** get_address_of_syncRoot_2() { return &___syncRoot_2; }
	inline void set_syncRoot_2(Il2CppObject * value)
	{
		___syncRoot_2 = value;
		Il2CppCodeGenWriteBarrier(&___syncRoot_2, value);
	}

	inline static int32_t get_offset_of_first_3() { return static_cast<int32_t>(offsetof(LinkedList_1_t2045451540, ___first_3)); }
	inline LinkedListNode_1_t3787551078 * get_first_3() const { return ___first_3; }
	inline LinkedListNode_1_t3787551078 ** get_address_of_first_3() { return &___first_3; }
	inline void set_first_3(LinkedListNode_1_t3787551078 * value)
	{
		___first_3 = value;
		Il2CppCodeGenWriteBarrier(&___first_3, value);
	}

	inline static int32_t get_offset_of_si_4() { return static_cast<int32_t>(offsetof(LinkedList_1_t2045451540, ___si_4)); }
	inline SerializationInfo_t2185721892 * get_si_4() const { return ___si_4; }
	inline SerializationInfo_t2185721892 ** get_address_of_si_4() { return &___si_4; }
	inline void set_si_4(SerializationInfo_t2185721892 * value)
	{
		___si_4 = value;
		Il2CppCodeGenWriteBarrier(&___si_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
