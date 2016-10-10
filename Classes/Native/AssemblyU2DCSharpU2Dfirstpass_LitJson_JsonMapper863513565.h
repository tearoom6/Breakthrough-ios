﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IFormatProvider
struct IFormatProvider_t192740775;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t3013656303;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1504911478;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t3741638740;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t3980295021;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t1692590328;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t2149610353;
// LitJson.JsonWriter
struct JsonWriter_t1165300239;
// LitJson.ExporterFunc
struct ExporterFunc_t3330360473;
// LitJson.ImporterFunc
struct ImporterFunc_t2138319818;
// LitJson.WrapperFactory
struct WrapperFactory_t3264289803;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper
struct  JsonMapper_t863513565  : public Il2CppObject
{
public:

public:
};

struct JsonMapper_t863513565_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	Il2CppObject * ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	Il2CppObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	Il2CppObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	Il2CppObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	Il2CppObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	Il2CppObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	Il2CppObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	Il2CppObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	Il2CppObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	Il2CppObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	Il2CppObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	Il2CppObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	Il2CppObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t1165300239 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	Il2CppObject * ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache10
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache10_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache11
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache11_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache12
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache12_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache13
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache13_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache14
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache14_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache15
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache15_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache16
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache16_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache17
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache17_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache18
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache18_24;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache19
	ExporterFunc_t3330360473 * ___U3CU3Ef__amU24cache19_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1A
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1A_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1B
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1B_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1C
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1C_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1D
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1D_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1E
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1E_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache1F
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache1F_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache20
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache20_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache21
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache21_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache22
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache22_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache23
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache23_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache24
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache24_36;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache25
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache25_37;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache26
	ImporterFunc_t2138319818 * ___U3CU3Ef__amU24cache26_38;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache27
	WrapperFactory_t3264289803 * ___U3CU3Ef__amU24cache27_39;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache28
	WrapperFactory_t3264289803 * ___U3CU3Ef__amU24cache28_40;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache29
	WrapperFactory_t3264289803 * ___U3CU3Ef__amU24cache29_41;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___datetime_format_1)); }
	inline Il2CppObject * get_datetime_format_1() const { return ___datetime_format_1; }
	inline Il2CppObject ** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(Il2CppObject * value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier(&___datetime_format_1, value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___base_exporters_table_2)); }
	inline Il2CppObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline Il2CppObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(Il2CppObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier(&___base_exporters_table_2, value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___custom_exporters_table_3)); }
	inline Il2CppObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline Il2CppObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(Il2CppObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier(&___custom_exporters_table_3, value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___base_importers_table_4)); }
	inline Il2CppObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline Il2CppObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(Il2CppObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier(&___base_importers_table_4, value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___custom_importers_table_5)); }
	inline Il2CppObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline Il2CppObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(Il2CppObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier(&___custom_importers_table_5, value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___array_metadata_6)); }
	inline Il2CppObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline Il2CppObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(Il2CppObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier(&___array_metadata_6, value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___array_metadata_lock_7)); }
	inline Il2CppObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline Il2CppObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(Il2CppObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier(&___array_metadata_lock_7, value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___conv_ops_8)); }
	inline Il2CppObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline Il2CppObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(Il2CppObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier(&___conv_ops_8, value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___conv_ops_lock_9)); }
	inline Il2CppObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline Il2CppObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(Il2CppObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier(&___conv_ops_lock_9, value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___object_metadata_10)); }
	inline Il2CppObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline Il2CppObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(Il2CppObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier(&___object_metadata_10, value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___object_metadata_lock_11)); }
	inline Il2CppObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline Il2CppObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(Il2CppObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier(&___object_metadata_lock_11, value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___type_properties_12)); }
	inline Il2CppObject* get_type_properties_12() const { return ___type_properties_12; }
	inline Il2CppObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(Il2CppObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier(&___type_properties_12, value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___type_properties_lock_13)); }
	inline Il2CppObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline Il2CppObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(Il2CppObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier(&___type_properties_lock_13, value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___static_writer_14)); }
	inline JsonWriter_t1165300239 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_t1165300239 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_t1165300239 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier(&___static_writer_14, value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___static_writer_lock_15)); }
	inline Il2CppObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline Il2CppObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(Il2CppObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier(&___static_writer_lock_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_16() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache10_16)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache10_16() const { return ___U3CU3Ef__amU24cache10_16; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache10_16() { return &___U3CU3Ef__amU24cache10_16; }
	inline void set_U3CU3Ef__amU24cache10_16(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache10_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_17() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache11_17)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache11_17() const { return ___U3CU3Ef__amU24cache11_17; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache11_17() { return &___U3CU3Ef__amU24cache11_17; }
	inline void set_U3CU3Ef__amU24cache11_17(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache11_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_18() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache12_18)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache12_18() const { return ___U3CU3Ef__amU24cache12_18; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache12_18() { return &___U3CU3Ef__amU24cache12_18; }
	inline void set_U3CU3Ef__amU24cache12_18(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache12_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_19() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache13_19)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache13_19() const { return ___U3CU3Ef__amU24cache13_19; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache13_19() { return &___U3CU3Ef__amU24cache13_19; }
	inline void set_U3CU3Ef__amU24cache13_19(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache13_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_20() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache14_20)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache14_20() const { return ___U3CU3Ef__amU24cache14_20; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache14_20() { return &___U3CU3Ef__amU24cache14_20; }
	inline void set_U3CU3Ef__amU24cache14_20(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache14_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_21() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache15_21)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache15_21() const { return ___U3CU3Ef__amU24cache15_21; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache15_21() { return &___U3CU3Ef__amU24cache15_21; }
	inline void set_U3CU3Ef__amU24cache15_21(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache15_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_22() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache16_22)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache16_22() const { return ___U3CU3Ef__amU24cache16_22; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache16_22() { return &___U3CU3Ef__amU24cache16_22; }
	inline void set_U3CU3Ef__amU24cache16_22(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache16_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_23() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache17_23)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache17_23() const { return ___U3CU3Ef__amU24cache17_23; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache17_23() { return &___U3CU3Ef__amU24cache17_23; }
	inline void set_U3CU3Ef__amU24cache17_23(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache17_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache17_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_24() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache18_24)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache18_24() const { return ___U3CU3Ef__amU24cache18_24; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache18_24() { return &___U3CU3Ef__amU24cache18_24; }
	inline void set_U3CU3Ef__amU24cache18_24(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache18_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_25() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache19_25)); }
	inline ExporterFunc_t3330360473 * get_U3CU3Ef__amU24cache19_25() const { return ___U3CU3Ef__amU24cache19_25; }
	inline ExporterFunc_t3330360473 ** get_address_of_U3CU3Ef__amU24cache19_25() { return &___U3CU3Ef__amU24cache19_25; }
	inline void set_U3CU3Ef__amU24cache19_25(ExporterFunc_t3330360473 * value)
	{
		___U3CU3Ef__amU24cache19_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache19_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_26() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1A_26)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1A_26() const { return ___U3CU3Ef__amU24cache1A_26; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1A_26() { return &___U3CU3Ef__amU24cache1A_26; }
	inline void set_U3CU3Ef__amU24cache1A_26(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1A_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1A_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_27() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1B_27)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1B_27() const { return ___U3CU3Ef__amU24cache1B_27; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1B_27() { return &___U3CU3Ef__amU24cache1B_27; }
	inline void set_U3CU3Ef__amU24cache1B_27(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1B_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_28() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1C_28)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1C_28() const { return ___U3CU3Ef__amU24cache1C_28; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1C_28() { return &___U3CU3Ef__amU24cache1C_28; }
	inline void set_U3CU3Ef__amU24cache1C_28(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1C_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_29() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1D_29)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1D_29() const { return ___U3CU3Ef__amU24cache1D_29; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1D_29() { return &___U3CU3Ef__amU24cache1D_29; }
	inline void set_U3CU3Ef__amU24cache1D_29(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1D_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1D_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1E_30() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1E_30)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1E_30() const { return ___U3CU3Ef__amU24cache1E_30; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1E_30() { return &___U3CU3Ef__amU24cache1E_30; }
	inline void set_U3CU3Ef__amU24cache1E_30(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1E_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1E_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_31() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache1F_31)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache1F_31() const { return ___U3CU3Ef__amU24cache1F_31; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache1F_31() { return &___U3CU3Ef__amU24cache1F_31; }
	inline void set_U3CU3Ef__amU24cache1F_31(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache1F_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1F_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_32() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache20_32)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache20_32() const { return ___U3CU3Ef__amU24cache20_32; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache20_32() { return &___U3CU3Ef__amU24cache20_32; }
	inline void set_U3CU3Ef__amU24cache20_32(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache20_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache21_33() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache21_33)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache21_33() const { return ___U3CU3Ef__amU24cache21_33; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache21_33() { return &___U3CU3Ef__amU24cache21_33; }
	inline void set_U3CU3Ef__amU24cache21_33(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache21_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache21_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache22_34() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache22_34)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache22_34() const { return ___U3CU3Ef__amU24cache22_34; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache22_34() { return &___U3CU3Ef__amU24cache22_34; }
	inline void set_U3CU3Ef__amU24cache22_34(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache22_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache22_34, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache23_35() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache23_35)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache23_35() const { return ___U3CU3Ef__amU24cache23_35; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache23_35() { return &___U3CU3Ef__amU24cache23_35; }
	inline void set_U3CU3Ef__amU24cache23_35(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache23_35 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache23_35, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache24_36() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache24_36)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache24_36() const { return ___U3CU3Ef__amU24cache24_36; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache24_36() { return &___U3CU3Ef__amU24cache24_36; }
	inline void set_U3CU3Ef__amU24cache24_36(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache24_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache24_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache25_37() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache25_37)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache25_37() const { return ___U3CU3Ef__amU24cache25_37; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache25_37() { return &___U3CU3Ef__amU24cache25_37; }
	inline void set_U3CU3Ef__amU24cache25_37(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache25_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache25_37, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache26_38() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache26_38)); }
	inline ImporterFunc_t2138319818 * get_U3CU3Ef__amU24cache26_38() const { return ___U3CU3Ef__amU24cache26_38; }
	inline ImporterFunc_t2138319818 ** get_address_of_U3CU3Ef__amU24cache26_38() { return &___U3CU3Ef__amU24cache26_38; }
	inline void set_U3CU3Ef__amU24cache26_38(ImporterFunc_t2138319818 * value)
	{
		___U3CU3Ef__amU24cache26_38 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache26_38, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache27_39() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache27_39)); }
	inline WrapperFactory_t3264289803 * get_U3CU3Ef__amU24cache27_39() const { return ___U3CU3Ef__amU24cache27_39; }
	inline WrapperFactory_t3264289803 ** get_address_of_U3CU3Ef__amU24cache27_39() { return &___U3CU3Ef__amU24cache27_39; }
	inline void set_U3CU3Ef__amU24cache27_39(WrapperFactory_t3264289803 * value)
	{
		___U3CU3Ef__amU24cache27_39 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache27_39, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache28_40() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache28_40)); }
	inline WrapperFactory_t3264289803 * get_U3CU3Ef__amU24cache28_40() const { return ___U3CU3Ef__amU24cache28_40; }
	inline WrapperFactory_t3264289803 ** get_address_of_U3CU3Ef__amU24cache28_40() { return &___U3CU3Ef__amU24cache28_40; }
	inline void set_U3CU3Ef__amU24cache28_40(WrapperFactory_t3264289803 * value)
	{
		___U3CU3Ef__amU24cache28_40 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache28_40, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache29_41() { return static_cast<int32_t>(offsetof(JsonMapper_t863513565_StaticFields, ___U3CU3Ef__amU24cache29_41)); }
	inline WrapperFactory_t3264289803 * get_U3CU3Ef__amU24cache29_41() const { return ___U3CU3Ef__amU24cache29_41; }
	inline WrapperFactory_t3264289803 ** get_address_of_U3CU3Ef__amU24cache29_41() { return &___U3CU3Ef__amU24cache29_41; }
	inline void set_U3CU3Ef__amU24cache29_41(WrapperFactory_t3264289803 * value)
	{
		___U3CU3Ef__amU24cache29_41 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache29_41, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
