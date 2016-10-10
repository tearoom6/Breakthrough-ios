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

// TouchHandler
struct TouchHandler_t3514404651;
// Panel
struct Panel_t76880356;
// PanelTouchListener
struct PanelTouchListener_t1436066191;
// TouchListener
struct TouchListener_t2916452595;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void TouchHandler::.ctor()
extern "C"  void TouchHandler__ctor_m1559577552 (TouchHandler_t3514404651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::Start()
extern "C"  void TouchHandler_Start_m506715344 (TouchHandler_t3514404651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::Update()
extern "C"  void TouchHandler_Update_m2829125949 (TouchHandler_t3514404651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::OnTouchDown(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void TouchHandler_OnTouchDown_m2106641628 (TouchHandler_t3514404651 * __this, Vector3_t4282066566  ___worldPoint0, Vector3_t4282066566  ___viewportPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::OnTouching(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void TouchHandler_OnTouching_m2009801270 (TouchHandler_t3514404651 * __this, Vector3_t4282066566  ___worldPoint0, Vector3_t4282066566  ___viewportPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::OnTouchUp(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void TouchHandler_OnTouchUp_m3323736003 (TouchHandler_t3514404651 * __this, Vector3_t4282066566  ___worldPoint0, Vector3_t4282066566  ___viewportPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Panel TouchHandler::JudgeTouchedPanel(UnityEngine.Vector3)
extern "C"  Panel_t76880356 * TouchHandler_JudgeTouchedPanel_m1951666045 (TouchHandler_t3514404651 * __this, Vector3_t4282066566  ___viewportPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddPanelTouchDownListener(PanelTouchListener)
extern "C"  void TouchHandler_AddPanelTouchDownListener_m1812621617 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddPanelTouchingListener(PanelTouchListener)
extern "C"  void TouchHandler_AddPanelTouchingListener_m1313302687 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddPanelTouchUpListener(PanelTouchListener)
extern "C"  void TouchHandler_AddPanelTouchUpListener_m3367328234 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddTouchDownListener(TouchListener)
extern "C"  void TouchHandler_AddTouchDownListener_m3683674615 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddTouchingListener(TouchListener)
extern "C"  void TouchHandler_AddTouchingListener_m3771049945 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TouchHandler::AddTouchUpListener(TouchListener)
extern "C"  void TouchHandler_AddTouchUpListener_m1247324062 (TouchHandler_t3514404651 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
