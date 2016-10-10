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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>
struct KeyCollection_t1863577358;
// System.Collections.Generic.Dictionary`2<System.Single,System.Int32>
struct Dictionary_2_t236817907;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t1908816725;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Ke851753961.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m2262051836_gshared (KeyCollection_t1863577358 * __this, Dictionary_2_t236817907 * ___dictionary0, const MethodInfo* method);
#define KeyCollection__ctor_m2262051836(__this, ___dictionary0, method) ((  void (*) (KeyCollection_t1863577358 *, Dictionary_2_t236817907 *, const MethodInfo*))KeyCollection__ctor_m2262051836_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3136069594_gshared (KeyCollection_t1863577358 * __this, float ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3136069594(__this, ___item0, method) ((  void (*) (KeyCollection_t1863577358 *, float, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m3136069594_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1907160017_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1907160017(__this, method) ((  void (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1907160017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m666099252_gshared (KeyCollection_t1863577358 * __this, float ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m666099252(__this, ___item0, method) ((  bool (*) (KeyCollection_t1863577358 *, float, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m666099252_gshared)(__this, ___item0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2718583961_gshared (KeyCollection_t1863577358 * __this, float ___item0, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2718583961(__this, ___item0, method) ((  bool (*) (KeyCollection_t1863577358 *, float, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m2718583961_gshared)(__this, ___item0, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m3425911843_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m3425911843(__this, method) ((  Il2CppObject* (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m3425911843_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m674408131_gshared (KeyCollection_t1863577358 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m674408131(__this, ___array0, ___index1, method) ((  void (*) (KeyCollection_t1863577358 *, Il2CppArray *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m674408131_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3490410514_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3490410514(__this, method) ((  Il2CppObject * (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m3490410514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3052312725_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3052312725(__this, method) ((  bool (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3052312725_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2164615047_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2164615047(__this, method) ((  bool (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m2164615047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m2067411961_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m2067411961(__this, method) ((  Il2CppObject * (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m2067411961_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m2542830257_gshared (KeyCollection_t1863577358 * __this, SingleU5BU5D_t2316563989* ___array0, int32_t ___index1, const MethodInfo* method);
#define KeyCollection_CopyTo_m2542830257(__this, ___array0, ___index1, method) ((  void (*) (KeyCollection_t1863577358 *, SingleU5BU5D_t2316563989*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m2542830257_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::GetEnumerator()
extern "C"  Enumerator_t851753961  KeyCollection_GetEnumerator_m426345086_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m426345086(__this, method) ((  Enumerator_t851753961  (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_GetEnumerator_m426345086_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Single,System.Int32>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m1828312129_gshared (KeyCollection_t1863577358 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1828312129(__this, method) ((  int32_t (*) (KeyCollection_t1863577358 *, const MethodInfo*))KeyCollection_get_Count_m1828312129_gshared)(__this, method)
