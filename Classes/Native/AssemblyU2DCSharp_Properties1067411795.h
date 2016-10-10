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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Properties
struct  Properties_t1067411795  : public Il2CppObject
{
public:
	// System.String Properties::locale
	String_t* ___locale_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Properties::properties
	Dictionary_2_t827649927 * ___properties_1;

public:
	inline static int32_t get_offset_of_locale_0() { return static_cast<int32_t>(offsetof(Properties_t1067411795, ___locale_0)); }
	inline String_t* get_locale_0() const { return ___locale_0; }
	inline String_t** get_address_of_locale_0() { return &___locale_0; }
	inline void set_locale_0(String_t* value)
	{
		___locale_0 = value;
		Il2CppCodeGenWriteBarrier(&___locale_0, value);
	}

	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(Properties_t1067411795, ___properties_1)); }
	inline Dictionary_2_t827649927 * get_properties_1() const { return ___properties_1; }
	inline Dictionary_2_t827649927 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(Dictionary_2_t827649927 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier(&___properties_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
