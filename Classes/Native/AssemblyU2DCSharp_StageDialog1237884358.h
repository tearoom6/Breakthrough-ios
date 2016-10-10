#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUITexture
struct GUITexture_t4020448292;
// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageDialog
struct  StageDialog_t1237884358  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GUITexture StageDialog::dialogBg
	GUITexture_t4020448292 * ___dialogBg_2;
	// UnityEngine.GUIText StageDialog::level
	GUIText_t3371372606 * ___level_3;
	// UnityEngine.GUIText StageDialog::levelNo
	GUIText_t3371372606 * ___levelNo_4;
	// UnityEngine.GUIText StageDialog::stage
	GUIText_t3371372606 * ___stage_5;
	// UnityEngine.GUIText StageDialog::stageNo
	GUIText_t3371372606 * ___stageNo_6;
	// UnityEngine.GUIText StageDialog::description
	GUIText_t3371372606 * ___description_7;
	// System.Int32 StageDialog::levelInt
	int32_t ___levelInt_8;
	// System.Int32 StageDialog::stageInt
	int32_t ___stageInt_9;

public:
	inline static int32_t get_offset_of_dialogBg_2() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___dialogBg_2)); }
	inline GUITexture_t4020448292 * get_dialogBg_2() const { return ___dialogBg_2; }
	inline GUITexture_t4020448292 ** get_address_of_dialogBg_2() { return &___dialogBg_2; }
	inline void set_dialogBg_2(GUITexture_t4020448292 * value)
	{
		___dialogBg_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogBg_2, value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___level_3)); }
	inline GUIText_t3371372606 * get_level_3() const { return ___level_3; }
	inline GUIText_t3371372606 ** get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(GUIText_t3371372606 * value)
	{
		___level_3 = value;
		Il2CppCodeGenWriteBarrier(&___level_3, value);
	}

	inline static int32_t get_offset_of_levelNo_4() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___levelNo_4)); }
	inline GUIText_t3371372606 * get_levelNo_4() const { return ___levelNo_4; }
	inline GUIText_t3371372606 ** get_address_of_levelNo_4() { return &___levelNo_4; }
	inline void set_levelNo_4(GUIText_t3371372606 * value)
	{
		___levelNo_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelNo_4, value);
	}

	inline static int32_t get_offset_of_stage_5() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___stage_5)); }
	inline GUIText_t3371372606 * get_stage_5() const { return ___stage_5; }
	inline GUIText_t3371372606 ** get_address_of_stage_5() { return &___stage_5; }
	inline void set_stage_5(GUIText_t3371372606 * value)
	{
		___stage_5 = value;
		Il2CppCodeGenWriteBarrier(&___stage_5, value);
	}

	inline static int32_t get_offset_of_stageNo_6() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___stageNo_6)); }
	inline GUIText_t3371372606 * get_stageNo_6() const { return ___stageNo_6; }
	inline GUIText_t3371372606 ** get_address_of_stageNo_6() { return &___stageNo_6; }
	inline void set_stageNo_6(GUIText_t3371372606 * value)
	{
		___stageNo_6 = value;
		Il2CppCodeGenWriteBarrier(&___stageNo_6, value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___description_7)); }
	inline GUIText_t3371372606 * get_description_7() const { return ___description_7; }
	inline GUIText_t3371372606 ** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(GUIText_t3371372606 * value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier(&___description_7, value);
	}

	inline static int32_t get_offset_of_levelInt_8() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___levelInt_8)); }
	inline int32_t get_levelInt_8() const { return ___levelInt_8; }
	inline int32_t* get_address_of_levelInt_8() { return &___levelInt_8; }
	inline void set_levelInt_8(int32_t value)
	{
		___levelInt_8 = value;
	}

	inline static int32_t get_offset_of_stageInt_9() { return static_cast<int32_t>(offsetof(StageDialog_t1237884358, ___stageInt_9)); }
	inline int32_t get_stageInt_9() const { return ___stageInt_9; }
	inline int32_t* get_address_of_stageInt_9() { return &___stageInt_9; }
	inline void set_stageInt_9(int32_t value)
	{
		___stageInt_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
