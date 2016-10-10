#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlickerEffect
struct  FlickerEffect_t4286365065  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color FlickerEffect::originalColor
	Color_t4194546905  ___originalColor_2;

public:
	inline static int32_t get_offset_of_originalColor_2() { return static_cast<int32_t>(offsetof(FlickerEffect_t4286365065, ___originalColor_2)); }
	inline Color_t4194546905  get_originalColor_2() const { return ___originalColor_2; }
	inline Color_t4194546905 * get_address_of_originalColor_2() { return &___originalColor_2; }
	inline void set_originalColor_2(Color_t4194546905  value)
	{
		___originalColor_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
