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

// Properties
struct Properties_t1067411795;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Properties::.ctor(System.String)
extern "C"  void Properties__ctor_m29717338 (Properties_t1067411795 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Properties::Load(System.String)
extern "C"  bool Properties_Load_m57028108 (Properties_t1067411795 * __this, String_t* ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Properties::Get(System.String,System.Object[])
extern "C"  String_t* Properties_Get_m1041171189 (Properties_t1067411795 * __this, String_t* ___key0, ObjectU5BU5D_t1108656482* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
