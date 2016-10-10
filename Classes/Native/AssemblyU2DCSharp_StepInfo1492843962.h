#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_FlushInfo1426592178.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StepInfo
struct  StepInfo_t1492843962  : public FlushInfo_t1426592178
{
public:
	// System.Int32 StepInfo::panelIndex
	int32_t ___panelIndex_2;
	// System.Single StepInfo::startTime
	float ___startTime_3;

public:
	inline static int32_t get_offset_of_panelIndex_2() { return static_cast<int32_t>(offsetof(StepInfo_t1492843962, ___panelIndex_2)); }
	inline int32_t get_panelIndex_2() const { return ___panelIndex_2; }
	inline int32_t* get_address_of_panelIndex_2() { return &___panelIndex_2; }
	inline void set_panelIndex_2(int32_t value)
	{
		___panelIndex_2 = value;
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(StepInfo_t1492843962, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
