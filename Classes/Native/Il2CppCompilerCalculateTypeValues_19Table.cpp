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


// System.Action
struct Action_t1264377477;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t1049633776;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t1182523073;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3466145964;
// System.Random
struct Random_t108471755;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.GUIText
struct GUIText_t402233326;
// UnityEngine.GUITexture
struct GUITexture_t951903601;




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
	int32_t ___outputLevel_4;

public:
	inline static int32_t get_offset_of_outputLevel_4() { return static_cast<int32_t>(offsetof(Logger_t1011404590_StaticFields, ___outputLevel_4)); }
	inline int32_t get_outputLevel_4() const { return ___outputLevel_4; }
	inline int32_t* get_address_of_outputLevel_4() { return &___outputLevel_4; }
	inline void set_outputLevel_4(int32_t value)
	{
		___outputLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1011404590_H
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
	Dictionary_2_t1049633776 * ___schedules_4;

public:
	inline static int32_t get_offset_of_schedules_4() { return static_cast<int32_t>(offsetof(Scheduler_t163813952_StaticFields, ___schedules_4)); }
	inline Dictionary_2_t1049633776 * get_schedules_4() const { return ___schedules_4; }
	inline Dictionary_2_t1049633776 ** get_address_of_schedules_4() { return &___schedules_4; }
	inline void set_schedules_4(Dictionary_2_t1049633776 * value)
	{
		___schedules_4 = value;
		Il2CppCodeGenWriteBarrier((&___schedules_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T163813952_H
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
	GUITexture_t951903601 * ___dialogBg_4;
	// UnityEngine.GUIText StageDialog::level
	GUIText_t402233326 * ___level_5;
	// UnityEngine.GUIText StageDialog::levelNo
	GUIText_t402233326 * ___levelNo_6;
	// UnityEngine.GUIText StageDialog::stage
	GUIText_t402233326 * ___stage_7;
	// UnityEngine.GUIText StageDialog::stageNo
	GUIText_t402233326 * ___stageNo_8;
	// UnityEngine.GUIText StageDialog::description
	GUIText_t402233326 * ___description_9;
	// System.Int32 StageDialog::levelInt
	int32_t ___levelInt_10;
	// System.Int32 StageDialog::stageInt
	int32_t ___stageInt_11;

public:
	inline static int32_t get_offset_of_dialogBg_4() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___dialogBg_4)); }
	inline GUITexture_t951903601 * get_dialogBg_4() const { return ___dialogBg_4; }
	inline GUITexture_t951903601 ** get_address_of_dialogBg_4() { return &___dialogBg_4; }
	inline void set_dialogBg_4(GUITexture_t951903601 * value)
	{
		___dialogBg_4 = value;
		Il2CppCodeGenWriteBarrier((&___dialogBg_4), value);
	}

	inline static int32_t get_offset_of_level_5() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___level_5)); }
	inline GUIText_t402233326 * get_level_5() const { return ___level_5; }
	inline GUIText_t402233326 ** get_address_of_level_5() { return &___level_5; }
	inline void set_level_5(GUIText_t402233326 * value)
	{
		___level_5 = value;
		Il2CppCodeGenWriteBarrier((&___level_5), value);
	}

	inline static int32_t get_offset_of_levelNo_6() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___levelNo_6)); }
	inline GUIText_t402233326 * get_levelNo_6() const { return ___levelNo_6; }
	inline GUIText_t402233326 ** get_address_of_levelNo_6() { return &___levelNo_6; }
	inline void set_levelNo_6(GUIText_t402233326 * value)
	{
		___levelNo_6 = value;
		Il2CppCodeGenWriteBarrier((&___levelNo_6), value);
	}

	inline static int32_t get_offset_of_stage_7() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stage_7)); }
	inline GUIText_t402233326 * get_stage_7() const { return ___stage_7; }
	inline GUIText_t402233326 ** get_address_of_stage_7() { return &___stage_7; }
	inline void set_stage_7(GUIText_t402233326 * value)
	{
		___stage_7 = value;
		Il2CppCodeGenWriteBarrier((&___stage_7), value);
	}

	inline static int32_t get_offset_of_stageNo_8() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stageNo_8)); }
	inline GUIText_t402233326 * get_stageNo_8() const { return ___stageNo_8; }
	inline GUIText_t402233326 ** get_address_of_stageNo_8() { return &___stageNo_8; }
	inline void set_stageNo_8(GUIText_t402233326 * value)
	{
		___stageNo_8 = value;
		Il2CppCodeGenWriteBarrier((&___stageNo_8), value);
	}

	inline static int32_t get_offset_of_description_9() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___description_9)); }
	inline GUIText_t402233326 * get_description_9() const { return ___description_9; }
	inline GUIText_t402233326 ** get_address_of_description_9() { return &___description_9; }
	inline void set_description_9(GUIText_t402233326 * value)
	{
		___description_9 = value;
		Il2CppCodeGenWriteBarrier((&___description_9), value);
	}

	inline static int32_t get_offset_of_levelInt_10() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___levelInt_10)); }
	inline int32_t get_levelInt_10() const { return ___levelInt_10; }
	inline int32_t* get_address_of_levelInt_10() { return &___levelInt_10; }
	inline void set_levelInt_10(int32_t value)
	{
		___levelInt_10 = value;
	}

	inline static int32_t get_offset_of_stageInt_11() { return static_cast<int32_t>(offsetof(StageDialog_t2246124788, ___stageInt_11)); }
	inline int32_t get_stageInt_11() const { return ___stageInt_11; }
	inline int32_t* get_address_of_stageInt_11() { return &___stageInt_11; }
	inline void set_stageInt_11(int32_t value)
	{
		___stageInt_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEDIALOG_T2246124788_H
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
	Dictionary_2_t1182523073 * ___timers_4;

public:
	inline static int32_t get_offset_of_timers_4() { return static_cast<int32_t>(offsetof(Timer_t4185932343_StaticFields, ___timers_4)); }
	inline Dictionary_2_t1182523073 * get_timers_4() const { return ___timers_4; }
	inline Dictionary_2_t1182523073 ** get_address_of_timers_4() { return &___timers_4; }
	inline void set_timers_4(Dictionary_2_t1182523073 * value)
	{
		___timers_4 = value;
		Il2CppCodeGenWriteBarrier((&___timers_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T4185932343_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (StageDialog_t2246124788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[8] = 
{
	StageDialog_t2246124788::get_offset_of_dialogBg_4(),
	StageDialog_t2246124788::get_offset_of_level_5(),
	StageDialog_t2246124788::get_offset_of_levelNo_6(),
	StageDialog_t2246124788::get_offset_of_stage_7(),
	StageDialog_t2246124788::get_offset_of_stageNo_8(),
	StageDialog_t2246124788::get_offset_of_description_9(),
	StageDialog_t2246124788::get_offset_of_levelInt_10(),
	StageDialog_t2246124788::get_offset_of_stageInt_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (AudioManager_t3267510698), -1, sizeof(AudioManager_t3267510698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[2] = 
{
	AudioManager_t3267510698_StaticFields::get_offset_of_RESOURCE_AUDIO_ROOT_0(),
	AudioManager_t3267510698_StaticFields::get_offset_of_audioClips_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (EncryptUtil_t3657054836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (Logger_t1011404590), -1, sizeof(Logger_t1011404590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	Logger_t1011404590_StaticFields::get_offset_of_outputLevel_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (LogLevel_t2164114948)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1904[5] = 
{
	LogLevel_t2164114948::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (Properties_t2672350415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[2] = 
{
	Properties_t2672350415::get_offset_of_locale_0(),
	Properties_t2672350415::get_offset_of_properties_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (RandomUtil_t3302884052), -1, sizeof(RandomUtil_t3302884052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1906[3] = 
{
	RandomUtil_t3302884052_StaticFields::get_offset_of_random_0(),
	RandomUtil_t3302884052_StaticFields::get_offset_of_previousInt_1(),
	RandomUtil_t3302884052_StaticFields::get_offset_of_charSeeds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (RangeUtil_t1606155416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (Scheduler_t163813952), -1, sizeof(Scheduler_t163813952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[1] = 
{
	Scheduler_t163813952_StaticFields::get_offset_of_schedules_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (SimpleLock_t2563344630), -1, sizeof(SimpleLock_t2563344630_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[1] = 
{
	SimpleLock_t2563344630_StaticFields::get_offset_of_locks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (U3CLockU3Ec__AnonStorey0_t2261534691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[2] = 
{
	U3CLockU3Ec__AnonStorey0_t2261534691::get_offset_of_action_0(),
	U3CLockU3Ec__AnonStorey0_t2261534691::get_offset_of_key_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (U3CLockU3Ec__AnonStorey1_t695450750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[1] = 
{
	U3CLockU3Ec__AnonStorey1_t695450750::get_offset_of_key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (Timer_t4185932343), -1, sizeof(Timer_t4185932343_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[1] = 
{
	Timer_t4185932343_StaticFields::get_offset_of_timers_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
