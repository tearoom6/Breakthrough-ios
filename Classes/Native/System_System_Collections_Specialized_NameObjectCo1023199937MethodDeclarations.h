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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1023199937;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t926437290;
// System.Collections.IComparer
struct IComparer_t4034294160;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1357740943;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1246329035;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1625138937;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C"  void NameObjectCollectionBase__ctor_m1741929684 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C"  void NameObjectCollectionBase__ctor_m2422988573 (NameObjectCollectionBase_t1023199937 * __this, Il2CppObject * ___equalityComparer0, Il2CppObject * ___comparer1, Il2CppObject * ___hcp2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern "C"  void NameObjectCollectionBase__ctor_m667891772 (NameObjectCollectionBase_t1023199937 * __this, Il2CppObject * ___equalityComparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase__ctor_m355604501 (NameObjectCollectionBase_t1023199937 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void NameObjectCollectionBase__ctor_m1688066724 (NameObjectCollectionBase_t1023199937 * __this, int32_t ___capacity0, Il2CppObject * ___hashProvider1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m4292869198 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m625351596 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m606865136 (NameObjectCollectionBase_t1023199937 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_Comparer_m1330669861 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C"  Il2CppObject * NameObjectCollectionBase_get_HashCodeProvider_m778027875 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C"  void NameObjectCollectionBase_Init_m3194316544 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C"  KeysCollection_t1246329035 * NameObjectCollectionBase_get_Keys_m411623033 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C"  Il2CppObject * NameObjectCollectionBase_GetEnumerator_m2097604182 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase_GetObjectData_m3614997106 (NameObjectCollectionBase_t1023199937 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C"  int32_t NameObjectCollectionBase_get_Count_m2598648584 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C"  void NameObjectCollectionBase_OnDeserialization_m3096738610 (NameObjectCollectionBase_t1023199937 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C"  bool NameObjectCollectionBase_get_IsReadOnly_m911678543 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseAdd_m2649117518 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C"  void NameObjectCollectionBase_BaseClear_m2193362030 (NameObjectCollectionBase_t1023199937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m3004572221 (NameObjectCollectionBase_t1023199937 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C"  Il2CppObject * NameObjectCollectionBase_BaseGet_m3404124054 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C"  String_t* NameObjectCollectionBase_BaseGetKey_m3433139160 (NameObjectCollectionBase_t1023199937 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C"  void NameObjectCollectionBase_BaseRemove_m793410301 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseSet_m1358844717 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___name0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C"  _Item_t1625138937 * NameObjectCollectionBase_FindFirstMatchedItem_m3932570092 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C"  bool NameObjectCollectionBase_Equals_m2784985029 (NameObjectCollectionBase_t1023199937 * __this, String_t* ___s10, String_t* ___s21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
