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

// Panel
struct Panel_t76880356;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// FlushInfo
struct FlushInfo_t1426592178;
// FlickInfo
struct FlickInfo_t3206154041;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Panel76880356.h"
#include "AssemblyU2DCSharp_FlushInfo1426592178.h"
#include "AssemblyU2DCSharp_FlickInfo3206154041.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void Panel::.ctor(UnityEngine.GameObject,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single)
extern "C"  void Panel__ctor_m1046653683 (Panel_t76880356 * __this, GameObject_t3674682005 * ___panelOjcect0, int32_t ___indexX1, int32_t ___indexY2, float ___leftX3, float ___bottomY4, float ___width5, float ___height6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Panel::Contains(UnityEngine.Vector3)
extern "C"  bool Panel_Contains_m865396305 (Panel_t76880356 * __this, Vector3_t4282066566  ___viewportPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Panel::GetDistanceFrom(Panel)
extern "C"  int32_t Panel_GetDistanceFrom_m3050527654 (Panel_t76880356 * __this, Panel_t76880356 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Panel::IsNeighbor(Panel)
extern "C"  bool Panel_IsNeighbor_m3179834633 (Panel_t76880356 * __this, Panel_t76880356 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Panel::ToCoordinatesString()
extern "C"  String_t* Panel_ToCoordinatesString_m1810950713 (Panel_t76880356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Panel::Flush(FlushInfo)
extern "C"  void Panel_Flush_m1113753015 (Panel_t76880356 * __this, FlushInfo_t1426592178 * ___flushInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Panel::Flick(FlickInfo)
extern "C"  void Panel_Flick_m3004061097 (Panel_t76880356 * __this, FlickInfo_t3206154041 * ___flickInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Panel::ChangeOriginalColor(UnityEngine.Color)
extern "C"  void Panel_ChangeOriginalColor_m3148893471 (Panel_t76880356 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
