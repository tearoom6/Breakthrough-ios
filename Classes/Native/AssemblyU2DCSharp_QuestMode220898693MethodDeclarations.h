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

// QuestMode
struct QuestMode_t220898693;
// System.Collections.Generic.List`1<StageInfo>
struct List_1_t913762172;
// System.String
struct String_t;
// StageInfo
struct StageInfo_t3840543916;

#include "codegen/il2cpp-codegen.h"

// System.Void QuestMode::.ctor()
extern "C"  void QuestMode__ctor_m3745633670 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestMode::.ctor(System.Int32)
extern "C"  void QuestMode__ctor_m4182602199 (QuestMode_t220898693 * __this, int32_t ___initStageNo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<StageInfo> QuestMode::GetQuestStageInfos()
extern "C"  List_1_t913762172 * QuestMode_GetQuestStageInfos_m2625439972 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String QuestMode::GetModeId()
extern "C"  String_t* QuestMode_GetModeId_m2886103835 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo QuestMode::GetCurrentStage()
extern "C"  StageInfo_t3840543916 * QuestMode_GetCurrentStage_m4083069510 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 QuestMode::GetCurrentStageIndex()
extern "C"  int32_t QuestMode_GetCurrentStageIndex_m3956286727 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo QuestMode::NextStage()
extern "C"  StageInfo_t3840543916 * QuestMode_NextStage_m1401588246 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void QuestMode::ResetStage()
extern "C"  void QuestMode_ResetStage_m2516880493 (QuestMode_t220898693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo QuestMode::GetStage(System.Int32)
extern "C"  StageInfo_t3840543916 * QuestMode_GetStage_m1998888400 (QuestMode_t220898693 * __this, int32_t ___stageIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
