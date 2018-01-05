#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Collections.Generic.List`1<StepInfo>
struct List_1_t776730809;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3466145964;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Random
struct Random_t108471755;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Action
struct Action_t1264377477;
// StepInfo
struct StepInfo_t3599623363;
// HelpBoard
struct HelpBoard_t3253268378;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// Panel
struct Panel_t2602547000;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.GUITexture
struct GUITexture_t951903601;
// UnityEngine.GUIText
struct GUIText_t402233326;
// System.Collections.Generic.List`1<Panel>
struct List_1_t4074621742;
// StageInfo
struct StageInfo_t2857013238;
// System.Collections.Generic.List`1<PathInfo>
struct List_1_t1586635759;
// ScreenManager
struct ScreenManager_t3266275672;
// PropertyManager
struct PropertyManager_t133873816;
// CustomLabel
struct CustomLabel_t26837091;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1049633776;
// UnityEngine.GUIText[]
struct GUITextU5BU5D_t3675624603;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// StageManager
struct StageManager_t3296066545;
// System.Collections.Generic.List`1<PanelTouchListener>
struct List_1_t2235366681;
// System.Collections.Generic.List`1<TouchListener>
struct List_1_t3815006096;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef STAGEINFO_T2857013238_H
#define STAGEINFO_T2857013238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageInfo
struct  StageInfo_t2857013238  : public RuntimeObject
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
	List_1_t776730809 * ___stepInfos_7;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___level_0)); }
	inline int32_t get_level_0() const { return ___level_0; }
	inline int32_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(int32_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_stageNo_1() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___stageNo_1)); }
	inline int32_t get_stageNo_1() const { return ___stageNo_1; }
	inline int32_t* get_address_of_stageNo_1() { return &___stageNo_1; }
	inline void set_stageNo_1(int32_t value)
	{
		___stageNo_1 = value;
	}

	inline static int32_t get_offset_of_panelColNum_2() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___panelColNum_2)); }
	inline int32_t get_panelColNum_2() const { return ___panelColNum_2; }
	inline int32_t* get_address_of_panelColNum_2() { return &___panelColNum_2; }
	inline void set_panelColNum_2(int32_t value)
	{
		___panelColNum_2 = value;
	}

	inline static int32_t get_offset_of_panelRowNum_3() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___panelRowNum_3)); }
	inline int32_t get_panelRowNum_3() const { return ___panelRowNum_3; }
	inline int32_t* get_address_of_panelRowNum_3() { return &___panelRowNum_3; }
	inline void set_panelRowNum_3(int32_t value)
	{
		___panelRowNum_3 = value;
	}

	inline static int32_t get_offset_of_limitTime_4() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___limitTime_4)); }
	inline float get_limitTime_4() const { return ___limitTime_4; }
	inline float* get_address_of_limitTime_4() { return &___limitTime_4; }
	inline void set_limitTime_4(float value)
	{
		___limitTime_4 = value;
	}

	inline static int32_t get_offset_of_reverse_5() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___reverse_5)); }
	inline bool get_reverse_5() const { return ___reverse_5; }
	inline bool* get_address_of_reverse_5() { return &___reverse_5; }
	inline void set_reverse_5(bool value)
	{
		___reverse_5 = value;
	}

	inline static int32_t get_offset_of_skipN_6() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___skipN_6)); }
	inline int32_t get_skipN_6() const { return ___skipN_6; }
	inline int32_t* get_address_of_skipN_6() { return &___skipN_6; }
	inline void set_skipN_6(int32_t value)
	{
		___skipN_6 = value;
	}

	inline static int32_t get_offset_of_stepInfos_7() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___stepInfos_7)); }
	inline List_1_t776730809 * get_stepInfos_7() const { return ___stepInfos_7; }
	inline List_1_t776730809 ** get_address_of_stepInfos_7() { return &___stepInfos_7; }
	inline void set_stepInfos_7(List_1_t776730809 * value)
	{
		___stepInfos_7 = value;
		Il2CppCodeGenWriteBarrier((&___stepInfos_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEINFO_T2857013238_H
#ifndef AUDIOMANAGER_T3267510698_H
#define AUDIOMANAGER_T3267510698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3267510698  : public RuntimeObject
{
public:

public:
};

struct AudioManager_t3267510698_StaticFields
{
public:
	// System.String AudioManager::RESOURCE_AUDIO_ROOT
	String_t* ___RESOURCE_AUDIO_ROOT_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> AudioManager::audioClips
	Dictionary_2_t3466145964 * ___audioClips_1;

public:
	inline static int32_t get_offset_of_RESOURCE_AUDIO_ROOT_0() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698_StaticFields, ___RESOURCE_AUDIO_ROOT_0)); }
	inline String_t* get_RESOURCE_AUDIO_ROOT_0() const { return ___RESOURCE_AUDIO_ROOT_0; }
	inline String_t** get_address_of_RESOURCE_AUDIO_ROOT_0() { return &___RESOURCE_AUDIO_ROOT_0; }
	inline void set_RESOURCE_AUDIO_ROOT_0(String_t* value)
	{
		___RESOURCE_AUDIO_ROOT_0 = value;
		Il2CppCodeGenWriteBarrier((&___RESOURCE_AUDIO_ROOT_0), value);
	}

	inline static int32_t get_offset_of_audioClips_1() { return static_cast<int32_t>(offsetof(AudioManager_t3267510698_StaticFields, ___audioClips_1)); }
	inline Dictionary_2_t3466145964 * get_audioClips_1() const { return ___audioClips_1; }
	inline Dictionary_2_t3466145964 ** get_address_of_audioClips_1() { return &___audioClips_1; }
	inline void set_audioClips_1(Dictionary_2_t3466145964 * value)
	{
		___audioClips_1 = value;
		Il2CppCodeGenWriteBarrier((&___audioClips_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T3267510698_H
#ifndef ENCRYPTUTIL_T3657054836_H
#define ENCRYPTUTIL_T3657054836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EncryptUtil
struct  EncryptUtil_t3657054836  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTUTIL_T3657054836_H
#ifndef PROPERTIES_T2672350415_H
#define PROPERTIES_T2672350415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Properties
struct  Properties_t2672350415  : public RuntimeObject
{
public:
	// System.String Properties::locale
	String_t* ___locale_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Properties::properties
	Dictionary_2_t1632706988 * ___properties_1;

public:
	inline static int32_t get_offset_of_locale_0() { return static_cast<int32_t>(offsetof(Properties_t2672350415, ___locale_0)); }
	inline String_t* get_locale_0() const { return ___locale_0; }
	inline String_t** get_address_of_locale_0() { return &___locale_0; }
	inline void set_locale_0(String_t* value)
	{
		___locale_0 = value;
		Il2CppCodeGenWriteBarrier((&___locale_0), value);
	}

	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(Properties_t2672350415, ___properties_1)); }
	inline Dictionary_2_t1632706988 * get_properties_1() const { return ___properties_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(Dictionary_2_t1632706988 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTIES_T2672350415_H
#ifndef RANDOMUTIL_T3302884052_H
#define RANDOMUTIL_T3302884052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomUtil
struct  RandomUtil_t3302884052  : public RuntimeObject
{
public:

public:
};

struct RandomUtil_t3302884052_StaticFields
{
public:
	// System.Random RandomUtil::random
	Random_t108471755 * ___random_0;
	// System.Int32 RandomUtil::previousInt
	int32_t ___previousInt_1;
	// System.String RandomUtil::charSeeds
	String_t* ___charSeeds_2;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(RandomUtil_t3302884052_StaticFields, ___random_0)); }
	inline Random_t108471755 * get_random_0() const { return ___random_0; }
	inline Random_t108471755 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t108471755 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier((&___random_0), value);
	}

	inline static int32_t get_offset_of_previousInt_1() { return static_cast<int32_t>(offsetof(RandomUtil_t3302884052_StaticFields, ___previousInt_1)); }
	inline int32_t get_previousInt_1() const { return ___previousInt_1; }
	inline int32_t* get_address_of_previousInt_1() { return &___previousInt_1; }
	inline void set_previousInt_1(int32_t value)
	{
		___previousInt_1 = value;
	}

	inline static int32_t get_offset_of_charSeeds_2() { return static_cast<int32_t>(offsetof(RandomUtil_t3302884052_StaticFields, ___charSeeds_2)); }
	inline String_t* get_charSeeds_2() const { return ___charSeeds_2; }
	inline String_t** get_address_of_charSeeds_2() { return &___charSeeds_2; }
	inline void set_charSeeds_2(String_t* value)
	{
		___charSeeds_2 = value;
		Il2CppCodeGenWriteBarrier((&___charSeeds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMUTIL_T3302884052_H
#ifndef RANGEUTIL_T1606155416_H
#define RANGEUTIL_T1606155416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangeUtil
struct  RangeUtil_t1606155416  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEUTIL_T1606155416_H
#ifndef SIMPLELOCK_T2563344630_H
#define SIMPLELOCK_T2563344630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleLock
struct  SimpleLock_t2563344630  : public RuntimeObject
{
public:

public:
};

struct SimpleLock_t2563344630_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SimpleLock::locks
	Dictionary_2_t2736202052 * ___locks_0;

public:
	inline static int32_t get_offset_of_locks_0() { return static_cast<int32_t>(offsetof(SimpleLock_t2563344630_StaticFields, ___locks_0)); }
	inline Dictionary_2_t2736202052 * get_locks_0() const { return ___locks_0; }
	inline Dictionary_2_t2736202052 ** get_address_of_locks_0() { return &___locks_0; }
	inline void set_locks_0(Dictionary_2_t2736202052 * value)
	{
		___locks_0 = value;
		Il2CppCodeGenWriteBarrier((&___locks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLELOCK_T2563344630_H
#ifndef U3CLOCKU3EC__ANONSTOREY0_T2261534691_H
#define U3CLOCKU3EC__ANONSTOREY0_T2261534691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleLock/<Lock>c__AnonStorey0
struct  U3CLockU3Ec__AnonStorey0_t2261534691  : public RuntimeObject
{
public:
	// System.Action SimpleLock/<Lock>c__AnonStorey0::action
	Action_t1264377477 * ___action_0;
	// System.String SimpleLock/<Lock>c__AnonStorey0::key
	String_t* ___key_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CLockU3Ec__AnonStorey0_t2261534691, ___action_0)); }
	inline Action_t1264377477 * get_action_0() const { return ___action_0; }
	inline Action_t1264377477 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t1264377477 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(U3CLockU3Ec__AnonStorey0_t2261534691, ___key_1)); }
	inline String_t* get_key_1() const { return ___key_1; }
	inline String_t** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(String_t* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOCKU3EC__ANONSTOREY0_T2261534691_H
#ifndef U3CLOCKU3EC__ANONSTOREY1_T695450750_H
#define U3CLOCKU3EC__ANONSTOREY1_T695450750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleLock/<Lock>c__AnonStorey1
struct  U3CLockU3Ec__AnonStorey1_t695450750  : public RuntimeObject
{
public:
	// System.String SimpleLock/<Lock>c__AnonStorey1::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(U3CLockU3Ec__AnonStorey1_t695450750, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOCKU3EC__ANONSTOREY1_T695450750_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CUPDATEU3EC__ANONSTOREY0_T2542300663_H
#define U3CUPDATEU3EC__ANONSTOREY0_T2542300663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard/<Update>c__AnonStorey0
struct  U3CUpdateU3Ec__AnonStorey0_t2542300663  : public RuntimeObject
{
public:
	// StepInfo HelpBoard/<Update>c__AnonStorey0::step
	StepInfo_t3599623363 * ___step_0;
	// HelpBoard HelpBoard/<Update>c__AnonStorey0::$this
	HelpBoard_t3253268378 * ___U24this_1;

public:
	inline static int32_t get_offset_of_step_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey0_t2542300663, ___step_0)); }
	inline StepInfo_t3599623363 * get_step_0() const { return ___step_0; }
	inline StepInfo_t3599623363 ** get_address_of_step_0() { return &___step_0; }
	inline void set_step_0(StepInfo_t3599623363 * value)
	{
		___step_0 = value;
		Il2CppCodeGenWriteBarrier((&___step_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey0_t2542300663, ___U24this_1)); }
	inline HelpBoard_t3253268378 * get_U24this_1() const { return ___U24this_1; }
	inline HelpBoard_t3253268378 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(HelpBoard_t3253268378 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUPDATEU3EC__ANONSTOREY0_T2542300663_H
#ifndef PANEL_T2602547000_H
#define PANEL_T2602547000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Panel
struct  Panel_t2602547000  : public RuntimeObject
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
	GameObject_t1113636619 * ___panelOjcect_6;

public:
	inline static int32_t get_offset_of_indexX_0() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___indexX_0)); }
	inline int32_t get_indexX_0() const { return ___indexX_0; }
	inline int32_t* get_address_of_indexX_0() { return &___indexX_0; }
	inline void set_indexX_0(int32_t value)
	{
		___indexX_0 = value;
	}

	inline static int32_t get_offset_of_indexY_1() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___indexY_1)); }
	inline int32_t get_indexY_1() const { return ___indexY_1; }
	inline int32_t* get_address_of_indexY_1() { return &___indexY_1; }
	inline void set_indexY_1(int32_t value)
	{
		___indexY_1 = value;
	}

	inline static int32_t get_offset_of_leftX_2() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___leftX_2)); }
	inline float get_leftX_2() const { return ___leftX_2; }
	inline float* get_address_of_leftX_2() { return &___leftX_2; }
	inline void set_leftX_2(float value)
	{
		___leftX_2 = value;
	}

	inline static int32_t get_offset_of_bottomY_3() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___bottomY_3)); }
	inline float get_bottomY_3() const { return ___bottomY_3; }
	inline float* get_address_of_bottomY_3() { return &___bottomY_3; }
	inline void set_bottomY_3(float value)
	{
		___bottomY_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_panelOjcect_6() { return static_cast<int32_t>(offsetof(Panel_t2602547000, ___panelOjcect_6)); }
	inline GameObject_t1113636619 * get_panelOjcect_6() const { return ___panelOjcect_6; }
	inline GameObject_t1113636619 ** get_address_of_panelOjcect_6() { return &___panelOjcect_6; }
	inline void set_panelOjcect_6(GameObject_t1113636619 * value)
	{
		___panelOjcect_6 = value;
		Il2CppCodeGenWriteBarrier((&___panelOjcect_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANEL_T2602547000_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PATHINFO_T114561017_H
#define PATHINFO_T114561017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathInfo
struct  PathInfo_t114561017  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 PathInfo::Origin
	Vector3_t3722313464  ___Origin_0;
	// UnityEngine.Vector3 PathInfo::Destination
	Vector3_t3722313464  ___Destination_1;
	// UnityEngine.Vector3 PathInfo::Direction
	Vector3_t3722313464  ___Direction_2;
	// System.Single PathInfo::Distance
	float ___Distance_3;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(PathInfo_t114561017, ___Origin_0)); }
	inline Vector3_t3722313464  get_Origin_0() const { return ___Origin_0; }
	inline Vector3_t3722313464 * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3_t3722313464  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_Destination_1() { return static_cast<int32_t>(offsetof(PathInfo_t114561017, ___Destination_1)); }
	inline Vector3_t3722313464  get_Destination_1() const { return ___Destination_1; }
	inline Vector3_t3722313464 * get_address_of_Destination_1() { return &___Destination_1; }
	inline void set_Destination_1(Vector3_t3722313464  value)
	{
		___Destination_1 = value;
	}

	inline static int32_t get_offset_of_Direction_2() { return static_cast<int32_t>(offsetof(PathInfo_t114561017, ___Direction_2)); }
	inline Vector3_t3722313464  get_Direction_2() const { return ___Direction_2; }
	inline Vector3_t3722313464 * get_address_of_Direction_2() { return &___Direction_2; }
	inline void set_Direction_2(Vector3_t3722313464  value)
	{
		___Direction_2 = value;
	}

	inline static int32_t get_offset_of_Distance_3() { return static_cast<int32_t>(offsetof(PathInfo_t114561017, ___Distance_3)); }
	inline float get_Distance_3() const { return ___Distance_3; }
	inline float* get_address_of_Distance_3() { return &___Distance_3; }
	inline void set_Distance_3(float value)
	{
		___Distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATHINFO_T114561017_H
#ifndef LOGLEVEL_T2164114948_H
#define LOGLEVEL_T2164114948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Logger/LogLevel
struct  LogLevel_t2164114948 
{
public:
	// System.Int32 Logger/LogLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogLevel_t2164114948, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGLEVEL_T2164114948_H
#ifndef STATE_T1211379539_H
#define STATE_T1211379539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateManager/State
struct  State_t1211379539 
{
public:
	// System.Int32 StateManager/State::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(State_t1211379539, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T1211379539_H
#ifndef FLUSHINFO_T3200436075_H
#define FLUSHINFO_T3200436075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlushInfo
struct  FlushInfo_t3200436075  : public RuntimeObject
{
public:
	// UnityEngine.Color FlushInfo::flushColor
	Color_t2555686324  ___flushColor_0;
	// System.Single FlushInfo::flushTime
	float ___flushTime_1;

public:
	inline static int32_t get_offset_of_flushColor_0() { return static_cast<int32_t>(offsetof(FlushInfo_t3200436075, ___flushColor_0)); }
	inline Color_t2555686324  get_flushColor_0() const { return ___flushColor_0; }
	inline Color_t2555686324 * get_address_of_flushColor_0() { return &___flushColor_0; }
	inline void set_flushColor_0(Color_t2555686324  value)
	{
		___flushColor_0 = value;
	}

	inline static int32_t get_offset_of_flushTime_1() { return static_cast<int32_t>(offsetof(FlushInfo_t3200436075, ___flushTime_1)); }
	inline float get_flushTime_1() const { return ___flushTime_1; }
	inline float* get_address_of_flushTime_1() { return &___flushTime_1; }
	inline void set_flushTime_1(float value)
	{
		___flushTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLUSHINFO_T3200436075_H
#ifndef FLICKINFO_T3771679202_H
#define FLICKINFO_T3771679202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlickInfo
struct  FlickInfo_t3771679202  : public RuntimeObject
{
public:
	// UnityEngine.Color FlickInfo::flickColor
	Color_t2555686324  ___flickColor_0;
	// System.Single FlickInfo::flickPace
	float ___flickPace_1;
	// System.Single FlickInfo::flickTime
	float ___flickTime_2;

public:
	inline static int32_t get_offset_of_flickColor_0() { return static_cast<int32_t>(offsetof(FlickInfo_t3771679202, ___flickColor_0)); }
	inline Color_t2555686324  get_flickColor_0() const { return ___flickColor_0; }
	inline Color_t2555686324 * get_address_of_flickColor_0() { return &___flickColor_0; }
	inline void set_flickColor_0(Color_t2555686324  value)
	{
		___flickColor_0 = value;
	}

	inline static int32_t get_offset_of_flickPace_1() { return static_cast<int32_t>(offsetof(FlickInfo_t3771679202, ___flickPace_1)); }
	inline float get_flickPace_1() const { return ___flickPace_1; }
	inline float* get_address_of_flickPace_1() { return &___flickPace_1; }
	inline void set_flickPace_1(float value)
	{
		___flickPace_1 = value;
	}

	inline static int32_t get_offset_of_flickTime_2() { return static_cast<int32_t>(offsetof(FlickInfo_t3771679202, ___flickTime_2)); }
	inline float get_flickTime_2() const { return ___flickTime_2; }
	inline float* get_address_of_flickTime_2() { return &___flickTime_2; }
	inline void set_flickTime_2(float value)
	{
		___flickTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLICKINFO_T3771679202_H
#ifndef TOUCHINFO_T144578985_H
#define TOUCHINFO_T144578985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchInfo
struct  TouchInfo_t144578985  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 TouchInfo::touchScreenPoint
	Vector3_t3722313464  ___touchScreenPoint_0;
	// UnityEngine.Vector3 TouchInfo::touchViewportPoint
	Vector3_t3722313464  ___touchViewportPoint_1;
	// UnityEngine.Vector3 TouchInfo::originScreenPoint
	Vector3_t3722313464  ___originScreenPoint_2;
	// UnityEngine.Vector3 TouchInfo::originViewportPoint
	Vector3_t3722313464  ___originViewportPoint_3;
	// System.Single TouchInfo::deltaTime
	float ___deltaTime_4;
	// System.Boolean TouchInfo::isFirstTouch
	bool ___isFirstTouch_5;

public:
	inline static int32_t get_offset_of_touchScreenPoint_0() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___touchScreenPoint_0)); }
	inline Vector3_t3722313464  get_touchScreenPoint_0() const { return ___touchScreenPoint_0; }
	inline Vector3_t3722313464 * get_address_of_touchScreenPoint_0() { return &___touchScreenPoint_0; }
	inline void set_touchScreenPoint_0(Vector3_t3722313464  value)
	{
		___touchScreenPoint_0 = value;
	}

	inline static int32_t get_offset_of_touchViewportPoint_1() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___touchViewportPoint_1)); }
	inline Vector3_t3722313464  get_touchViewportPoint_1() const { return ___touchViewportPoint_1; }
	inline Vector3_t3722313464 * get_address_of_touchViewportPoint_1() { return &___touchViewportPoint_1; }
	inline void set_touchViewportPoint_1(Vector3_t3722313464  value)
	{
		___touchViewportPoint_1 = value;
	}

	inline static int32_t get_offset_of_originScreenPoint_2() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___originScreenPoint_2)); }
	inline Vector3_t3722313464  get_originScreenPoint_2() const { return ___originScreenPoint_2; }
	inline Vector3_t3722313464 * get_address_of_originScreenPoint_2() { return &___originScreenPoint_2; }
	inline void set_originScreenPoint_2(Vector3_t3722313464  value)
	{
		___originScreenPoint_2 = value;
	}

	inline static int32_t get_offset_of_originViewportPoint_3() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___originViewportPoint_3)); }
	inline Vector3_t3722313464  get_originViewportPoint_3() const { return ___originViewportPoint_3; }
	inline Vector3_t3722313464 * get_address_of_originViewportPoint_3() { return &___originViewportPoint_3; }
	inline void set_originViewportPoint_3(Vector3_t3722313464  value)
	{
		___originViewportPoint_3 = value;
	}

	inline static int32_t get_offset_of_deltaTime_4() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___deltaTime_4)); }
	inline float get_deltaTime_4() const { return ___deltaTime_4; }
	inline float* get_address_of_deltaTime_4() { return &___deltaTime_4; }
	inline void set_deltaTime_4(float value)
	{
		___deltaTime_4 = value;
	}

	inline static int32_t get_offset_of_isFirstTouch_5() { return static_cast<int32_t>(offsetof(TouchInfo_t144578985, ___isFirstTouch_5)); }
	inline bool get_isFirstTouch_5() const { return ___isFirstTouch_5; }
	inline bool* get_address_of_isFirstTouch_5() { return &___isFirstTouch_5; }
	inline void set_isFirstTouch_5(bool value)
	{
		___isFirstTouch_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHINFO_T144578985_H
#ifndef PANELTOUCHINFO_T3501340097_H
#define PANELTOUCHINFO_T3501340097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelTouchInfo
struct  PanelTouchInfo_t3501340097  : public TouchInfo_t144578985
{
public:
	// Panel PanelTouchInfo::touchPanel
	Panel_t2602547000 * ___touchPanel_6;

public:
	inline static int32_t get_offset_of_touchPanel_6() { return static_cast<int32_t>(offsetof(PanelTouchInfo_t3501340097, ___touchPanel_6)); }
	inline Panel_t2602547000 * get_touchPanel_6() const { return ___touchPanel_6; }
	inline Panel_t2602547000 ** get_address_of_touchPanel_6() { return &___touchPanel_6; }
	inline void set_touchPanel_6(Panel_t2602547000 * value)
	{
		___touchPanel_6 = value;
		Il2CppCodeGenWriteBarrier((&___touchPanel_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELTOUCHINFO_T3501340097_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef STATEMANAGER_T1628729484_H
#define STATEMANAGER_T1628729484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateManager
struct  StateManager_t1628729484  : public RuntimeObject
{
public:

public:
};

struct StateManager_t1628729484_StaticFields
{
public:
	// StateManager/State StateManager::state
	int32_t ___state_0;
	// System.Boolean StateManager::pause
	bool ___pause_1;
	// System.Action StateManager::<>f__am$cache0
	Action_t1264377477 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StateManager_t1628729484_StaticFields, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_pause_1() { return static_cast<int32_t>(offsetof(StateManager_t1628729484_StaticFields, ___pause_1)); }
	inline bool get_pause_1() const { return ___pause_1; }
	inline bool* get_address_of_pause_1() { return &___pause_1; }
	inline void set_pause_1(bool value)
	{
		___pause_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(StateManager_t1628729484_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_t1264377477 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_t1264377477 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMANAGER_T1628729484_H
#ifndef RANKINGRECORD_T220687443_H
#define RANKINGRECORD_T220687443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankingRecord
struct  RankingRecord_t220687443  : public RuntimeObject
{
public:
	// System.String RankingRecord::reqCode
	String_t* ___reqCode_0;
	// System.String RankingRecord::category
	String_t* ___category_1;
	// System.String RankingRecord::name
	String_t* ___name_2;
	// System.Int32 RankingRecord::rank
	int32_t ___rank_3;
	// System.Int32 RankingRecord::point
	int32_t ___point_4;
	// System.DateTime RankingRecord::createdAt
	DateTime_t3738529785  ___createdAt_5;

public:
	inline static int32_t get_offset_of_reqCode_0() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___reqCode_0)); }
	inline String_t* get_reqCode_0() const { return ___reqCode_0; }
	inline String_t** get_address_of_reqCode_0() { return &___reqCode_0; }
	inline void set_reqCode_0(String_t* value)
	{
		___reqCode_0 = value;
		Il2CppCodeGenWriteBarrier((&___reqCode_0), value);
	}

	inline static int32_t get_offset_of_category_1() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___category_1)); }
	inline String_t* get_category_1() const { return ___category_1; }
	inline String_t** get_address_of_category_1() { return &___category_1; }
	inline void set_category_1(String_t* value)
	{
		___category_1 = value;
		Il2CppCodeGenWriteBarrier((&___category_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_rank_3() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___rank_3)); }
	inline int32_t get_rank_3() const { return ___rank_3; }
	inline int32_t* get_address_of_rank_3() { return &___rank_3; }
	inline void set_rank_3(int32_t value)
	{
		___rank_3 = value;
	}

	inline static int32_t get_offset_of_point_4() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___point_4)); }
	inline int32_t get_point_4() const { return ___point_4; }
	inline int32_t* get_address_of_point_4() { return &___point_4; }
	inline void set_point_4(int32_t value)
	{
		___point_4 = value;
	}

	inline static int32_t get_offset_of_createdAt_5() { return static_cast<int32_t>(offsetof(RankingRecord_t220687443, ___createdAt_5)); }
	inline DateTime_t3738529785  get_createdAt_5() const { return ___createdAt_5; }
	inline DateTime_t3738529785 * get_address_of_createdAt_5() { return &___createdAt_5; }
	inline void set_createdAt_5(DateTime_t3738529785  value)
	{
		___createdAt_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKINGRECORD_T220687443_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef STAGEDIALOG_T2246124788_H
#define STAGEDIALOG_T2246124788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageDialog
struct  StageDialog_t2246124788  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUITexture StageDialog::dialogBg
	GUITexture_t951903601 * ___dialogBg_2;
	// UnityEngine.GUIText StageDialog::level
	GUIText_t402233326 * ___level_3;
	// UnityEngine.GUIText StageDialog::levelNo
	GUIText_t402233326 * ___levelNo_4;
	// UnityEngine.GUIText StageDialog::stage
	GUIText_t402233326 * ___stage_5;
	// UnityEngine.GUIText StageDialog::stageNo
	GUIText_t402233326 * ___stageNo_6;
	// UnityEngine.GUIText StageDialog::description
	GUIText_t402233326 * ___description_7;
	// System.Int32 StageDialog::levelInt
	int32_t ___levelInt_8;
	// System.Int32 StageDialog::stageInt
	int32_t ___stageInt_9;

public:
	inline static int32_t get_offset_of_dialogBg_2() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___dialogBg_2)); }
	inline GUITexture_t951903601 * get_dialogBg_2() const { return ___dialogBg_2; }
	inline GUITexture_t951903601 ** get_address_of_dialogBg_2() { return &___dialogBg_2; }
	inline void set_dialogBg_2(GUITexture_t951903601 * value)
	{
		___dialogBg_2 = value;
		Il2CppCodeGenWriteBarrier((&___dialogBg_2), value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___level_3)); }
	inline GUIText_t402233326 * get_level_3() const { return ___level_3; }
	inline GUIText_t402233326 ** get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(GUIText_t402233326 * value)
	{
		___level_3 = value;
		Il2CppCodeGenWriteBarrier((&___level_3), value);
	}

	inline static int32_t get_offset_of_levelNo_4() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___levelNo_4)); }
	inline GUIText_t402233326 * get_levelNo_4() const { return ___levelNo_4; }
	inline GUIText_t402233326 ** get_address_of_levelNo_4() { return &___levelNo_4; }
	inline void set_levelNo_4(GUIText_t402233326 * value)
	{
		___levelNo_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelNo_4), value);
	}

	inline static int32_t get_offset_of_stage_5() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stage_5)); }
	inline GUIText_t402233326 * get_stage_5() const { return ___stage_5; }
	inline GUIText_t402233326 ** get_address_of_stage_5() { return &___stage_5; }
	inline void set_stage_5(GUIText_t402233326 * value)
	{
		___stage_5 = value;
		Il2CppCodeGenWriteBarrier((&___stage_5), value);
	}

	inline static int32_t get_offset_of_stageNo_6() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stageNo_6)); }
	inline GUIText_t402233326 * get_stageNo_6() const { return ___stageNo_6; }
	inline GUIText_t402233326 ** get_address_of_stageNo_6() { return &___stageNo_6; }
	inline void set_stageNo_6(GUIText_t402233326 * value)
	{
		___stageNo_6 = value;
		Il2CppCodeGenWriteBarrier((&___stageNo_6), value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___description_7)); }
	inline GUIText_t402233326 * get_description_7() const { return ___description_7; }
	inline GUIText_t402233326 ** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(GUIText_t402233326 * value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier((&___description_7), value);
	}

	inline static int32_t get_offset_of_levelInt_8() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___levelInt_8)); }
	inline int32_t get_levelInt_8() const { return ___levelInt_8; }
	inline int32_t* get_address_of_levelInt_8() { return &___levelInt_8; }
	inline void set_levelInt_8(int32_t value)
	{
		___levelInt_8 = value;
	}

	inline static int32_t get_offset_of_stageInt_9() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stageInt_9)); }
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
#endif // STAGEDIALOG_T2246124788_H
#ifndef PANELCOLOR_T3669076827_H
#define PANELCOLOR_T3669076827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelColor
struct  PanelColor_t3669076827  : public MonoBehaviour_t3962482529
{
public:
	// System.String PanelColor::timerKeyPanelColor
	String_t* ___timerKeyPanelColor_3;
	// System.String PanelColor::timerKeyPanelFlick
	String_t* ___timerKeyPanelFlick_4;
	// UnityEngine.Color PanelColor::originalColor
	Color_t2555686324  ___originalColor_5;
	// UnityEngine.Color PanelColor::flickColor
	Color_t2555686324  ___flickColor_6;
	// System.Single PanelColor::flickPace
	float ___flickPace_7;

public:
	inline static int32_t get_offset_of_timerKeyPanelColor_3() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827, ___timerKeyPanelColor_3)); }
	inline String_t* get_timerKeyPanelColor_3() const { return ___timerKeyPanelColor_3; }
	inline String_t** get_address_of_timerKeyPanelColor_3() { return &___timerKeyPanelColor_3; }
	inline void set_timerKeyPanelColor_3(String_t* value)
	{
		___timerKeyPanelColor_3 = value;
		Il2CppCodeGenWriteBarrier((&___timerKeyPanelColor_3), value);
	}

	inline static int32_t get_offset_of_timerKeyPanelFlick_4() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827, ___timerKeyPanelFlick_4)); }
	inline String_t* get_timerKeyPanelFlick_4() const { return ___timerKeyPanelFlick_4; }
	inline String_t** get_address_of_timerKeyPanelFlick_4() { return &___timerKeyPanelFlick_4; }
	inline void set_timerKeyPanelFlick_4(String_t* value)
	{
		___timerKeyPanelFlick_4 = value;
		Il2CppCodeGenWriteBarrier((&___timerKeyPanelFlick_4), value);
	}

	inline static int32_t get_offset_of_originalColor_5() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827, ___originalColor_5)); }
	inline Color_t2555686324  get_originalColor_5() const { return ___originalColor_5; }
	inline Color_t2555686324 * get_address_of_originalColor_5() { return &___originalColor_5; }
	inline void set_originalColor_5(Color_t2555686324  value)
	{
		___originalColor_5 = value;
	}

	inline static int32_t get_offset_of_flickColor_6() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827, ___flickColor_6)); }
	inline Color_t2555686324  get_flickColor_6() const { return ___flickColor_6; }
	inline Color_t2555686324 * get_address_of_flickColor_6() { return &___flickColor_6; }
	inline void set_flickColor_6(Color_t2555686324  value)
	{
		___flickColor_6 = value;
	}

	inline static int32_t get_offset_of_flickPace_7() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827, ___flickPace_7)); }
	inline float get_flickPace_7() const { return ___flickPace_7; }
	inline float* get_address_of_flickPace_7() { return &___flickPace_7; }
	inline void set_flickPace_7(float value)
	{
		___flickPace_7 = value;
	}
};

