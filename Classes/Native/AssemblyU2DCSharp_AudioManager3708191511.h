#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t1614559358;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t3708191511  : public Il2CppObject
{
public:

public:
};

struct AudioManager_t3708191511_StaticFields
{
public:
	// System.String AudioManager::RESOURCE_AUDIO_ROOT
	String_t* ___RESOURCE_AUDIO_ROOT_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> AudioManager::audioClips
	Dictionary_2_t1614559358 * ___audioClips_1;

public:
	inline static int32_t get_offset_of_RESOURCE_AUDIO_ROOT_0() { return static_cast<int32_t>(offsetof(AudioManager_t3708191511_StaticFields, ___RESOURCE_AUDIO_ROOT_0)); }
	inline String_t* get_RESOURCE_AUDIO_ROOT_0() const { return ___RESOURCE_AUDIO_ROOT_0; }
	inline String_t** get_address_of_RESOURCE_AUDIO_ROOT_0() { return &___RESOURCE_AUDIO_ROOT_0; }
	inline void set_RESOURCE_AUDIO_ROOT_0(String_t* value)
	{
		___RESOURCE_AUDIO_ROOT_0 = value;
		Il2CppCodeGenWriteBarrier(&___RESOURCE_AUDIO_ROOT_0, value);
	}

	inline static int32_t get_offset_of_audioClips_1() { return static_cast<int32_t>(offsetof(AudioManager_t3708191511_StaticFields, ___audioClips_1)); }
	inline Dictionary_2_t1614559358 * get_audioClips_1() const { return ___audioClips_1; }
	inline Dictionary_2_t1614559358 ** get_address_of_audioClips_1() { return &___audioClips_1; }
	inline void set_audioClips_1(Dictionary_2_t1614559358 * value)
	{
		___audioClips_1 = value;
		Il2CppCodeGenWriteBarrier(&___audioClips_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
