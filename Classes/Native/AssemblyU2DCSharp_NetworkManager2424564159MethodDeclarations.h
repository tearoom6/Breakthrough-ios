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

// NetworkManager
struct NetworkManager_t2424564159;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t3530437141;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void NetworkManager::.ctor()
extern "C"  void NetworkManager__ctor_m3551750588 (NetworkManager_t2424564159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::GET(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<UnityEngine.WWW>)
extern "C"  void NetworkManager_GET_m1307633389 (NetworkManager_t2424564159 * __this, String_t* ___url0, Dictionary_2_t827649927 * ___header1, Action_1_t3530437141 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkManager::POST(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<UnityEngine.WWW>)
extern "C"  void NetworkManager_POST_m3267744785 (NetworkManager_t2424564159 * __this, String_t* ___url0, String_t* ___postData1, Dictionary_2_t827649927 * ___header2, Action_1_t3530437141 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NetworkManager::Request(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Action`1<UnityEngine.WWW>)
extern "C"  Il2CppObject * NetworkManager_Request_m1058513183 (NetworkManager_t2424564159 * __this, String_t* ___url0, ByteU5BU5D_t4260760469* ___postBytes1, Dictionary_2_t827649927 * ___header2, Action_1_t3530437141 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
