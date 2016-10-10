#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<StageInfo>
struct List_1_t913762172;

#include "AssemblyU2DCSharp_Mode2403779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestMode
struct  QuestMode_t220898693  : public Mode_t2403779
{
public:
	// System.Int32 QuestMode::currentStageNo
	int32_t ___currentStageNo_0;
	// System.Collections.Generic.List`1<StageInfo> QuestMode::stages
	List_1_t913762172 * ___stages_1;

public:
	inline static int32_t get_offset_of_currentStageNo_0() { return static_cast<int32_t>(offsetof(QuestMode_t220898693, ___currentStageNo_0)); }
	inline int32_t get_currentStageNo_0() const { return ___currentStageNo_0; }
	inline int32_t* get_address_of_currentStageNo_0() { return &___currentStageNo_0; }
	inline void set_currentStageNo_0(int32_t value)
	{
		___currentStageNo_0 = value;
	}

	inline static int32_t get_offset_of_stages_1() { return static_cast<int32_t>(offsetof(QuestMode_t220898693, ___stages_1)); }
	inline List_1_t913762172 * get_stages_1() const { return ___stages_1; }
	inline List_1_t913762172 ** get_address_of_stages_1() { return &___stages_1; }
	inline void set_stages_1(List_1_t913762172 * value)
	{
		___stages_1 = value;
		Il2CppCodeGenWriteBarrier(&___stages_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
