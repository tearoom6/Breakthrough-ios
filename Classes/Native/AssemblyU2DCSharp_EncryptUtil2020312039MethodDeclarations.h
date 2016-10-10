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

// EncryptUtil
struct EncryptUtil_t2020312039;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void EncryptUtil::.ctor()
extern "C"  void EncryptUtil__ctor_m642280292 (EncryptUtil_t2020312039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EncryptUtil::Encrypt(System.Object,System.String)
extern "C"  String_t* EncryptUtil_Encrypt_m2179008838 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EncryptUtil::Encrypt(System.String,System.String)
extern "C"  String_t* EncryptUtil_Encrypt_m2149895732 (Il2CppObject * __this /* static, unused */, String_t* ___sourceString0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] EncryptUtil::Encrypt(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t4260760469* EncryptUtil_Encrypt_m2612562132 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___sourceBytes0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EncryptUtil::Decrypt(System.String,System.String)
extern "C"  String_t* EncryptUtil_Decrypt_m1850136588 (Il2CppObject * __this /* static, unused */, String_t* ___sourceString0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] EncryptUtil::Decrypt(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t4260760469* EncryptUtil_Decrypt_m2312802988 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___sourceBytes0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EncryptUtil::Hash(System.String)
extern "C"  String_t* EncryptUtil_Hash_m3832857847 (Il2CppObject * __this /* static, unused */, String_t* ___strData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] EncryptUtil::Hash(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* EncryptUtil_Hash_m1213770373 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___byteData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EncryptUtil::ObjectToJson(System.Object)
extern "C"  String_t* EncryptUtil_ObjectToJson_m3816315893 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EncryptUtil::GenerateKeyFromPassword(System.String,System.Int32,System.Byte[]&,System.Int32,System.Byte[]&)
extern "C"  void EncryptUtil_GenerateKeyFromPassword_m1666952917 (Il2CppObject * __this /* static, unused */, String_t* ___password0, int32_t ___keySize1, ByteU5BU5D_t4260760469** ___key2, int32_t ___blockSize3, ByteU5BU5D_t4260760469** ___iv4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
