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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StepJudgeInfo
struct  StepJudgeInfo_t611062489  : public Il2CppObject
{
public:
	// Panel StepJudgeInfo::startPanel
	Panel_t76880356 * ___startPanel_0;
	// Panel StepJudgeInfo::goalPanel
	Panel_t76880356 * ___goalPanel_1;
	// System.Int32 StepJudgeInfo::restCount
	int32_t ___restCount_2;

public:
	inline static int32_t get_offset_of_startPanel_0() { return static_cast<int32_t>(offsetof(StepJudgeInfo_t611062489, ___startPanel_0)); }
	inline Panel_t76880356 * get_startPanel_0() const { return ___startPanel_0; }
	inline Panel_t76880356 ** get_address_of_startPanel_0() { return &___startPanel_0; }
	inline void set_startPanel_0(Panel_t76880356 * value)
	{
		___startPanel_0 = value;
		Il2CppCodeGenWriteBarrier(&___startPanel_0, value);
	}

	inline static int32_t get_offset_of_goalPanel_1() { return static_cast<int32_t>(offsetof(StepJudgeInfo_t611062489, ___goalPanel_1)); }
	inline Panel_t76880356 * get_goalPanel_1() const { return ___goalPanel_1; }
	inline Panel_t76880356 ** get_address_of_goalPanel_1() { return &___goalPanel_1; }
	inline void set_goalPanel_1(Panel_t76880356 * value)
	{
		___goalPanel_1 = value;
		Il2CppCodeGenWriteBarrier(&___goalPanel_1, value);
	}

	inline static int32_t get_offset_of_restCount_2() { return static_cast<int32_t>(offsetof(StepJudgeInfo_t611062489, ___restCount_2)); }
	inline int32_t get_restCount_2() const { return ___restCount_2; }
	inline int32_t* get_address_of_restCount_2() { return &___restCount_2; }
	inline void set_restCount_2(int32_t value)
	{
		___restCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