struct PanelColor_t3669076827_StaticFields
{
public:
	// System.String PanelColor::COLOR_PROPERTY_TYPE
	String_t* ___COLOR_PROPERTY_TYPE_2;

public:
	inline static int32_t get_offset_of_COLOR_PROPERTY_TYPE_2() { return static_cast<int32_t>(offsetof(PanelColor_t3669076827_StaticFields, ___COLOR_PROPERTY_TYPE_2)); }
	inline String_t* get_COLOR_PROPERTY_TYPE_2() const { return ___COLOR_PROPERTY_TYPE_2; }
	inline String_t** get_address_of_COLOR_PROPERTY_TYPE_2() { return &___COLOR_PROPERTY_TYPE_2; }
	inline void set_COLOR_PROPERTY_TYPE_2(String_t* value)
	{
		___COLOR_PROPERTY_TYPE_2 = value;
		Il2CppCodeGenWriteBarrier((&___COLOR_PROPERTY_TYPE_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELCOLOR_T3669076827_H
#ifndef SETTINGBOARD_T1868391119_H
#define SETTINGBOARD_T1868391119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SettingBoard
struct  SettingBoard_t1868391119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIText SettingBoard::nameLabel
	GUIText_t402233326 * ___nameLabel_2;
	// UnityEngine.GUIText SettingBoard::okButtonLabel
	GUIText_t402233326 * ___okButtonLabel_3;

public:
	inline static int32_t get_offset_of_nameLabel_2() { return static_cast<int32_t>(offsetof(SettingBoard_t1868391119, ___nameLabel_2)); }
	inline GUIText_t402233326 * get_nameLabel_2() const { return ___nameLabel_2; }
	inline GUIText_t402233326 ** get_address_of_nameLabel_2() { return &___nameLabel_2; }
	inline void set_nameLabel_2(GUIText_t402233326 * value)
	{
		___nameLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameLabel_2), value);
	}

	inline static int32_t get_offset_of_okButtonLabel_3() { return static_cast<int32_t>(offsetof(SettingBoard_t1868391119, ___okButtonLabel_3)); }
	inline GUIText_t402233326 * get_okButtonLabel_3() const { return ___okButtonLabel_3; }
	inline GUIText_t402233326 ** get_address_of_okButtonLabel_3() { return &___okButtonLabel_3; }
	inline void set_okButtonLabel_3(GUIText_t402233326 * value)
	{
		___okButtonLabel_3 = value;
		Il2CppCodeGenWriteBarrier((&___okButtonLabel_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGBOARD_T1868391119_H
#ifndef HELPBOARD_T3253268378_H
#define HELPBOARD_T3253268378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard
struct  HelpBoard_t3253268378  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Panel> HelpBoard::panels
	List_1_t4074621742 * ___panels_3;
	// StageInfo HelpBoard::stageInfo
	StageInfo_t2857013238 * ___stageInfo_4;
	// System.Collections.Generic.List`1<PathInfo> HelpBoard::pathInfos
	List_1_t1586635759 * ___pathInfos_5;
	// UnityEngine.GameObject HelpBoard::fingerObj
	GameObject_t1113636619 * ___fingerObj_6;
	// ScreenManager HelpBoard::screenManager
	ScreenManager_t3266275672 * ___screenManager_7;
	// PropertyManager HelpBoard::propertyManager
	PropertyManager_t133873816 * ___propertyManager_8;
	// UnityEngine.GameObject HelpBoard::panelPrefab
	GameObject_t1113636619 * ___panelPrefab_9;
	// UnityEngine.GameObject HelpBoard::fingerPrefab
	GameObject_t1113636619 * ___fingerPrefab_10;
	// UnityEngine.GameObject HelpBoard::trailEffectPrefab
	GameObject_t1113636619 * ___trailEffectPrefab_11;
	// UnityEngine.GameObject HelpBoard::customDialogPrefab
	GameObject_t1113636619 * ___customDialogPrefab_12;
	// UnityEngine.GameObject HelpBoard::customLabelPrefab
	GameObject_t1113636619 * ___customLabelPrefab_13;
	// CustomLabel HelpBoard::description
	CustomLabel_t26837091 * ___description_14;
	// UnityEngine.Vector3 HelpBoard::basePos
	Vector3_t3722313464  ___basePos_15;
	// System.Boolean HelpBoard::flushDemoPhase
	bool ___flushDemoPhase_16;
	// System.Single HelpBoard::demoPlayTime
	float ___demoPlayTime_17;
	// System.Int32 HelpBoard::fingerMoveStep
	int32_t ___fingerMoveStep_18;
	// System.Single HelpBoard::stepMoveDistance
	float ___stepMoveDistance_19;

public:
	inline static int32_t get_offset_of_panels_3() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___panels_3)); }
	inline List_1_t4074621742 * get_panels_3() const { return ___panels_3; }
	inline List_1_t4074621742 ** get_address_of_panels_3() { return &___panels_3; }
	inline void set_panels_3(List_1_t4074621742 * value)
	{
		___panels_3 = value;
		Il2CppCodeGenWriteBarrier((&___panels_3), value);
	}

	inline static int32_t get_offset_of_stageInfo_4() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___stageInfo_4)); }
	inline StageInfo_t2857013238 * get_stageInfo_4() const { return ___stageInfo_4; }
	inline StageInfo_t2857013238 ** get_address_of_stageInfo_4() { return &___stageInfo_4; }
	inline void set_stageInfo_4(StageInfo_t2857013238 * value)
	{
		___stageInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___stageInfo_4), value);
	}

	inline static int32_t get_offset_of_pathInfos_5() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___pathInfos_5)); }
	inline List_1_t1586635759 * get_pathInfos_5() const { return ___pathInfos_5; }
	inline List_1_t1586635759 ** get_address_of_pathInfos_5() { return &___pathInfos_5; }
	inline void set_pathInfos_5(List_1_t1586635759 * value)
	{
		___pathInfos_5 = value;
		Il2CppCodeGenWriteBarrier((&___pathInfos_5), value);
	}

	inline static int32_t get_offset_of_fingerObj_6() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___fingerObj_6)); }
	inline GameObject_t1113636619 * get_fingerObj_6() const { return ___fingerObj_6; }
	inline GameObject_t1113636619 ** get_address_of_fingerObj_6() { return &___fingerObj_6; }
	inline void set_fingerObj_6(GameObject_t1113636619 * value)
	{
		___fingerObj_6 = value;
		Il2CppCodeGenWriteBarrier((&___fingerObj_6), value);
	}

	inline static int32_t get_offset_of_screenManager_7() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___screenManager_7)); }
	inline ScreenManager_t3266275672 * get_screenManager_7() const { return ___screenManager_7; }
	inline ScreenManager_t3266275672 ** get_address_of_screenManager_7() { return &___screenManager_7; }
	inline void set_screenManager_7(ScreenManager_t3266275672 * value)
	{
		___screenManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___screenManager_7), value);
	}

	inline static int32_t get_offset_of_propertyManager_8() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___propertyManager_8)); }
	inline PropertyManager_t133873816 * get_propertyManager_8() const { return ___propertyManager_8; }
	inline PropertyManager_t133873816 ** get_address_of_propertyManager_8() { return &___propertyManager_8; }
	inline void set_propertyManager_8(PropertyManager_t133873816 * value)
	{
		___propertyManager_8 = value;
		Il2CppCodeGenWriteBarrier((&___propertyManager_8), value);
	}

	inline static int32_t get_offset_of_panelPrefab_9() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___panelPrefab_9)); }
	inline GameObject_t1113636619 * get_panelPrefab_9() const { return ___panelPrefab_9; }
	inline GameObject_t1113636619 ** get_address_of_panelPrefab_9() { return &___panelPrefab_9; }
	inline void set_panelPrefab_9(GameObject_t1113636619 * value)
	{
		___panelPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((&___panelPrefab_9), value);
	}

	inline static int32_t get_offset_of_fingerPrefab_10() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___fingerPrefab_10)); }
	inline GameObject_t1113636619 * get_fingerPrefab_10() const { return ___fingerPrefab_10; }
	inline GameObject_t1113636619 ** get_address_of_fingerPrefab_10() { return &___fingerPrefab_10; }
	inline void set_fingerPrefab_10(GameObject_t1113636619 * value)
	{
		___fingerPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((&___fingerPrefab_10), value);
	}

	inline static int32_t get_offset_of_trailEffectPrefab_11() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___trailEffectPrefab_11)); }
	inline GameObject_t1113636619 * get_trailEffectPrefab_11() const { return ___trailEffectPrefab_11; }
	inline GameObject_t1113636619 ** get_address_of_trailEffectPrefab_11() { return &___trailEffectPrefab_11; }
	inline void set_trailEffectPrefab_11(GameObject_t1113636619 * value)
	{
		___trailEffectPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((&___trailEffectPrefab_11), value);
	}

	inline static int32_t get_offset_of_customDialogPrefab_12() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___customDialogPrefab_12)); }
	inline GameObject_t1113636619 * get_customDialogPrefab_12() const { return ___customDialogPrefab_12; }
	inline GameObject_t1113636619 ** get_address_of_customDialogPrefab_12() { return &___customDialogPrefab_12; }
	inline void set_customDialogPrefab_12(GameObject_t1113636619 * value)
	{
		___customDialogPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((&___customDialogPrefab_12), value);
	}

	inline static int32_t get_offset_of_customLabelPrefab_13() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___customLabelPrefab_13)); }
	inline GameObject_t1113636619 * get_customLabelPrefab_13() const { return ___customLabelPrefab_13; }
	inline GameObject_t1113636619 ** get_address_of_customLabelPrefab_13() { return &___customLabelPrefab_13; }
	inline void set_customLabelPrefab_13(GameObject_t1113636619 * value)
	{
		___customLabelPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((&___customLabelPrefab_13), value);
	}

	inline static int32_t get_offset_of_description_14() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___description_14)); }
	inline CustomLabel_t26837091 * get_description_14() const { return ___description_14; }
	inline CustomLabel_t26837091 ** get_address_of_description_14() { return &___description_14; }
	inline void set_description_14(CustomLabel_t26837091 * value)
	{
		___description_14 = value;
		Il2CppCodeGenWriteBarrier((&___description_14), value);
	}

	inline static int32_t get_offset_of_basePos_15() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___basePos_15)); }
	inline Vector3_t3722313464  get_basePos_15() const { return ___basePos_15; }
	inline Vector3_t3722313464 * get_address_of_basePos_15() { return &___basePos_15; }
	inline void set_basePos_15(Vector3_t3722313464  value)
	{
		___basePos_15 = value;
	}

	inline static int32_t get_offset_of_flushDemoPhase_16() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___flushDemoPhase_16)); }
	inline bool get_flushDemoPhase_16() const { return ___flushDemoPhase_16; }
	inline bool* get_address_of_flushDemoPhase_16() { return &___flushDemoPhase_16; }
	inline void set_flushDemoPhase_16(bool value)
	{
		___flushDemoPhase_16 = value;
	}

	inline static int32_t get_offset_of_demoPlayTime_17() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___demoPlayTime_17)); }
	inline float get_demoPlayTime_17() const { return ___demoPlayTime_17; }
	inline float* get_address_of_demoPlayTime_17() { return &___demoPlayTime_17; }
	inline void set_demoPlayTime_17(float value)
	{
		___demoPlayTime_17 = value;
	}

	inline static int32_t get_offset_of_fingerMoveStep_18() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___fingerMoveStep_18)); }
	inline int32_t get_fingerMoveStep_18() const { return ___fingerMoveStep_18; }
	inline int32_t* get_address_of_fingerMoveStep_18() { return &___fingerMoveStep_18; }
	inline void set_fingerMoveStep_18(int32_t value)
	{
		___fingerMoveStep_18 = value;
	}

	inline static int32_t get_offset_of_stepMoveDistance_19() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378, ___stepMoveDistance_19)); }
	inline float get_stepMoveDistance_19() const { return ___stepMoveDistance_19; }
	inline float* get_address_of_stepMoveDistance_19() { return &___stepMoveDistance_19; }
	inline void set_stepMoveDistance_19(float value)
	{
		___stepMoveDistance_19 = value;
	}
};

