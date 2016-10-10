#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LitJson.ExporterFunc`1<System.Object>
struct ExporterFunc_1_t2892523986;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper/<RegisterExporter>c__AnonStorey3`1<System.Object>
struct  U3CRegisterExporterU3Ec__AnonStorey3_1_t1693877754  : public Il2CppObject
{
public:
	// LitJson.ExporterFunc`1<T> LitJson.JsonMapper/<RegisterExporter>c__AnonStorey3`1::exporter
	ExporterFunc_1_t2892523986 * ___exporter_0;

public:
	inline static int32_t get_offset_of_exporter_0() { return static_cast<int32_t>(offsetof(U3CRegisterExporterU3Ec__AnonStorey3_1_t1693877754, ___exporter_0)); }
	inline ExporterFunc_1_t2892523986 * get_exporter_0() const { return ___exporter_0; }
	inline ExporterFunc_1_t2892523986 ** get_address_of_exporter_0() { return &___exporter_0; }
	inline void set_exporter_0(ExporterFunc_1_t2892523986 * value)
	{
		___exporter_0 = value;
		Il2CppCodeGenWriteBarrier(&___exporter_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
