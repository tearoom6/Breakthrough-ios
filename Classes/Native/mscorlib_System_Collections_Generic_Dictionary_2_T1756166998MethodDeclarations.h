﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Single,System.Int32,System.Single>
struct Transform_1_t1756166998;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Single,System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2967824166_gshared (Transform_1_t1756166998 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2967824166(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1756166998 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2967824166_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Single,System.Int32,System.Single>::Invoke(TKey,TValue)
extern "C"  float Transform_1_Invoke_m816142994_gshared (Transform_1_t1756166998 * __this, float ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m816142994(__this, ___key0, ___value1, method) ((  float (*) (Transform_1_t1756166998 *, float, int32_t, const MethodInfo*))Transform_1_Invoke_m816142994_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Single,System.Int32,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4077825469_gshared (Transform_1_t1756166998 * __this, float ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4077825469(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1756166998 *, float, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4077825469_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Single,System.Int32,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Transform_1_EndInvoke_m1213814456_gshared (Transform_1_t1756166998 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1213814456(__this, ___result0, method) ((  float (*) (Transform_1_t1756166998 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1213814456_gshared)(__this, ___result0, method)
