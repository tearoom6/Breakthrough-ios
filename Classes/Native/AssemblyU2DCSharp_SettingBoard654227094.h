#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SettingBoard
struct  SettingBoard_t654227094  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GUIText SettingBoard::nameLabel
	GUIText_t3371372606 * ___nameLabel_2;
	// UnityEngine.GUIText SettingBoard::okButtonLabel
	GUIText_t3371372606 * ___okButtonLabel_3;

public:
	inline static int32_t get_offset_of_nameLabel_2() { return static_cast<int32_t>(offsetof(SettingBoard_t654227094, ___nameLabel_2)); }
	inline GUIText_t3371372606 * get_nameLabel_2() const { return ___nameLabel_2; }
	inline GUIText_t3371372606 ** get_address_of_nameLabel_2() { return &___nameLabel_2; }
	inline void set_nameLabel_2(GUIText_t3371372606 * value)
	{
		___nameLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___nameLabel_2, value);
	}

	inline static int32_t get_offset_of_okButtonLabel_3() { return static_cast<int32_t>(offsetof(SettingBoard_t654227094, ___okButtonLabel_3)); }
	inline GUIText_t3371372606 * get_okButtonLabel_3() const { return ___okButtonLabel_3; }
	inline GUIText_t3371372606 ** get_address_of_okButtonLabel_3() { return &___okButtonLabel_3; }
	inline void set_okButtonLabel_3(GUIText_t3371372606 * value)
	{
		___okButtonLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___okButtonLabel_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
