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

// StepJudgeInfo
struct StepJudgeInfo_t611062489;
// Panel
struct Panel_t76880356;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Panel76880356.h"

// System.Void StepJudgeInfo::.ctor(Panel,Panel)
extern "C"  void StepJudgeInfo__ctor_m3005996388 (StepJudgeInfo_t611062489 * __this, Panel_t76880356 * ___startPanel0, Panel_t76880356 * ___goalPanel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StepJudgeInfo::JudgeTouchPattern(Panel,System.Boolean)
extern "C"  int32_t StepJudgeInfo_JudgeTouchPattern_m671771477 (StepJudgeInfo_t611062489 * __this, Panel_t76880356 * ___touchPanel0, bool ___isKeepingTouch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
