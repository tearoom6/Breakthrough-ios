#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Panel
struct  Panel_t76880356  : public Il2CppObject
{
public:
	// System.Int32 Panel::indexX
	int32_t ___indexX_0;
	// System.Int32 Panel::indexY
	int32_t ___indexY_1;
	// System.Single Panel::leftX
	float ___leftX_2;
	// System.Single Panel::bottomY
	float ___bottomY_3;
	// System.Single Panel::width
	float ___width_4;
	// System.Single Panel::height
	float ___height_5;
	// UnityEngine.GameObject Panel::panelOjcect
	GameObject_t3674682005 * ___panelOjcect_6;

public:
	inline static int32_t get_offset_of_indexX_0() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___indexX_0)); }
	inline int32_t get_indexX_0() const { return ___indexX_0; }
	inline int32_t* get_address_of_indexX_0() { return &___indexX_0; }
	inline void set_indexX_0(int32_t value)
	{
		___indexX_0 = value;
	}

	inline static int32_t get_offset_of_indexY_1() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___indexY_1)); }
	inline int32_t get_indexY_1() const { return ___indexY_1; }
	inline int32_t* get_address_of_indexY_1() { return &___indexY_1; }
	inline void set_indexY_1(int32_t value)
	{
		___indexY_1 = value;
	}

	inline static int32_t get_offset_of_leftX_2() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___leftX_2)); }
	inline float get_leftX_2() const { return ___leftX_2; }
	inline float* get_address_of_leftX_2() { return &___leftX_2; }
	inline void set_leftX_2(float value)
	{
		___leftX_2 = value;
	}

	inline static int32_t get_offset_of_bottomY_3() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___bottomY_3)); }
	inline float get_bottomY_3() const { return ___bottomY_3; }
	inline float* get_address_of_bottomY_3() { return &___bottomY_3; }
	inline void set_bottomY_3(float value)
	{
		___bottomY_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_panelOjcect_6() { return static_cast<int32_t>(offsetof(Panel_t76880356, ___panelOjcect_6)); }
	inline GameObject_t3674682005 * get_panelOjcect_6() const { return ___panelOjcect_6; }
	inline GameObject_t3674682005 ** get_address_of_panelOjcect_6() { return &___panelOjcect_6; }
	inline void set_panelOjcect_6(GameObject_t3674682005 * value)
	{
		___panelOjcect_6 = value;
		Il2CppCodeGenWriteBarrier(&___panelOjcect_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