struct HelpBoard_t3253268378_StaticFields
{
public:
	// System.Single HelpBoard::FINGER_MOVE_RATE
	float ___FINGER_MOVE_RATE_2;

public:
	inline static int32_t get_offset_of_FINGER_MOVE_RATE_2() { return static_cast<int32_t>(offsetof(HelpBoard_t3253268378_StaticFields, ___FINGER_MOVE_RATE_2)); }
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
#endif // HELPBOARD_T3253268378_H
#ifndef FLICKEREFFECT_T3834085397_H
#define FLICKEREFFECT_T3834085397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlickerEffect
struct  FlickerEffect_t3834085397  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color FlickerEffect::originalColor
	Color_t2555686324  ___originalColor_2;

public:
	inline static int32_t get_offset_of_originalColor_2() { return static_cast<int32_t>(offsetof(FlickerEffect_t3834085397, ___originalColor_2)); }
	inline Color_t2555686324  get_originalColor_2() const { return ___originalColor_2; }
	inline Color_t2555686324 * get_address_of_originalColor_2() { return &___originalColor_2; }
	inline void set_originalColor_2(Color_t2555686324  value)
	{
		___originalColor_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLICKEREFFECT_T3834085397_H
#ifndef CUSTOMLABEL_T26837091_H
#define CUSTOMLABEL_T26837091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomLabel
struct  CustomLabel_t26837091  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.TextMesh CustomLabel::label
	TextMesh_t1536577757 * ___label_2;

public:
	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(CustomLabel_t26837091, ___label_2)); }
	inline TextMesh_t1536577757 * get_label_2() const { return ___label_2; }
	inline TextMesh_t1536577757 ** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(TextMesh_t1536577757 * value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier((&___label_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMLABEL_T26837091_H
#ifndef SCHEDULER_T163813952_H
#define SCHEDULER_T163813952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scheduler
struct  Scheduler_t163813952  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Scheduler_t163813952_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> Scheduler::schedules
	Dictionary_2_t1049633776 * ___schedules_2;

public:
	inline static int32_t get_offset_of_schedules_2() { return static_cast<int32_t>(offsetof(Scheduler_t163813952_StaticFields, ___schedules_2)); }
	inline Dictionary_2_t1049633776 * get_schedules_2() const { return ___schedules_2; }
	inline Dictionary_2_t1049633776 ** get_address_of_schedules_2() { return &___schedules_2; }
	inline void set_schedules_2(Dictionary_2_t1049633776 * value)
	{
		___schedules_2 = value;
		Il2CppCodeGenWriteBarrier((&___schedules_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T163813952_H
#ifndef RECORDBOARD_T3879866454_H
#define RECORDBOARD_T3879866454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RecordBoard
struct  RecordBoard_t3879866454  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIText RecordBoard::recordLabel
	GUIText_t402233326 * ___recordLabel_2;
	// UnityEngine.GUIText RecordBoard::recordName
	GUIText_t402233326 * ___recordName_3;
	// UnityEngine.GUIText RecordBoard::recordPointLabel
	GUIText_t402233326 * ___recordPointLabel_4;
	// UnityEngine.GUIText RecordBoard::recordPoint
	GUIText_t402233326 * ___recordPoint_5;
	// UnityEngine.GUIText RecordBoard::recordRankLabel
	GUIText_t402233326 * ___recordRankLabel_6;
	// UnityEngine.GUIText RecordBoard::recordRank
	GUIText_t402233326 * ___recordRank_7;
	// UnityEngine.GUIText RecordBoard::rankingLabel
	GUIText_t402233326 * ___rankingLabel_8;
	// UnityEngine.GUIText[] RecordBoard::rankingRanks
	GUITextU5BU5D_t3675624603* ___rankingRanks_9;
	// UnityEngine.GUIText[] RecordBoard::rankingNames
	GUITextU5BU5D_t3675624603* ___rankingNames_10;
	// UnityEngine.GUIText[] RecordBoard::rankingPoints
	GUITextU5BU5D_t3675624603* ___rankingPoints_11;
	// UnityEngine.GUIText RecordBoard::rankingText
	GUIText_t402233326 * ___rankingText_12;

public:
	inline static int32_t get_offset_of_recordLabel_2() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordLabel_2)); }
	inline GUIText_t402233326 * get_recordLabel_2() const { return ___recordLabel_2; }
	inline GUIText_t402233326 ** get_address_of_recordLabel_2() { return &___recordLabel_2; }
	inline void set_recordLabel_2(GUIText_t402233326 * value)
	{
		___recordLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___recordLabel_2), value);
	}

	inline static int32_t get_offset_of_recordName_3() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordName_3)); }
	inline GUIText_t402233326 * get_recordName_3() const { return ___recordName_3; }
	inline GUIText_t402233326 ** get_address_of_recordName_3() { return &___recordName_3; }
	inline void set_recordName_3(GUIText_t402233326 * value)
	{
		___recordName_3 = value;
		Il2CppCodeGenWriteBarrier((&___recordName_3), value);
	}

	inline static int32_t get_offset_of_recordPointLabel_4() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordPointLabel_4)); }
	inline GUIText_t402233326 * get_recordPointLabel_4() const { return ___recordPointLabel_4; }
	inline GUIText_t402233326 ** get_address_of_recordPointLabel_4() { return &___recordPointLabel_4; }
	inline void set_recordPointLabel_4(GUIText_t402233326 * value)
	{
		___recordPointLabel_4 = value;
		Il2CppCodeGenWriteBarrier((&___recordPointLabel_4), value);
	}

	inline static int32_t get_offset_of_recordPoint_5() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordPoint_5)); }
	inline GUIText_t402233326 * get_recordPoint_5() const { return ___recordPoint_5; }
	inline GUIText_t402233326 ** get_address_of_recordPoint_5() { return &___recordPoint_5; }
	inline void set_recordPoint_5(GUIText_t402233326 * value)
	{
		___recordPoint_5 = value;
		Il2CppCodeGenWriteBarrier((&___recordPoint_5), value);
	}

	inline static int32_t get_offset_of_recordRankLabel_6() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordRankLabel_6)); }
	inline GUIText_t402233326 * get_recordRankLabel_6() const { return ___recordRankLabel_6; }
	inline GUIText_t402233326 ** get_address_of_recordRankLabel_6() { return &___recordRankLabel_6; }
	inline void set_recordRankLabel_6(GUIText_t402233326 * value)
	{
		___recordRankLabel_6 = value;
		Il2CppCodeGenWriteBarrier((&___recordRankLabel_6), value);
	}

	inline static int32_t get_offset_of_recordRank_7() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___recordRank_7)); }
	inline GUIText_t402233326 * get_recordRank_7() const { return ___recordRank_7; }
	inline GUIText_t402233326 ** get_address_of_recordRank_7() { return &___recordRank_7; }
	inline void set_recordRank_7(GUIText_t402233326 * value)
	{
		___recordRank_7 = value;
		Il2CppCodeGenWriteBarrier((&___recordRank_7), value);
	}

	inline static int32_t get_offset_of_rankingLabel_8() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___rankingLabel_8)); }
	inline GUIText_t402233326 * get_rankingLabel_8() const { return ___rankingLabel_8; }
	inline GUIText_t402233326 ** get_address_of_rankingLabel_8() { return &___rankingLabel_8; }
	inline void set_rankingLabel_8(GUIText_t402233326 * value)
	{
		___rankingLabel_8 = value;
		Il2CppCodeGenWriteBarrier((&___rankingLabel_8), value);
	}

	inline static int32_t get_offset_of_rankingRanks_9() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___rankingRanks_9)); }
	inline GUITextU5BU5D_t3675624603* get_rankingRanks_9() const { return ___rankingRanks_9; }
	inline GUITextU5BU5D_t3675624603** get_address_of_rankingRanks_9() { return &___rankingRanks_9; }
	inline void set_rankingRanks_9(GUITextU5BU5D_t3675624603* value)
	{
		___rankingRanks_9 = value;
		Il2CppCodeGenWriteBarrier((&___rankingRanks_9), value);
	}

	inline static int32_t get_offset_of_rankingNames_10() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___rankingNames_10)); }
	inline GUITextU5BU5D_t3675624603* get_rankingNames_10() const { return ___rankingNames_10; }
	inline GUITextU5BU5D_t3675624603** get_address_of_rankingNames_10() { return &___rankingNames_10; }
	inline void set_rankingNames_10(GUITextU5BU5D_t3675624603* value)
	{
		___rankingNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___rankingNames_10), value);
	}

	inline static int32_t get_offset_of_rankingPoints_11() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___rankingPoints_11)); }
	inline GUITextU5BU5D_t3675624603* get_rankingPoints_11() const { return ___rankingPoints_11; }
	inline GUITextU5BU5D_t3675624603** get_address_of_rankingPoints_11() { return &___rankingPoints_11; }
	inline void set_rankingPoints_11(GUITextU5BU5D_t3675624603* value)
	{
		___rankingPoints_11 = value;
		Il2CppCodeGenWriteBarrier((&___rankingPoints_11), value);
	}

	inline static int32_t get_offset_of_rankingText_12() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454, ___rankingText_12)); }
	inline GUIText_t402233326 * get_rankingText_12() const { return ___rankingText_12; }
	inline GUIText_t402233326 ** get_address_of_rankingText_12() { return &___rankingText_12; }
	inline void set_rankingText_12(GUIText_t402233326 * value)
	{
		___rankingText_12 = value;
		Il2CppCodeGenWriteBarrier((&___rankingText_12), value);
	}
};

