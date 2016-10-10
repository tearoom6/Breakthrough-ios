#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Panel>
struct List_1_t1445065908;
// StageInfo
struct StageInfo_t3840543916;
// System.Collections.Generic.List`1<PathInfo>
struct List_1_t2666914147;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// ScreenManager
struct ScreenManager_t3015837057;
// PropertyManager
struct PropertyManager_t3594401784;
// CustomLabel
struct CustomLabel_t4167182819;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard
struct  HelpBoard_t3274420229  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<Panel> HelpBoard::panels
	List_1_t1445065908 * ___panels_3;
	// StageInfo HelpBoard::stageInfo
	StageInfo_t3840543916 * ___stageInfo_4;
	// System.Collections.Generic.List`1<PathInfo> HelpBoard::pathInfos
	List_1_t2666914147 * ___pathInfos_5;
	// UnityEngine.GameObject HelpBoard::fingerObj
	GameObject_t3674682005 * ___fingerObj_6;
	// ScreenManager HelpBoard::screenManager
	ScreenManager_t3015837057 * ___screenManager_7;
	// PropertyManager HelpBoard::propertyManager
	PropertyManager_t3594401784 * ___propertyManager_8;
	// UnityEngine.GameObject HelpBoard::panelPrefab
	GameObject_t3674682005 * ___panelPrefab_9;
	// UnityEngine.GameObject HelpBoard::fingerPrefab
	GameObject_t3674682005 * ___fingerPrefab_10;
	// UnityEngine.GameObject HelpBoard::trailEffectPrefab
	GameObject_t3674682005 * ___trailEffectPrefab_11;
	// UnityEngine.GameObject HelpBoard::customDialogPrefab
	GameObject_t3674682005 * ___customDialogPrefab_12;
	// UnityEngine.GameObject HelpBoard::customLabelPrefab
	GameObject_t3674682005 * ___customLabelPrefab_13;
	// CustomLabel HelpBoard::description
	CustomLabel_t4167182819 * ___description_14;
	// UnityEngine.Vector3 HelpBoard::basePos
	Vector3_t4282066566  ___basePos_15;
	// System.Boolean HelpBoard::flushDemoPhase
	bool ___flushDemoPhase_16;
	// System.Single HelpBoard::demoPlayTime
	float ___demoPlayTime_17;
	// System.Int32 HelpBoard::fingerMoveStep
	int32_t ___fingerMoveStep_18;
	// System.Single HelpBoard::stepMoveDistance
	float ___stepMoveDistance_19;

