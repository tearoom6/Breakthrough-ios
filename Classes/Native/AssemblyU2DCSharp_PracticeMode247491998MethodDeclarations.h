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

// PracticeMode
struct PracticeMode_t247491998;
// StageInfo
struct StageInfo_t3840543916;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void PracticeMode::.ctor(System.Int32,System.Int32)
extern "C"  void PracticeMode__ctor_m2480765705 (PracticeMode_t247491998 * __this, int32_t ___panelColNum0, int32_t ___panelRowNum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo PracticeMode::createStageInfo()
extern "C"  StageInfo_t3840543916 * PracticeMode_createStageInfo_m759564964 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PracticeMode::GetModeId()
extern "C"  String_t* PracticeMode_GetModeId_m386455084 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo PracticeMode::GetCurrentStage()
extern "C"  StageInfo_t3840543916 * PracticeMode_GetCurrentStage_m443926543 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PracticeMode::GetCurrentStageIndex()
extern "C"  int32_t PracticeMode_GetCurrentStageIndex_m513698380 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo PracticeMode::NextStage()
extern "C"  StageInfo_t3840543916 * PracticeMode_NextStage_m2280909471 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PracticeMode::ResetStage()
extern "C"  void PracticeMode_ResetStage_m302486934 (PracticeMode_t247491998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
