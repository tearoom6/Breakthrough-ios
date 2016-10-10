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

// PracticeMode
struct  PracticeMode_t247491998  : public Mode_t2403779
{
public:
	// System.Int32 PracticeMode::currentStageNo
	int32_t ___currentStageNo_0;
	// StageInfo PracticeMode::currentStage
	StageInfo_t3840543916 * ___currentStage_1;
	// System.Int32 PracticeMode::panelColNum
	int32_t ___panelColNum_2;
	// System.Int32 PracticeMode::panelRowNum
	int32_t ___panelRowNum_3;
	// System.Boolean PracticeMode::reverse
	bool ___reverse_4;
	// System.Int32 PracticeMode::skipN
	int32_t ___skipN_5;

public:
	inline static int32_t get_offset_of_currentStageNo_0() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___currentStageNo_0)); }
	inline int32_t get_currentStageNo_0() const { return ___currentStageNo_0; }
	inline int32_t* get_address_of_currentStageNo_0() { return &___currentStageNo_0; }
	inline void set_currentStageNo_0(int32_t value)
	{
		___currentStageNo_0 = value;
	}

	inline static int32_t get_offset_of_currentStage_1() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___currentStage_1)); }
	inline StageInfo_t3840543916 * get_currentStage_1() const { return ___currentStage_1; }
	inline StageInfo_t3840543916 ** get_address_of_currentStage_1() { return &___currentStage_1; }
	inline void set_currentStage_1(StageInfo_t3840543916 * value)
	{
		___currentStage_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentStage_1, value);
	}

	inline static int32_t get_offset_of_panelColNum_2() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___panelColNum_2)); }
	inline int32_t get_panelColNum_2() const { return ___panelColNum_2; }
	inline int32_t* get_address_of_panelColNum_2() { return &___panelColNum_2; }
	inline void set_panelColNum_2(int32_t value)
	{
		___panelColNum_2 = value;
	}

	inline static int32_t get_offset_of_panelRowNum_3() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___panelRowNum_3)); }
	inline int32_t get_panelRowNum_3() const { return ___panelRowNum_3; }
	inline int32_t* get_address_of_panelRowNum_3() { return &___panelRowNum_3; }
	inline void set_panelRowNum_3(int32_t value)
	{
		___panelRowNum_3 = value;
	}

	inline static int32_t get_offset_of_reverse_4() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___reverse_4)); }
	inline bool get_reverse_4() const { return ___reverse_4; }
	inline bool* get_address_of_reverse_4() { return &___reverse_4; }
	inline void set_reverse_4(bool value)
	{
		___reverse_4 = value;
	}

	inline static int32_t get_offset_of_skipN_5() { return static_cast<int32_t>(offsetof(PracticeMode_t247491998, ___skipN_5)); }
	inline int32_t get_skipN_5() const { return ___skipN_5; }
	inline int32_t* get_address_of_skipN_5() { return &___skipN_5; }
	inline void set_skipN_5(int32_t value)
	{
		___skipN_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