public:
	inline static int32_t get_offset_of_panels_3() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___panels_3)); }
	inline List_1_t1445065908 * get_panels_3() const { return ___panels_3; }
	inline List_1_t1445065908 ** get_address_of_panels_3() { return &___panels_3; }
	inline void set_panels_3(List_1_t1445065908 * value)
	{
		___panels_3 = value;
		Il2CppCodeGenWriteBarrier(&___panels_3, value);
	}

	inline static int32_t get_offset_of_stageInfo_4() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___stageInfo_4)); }
	inline StageInfo_t3840543916 * get_stageInfo_4() const { return ___stageInfo_4; }
	inline StageInfo_t3840543916 ** get_address_of_stageInfo_4() { return &___stageInfo_4; }
	inline void set_stageInfo_4(StageInfo_t3840543916 * value)
	{
		___stageInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___stageInfo_4, value);
	}

	inline static int32_t get_offset_of_pathInfos_5() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___pathInfos_5)); }
	inline List_1_t2666914147 * get_pathInfos_5() const { return ___pathInfos_5; }
	inline List_1_t2666914147 ** get_address_of_pathInfos_5() { return &___pathInfos_5; }
	inline void set_pathInfos_5(List_1_t2666914147 * value)
	{
		___pathInfos_5 = value;
		Il2CppCodeGenWriteBarrier(&___pathInfos_5, value);
	}

	inline static int32_t get_offset_of_fingerObj_6() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___fingerObj_6)); }
	inline GameObject_t3674682005 * get_fingerObj_6() const { return ___fingerObj_6; }
	inline GameObject_t3674682005 ** get_address_of_fingerObj_6() { return &___fingerObj_6; }
	inline void set_fingerObj_6(GameObject_t3674682005 * value)
	{
		___fingerObj_6 = value;
		Il2CppCodeGenWriteBarrier(&___fingerObj_6, value);
	}

	inline static int32_t get_offset_of_screenManager_7() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___screenManager_7)); }
	inline ScreenManager_t3015837057 * get_screenManager_7() const { return ___screenManager_7; }
	inline ScreenManager_t3015837057 ** get_address_of_screenManager_7() { return &___screenManager_7; }
	inline void set_screenManager_7(ScreenManager_t3015837057 * value)
	{
		___screenManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___screenManager_7, value);
	}

	inline static int32_t get_offset_of_propertyManager_8() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___propertyManager_8)); }
	inline PropertyManager_t3594401784 * get_propertyManager_8() const { return ___propertyManager_8; }
	inline PropertyManager_t3594401784 ** get_address_of_propertyManager_8() { return &___propertyManager_8; }
	inline void set_propertyManager_8(PropertyManager_t3594401784 * value)
	{
		___propertyManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___propertyManager_8, value);
	}

	inline static int32_t get_offset_of_panelPrefab_9() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___panelPrefab_9)); }
	inline GameObject_t3674682005 * get_panelPrefab_9() const { return ___panelPrefab_9; }
	inline GameObject_t3674682005 ** get_address_of_panelPrefab_9() { return &___panelPrefab_9; }
	inline void set_panelPrefab_9(GameObject_t3674682005 * value)
	{
		___panelPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___panelPrefab_9, value);
	}

	inline static int32_t get_offset_of_fingerPrefab_10() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___fingerPrefab_10)); }
	inline GameObject_t3674682005 * get_fingerPrefab_10() const { return ___fingerPrefab_10; }
	inline GameObject_t3674682005 ** get_address_of_fingerPrefab_10() { return &___fingerPrefab_10; }
	inline void set_fingerPrefab_10(GameObject_t3674682005 * value)
	{
		___fingerPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___fingerPrefab_10, value);
	}

	inline static int32_t get_offset_of_trailEffectPrefab_11() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___trailEffectPrefab_11)); }
	inline GameObject_t3674682005 * get_trailEffectPrefab_11() const { return ___trailEffectPrefab_11; }
	inline GameObject_t3674682005 ** get_address_of_trailEffectPrefab_11() { return &___trailEffectPrefab_11; }
	inline void set_trailEffectPrefab_11(GameObject_t3674682005 * value)
	{
		___trailEffectPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___trailEffectPrefab_11, value);
	}

	inline static int32_t get_offset_of_customDialogPrefab_12() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___customDialogPrefab_12)); }
	inline GameObject_t3674682005 * get_customDialogPrefab_12() const { return ___customDialogPrefab_12; }
	inline GameObject_t3674682005 ** get_address_of_customDialogPrefab_12() { return &___customDialogPrefab_12; }
	inline void set_customDialogPrefab_12(GameObject_t3674682005 * value)
	{
		___customDialogPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___customDialogPrefab_12, value);
	}

	inline static int32_t get_offset_of_customLabelPrefab_13() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___customLabelPrefab_13)); }
	inline GameObject_t3674682005 * get_customLabelPrefab_13() const { return ___customLabelPrefab_13; }
	inline GameObject_t3674682005 ** get_address_of_customLabelPrefab_13() { return &___customLabelPrefab_13; }
	inline void set_customLabelPrefab_13(GameObject_t3674682005 * value)
	{
		___customLabelPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___customLabelPrefab_13, value);
	}

	inline static int32_t get_offset_of_description_14() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___description_14)); }
	inline CustomLabel_t4167182819 * get_description_14() const { return ___description_14; }
	inline CustomLabel_t4167182819 ** get_address_of_description_14() { return &___description_14; }
	inline void set_description_14(CustomLabel_t4167182819 * value)
	{
		___description_14 = value;
		Il2CppCodeGenWriteBarrier(&___description_14, value);
	}

	inline static int32_t get_offset_of_basePos_15() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___basePos_15)); }
	inline Vector3_t4282066566  get_basePos_15() const { return ___basePos_15; }
	inline Vector3_t4282066566 * get_address_of_basePos_15() { return &___basePos_15; }
	inline void set_basePos_15(Vector3_t4282066566  value)
	{
		___basePos_15 = value;
	}

	inline static int32_t get_offset_of_flushDemoPhase_16() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___flushDemoPhase_16)); }
	inline bool get_flushDemoPhase_16() const { return ___flushDemoPhase_16; }
	inline bool* get_address_of_flushDemoPhase_16() { return &___flushDemoPhase_16; }
	inline void set_flushDemoPhase_16(bool value)
	{
		___flushDemoPhase_16 = value;
	}

	inline static int32_t get_offset_of_demoPlayTime_17() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___demoPlayTime_17)); }
	inline float get_demoPlayTime_17() const { return ___demoPlayTime_17; }
	inline float* get_address_of_demoPlayTime_17() { return &___demoPlayTime_17; }
	inline void set_demoPlayTime_17(float value)
	{
		___demoPlayTime_17 = value;
	}

	inline static int32_t get_offset_of_fingerMoveStep_18() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___fingerMoveStep_18)); }
	inline int32_t get_fingerMoveStep_18() const { return ___fingerMoveStep_18; }
	inline int32_t* get_address_of_fingerMoveStep_18() { return &___fingerMoveStep_18; }
	inline void set_fingerMoveStep_18(int32_t value)
	{
		___fingerMoveStep_18 = value;
	}

	inline static int32_t get_offset_of_stepMoveDistance_19() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229, ___stepMoveDistance_19)); }
	inline float get_stepMoveDistance_19() const { return ___stepMoveDistance_19; }
	inline float* get_address_of_stepMoveDistance_19() { return &___stepMoveDistance_19; }
	inline void set_stepMoveDistance_19(float value)
	{
		___stepMoveDistance_19 = value;
	}
};

struct HelpBoard_t3274420229_StaticFields
{
public:
	// System.Single HelpBoard::FINGER_MOVE_RATE
	float ___FINGER_MOVE_RATE_2;

public:
	inline static int32_t get_offset_of_FINGER_MOVE_RATE_2() { return static_cast<int32_t>(offsetof(HelpBoard_t3274420229_StaticFields, ___FINGER_MOVE_RATE_2)); }
	inline float get_FINGER_MOVE_RATE_2() const { return ___FINGER_MOVE_RATE_2; }
	inline float* get_address_of_FINGER_MOVE_RATE_2() { return &___FINGER_MOVE_RATE_2; }
	inline void set_FINGER_MOVE_RATE_2(float value)
	{
		___FINGER_MOVE_RATE_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
