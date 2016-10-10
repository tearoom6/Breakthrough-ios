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

// StateManager
struct StateManager_t1172840956;
// System.Action
struct Action_t3771233898;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_String7231557.h"

// System.Void StateManager::.ctor()
extern "C"  void StateManager__ctor_m1455442975 (StateManager_t1172840956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::.cctor()
extern "C"  void StateManager__cctor_m1686963054 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Next()
extern "C"  void StateManager_Next_m3043261304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Next(System.Action)
extern "C"  void StateManager_Next_m2654809349 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___nextAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Next(System.Single,System.String)
extern "C"  void StateManager_Next_m3896015919 (Il2CppObject * __this /* static, unused */, float ___delay0, String_t* ___lockKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::AutoSweep()
extern "C"  void StateManager_AutoSweep_m2214403706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::InsertTutorial()
extern "C"  void StateManager_InsertTutorial_m3781784508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::ViewHelp()
extern "C"  void StateManager_ViewHelp_m1170143563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::ViewRecord()
extern "C"  void StateManager_ViewRecord_m3513410587 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::ViewInfo()
extern "C"  void StateManager_ViewInfo_m1206904696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::EditSetting()
extern "C"  void StateManager_EditSetting_m4111084451 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Fail()
extern "C"  void StateManager_Fail_m2810079459 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Complete()
extern "C"  void StateManager_Complete_m2820007486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::QuitConfirm()
extern "C"  void StateManager_QuitConfirm_m456651118 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Reset()
extern "C"  void StateManager_Reset_m3396843212 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::Pause()
extern "C"  void StateManager_Pause_m1509568947 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::QuitPausing()
extern "C"  void StateManager_QuitPausing_m2094651169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StateManager::IsPaused()
extern "C"  bool StateManager_IsPaused_m2268651249 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StateManager::IsWaitingTouch()
extern "C"  bool StateManager_IsWaitingTouch_m3924487221 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StateManager::<Next>m__B()
extern "C"  void StateManager_U3CNextU3Em__B_m3061839689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
