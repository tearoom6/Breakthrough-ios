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

// LocalDataStore
struct LocalDataStore_t1293846604;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void LocalDataStore::.ctor()
extern "C"  void LocalDataStore__ctor_m2224937423 (LocalDataStore_t1293846604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalDataStore::Save(System.String,System.Object)
extern "C"  void LocalDataStore_Save_m2680649534 (LocalDataStore_t1293846604 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LocalDataStore::SaveMaxInt(System.String,System.Int32)
extern "C"  bool LocalDataStore_SaveMaxInt_m1848237798 (LocalDataStore_t1293846604 * __this, String_t* ___key0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalDataStore::SaveWithPWD(System.String,System.Object,System.String)
extern "C"  void LocalDataStore_SaveWithPWD_m2319183525 (LocalDataStore_t1293846604 * __this, String_t* ___key0, Il2CppObject * ___value1, String_t* ___passwd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LocalDataStore::SaveMaxIntWithPWD(System.String,System.Int32,System.String)
extern "C"  bool LocalDataStore_SaveMaxIntWithPWD_m3402329657 (LocalDataStore_t1293846604 * __this, String_t* ___key0, int32_t ___value1, String_t* ___passwd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LocalDataStore::HasKey(System.String)
extern "C"  bool LocalDataStore_HasKey_m597915220 (LocalDataStore_t1293846604 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalDataStore::Delete(System.String)
extern "C"  void LocalDataStore_Delete_m652017538 (LocalDataStore_t1293846604 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LocalDataStore::DeleteAll()
extern "C"  void LocalDataStore_DeleteAll_m3257031523 (LocalDataStore_t1293846604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
