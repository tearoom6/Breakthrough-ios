#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<StepInfo>
struct List_1_t2861029514;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageInfo
struct  StageInfo_t3840543916  : public Il2CppObject
{
public:
	// System.Int32 StageInfo::level
	int32_t ___level_0;
	// System.Int32 StageInfo::stageNo
	int32_t ___stageNo_1;
	// System.Int32 StageInfo::panelColNum
	int32_t ___panelColNum_2;
	// System.Int32 StageInfo::panelRowNum
	int32_t ___panelRowNum_3;
	// System.Single StageInfo::limitTime
	float ___limitTime_4;
	// System.Boolean StageInfo::reverse
	bool ___reverse_5;
	// System.Int32 StageInfo::skipN
	int32_t ___skipN_6;
	// System.Collections.Generic.List`1<StepInfo> StageInfo::stepInfos
	List_1_t2861029514 * ___stepInfos_7;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_stageNo_1() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___stageNo_1)); }
	inline int32_t get_stageNo_1() const { return ___stageNo_1; }
	inline int32_t* get_address_of_stageNo_1() { return &___stageNo_1; }
	inline void set_stageNo_1(int32_t value)
	{
		___stageNo_1 = value;
	}

	inline static int32_t get_offset_of_panelColNum_2() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___panelColNum_2)); }
	inline int32_t get_panelColNum_2() const { return ___panelColNum_2; }
	inline int32_t* get_address_of_panelColNum_2() { return &___panelColNum_2; }
	inline void set_panelColNum_2(int32_t value)
	{
		___panelColNum_2 = value;
	}

	inline static int32_t get_offset_of_panelRowNum_3() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___panelRowNum_3)); }
	inline int32_t get_panelRowNum_3() const { return ___panelRowNum_3; }
	inline int32_t* get_address_of_panelRowNum_3() { return &___panelRowNum_3; }
	inline void set_panelRowNum_3(int32_t value)
	{
		___panelRowNum_3 = value;
	}

	inline static int32_t get_offset_of_limitTime_4() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___limitTime_4)); }
	inline float get_limitTime_4() const { return ___limitTime_4; }
	inline float* get_address_of_limitTime_4() { return &___limitTime_4; }
	inline void set_limitTime_4(float value)
	{
		___limitTime_4 = value;
	}

	inline static int32_t get_offset_of_reverse_5() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___reverse_5)); }
	inline bool get_reverse_5() const { return ___reverse_5; }
	inline bool* get_address_of_reverse_5() { return &___reverse_5; }
	inline void set_reverse_5(bool value)
	{
		___reverse_5 = value;
	}

	inline static int32_t get_offset_of_skipN_6() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___skipN_6)); }
	inline int32_t get_skipN_6() const { return ___skipN_6; }
	inline int32_t* get_address_of_skipN_6() { return &___skipN_6; }
	inline void set_skipN_6(int32_t value)
	{
		___skipN_6 = value;
	}

	inline static int32_t get_offset_of_stepInfos_7() { return static_cast<int32_t>(offsetof(StageInfo_t3840543916, ___stepInfos_7)); }
	inline List_1_t2861029514 * get_stepInfos_7() const { return ___stepInfos_7; }
	inline List_1_t2861029514 ** get_address_of_stepInfos_7() { return &___stepInfos_7; }
	inline void set_stepInfos_7(List_1_t2861029514 * value)
	{
		___stepInfos_7 = value;
		Il2CppCodeGenWriteBarrier(&___stepInfos_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
