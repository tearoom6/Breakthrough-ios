﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t763695022;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4133101135;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t3755049006;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2646374783  : public Il2CppObject
{
public:

public:
};

struct DefaultPolicies_t2646374783_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t763695022 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4260760469* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t4133101135 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4260760469* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t4133101135 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t3755049006 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t3755049006 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t3755049006 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t3755049006 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t3755049006 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t3755049006 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t3755049006 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____fxVersion_0)); }
	inline Version_t763695022 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t763695022 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t763695022 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&____fxVersion_0, value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t4260760469* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t4260760469** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t4260760469* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier(&____ecmaKey_1, value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t4133101135 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t4133101135 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t4133101135 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier(&____ecma_2, value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t4260760469* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t4260760469** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t4260760469* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier(&____msFinalKey_3, value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t4133101135 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t4133101135 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t4133101135 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier(&____msFinal_4, value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t3755049006 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t3755049006 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier(&____fullTrust_5, value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t3755049006 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t3755049006 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier(&____localIntranet_6, value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t3755049006 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t3755049006 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier(&____internet_7, value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t3755049006 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t3755049006 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier(&____skipVerification_8, value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t3755049006 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t3755049006 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier(&____execution_9, value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t3755049006 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t3755049006 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier(&____nothing_10, value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2646374783_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t3755049006 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t3755049006 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t3755049006 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier(&____everything_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
