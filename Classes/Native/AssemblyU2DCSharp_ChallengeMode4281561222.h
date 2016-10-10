#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StageInfo
struct StageInfo_t3840543916;

#include "AssemblyU2DCSharp_Mode2403779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChallengeMode
struct  ChallengeMode_t4281561222  : public Mode_t2403779
{
public:
	// System.Int32 ChallengeMode::currentStageNo
	int32_t ___currentStageNo_0;
	// StageInfo ChallengeMode::currentStage
	StageInfo_t3840543916 * ___currentStage_1;
	// System.Int32 ChallengeMode::difficultLv
	int32_t ___difficultLv_2;
	// System.Boolean ChallengeMode::reverse
	bool ___reverse_3;
	// System.Int32 ChallengeMode::skipN
	int32_t ___skipN_4;

public:
	inline static int32_t get_offset_of_currentStageNo_0() { return static_cast<int32_t>(offsetof(ChallengeMode_t4281561222, ___currentStageNo_0)); }
	inline int32_t get_currentStageNo_0() const { return ___currentStageNo_0; }
	inline int32_t* get_address_of_currentStageNo_0() { return &___currentStageNo_0; }
	inline void set_currentStageNo_0(int32_t value)
	{
		___currentStageNo_0 = value;
	}

	inline static int32_t get_offset_of_currentStage_1() { return static_cast<int32_t>(offsetof(ChallengeMode_t4281561222, ___currentStage_1)); }
	inline StageInfo_t3840543916 * get_currentStage_1() const { return ___currentStage_1; }
	inline StageInfo_t3840543916 ** get_address_of_currentStage_1() { return &___currentStage_1; }
	inline void set_currentStage_1(StageInfo_t3840543916 * value)
	{
		___currentStage_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentStage_1, value);
	}

	inline static int32_t get_offset_of_difficultLv_2() { return static_cast<int32_t>(offsetof(ChallengeMode_t4281561222, ___difficultLv_2)); }
	inline int32_t get_difficultLv_2() const { return ___difficultLv_2; }
	inline int32_t* get_address_of_difficultLv_2() { return &___difficultLv_2; }
	inline void set_difficultLv_2(int32_t value)
	{
		___difficultLv_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(ChallengeMode_t4281561222, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_skipN_4() { return static_cast<int32_t>(offsetof(ChallengeMode_t4281561222, ___skipN_4)); }
	inline int32_t get_skipN_4() const { return ___skipN_4; }
	inline int32_t* get_address_of_skipN_4() { return &___skipN_4; }
	inline void set_skipN_4(int32_t value)
	{
		___skipN_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
