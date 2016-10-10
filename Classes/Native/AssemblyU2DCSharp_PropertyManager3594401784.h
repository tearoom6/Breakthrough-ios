#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Properties
struct Properties_t1067411795;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PropertyManager
struct  PropertyManager_t3594401784  : public MonoBehaviour_t667441552
{
public:
	// Properties PropertyManager::mainProperties
	Properties_t1067411795 * ___mainProperties_2;

public:
	inline static int32_t get_offset_of_mainProperties_2() { return static_cast<int32_t>(offsetof(PropertyManager_t3594401784, ___mainProperties_2)); }
	inline Properties_t1067411795 * get_mainProperties_2() const { return ___mainProperties_2; }
	inline Properties_t1067411795 ** get_address_of_mainProperties_2() { return &___mainProperties_2; }
	inline void set_mainProperties_2(Properties_t1067411795 * value)
	{
		___mainProperties_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainProperties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
