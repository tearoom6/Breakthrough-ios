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

// HelpBoard
struct HelpBoard_t3274420229;
// StageInfo
struct StageInfo_t3840543916;
// System.String
struct String_t;
// Panel
struct Panel_t76880356;
// StepInfo
struct StepInfo_t1492843962;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_StageInfo3840543916.h"

// System.Void HelpBoard::.ctor()
extern "C"  void HelpBoard__ctor_m1568971526 (HelpBoard_t3274420229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::.cctor()
extern "C"  void HelpBoard__cctor_m911380839 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::Start()
extern "C"  void HelpBoard_Start_m516109318 (HelpBoard_t3274420229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::Update()
extern "C"  void HelpBoard_Update_m3120339143 (HelpBoard_t3274420229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::LoadStageDialog(StageInfo)
extern "C"  void HelpBoard_LoadStageDialog_m785156610 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HelpBoard::GetClearRequirementDescription(StageInfo)
extern "C"  String_t* HelpBoard_GetClearRequirementDescription_m2085111035 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stageInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::LoadStagePanels(StageInfo)
extern "C"  void HelpBoard_LoadStagePanels_m3725758971 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stageInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Panel HelpBoard::CreatePanel(System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.Single)
extern "C"  Panel_t76880356 * HelpBoard_CreatePanel_m1792749082 (HelpBoard_t3274420229 * __this, int32_t ___panelColNum0, int32_t ___panelRowNum1, int32_t ___indexX2, int32_t ___indexY3, float ___widthMargin4, float ___bottomMargin5, float ___spaceMargin6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 HelpBoard::GetRealStepIndex(StageInfo,System.Int32)
extern "C"  int32_t HelpBoard_GetRealStepIndex_m667287027 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stage0, int32_t ___stepIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StepInfo HelpBoard::GetCurrentStep(StageInfo,System.Int32)
extern "C"  StepInfo_t1492843962 * HelpBoard_GetCurrentStep_m1000152091 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stage0, int32_t ___stepIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HelpBoard::IsStageCleared(StageInfo,System.Int32)
extern "C"  bool HelpBoard_IsStageCleared_m1601164083 (HelpBoard_t3274420229 * __this, StageInfo_t3840543916 * ___stage0, int32_t ___currentStepIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBoard::<Update>m__D()
extern "C"  void HelpBoard_U3CUpdateU3Em__D_m1764421998 (HelpBoard_t3274420229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
