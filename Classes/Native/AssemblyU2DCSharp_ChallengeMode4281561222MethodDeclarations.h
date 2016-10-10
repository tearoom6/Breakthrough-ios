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

// ChallengeMode
struct ChallengeMode_t4281561222;
// StageInfo
struct StageInfo_t3840543916;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void ChallengeMode::.ctor(System.Int32)
extern "C"  void ChallengeMode__ctor_m2262076790 (ChallengeMode_t4281561222 * __this, int32_t ___difficultLv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo ChallengeMode::createStageInfo()
extern "C"  StageInfo_t3840543916 * ChallengeMode_createStageInfo_m2237710522 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChallengeMode::GetModeId()
extern "C"  String_t* ChallengeMode_GetModeId_m880211002 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo ChallengeMode::GetCurrentStage()
extern "C"  StageInfo_t3840543916 * ChallengeMode_GetCurrentStage_m1922072101 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ChallengeMode::GetCurrentStageIndex()
extern "C"  int32_t ChallengeMode_GetCurrentStageIndex_m4001384456 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo ChallengeMode::NextStage()
extern "C"  StageInfo_t3840543916 * ChallengeMode_NextStage_m3749603637 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChallengeMode::ResetStage()
extern "C"  void ChallengeMode_ResetStage_m590984622 (ChallengeMode_t4281561222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
