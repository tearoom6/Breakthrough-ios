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

// SimpleLock
struct SimpleLock_t561651229;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Core_System_Action3771233898.h"

// System.Void SimpleLock::.ctor()
extern "C"  void SimpleLock__ctor_m3408202526 (SimpleLock_t561651229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleLock::.cctor()
extern "C"  void SimpleLock__cctor_m2092966991 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleLock::Lock(System.String,System.Single,System.Action,System.Int32)
extern "C"  int32_t SimpleLock_Lock_m2108355288 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___delay1, Action_t3771233898 * ___action2, int32_t ___allowNum3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleLock::Lock(System.String,System.Action,System.Int32)
extern "C"  int32_t SimpleLock_Lock_m2128747421 (Il2CppObject * __this /* static, unused */, String_t* ___key0, Action_t3771233898 * ___action1, int32_t ___allowNum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleLock::SetLock(System.String,System.Int32)
extern "C"  int32_t SimpleLock_SetLock_m161854192 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___allowNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleLock::ReleaseLock(System.String)
extern "C"  int32_t SimpleLock_ReleaseLock_m806233090 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
