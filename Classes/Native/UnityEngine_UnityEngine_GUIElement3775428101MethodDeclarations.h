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

// UnityEngine.GUIElement
struct GUIElement_t3775428101;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GUIElement3775428101.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Boolean UnityEngine.GUIElement::HitTest(UnityEngine.Vector3)
extern "C"  bool GUIElement_HitTest_m220778544 (GUIElement_t3775428101 * __this, Vector3_t4282066566  ___screenPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIElement::INTERNAL_CALL_HitTest(UnityEngine.GUIElement,UnityEngine.Vector3&,UnityEngine.Camera)
extern "C"  bool GUIElement_INTERNAL_CALL_HitTest_m894012387 (Il2CppObject * __this /* static, unused */, GUIElement_t3775428101 * ___self0, Vector3_t4282066566 * ___screenPosition1, Camera_t2727095145 * ___camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUIElement::GetScreenRect()
extern "C"  Rect_t4241904616  GUIElement_GetScreenRect_m1273037276 (GUIElement_t3775428101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIElement::INTERNAL_CALL_GetScreenRect(UnityEngine.GUIElement,UnityEngine.Camera,UnityEngine.Rect&)
extern "C"  void GUIElement_INTERNAL_CALL_GetScreenRect_m664639986 (Il2CppObject * __this /* static, unused */, GUIElement_t3775428101 * ___self0, Camera_t2727095145 * ___camera1, Rect_t4241904616 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
