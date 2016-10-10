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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelColor
struct  PanelColor_t3265770463  : public MonoBehaviour_t667441552
{
public:
	// System.String PanelColor::timerKeyPanelColor
	String_t* ___timerKeyPanelColor_3;
	// System.String PanelColor::timerKeyPanelFlick
	String_t* ___timerKeyPanelFlick_4;
	// UnityEngine.Color PanelColor::originalColor
	Color_t4194546905  ___originalColor_5;
	// UnityEngine.Color PanelColor::flickColor
	Color_t4194546905  ___flickColor_6;
	// System.Single PanelColor::flickPace
	float ___flickPace_7;

public:
	inline static int32_t get_offset_of_timerKeyPanelColor_3() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463, ___timerKeyPanelColor_3)); }
	inline String_t* get_timerKeyPanelColor_3() const { return ___timerKeyPanelColor_3; }
	inline String_t** get_address_of_timerKeyPanelColor_3() { return &___timerKeyPanelColor_3; }
	inline void set_timerKeyPanelColor_3(String_t* value)
	{
		___timerKeyPanelColor_3 = value;
		Il2CppCodeGenWriteBarrier(&___timerKeyPanelColor_3, value);
	}

	inline static int32_t get_offset_of_timerKeyPanelFlick_4() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463, ___timerKeyPanelFlick_4)); }
	inline String_t* get_timerKeyPanelFlick_4() const { return ___timerKeyPanelFlick_4; }
	inline String_t** get_address_of_timerKeyPanelFlick_4() { return &___timerKeyPanelFlick_4; }
	inline void set_timerKeyPanelFlick_4(String_t* value)
	{
		___timerKeyPanelFlick_4 = value;
		Il2CppCodeGenWriteBarrier(&___timerKeyPanelFlick_4, value);
	}

	inline static int32_t get_offset_of_originalColor_5() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463, ___originalColor_5)); }
	inline Color_t4194546905  get_originalColor_5() const { return ___originalColor_5; }
	inline Color_t4194546905 * get_address_of_originalColor_5() { return &___originalColor_5; }
	inline void set_originalColor_5(Color_t4194546905  value)
	{
		___originalColor_5 = value;
	}

	inline static int32_t get_offset_of_flickColor_6() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463, ___flickColor_6)); }
	inline Color_t4194546905  get_flickColor_6() const { return ___flickColor_6; }
	inline Color_t4194546905 * get_address_of_flickColor_6() { return &___flickColor_6; }
	inline void set_flickColor_6(Color_t4194546905  value)
	{
		___flickColor_6 = value;
	}

	inline static int32_t get_offset_of_flickPace_7() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463, ___flickPace_7)); }
	inline float get_flickPace_7() const { return ___flickPace_7; }
	inline float* get_address_of_flickPace_7() { return &___flickPace_7; }
	inline void set_flickPace_7(float value)
	{
		___flickPace_7 = value;
	}
};

struct PanelColor_t3265770463_StaticFields
{
public:
	// System.String PanelColor::COLOR_PROPERTY_TYPE
	String_t* ___COLOR_PROPERTY_TYPE_2;

public:
	inline static int32_t get_offset_of_COLOR_PROPERTY_TYPE_2() { return static_cast<int32_t>(offsetof(PanelColor_t3265770463_StaticFields, ___COLOR_PROPERTY_TYPE_2)); }
	inline String_t* get_COLOR_PROPERTY_TYPE_2() const { return ___COLOR_PROPERTY_TYPE_2; }
	inline String_t** get_address_of_COLOR_PROPERTY_TYPE_2() { return &___COLOR_PROPERTY_TYPE_2; }
	inline void set_COLOR_PROPERTY_TYPE_2(String_t* value)
	{
		___COLOR_PROPERTY_TYPE_2 = value;
		Il2CppCodeGenWriteBarrier(&___COLOR_PROPERTY_TYPE_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
