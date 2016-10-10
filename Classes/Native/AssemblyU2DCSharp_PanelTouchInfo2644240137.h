#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Panel
struct Panel_t76880356;

#include "AssemblyU2DCSharp_TouchInfo2367430765.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelTouchInfo
struct  PanelTouchInfo_t2644240137  : public TouchInfo_t2367430765
{
public:
	// Panel PanelTouchInfo::touchPanel
	Panel_t76880356 * ___touchPanel_6;

public:
	inline static int32_t get_offset_of_touchPanel_6() { return static_cast<int32_t>(offsetof(PanelTouchInfo_t2644240137, ___touchPanel_6)); }
	inline Panel_t76880356 * get_touchPanel_6() const { return ___touchPanel_6; }
	inline Panel_t76880356 ** get_address_of_touchPanel_6() { return &___touchPanel_6; }
	inline void set_touchPanel_6(Panel_t76880356 * value)
	{
		___touchPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___touchPanel_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
