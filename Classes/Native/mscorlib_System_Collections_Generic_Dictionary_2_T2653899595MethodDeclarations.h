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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>
struct Transform_1_t2653899595;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21840487222.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_PropertyMeta4066634616.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3593258482_gshared (Transform_1_t2653899595 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3593258482(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2653899595 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3593258482_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1840487222  Transform_1_Invoke_m1570214214_gshared (Transform_1_t2653899595 * __this, Il2CppObject * ___key0, PropertyMetadata_t4066634616  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1570214214(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t1840487222  (*) (Transform_1_t2653899595 *, Il2CppObject *, PropertyMetadata_t4066634616 , const MethodInfo*))Transform_1_Invoke_m1570214214_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3109135473_gshared (Transform_1_t2653899595 * __this, Il2CppObject * ___key0, PropertyMetadata_t4066634616  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3109135473(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2653899595 *, Il2CppObject *, PropertyMetadata_t4066634616 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3109135473_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.PropertyMetadata,System.Collections.Generic.KeyValuePair`2<System.Object,LitJson.PropertyMetadata>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1840487222  Transform_1_EndInvoke_m3522275204_gshared (Transform_1_t2653899595 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3522275204(__this, ___result0, method) ((  KeyValuePair_2_t1840487222  (*) (Transform_1_t2653899595 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3522275204_gshared)(__this, ___result0, method)
