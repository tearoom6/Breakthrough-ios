﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Provider.ProviderCollection
struct  ProviderCollection_t4139595341  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Configuration.Provider.ProviderCollection::lookup
	Hashtable_t1407064410 * ___lookup_0;
	// System.Boolean System.Configuration.Provider.ProviderCollection::readOnly
	bool ___readOnly_1;
	// System.Collections.ArrayList System.Configuration.Provider.ProviderCollection::values
	ArrayList_t3948406897 * ___values_2;

public:
	inline static int32_t get_offset_of_lookup_0() { return static_cast<int32_t>(offsetof(ProviderCollection_t4139595341, ___lookup_0)); }
	inline Hashtable_t1407064410 * get_lookup_0() const { return ___lookup_0; }
	inline Hashtable_t1407064410 ** get_address_of_lookup_0() { return &___lookup_0; }
	inline void set_lookup_0(Hashtable_t1407064410 * value)
	{
		___lookup_0 = value;
		Il2CppCodeGenWriteBarrier(&___lookup_0, value);
	}

	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(ProviderCollection_t4139595341, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}

	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(ProviderCollection_t4139595341, ___values_2)); }
	inline ArrayList_t3948406897 * get_values_2() const { return ___values_2; }
	inline ArrayList_t3948406897 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(ArrayList_t3948406897 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier(&___values_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
