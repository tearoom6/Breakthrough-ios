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

// Logger
struct Logger_t2281497008;
// UnityEngine.Component
struct Component_t3501516275;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Logger_LogLevel3855432767.h"

// System.Void Logger::.ctor()
extern "C"  void Logger__ctor_m2125818091 (Logger_t2281497008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::.cctor()
extern "C"  void Logger__cctor_m993755170 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::Log(UnityEngine.Component,System.String,Logger/LogLevel)
extern "C"  void Logger_Log_m489559400 (Il2CppObject * __this /* static, unused */, Component_t3501516275 * ___component0, String_t* ___msg1, int32_t ___level2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::Log(System.String,Logger/LogLevel)
extern "C"  void Logger_Log_m4045065634 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Logger::CanOutput(Logger/LogLevel)
extern "C"  bool Logger_CanOutput_m3831496397 (Il2CppObject * __this /* static, unused */, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::Error(System.String,UnityEngine.Component)
extern "C"  void Logger_Error_m740413655 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, Component_t3501516275 * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::Warn(System.String,UnityEngine.Component)
extern "C"  void Logger_Warn_m708334633 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, Component_t3501516275 * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Logger::Info(System.String,UnityEngine.Component)
extern "C"  void Logger_Info_m3678550785 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, Component_t3501516275 * ___component1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
