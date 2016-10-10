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

// LitJson.Lexer
struct Lexer_t3664372066;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.String
struct String_t;
// LitJson.FsmContext
struct FsmContext_t3936467683;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LitJson_FsmContext3936467683.h"

// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m3944330081 (Lexer_t3664372066 * __this, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m2588315475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
extern "C"  bool Lexer_get_AllowComments_m3091358472 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
extern "C"  void Lexer_set_AllowComments_m1176528111 (Lexer_t3664372066 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
extern "C"  bool Lexer_get_AllowSingleQuotedStrings_m683263520 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void Lexer_set_AllowSingleQuotedStrings_m2097554215 (Lexer_t3664372066 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m4100148527 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m1930106750 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m1997305298 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m2160978075 (Il2CppObject * __this /* static, unused */, int32_t ___digit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m2348682611 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m724120633 (Il2CppObject * __this /* static, unused */, int32_t ___esc_char0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m1724809104 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m1936160017 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m2147510930 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m2358861843 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m2570212756 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m2781563669 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m2992914582 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m3204265495 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m3415616408 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m81550406 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m292901319 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m504252232 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m715603145 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m926954058 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m1138304971 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m1349655884 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m1561006797 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m1772357710 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m1983708623 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m2338461413 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m2549812326 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m2761163239 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m2972514152 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m3183865065 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m3395215978 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m3606566891 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m3817917804 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m4029268717 (Il2CppObject * __this /* static, unused */, FsmContext_t3936467683 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m2836620640 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m302793565 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m3973912858 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m1575774091 (Lexer_t3664372066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
