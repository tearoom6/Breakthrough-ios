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

// RecordBoard
struct RecordBoard_t2958378229;
// System.String
struct String_t;
// RankingRecord[]
struct RankingRecordU5BU5D_t1814155262;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void RecordBoard::.ctor()
extern "C"  void RecordBoard__ctor_m2127297046 (RecordBoard_t2958378229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RecordBoard::.cctor()
extern "C"  void RecordBoard__cctor_m1039602775 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RecordBoard::Awake()
extern "C"  void RecordBoard_Awake_m2364902265 (RecordBoard_t2958378229 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RecordBoard::SetLabels(System.String,System.String,System.String,System.String)
extern "C"  void RecordBoard_SetLabels_m3397157409 (RecordBoard_t2958378229 * __this, String_t* ___record0, String_t* ___point1, String_t* ___rank2, String_t* ___ranking3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RecordBoard::SetMyRecord(System.String,System.Int32,System.Int32)
extern "C"  void RecordBoard_SetMyRecord_m1625852335 (RecordBoard_t2958378229 * __this, String_t* ___name0, int32_t ___point1, int32_t ___rank2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RecordBoard::SetRankingRecords(RankingRecord[])
extern "C"  void RecordBoard_SetRankingRecords_m3150910791 (RecordBoard_t2958378229 * __this, RankingRecordU5BU5D_t1814155262* ___records0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