struct RecordBoard_t3879866454_StaticFields
{
public:
	// System.Int32 RecordBoard::rankingNum
	int32_t ___rankingNum_13;

public:
	inline static int32_t get_offset_of_rankingNum_13() { return static_cast<int32_t>(offsetof(RecordBoard_t3879866454_StaticFields, ___rankingNum_13)); }
	inline int32_t get_rankingNum_13() const { return ___rankingNum_13; }
	inline int32_t* get_address_of_rankingNum_13() { return &___rankingNum_13; }
	inline void set_rankingNum_13(int32_t value)
	{
		___rankingNum_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDBOARD_T3879866454_H
#ifndef PAUSEDIALOG_T2177282219_H
#define PAUSEDIALOG_T2177282219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseDialog
struct  PauseDialog_t2177282219  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIText PauseDialog::descriptionLabel
	GUIText_t402233326 * ___descriptionLabel_2;
	// UnityEngine.GUIText PauseDialog::okButtonLabel
	GUIText_t402233326 * ___okButtonLabel_3;
	// UnityEngine.GUIText PauseDialog::cancelButtonLabel
	GUIText_t402233326 * ___cancelButtonLabel_4;

public:
	inline static int32_t get_offset_of_descriptionLabel_2() { return static_cast<int32_t>(offsetof(PauseDialog_t2177282219, ___descriptionLabel_2)); }
	inline GUIText_t402233326 * get_descriptionLabel_2() const { return ___descriptionLabel_2; }
	inline GUIText_t402233326 ** get_address_of_descriptionLabel_2() { return &___descriptionLabel_2; }
	inline void set_descriptionLabel_2(GUIText_t402233326 * value)
	{
		___descriptionLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___descriptionLabel_2), value);
	}

	inline static int32_t get_offset_of_okButtonLabel_3() { return static_cast<int32_t>(offsetof(PauseDialog_t2177282219, ___okButtonLabel_3)); }
	inline GUIText_t402233326 * get_okButtonLabel_3() const { return ___okButtonLabel_3; }
	inline GUIText_t402233326 ** get_address_of_okButtonLabel_3() { return &___okButtonLabel_3; }
	inline void set_okButtonLabel_3(GUIText_t402233326 * value)
	{
		___okButtonLabel_3 = value;
		Il2CppCodeGenWriteBarrier((&___okButtonLabel_3), value);
	}

	inline static int32_t get_offset_of_cancelButtonLabel_4() { return static_cast<int32_t>(offsetof(PauseDialog_t2177282219, ___cancelButtonLabel_4)); }
	inline GUIText_t402233326 * get_cancelButtonLabel_4() const { return ___cancelButtonLabel_4; }
	inline GUIText_t402233326 ** get_address_of_cancelButtonLabel_4() { return &___cancelButtonLabel_4; }
	inline void set_cancelButtonLabel_4(GUIText_t402233326 * value)
	{
		___cancelButtonLabel_4 = value;
		Il2CppCodeGenWriteBarrier((&___cancelButtonLabel_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEDIALOG_T2177282219_H
#ifndef TIMER_T4185932343_H
#define TIMER_T4185932343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t4185932343  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Timer_t4185932343_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> Timer::timers
	Dictionary_2_t1182523073 * ___timers_2;

public:
	inline static int32_t get_offset_of_timers_2() { return static_cast<int32_t>(offsetof(Timer_t4185932343_StaticFields, ___timers_2)); }
	inline Dictionary_2_t1182523073 * get_timers_2() const { return ___timers_2; }
	inline Dictionary_2_t1182523073 ** get_address_of_timers_2() { return &___timers_2; }
	inline void set_timers_2(Dictionary_2_t1182523073 * value)
	{
		___timers_2 = value;
		Il2CppCodeGenWriteBarrier((&___timers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H
#ifndef LOGGER_T1011404590_H
#define LOGGER_T1011404590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Logger
struct  Logger_t1011404590  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Logger_t1011404590_StaticFields
{
public:
	// Logger/LogLevel Logger::outputLevel
	int32_t ___outputLevel_2;

public:
	inline static int32_t get_offset_of_outputLevel_2() { return static_cast<int32_t>(offsetof(Logger_t1011404590_StaticFields, ___outputLevel_2)); }
	inline int32_t get_outputLevel_2() const { return ___outputLevel_2; }
	inline int32_t* get_address_of_outputLevel_2() { return &___outputLevel_2; }
	inline void set_outputLevel_2(int32_t value)
	{
		___outputLevel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1011404590_H
#ifndef TOUCHHANDLER_T3441426771_H
#define TOUCHHANDLER_T3441426771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchHandler
struct  TouchHandler_t3441426771  : public MonoBehaviour_t3962482529
{
public:
	// StageManager TouchHandler::stageManager
	StageManager_t3296066545 * ___stageManager_2;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchDownListeners
	List_1_t2235366681 * ___panelTouchDownListeners_3;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchingListeners
	List_1_t2235366681 * ___panelTouchingListeners_4;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchUpListeners
	List_1_t2235366681 * ___panelTouchUpListeners_5;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchDownListeners
	List_1_t3815006096 * ___touchDownListeners_6;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchingListeners
	List_1_t3815006096 * ___touchingListeners_7;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchUpListeners
	List_1_t3815006096 * ___touchUpListeners_8;
	// System.Boolean TouchHandler::isTouching
	bool ___isTouching_9;
	// System.Boolean TouchHandler::isFirstTouch
	bool ___isFirstTouch_10;
	// UnityEngine.Vector3 TouchHandler::touchOrigin
	Vector3_t3722313464  ___touchOrigin_11;
	// UnityEngine.Vector3 TouchHandler::touchOriginViewport
	Vector3_t3722313464  ___touchOriginViewport_12;

public:
	inline static int32_t get_offset_of_stageManager_2() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___stageManager_2)); }
	inline StageManager_t3296066545 * get_stageManager_2() const { return ___stageManager_2; }
	inline StageManager_t3296066545 ** get_address_of_stageManager_2() { return &___stageManager_2; }
	inline void set_stageManager_2(StageManager_t3296066545 * value)
	{
		___stageManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___stageManager_2), value);
	}

	inline static int32_t get_offset_of_panelTouchDownListeners_3() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___panelTouchDownListeners_3)); }
	inline List_1_t2235366681 * get_panelTouchDownListeners_3() const { return ___panelTouchDownListeners_3; }
	inline List_1_t2235366681 ** get_address_of_panelTouchDownListeners_3() { return &___panelTouchDownListeners_3; }
	inline void set_panelTouchDownListeners_3(List_1_t2235366681 * value)
	{
		___panelTouchDownListeners_3 = value;
		Il2CppCodeGenWriteBarrier((&___panelTouchDownListeners_3), value);
	}

	inline static int32_t get_offset_of_panelTouchingListeners_4() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___panelTouchingListeners_4)); }
	inline List_1_t2235366681 * get_panelTouchingListeners_4() const { return ___panelTouchingListeners_4; }
	inline List_1_t2235366681 ** get_address_of_panelTouchingListeners_4() { return &___panelTouchingListeners_4; }
	inline void set_panelTouchingListeners_4(List_1_t2235366681 * value)
	{
		___panelTouchingListeners_4 = value;
		Il2CppCodeGenWriteBarrier((&___panelTouchingListeners_4), value);
	}

	inline static int32_t get_offset_of_panelTouchUpListeners_5() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___panelTouchUpListeners_5)); }
	inline List_1_t2235366681 * get_panelTouchUpListeners_5() const { return ___panelTouchUpListeners_5; }
	inline List_1_t2235366681 ** get_address_of_panelTouchUpListeners_5() { return &___panelTouchUpListeners_5; }
	inline void set_panelTouchUpListeners_5(List_1_t2235366681 * value)
	{
		___panelTouchUpListeners_5 = value;
		Il2CppCodeGenWriteBarrier((&___panelTouchUpListeners_5), value);
	}

	inline static int32_t get_offset_of_touchDownListeners_6() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touchDownListeners_6)); }
	inline List_1_t3815006096 * get_touchDownListeners_6() const { return ___touchDownListeners_6; }
	inline List_1_t3815006096 ** get_address_of_touchDownListeners_6() { return &___touchDownListeners_6; }
	inline void set_touchDownListeners_6(List_1_t3815006096 * value)
	{
		___touchDownListeners_6 = value;
		Il2CppCodeGenWriteBarrier((&___touchDownListeners_6), value);
	}

	inline static int32_t get_offset_of_touchingListeners_7() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touchingListeners_7)); }
	inline List_1_t3815006096 * get_touchingListeners_7() const { return ___touchingListeners_7; }
	inline List_1_t3815006096 ** get_address_of_touchingListeners_7() { return &___touchingListeners_7; }
	inline void set_touchingListeners_7(List_1_t3815006096 * value)
	{
		___touchingListeners_7 = value;
		Il2CppCodeGenWriteBarrier((&___touchingListeners_7), value);
	}

	inline static int32_t get_offset_of_touchUpListeners_8() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touchUpListeners_8)); }
	inline List_1_t3815006096 * get_touchUpListeners_8() const { return ___touchUpListeners_8; }
	inline List_1_t3815006096 ** get_address_of_touchUpListeners_8() { return &___touchUpListeners_8; }
	inline void set_touchUpListeners_8(List_1_t3815006096 * value)
	{
		___touchUpListeners_8 = value;
		Il2CppCodeGenWriteBarrier((&___touchUpListeners_8), value);
	}

	inline static int32_t get_offset_of_isTouching_9() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___isTouching_9)); }
	inline bool get_isTouching_9() const { return ___isTouching_9; }
	inline bool* get_address_of_isTouching_9() { return &___isTouching_9; }
	inline void set_isTouching_9(bool value)
	{
		___isTouching_9 = value;
	}

	inline static int32_t get_offset_of_isFirstTouch_10() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___isFirstTouch_10)); }
	inline bool get_isFirstTouch_10() const { return ___isFirstTouch_10; }
	inline bool* get_address_of_isFirstTouch_10() { return &___isFirstTouch_10; }
	inline void set_isFirstTouch_10(bool value)
	{
		___isFirstTouch_10 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_11() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touchOrigin_11)); }
	inline Vector3_t3722313464  get_touchOrigin_11() const { return ___touchOrigin_11; }
	inline Vector3_t3722313464 * get_address_of_touchOrigin_11() { return &___touchOrigin_11; }
	inline void set_touchOrigin_11(Vector3_t3722313464  value)
	{
		___touchOrigin_11 = value;
	}

	inline static int32_t get_offset_of_touchOriginViewport_12() { return static_cast<int32_t>(offsetof(TouchHandler_t3441426771, ___touchOriginViewport_12)); }
	inline Vector3_t3722313464  get_touchOriginViewport_12() const { return ___touchOriginViewport_12; }
	inline Vector3_t3722313464 * get_address_of_touchOriginViewport_12() { return &___touchOriginViewport_12; }
	inline void set_touchOriginViewport_12(Vector3_t3722313464  value)
	{
		___touchOriginViewport_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHHANDLER_T3441426771_H
#ifndef HELPBOARD2_T3256545178_H
#define HELPBOARD2_T3256545178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard2
struct  HelpBoard2_t3256545178  : public HelpBoard_t3253268378
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPBOARD2_T3256545178_H
#ifndef HELPBOARD1_T3256479642_H
#define HELPBOARD1_T3256479642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard1
struct  HelpBoard1_t3256479642  : public HelpBoard_t3253268378
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPBOARD1_T3256479642_H
#ifndef HELPBOARD3_T3256610714_H
#define HELPBOARD3_T3256610714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBoard3
struct  HelpBoard3_t3256610714  : public HelpBoard_t3253268378
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPBOARD3_T3256610714_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (StageInfo_t2857013238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1600[8] = 
{
	StageInfo_t2857013238::get_offset_of_level_0(),
	StageInfo_t2857013238::get_offset_of_stageNo_1(),
	StageInfo_t2857013238::get_offset_of_panelColNum_2(),
	StageInfo_t2857013238::get_offset_of_panelRowNum_3(),
	StageInfo_t2857013238::get_offset_of_limitTime_4(),
	StageInfo_t2857013238::get_offset_of_reverse_5(),
	StageInfo_t2857013238::get_offset_of_skipN_6(),
	StageInfo_t2857013238::get_offset_of_stepInfos_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (StateManager_t1628729484), -1, sizeof(StateManager_t1628729484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1601[3] = 
{
	StateManager_t1628729484_StaticFields::get_offset_of_state_0(),
	StateManager_t1628729484_StaticFields::get_offset_of_pause_1(),
	StateManager_t1628729484_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (State_t1211379539)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1602[21] = 
{
	State_t1211379539::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (TouchHandler_t3441426771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1603[11] = 
{
	TouchHandler_t3441426771::get_offset_of_stageManager_2(),
	TouchHandler_t3441426771::get_offset_of_panelTouchDownListeners_3(),
	TouchHandler_t3441426771::get_offset_of_panelTouchingListeners_4(),
	TouchHandler_t3441426771::get_offset_of_panelTouchUpListeners_5(),
	TouchHandler_t3441426771::get_offset_of_touchDownListeners_6(),
	TouchHandler_t3441426771::get_offset_of_touchingListeners_7(),
	TouchHandler_t3441426771::get_offset_of_touchUpListeners_8(),
	TouchHandler_t3441426771::get_offset_of_isTouching_9(),
	TouchHandler_t3441426771::get_offset_of_isFirstTouch_10(),
	TouchHandler_t3441426771::get_offset_of_touchOrigin_11(),
	TouchHandler_t3441426771::get_offset_of_touchOriginViewport_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (Panel_t2602547000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1604[7] = 
{
	Panel_t2602547000::get_offset_of_indexX_0(),
	Panel_t2602547000::get_offset_of_indexY_1(),
	Panel_t2602547000::get_offset_of_leftX_2(),
	Panel_t2602547000::get_offset_of_bottomY_3(),
	Panel_t2602547000::get_offset_of_width_4(),
	Panel_t2602547000::get_offset_of_height_5(),
	Panel_t2602547000::get_offset_of_panelOjcect_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (PanelTouchInfo_t3501340097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1605[1] = 
{
	PanelTouchInfo_t3501340097::get_offset_of_touchPanel_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (TouchInfo_t144578985), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1606[6] = 
{
	TouchInfo_t144578985::get_offset_of_touchScreenPoint_0(),
	TouchInfo_t144578985::get_offset_of_touchViewportPoint_1(),
	TouchInfo_t144578985::get_offset_of_originScreenPoint_2(),
	TouchInfo_t144578985::get_offset_of_originViewportPoint_3(),
	TouchInfo_t144578985::get_offset_of_deltaTime_4(),
	TouchInfo_t144578985::get_offset_of_isFirstTouch_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (CustomLabel_t26837091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1609[1] = 
{
	CustomLabel_t26837091::get_offset_of_label_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (FlickerEffect_t3834085397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1610[1] = 
{
	FlickerEffect_t3834085397::get_offset_of_originalColor_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (HelpBoard_t3253268378), -1, sizeof(HelpBoard_t3253268378_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1611[18] = 
{
	HelpBoard_t3253268378_StaticFields::get_offset_of_FINGER_MOVE_RATE_2(),
	HelpBoard_t3253268378::get_offset_of_panels_3(),
	HelpBoard_t3253268378::get_offset_of_stageInfo_4(),
	HelpBoard_t3253268378::get_offset_of_pathInfos_5(),
	HelpBoard_t3253268378::get_offset_of_fingerObj_6(),
	HelpBoard_t3253268378::get_offset_of_screenManager_7(),
	HelpBoard_t3253268378::get_offset_of_propertyManager_8(),
	HelpBoard_t3253268378::get_offset_of_panelPrefab_9(),
	HelpBoard_t3253268378::get_offset_of_fingerPrefab_10(),
	HelpBoard_t3253268378::get_offset_of_trailEffectPrefab_11(),
	HelpBoard_t3253268378::get_offset_of_customDialogPrefab_12(),
	HelpBoard_t3253268378::get_offset_of_customLabelPrefab_13(),
	HelpBoard_t3253268378::get_offset_of_description_14(),
	HelpBoard_t3253268378::get_offset_of_basePos_15(),
	HelpBoard_t3253268378::get_offset_of_flushDemoPhase_16(),
	HelpBoard_t3253268378::get_offset_of_demoPlayTime_17(),
	HelpBoard_t3253268378::get_offset_of_fingerMoveStep_18(),
	HelpBoard_t3253268378::get_offset_of_stepMoveDistance_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (U3CUpdateU3Ec__AnonStorey0_t2542300663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1612[2] = 
{
	U3CUpdateU3Ec__AnonStorey0_t2542300663::get_offset_of_step_0(),
	U3CUpdateU3Ec__AnonStorey0_t2542300663::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (PathInfo_t114561017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1613[4] = 
{
	PathInfo_t114561017::get_offset_of_Origin_0(),
	PathInfo_t114561017::get_offset_of_Destination_1(),
	PathInfo_t114561017::get_offset_of_Direction_2(),
	PathInfo_t114561017::get_offset_of_Distance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (HelpBoard1_t3256479642), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { sizeof (HelpBoard2_t3256545178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { sizeof (HelpBoard3_t3256610714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { sizeof (PanelColor_t3669076827), -1, sizeof(PanelColor_t3669076827_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1617[6] = 
{
	PanelColor_t3669076827_StaticFields::get_offset_of_COLOR_PROPERTY_TYPE_2(),
	PanelColor_t3669076827::get_offset_of_timerKeyPanelColor_3(),
	PanelColor_t3669076827::get_offset_of_timerKeyPanelFlick_4(),
	PanelColor_t3669076827::get_offset_of_originalColor_5(),
	PanelColor_t3669076827::get_offset_of_flickColor_6(),
	PanelColor_t3669076827::get_offset_of_flickPace_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { sizeof (FlushInfo_t3200436075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1618[2] = 
{
	FlushInfo_t3200436075::get_offset_of_flushColor_0(),
	FlushInfo_t3200436075::get_offset_of_flushTime_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { sizeof (FlickInfo_t3771679202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1619[3] = 
{
	FlickInfo_t3771679202::get_offset_of_flickColor_0(),
	FlickInfo_t3771679202::get_offset_of_flickPace_1(),
	FlickInfo_t3771679202::get_offset_of_flickTime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { sizeof (PauseDialog_t2177282219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1620[3] = 
{
	PauseDialog_t2177282219::get_offset_of_descriptionLabel_2(),
	PauseDialog_t2177282219::get_offset_of_okButtonLabel_3(),
	PauseDialog_t2177282219::get_offset_of_cancelButtonLabel_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { sizeof (RecordBoard_t3879866454), -1, sizeof(RecordBoard_t3879866454_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1621[12] = 
{
	RecordBoard_t3879866454::get_offset_of_recordLabel_2(),
	RecordBoard_t3879866454::get_offset_of_recordName_3(),
	RecordBoard_t3879866454::get_offset_of_recordPointLabel_4(),
	RecordBoard_t3879866454::get_offset_of_recordPoint_5(),
	RecordBoard_t3879866454::get_offset_of_recordRankLabel_6(),
	RecordBoard_t3879866454::get_offset_of_recordRank_7(),
	RecordBoard_t3879866454::get_offset_of_rankingLabel_8(),
	RecordBoard_t3879866454::get_offset_of_rankingRanks_9(),
	RecordBoard_t3879866454::get_offset_of_rankingNames_10(),
	RecordBoard_t3879866454::get_offset_of_rankingPoints_11(),
	RecordBoard_t3879866454::get_offset_of_rankingText_12(),
	RecordBoard_t3879866454_StaticFields::get_offset_of_rankingNum_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { sizeof (RankingRecord_t220687443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1622[6] = 
{
	RankingRecord_t220687443::get_offset_of_reqCode_0(),
	RankingRecord_t220687443::get_offset_of_category_1(),
	RankingRecord_t220687443::get_offset_of_name_2(),
	RankingRecord_t220687443::get_offset_of_rank_3(),
	RankingRecord_t220687443::get_offset_of_point_4(),
	RankingRecord_t220687443::get_offset_of_createdAt_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { sizeof (SettingBoard_t1868391119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1623[2] = 
{
	SettingBoard_t1868391119::get_offset_of_nameLabel_2(),
	SettingBoard_t1868391119::get_offset_of_okButtonLabel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { sizeof (StageDialog_t2246124788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1624[8] = 
{
	StageDialog_t2246124788::get_offset_of_dialogBg_2(),
	StageDialog_t2246124788::get_offset_of_level_3(),
	StageDialog_t2246124788::get_offset_of_levelNo_4(),
	StageDialog_t2246124788::get_offset_of_stage_5(),
	StageDialog_t2246124788::get_offset_of_stageNo_6(),
	StageDialog_t2246124788::get_offset_of_description_7(),
	StageDialog_t2246124788::get_offset_of_levelInt_8(),
	StageDialog_t2246124788::get_offset_of_stageInt_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { sizeof (AudioManager_t3267510698), -1, sizeof(AudioManager_t3267510698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1625[2] = 
{
	AudioManager_t3267510698_StaticFields::get_offset_of_RESOURCE_AUDIO_ROOT_0(),
	AudioManager_t3267510698_StaticFields::get_offset_of_audioClips_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { sizeof (EncryptUtil_t3657054836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { sizeof (Logger_t1011404590), -1, sizeof(Logger_t1011404590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1627[1] = 
{
	Logger_t1011404590_StaticFields::get_offset_of_outputLevel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { sizeof (LogLevel_t2164114948)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1628[5] = 
{
	LogLevel_t2164114948::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { sizeof (Properties_t2672350415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1629[2] = 
{
	Properties_t2672350415::get_offset_of_locale_0(),
	Properties_t2672350415::get_offset_of_properties_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { sizeof (RandomUtil_t3302884052), -1, sizeof(RandomUtil_t3302884052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1630[3] = 
{
	RandomUtil_t3302884052_StaticFields::get_offset_of_random_0(),
	RandomUtil_t3302884052_StaticFields::get_offset_of_previousInt_1(),
	RandomUtil_t3302884052_StaticFields::get_offset_of_charSeeds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { sizeof (RangeUtil_t1606155416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { sizeof (Scheduler_t163813952), -1, sizeof(Scheduler_t163813952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1632[1] = 
{
	Scheduler_t163813952_StaticFields::get_offset_of_schedules_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { sizeof (SimpleLock_t2563344630), -1, sizeof(SimpleLock_t2563344630_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1633[1] = 
{
	SimpleLock_t2563344630_StaticFields::get_offset_of_locks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { sizeof (U3CLockU3Ec__AnonStorey0_t2261534691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1634[2] = 
{
	U3CLockU3Ec__AnonStorey0_t2261534691::get_offset_of_action_0(),
	U3CLockU3Ec__AnonStorey0_t2261534691::get_offset_of_key_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { sizeof (U3CLockU3Ec__AnonStorey1_t695450750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1635[1] = 
{
	U3CLockU3Ec__AnonStorey1_t695450750::get_offset_of_key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { sizeof (Timer_t4185932343), -1, sizeof(Timer_t4185932343_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1636[1] = 
{
	Timer_t4185932343_StaticFields::get_offset_of_timers_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
