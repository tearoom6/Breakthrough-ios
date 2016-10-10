#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t2567681854;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomLabel
struct  CustomLabel_t4167182819  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.TextMesh CustomLabel::label
	TextMesh_t2567681854 * ___label_2;

public:
	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(CustomLabel_t4167182819, ___label_2)); }
	inline TextMesh_t2567681854 * get_label_2() const { return ___label_2; }
	inline TextMesh_t2567681854 ** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(TextMesh_t2567681854 * value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier(&___label_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
