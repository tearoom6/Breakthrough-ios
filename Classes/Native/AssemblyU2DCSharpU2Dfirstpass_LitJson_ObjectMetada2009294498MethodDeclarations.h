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

// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t169959035;
// LitJson.ObjectMetadata
struct ObjectMetadata_t2009294498;
struct ObjectMetadata_t2009294498_marshaled_pinvoke;
struct ObjectMetadata_t2009294498_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_ObjectMetada2009294498.h"
#include "mscorlib_System_Type2863145774.h"

// System.Type LitJson.ObjectMetadata::get_ElementType()
extern "C"  Type_t * ObjectMetadata_get_ElementType_m2874627491 (ObjectMetadata_t2009294498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
extern "C"  void ObjectMetadata_set_ElementType_m1009528912 (ObjectMetadata_t2009294498 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
extern "C"  bool ObjectMetadata_get_IsDictionary_m2778598935 (ObjectMetadata_t2009294498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
extern "C"  void ObjectMetadata_set_IsDictionary_m1625789478 (ObjectMetadata_t2009294498 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
extern "C"  Il2CppObject* ObjectMetadata_get_Properties_m936851070 (ObjectMetadata_t2009294498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
extern "C"  void ObjectMetadata_set_Properties_m1338536269 (ObjectMetadata_t2009294498 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ObjectMetadata_t2009294498;
struct ObjectMetadata_t2009294498_marshaled_pinvoke;

extern "C" void ObjectMetadata_t2009294498_marshal_pinvoke(const ObjectMetadata_t2009294498& unmarshaled, ObjectMetadata_t2009294498_marshaled_pinvoke& marshaled);
extern "C" void ObjectMetadata_t2009294498_marshal_pinvoke_back(const ObjectMetadata_t2009294498_marshaled_pinvoke& marshaled, ObjectMetadata_t2009294498& unmarshaled);
extern "C" void ObjectMetadata_t2009294498_marshal_pinvoke_cleanup(ObjectMetadata_t2009294498_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ObjectMetadata_t2009294498;
struct ObjectMetadata_t2009294498_marshaled_com;

extern "C" void ObjectMetadata_t2009294498_marshal_com(const ObjectMetadata_t2009294498& unmarshaled, ObjectMetadata_t2009294498_marshaled_com& marshaled);
extern "C" void ObjectMetadata_t2009294498_marshal_com_back(const ObjectMetadata_t2009294498_marshaled_com& marshaled, ObjectMetadata_t2009294498& unmarshaled);
extern "C" void ObjectMetadata_t2009294498_marshal_com_cleanup(ObjectMetadata_t2009294498_marshaled_com& marshaled);
