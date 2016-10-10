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

// Timer
struct Timer_t80811813;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Timer::.ctor()
extern "C"  void Timer__ctor_m3859540966 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::.cctor()
extern "C"  void Timer__cctor_m3199556743 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::Update()
extern "C"  void Timer_Update_m1113547751 (Timer_t80811813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::IsTimeout(System.String)
extern "C"  bool Timer_IsTimeout_m1772804883 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Timer::IsAvailable(System.String)
extern "C"  bool Timer_IsAvailable_m2558013419 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::SetTimer(System.String,System.Single)
extern "C"  void Timer_SetTimer_m3654189158 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Timer::ClearAll()
extern "C"  void Timer_ClearAll_m209087794 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
