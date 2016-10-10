#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AudioManager
struct AudioManager_t3708191511;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"

// System.Void AudioManager::.ctor()
extern "C"  void AudioManager__ctor_m2029910372 (AudioManager_t3708191511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::.cctor()
extern "C"  void AudioManager__cctor_m2315583177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::Initialize(System.String)
extern "C"  void AudioManager_Initialize_m1791590738 (Il2CppObject * __this /* static, unused */, String_t* ___resourceAudioRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioManager::PlayOneShot(UnityEngine.AudioSource,System.String,System.Single)
extern "C"  void AudioManager_PlayOneShot_m2930667435 (Il2CppObject * __this /* static, unused */, AudioSource_t1740077639 * ___audioSource0, String_t* ___fileName1, float ___volume2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip AudioManager::LoadAudioClip(System.String)
extern "C"  AudioClip_t794140988 * AudioManager_LoadAudioClip_m2809950340 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
