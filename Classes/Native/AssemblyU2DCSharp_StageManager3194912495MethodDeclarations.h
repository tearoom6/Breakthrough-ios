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

// StageManager
struct StageManager_t3194912495;
// System.String
struct String_t;
// StageInfo
struct StageInfo_t3840543916;
// Panel
struct Panel_t76880356;
// StepInfo
struct StepInfo_t1492843962;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_StageInfo3840543916.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Panel76880356.h"

// System.Void StageManager::.ctor()
extern "C"  void StageManager__ctor_m1532481676 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::Start()
extern "C"  void StageManager_Start_m479619468 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String StageManager::GetClearRequirementDescription(StageInfo)
extern "C"  String_t* StageManager_GetClearRequirementDescription_m3932026075 (StageManager_t3194912495 * __this, StageInfo_t3840543916 * ___stageInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::LoadCurrentStageDialog()
extern "C"  void StageManager_LoadCurrentStageDialog_m2638190827 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SlideStageDialog(System.Single)
extern "C"  void StageManager_SlideStageDialog_m1880873950 (StageManager_t3194912495 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SetStageDialogDescription(System.String)
extern "C"  void StageManager_SetStageDialogDescription_m3485988832 (StageManager_t3194912495 * __this, String_t* ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::DestroyStageDialog()
extern "C"  void StageManager_DestroyStageDialog_m2422397316 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::LoadCurrentStagePanels()
extern "C"  void StageManager_LoadCurrentStagePanels_m3932619986 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Panel StageManager::CreatePanel(System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.Single)
extern "C"  Panel_t76880356 * StageManager_CreatePanel_m1025267538 (StageManager_t3194912495 * __this, int32_t ___panelColNum0, int32_t ___panelRowNum1, int32_t ___indexX2, int32_t ___indexY3, float ___widthMargin4, float ___bottomMargin5, float ___spaceMargin6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ClearPanel(Panel)
extern "C"  void StageManager_ClearPanel_m1750531775 (StageManager_t3194912495 * __this, Panel_t76880356 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ClearAllPanels()
extern "C"  void StageManager_ClearAllPanels_m1721718235 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageManager::IsAllPanelsCleared()
extern "C"  bool StageManager_IsAllPanelsCleared_m2330122770 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::PlayCurrentStageDemo()
extern "C"  void StageManager_PlayCurrentStageDemo_m2484776468 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo StageManager::GetCurrentStage()
extern "C"  StageInfo_t3840543916 * StageManager_GetCurrentStage_m3380144926 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageManager::GetRealStepIndex(StageInfo,System.Int32)
extern "C"  int32_t StageManager_GetRealStepIndex_m583683465 (StageManager_t3194912495 * __this, StageInfo_t3840543916 * ___stage0, int32_t ___stepIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StepInfo StageManager::GetCurrentStep(System.Int32)
extern "C"  StepInfo_t1492843962 * StageManager_GetCurrentStep_m1282826939 (StageManager_t3194912495 * __this, int32_t ___stepIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Panel StageManager::GetStepGoalPanel(System.Int32)
extern "C"  Panel_t76880356 * StageManager_GetStepGoalPanel_m3037976903 (StageManager_t3194912495 * __this, int32_t ___stepIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageManager::IsStageCleared(System.Int32)
extern "C"  bool StageManager_IsStageCleared_m731461781 (StageManager_t3194912495 * __this, int32_t ___currentStepIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StageInfo StageManager::NextStage()
extern "C"  StageInfo_t3840543916 * StageManager_NextStage_m1956005102 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ResetStage()
extern "C"  void StageManager_ResetStage_m3115353383 (StageManager_t3194912495 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
