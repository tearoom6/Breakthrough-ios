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

// Scheduler
struct Scheduler_t1843257499;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Core_System_Action3771233898.h"

// System.Void Scheduler::.ctor()
extern "C"  void Scheduler__ctor_m2203104048 (Scheduler_t1843257499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scheduler::.cctor()
extern "C"  void Scheduler__cctor_m3389619837 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scheduler::Update()
extern "C"  void Scheduler_Update_m1303610845 (Scheduler_t1843257499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scheduler::AddSchedule(System.String,System.Single,System.Action)
extern "C"  void Scheduler_AddSchedule_m2777486520 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___time1, Action_t3771233898 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
