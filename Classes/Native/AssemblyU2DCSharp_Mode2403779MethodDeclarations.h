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

// Mode
struct Mode_t2403779;
// System.Collections.Generic.List`1<StepInfo>
struct List_1_t2861029514;
// System.Collections.Generic.Dictionary`2<System.Single,System.Int32>
struct Dictionary_2_t236817907;

#include "codegen/il2cpp-codegen.h"

// System.Void Mode::.ctor()
extern "C"  void Mode__ctor_m2604574776 (Mode_t2403779 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<StepInfo> Mode::CreateStepInfos(System.Int32,System.Int32,System.Single,System.Single,System.Collections.Generic.Dictionary`2<System.Single,System.Int32>)
extern "C"  List_1_t2861029514 * Mode_CreateStepInfos_m2613115985 (Mode_t2403779 * __this, int32_t ___size0, int32_t ___panelNum1, float ___minFlush2, float ___maxFlush3, Dictionary_2_t236817907 * ___weightedIntervals4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
