#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// LitJson.JsonException
struct JsonException_t3682484112;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.String
struct String_t;
// System.Exception
struct Exception_t;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t3338636003;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t2241695223;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t935204471;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t1715664290;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t618723510;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t3692140024;
// LitJson.JsonWriter
struct JsonWriter_t3570089748;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t691233;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t2688515417;
// LitJson.JsonMapper
struct JsonMapper_t3815285241;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_t3512696772;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t779879461;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t1976548163;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t904547919;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t27006016;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// LitJson.JsonReader
struct JsonReader_t836887441;
// LitJson.ImporterFunc
struct ImporterFunc_t3630937194;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// LitJson.IJsonWrapper
struct IJsonWrapper_t1028825384;
// LitJson.WrapperFactory
struct WrapperFactory_t2158548929;
// LitJson.ExporterFunc
struct ExporterFunc_t1851311465;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t1152366808;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t1780316962;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// LitJson.JsonData
struct JsonData_t1524858407;
// System.IO.TextReader
struct TextReader_t283511965;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3794335208;
// LitJson.Lexer
struct Lexer_t1514038666;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t921491721;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t3568926999;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t802263757;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t1854483454;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t3923495619;
// LitJson.WriterContext
struct WriterContext_t1011093999;
// System.Char[]
struct CharU5BU5D_t3528271667;
// LitJson.FsmContext
struct FsmContext_t2331368794;
// LitJson.Lexer/StateHandler
struct StateHandler_t105866779;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t386339177;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t4140357341;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// LitJson.ImporterFunc[]
struct ImporterFuncU5BU5D_t332556975;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t613051986;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Reflection.MethodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t2852677372;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t3282844708;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.PropertyMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2133256424;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t1323790106;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t1224381814;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32[],System.Collections.DictionaryEntry>
struct Transform_1_t2970259689;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>[]
struct IDictionary_2U5BU5D_t2726772819;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.DictionaryEntry>
struct Transform_1_t2331111663;
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>[]
struct IList_1U5BU5D_t2778516417;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.DictionaryEntry>
struct Transform_1_t3059011428;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t543634991;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t824130002;
// LitJson.ExporterFunc[]
struct ExporterFuncU5BU5D_t3613872852;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t3894367863;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>[]
struct IDictionary_2U5BU5D_t369565116;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>,System.Collections.DictionaryEntry>
struct Transform_1_t650060127;
// System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>[]
struct IDictionary_2U5BU5D_t2609190502;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t2889685513;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t363333322;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t643828333;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t2759509920;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t1802487394;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t3694023158;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t179515681;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t2155991415;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Void
struct Void_t1185182177;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t3680310408;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t3340178190;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_t4068933393;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t1228139360;
// System.Globalization.Calendar
struct Calendar_t1661121569;

extern RuntimeClass* ParserToken_t2380208742_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral917256838;
extern const uint32_t JsonException__ctor_m4285481251_MetadataUsageId;
extern const uint32_t JsonException__ctor_m2934847451_MetadataUsageId;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4006081049;
extern const uint32_t JsonException__ctor_m2928296746_MetadataUsageId;
extern const uint32_t JsonException__ctor_m3792137181_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonMapper_t3815285241_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3338636003_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t935204471_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1715664290_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3692140024_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonWriter_t3570089748_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t691233_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2688515417_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1261923765_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2282114649_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2116125915_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m819289856_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1781376517_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4208673122_RuntimeMethod_var;
extern const uint32_t JsonMapper__cctor_m3602240641_MetadataUsageId;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern RuntimeClass* IDictionary_2_t1802487394_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2211611910;
extern String_t* _stringLiteral1949155704;
extern const uint32_t JsonMapper_AddArrayMetadata_m2523599081_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* IDictionary_2_t179515681_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3512696772_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1976548163_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4280968370_RuntimeMethod_var;
extern String_t* _stringLiteral1480664753;
extern const uint32_t JsonMapper_AddObjectMetadata_m3134886667_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2155991415_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t904547919_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2260625411_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2609897742_RuntimeMethod_var;
extern const uint32_t JsonMapper_AddTypeProperties_m3226067832_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3694023158_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t27006016_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2785824703_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1449412172_RuntimeMethod_var;
extern String_t* _stringLiteral3306367446;
extern const uint32_t JsonMapper_GetConvOp_m572333597_MetadataUsageId;
extern RuntimeClass* JsonException_t3682484112_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1152366808_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t244168353_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1363984059_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2156791391;
extern String_t* _stringLiteral57478429;
extern String_t* _stringLiteral3271142035;
extern String_t* _stringLiteral888960820;
extern const uint32_t JsonMapper_ReadValue_m4110536930_MetadataUsageId;
extern RuntimeClass* IJsonWrapper_t1028825384_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_ReadValue_m1268729263_MetadataUsageId;
extern const RuntimeType* Byte_t1134296376_0_0_0_var;
extern const RuntimeType* Char_t3634460470_0_0_0_var;
extern const RuntimeType* DateTime_t3738529785_0_0_0_var;
extern const RuntimeType* Decimal_t2948259380_0_0_0_var;
extern const RuntimeType* SByte_t1669577662_0_0_0_var;
extern const RuntimeType* Int16_t2552820387_0_0_0_var;
extern const RuntimeType* UInt16_t2177724958_0_0_0_var;
extern const RuntimeType* UInt32_t2560061978_0_0_0_var;
extern const RuntimeType* UInt64_t4134040092_0_0_0_var;
extern const RuntimeType* Single_t1397266774_0_0_0_var;
extern RuntimeClass* ExporterFunc_t1851311465_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2759509920_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__0_m1931573245_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__1_m3254454996_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__2_m1010729477_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__3_m1720027564_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__4_m3555118102_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__5_m2252457161_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__6_m2872973994_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__7_m742230771_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__8_m2217235194_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseExportersU3Em__9_m846347913_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterBaseExporters_m1811454598_MetadataUsageId;
extern const RuntimeType* Double_t594665363_0_0_0_var;
extern const RuntimeType* Int64_t3736567304_0_0_0_var;
extern RuntimeClass* ImporterFunc_t3630937194_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__A_m4007510909_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__B_m1626295066_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__C_m4231628127_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__D_m1424933668_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__E_m4004836201_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__F_m107819350_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__10_m3557821550_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__11_m1356604216_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__12_m870996233_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__13_m177952352_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__14_m2551760457_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__15_m3529765172_RuntimeMethod_var;
extern const RuntimeMethod* JsonMapper_U3CRegisterBaseImportersU3Em__16_m1399567613_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterBaseImporters_m1703037250_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1780316962_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1803091887_RuntimeMethod_var;
extern const uint32_t JsonMapper_RegisterImporter_m907439251_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* DictionaryEntry_t3123975638_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2707293362_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t4160010941_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2854558491;
extern const uint32_t JsonMapper_WriteValue_m75393811_MetadataUsageId;
extern const uint32_t JsonMapper_ToJson_m428591468_MetadataUsageId;
extern const uint32_t JsonMapper_ToJson_m1987749589_MetadataUsageId;
extern RuntimeClass* WrapperFactory_t2158548929_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonData_t1524858407_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CToObjectU3Em__17_m2519879843_RuntimeMethod_var;
extern const uint32_t JsonMapper_ToObject_m3847968632_MetadataUsageId;
extern RuntimeClass* JsonReader_t836887441_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonMapper_U3CToObjectU3Em__18_m2519290019_RuntimeMethod_var;
extern const uint32_t JsonMapper_ToObject_m1395013517_MetadataUsageId;
extern const RuntimeMethod* JsonMapper_U3CToObjectU3Em__19_m2519224483_RuntimeMethod_var;
extern const uint32_t JsonMapper_ToObject_m446676358_MetadataUsageId;
extern const uint32_t JsonMapper_ToWrapper_m1081200657_MetadataUsageId;
extern const uint32_t JsonMapper_ToWrapper_m2542376132_MetadataUsageId;
extern RuntimeClass* ICollection_1_t931548338_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_UnregisterExporters_m940177874_MetadataUsageId;
extern RuntimeClass* ICollection_1_t3619372522_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_UnregisterImporters_m587655374_MetadataUsageId;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__0_m1931573245_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__1_m3254454996_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__2_m1010729477_MetadataUsageId;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__3_m1720027564_MetadataUsageId;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__4_m3555118102_MetadataUsageId;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__5_m2252457161_MetadataUsageId;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__6_m2872973994_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__7_m742230771_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__8_m2217235194_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t JsonMapper_U3CRegisterBaseExportersU3Em__9_m846347913_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__A_m4007510909_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__B_m1626295066_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__C_m4231628127_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__D_m1424933668_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__E_m4004836201_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__F_m107819350_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__10_m3557821550_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__11_m1356604216_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__12_m870996233_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__13_m177952352_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__14_m2551760457_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__15_m3529765172_MetadataUsageId;
extern const uint32_t JsonMapper_U3CRegisterBaseImportersU3Em__16_m1399567613_MetadataUsageId;
extern const uint32_t JsonMapper_U3CToObjectU3Em__17_m2519879843_MetadataUsageId;
extern const uint32_t JsonMapper_U3CToObjectU3Em__18_m2519290019_MetadataUsageId;
extern const uint32_t JsonMapper_U3CToObjectU3Em__19_m2519224483_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader__ctor_m514838367_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t3794335208_il2cpp_TypeInfo_var;
extern RuntimeClass* Lexer_t1514038666_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m3860988293_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m3289045699_RuntimeMethod_var;
extern String_t* _stringLiteral3529812268;
extern const uint32_t JsonReader__ctor_m3464502831_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t921491721_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3016042_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5_FieldInfo_var;
extern const uint32_t JsonReader_PopulateParseTable_m2622870148_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3680310408_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2032778390_il2cpp_TypeInfo_var;
extern const uint32_t JsonReader_TableAddCol_m1291145106_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3568926999_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3560123610_RuntimeMethod_var;
extern const uint32_t JsonReader_TableAddRow_m3148122067_MetadataUsageId;
extern const uint32_t JsonReader_ProcessNumber_m4013635903_MetadataUsageId;
extern const uint32_t JsonReader_ProcessSymbol_m2373069323_MetadataUsageId;
extern RuntimeClass* KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1_Clear_m3555801141_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m4199064227_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_m316856375_RuntimeMethod_var;
extern String_t* _stringLiteral320911726;
extern const uint32_t JsonReader_Read_m315486126_MetadataUsageId;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter__cctor_m2512601580_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t802263757_il2cpp_TypeInfo_var;
extern const uint32_t JsonWriter__ctor_m2430372819_MetadataUsageId;
extern const uint32_t JsonWriter__ctor_m2162687857_MetadataUsageId;
extern String_t* _stringLiteral1980498921;
extern const uint32_t JsonWriter__ctor_m2835923290_MetadataUsageId;
extern String_t* _stringLiteral3717129058;
extern String_t* _stringLiteral4103647921;
extern String_t* _stringLiteral1740842079;
extern String_t* _stringLiteral2856579791;
extern String_t* _stringLiteral393113856;
extern String_t* _stringLiteral4135352181;
extern const uint32_t JsonWriter_DoValidation_m3745177799_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t1854483454_il2cpp_TypeInfo_var;
extern RuntimeClass* WriterContext_t1011093999_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Stack_1__ctor_m3272105694_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_m2827801669_RuntimeMethod_var;
extern const uint32_t JsonWriter_Init_m4080872942_MetadataUsageId;
extern String_t* _stringLiteral3454842868;
extern String_t* _stringLiteral3455629300;
extern String_t* _stringLiteral3455498228;
extern String_t* _stringLiteral3454318580;
extern String_t* _stringLiteral3454580724;
extern String_t* _stringLiteral3455432692;
extern const uint32_t JsonWriter_PutString_m1784888055_MetadataUsageId;
extern const uint32_t JsonWriter_ToString_m477535688_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Clear_m534740393_RuntimeMethod_var;
extern const uint32_t JsonWriter_Reset_m3733384412_MetadataUsageId;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral3875954633;
extern const uint32_t JsonWriter_Write_m3048574580_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m4069484567_MetadataUsageId;
extern String_t* _stringLiteral3451565954;
extern const uint32_t JsonWriter_Write_m2002991247_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m1949814895_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m2693541440_MetadataUsageId;
extern String_t* _stringLiteral1202628576;
extern const uint32_t JsonWriter_Write_m3713362081_MetadataUsageId;
extern const uint32_t JsonWriter_Write_m1455779780_MetadataUsageId;
extern const RuntimeMethod* Stack_1_Pop_m3422896867_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_get_Count_m484768452_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Peek_m102127363_RuntimeMethod_var;
extern String_t* _stringLiteral3452614643;
extern const uint32_t JsonWriter_WriteArrayEnd_m3303839937_MetadataUsageId;
extern String_t* _stringLiteral3452614645;
extern const uint32_t JsonWriter_WriteArrayStart_m1053267913_MetadataUsageId;
extern String_t* _stringLiteral3452614611;
extern const uint32_t JsonWriter_WriteObjectEnd_m1917228531_MetadataUsageId;
extern String_t* _stringLiteral3452614613;
extern const uint32_t JsonWriter_WriteObjectStart_m993161475_MetadataUsageId;
extern String_t* _stringLiteral3450517398;
extern const uint32_t JsonWriter_WritePropertyName_m1382075963_MetadataUsageId;
extern RuntimeClass* FsmContext_t2331368794_il2cpp_TypeInfo_var;
extern const uint32_t Lexer__ctor_m2815723357_MetadataUsageId;
extern RuntimeClass* StateHandlerU5BU5D_t1323790106_il2cpp_TypeInfo_var;
extern RuntimeClass* StateHandler_t105866779_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Lexer_State1_m1798213439_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State2_m3684245780_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State3_m3421380387_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State4_m2120686884_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State5_m2304916419_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State6_m4228892936_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State7_m3966904031_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State8_m2667415049_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State9_m1222018432_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State10_m1529890914_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State11_m136640487_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State12_m3207237752_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State13_m3116740413_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State14_m1291458963_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State15_m1787560179_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State16_m582896932_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State17_m2954849257_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State18_m962707759_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State19_m37393664_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State20_m1657765573_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State21_m264515146_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State22_m3335112411_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State23_m3244615072_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State24_m1419333622_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State25_m1915434838_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State26_m710771591_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State27_m3082723916_RuntimeMethod_var;
extern const RuntimeMethod* Lexer_State28_m1090582418_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6_FieldInfo_var;
extern const uint32_t Lexer_PopulateFsmTables_m1428324419_MetadataUsageId;
extern const uint32_t Lexer_ProcessEscChar_m3815213012_MetadataUsageId;
extern const uint32_t Lexer_State21_m264515146_MetadataUsageId;
extern const uint32_t Lexer_State22_m3335112411_MetadataUsageId;
extern const uint32_t Lexer_NextToken_m764348600_MetadataUsageId;
extern const RuntimeType* JsonData_t1524858407_0_0_0_var;
extern const uint32_t ObjectMetadata_get_ElementType_m609016881_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Current_m3310397926_MetadataUsageId;
extern RuntimeClass* IEnumerator_1_t4140357341_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4064315612_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3703576749_RuntimeMethod_var;
extern const uint32_t OrderedDictionaryEnumerator_get_Entry_m67332516_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Key_m3958560648_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_get_Value_m1806168108_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_MoveNext_m939529015_MetadataUsageId;
extern const uint32_t OrderedDictionaryEnumerator_Reset_m2029359593_MetadataUsageId;

struct PropertyInfoU5BU5D_t1461822886;
struct ParameterInfoU5BU5D_t390618515;
struct FieldInfoU5BU5D_t846150980;
struct TypeU5BU5D_t3940880105;
struct ObjectU5BU5D_t2843939325;
struct Int32U5BU5D_t385246372;
struct CharU5BU5D_t3528271667;
struct StateHandlerU5BU5D_t1323790106;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STACK_1_T3794335208_H
#define STACK_1_T3794335208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Int32>
struct  Stack_1_t3794335208  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t385246372* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____array_0)); }
	inline Int32U5BU5D_t385246372* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t385246372** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t385246372* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3794335208, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T3794335208_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_2)); }
	inline TextWriter_t3478189236 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t3478189236 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t3478189236 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
#ifndef DICTIONARY_2_T1780316962_H
#define DICTIONARY_2_T1780316962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t1780316962  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ImporterFuncU5BU5D_t332556975* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___valueSlots_7)); }
	inline ImporterFuncU5BU5D_t332556975* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ImporterFuncU5BU5D_t332556975** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ImporterFuncU5BU5D_t332556975* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1780316962_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t613051986 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1780316962_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t613051986 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t613051986 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t613051986 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1780316962_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef DICTIONARY_2_T27006016_H
#define DICTIONARY_2_T27006016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct  Dictionary_2_t27006016  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MethodInfoU5BU5D_t2572182361* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___valueSlots_7)); }
	inline MethodInfoU5BU5D_t2572182361* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MethodInfoU5BU5D_t2572182361* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t27006016_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2852677372 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t27006016_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2852677372 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2852677372 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2852677372 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T27006016_H
#ifndef LIST_1_T904547919_H
#define LIST_1_T904547919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct  List_1_t904547919  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t3282844708* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____items_1)); }
	inline PropertyMetadataU5BU5D_t3282844708* get__items_1() const { return ____items_1; }
	inline PropertyMetadataU5BU5D_t3282844708** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyMetadataU5BU5D_t3282844708* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t904547919, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t904547919_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PropertyMetadataU5BU5D_t3282844708* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t904547919_StaticFields, ___EmptyArray_4)); }
	inline PropertyMetadataU5BU5D_t3282844708* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PropertyMetadataU5BU5D_t3282844708** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PropertyMetadataU5BU5D_t3282844708* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T904547919_H
#ifndef DICTIONARY_2_T3512696772_H
#define DICTIONARY_2_T3512696772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct  Dictionary_2_t3512696772  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	PropertyMetadataU5BU5D_t3282844708* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___valueSlots_7)); }
	inline PropertyMetadataU5BU5D_t3282844708* get_valueSlots_7() const { return ___valueSlots_7; }
	inline PropertyMetadataU5BU5D_t3282844708** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(PropertyMetadataU5BU5D_t3282844708* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3512696772_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2133256424 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3512696772_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2133256424 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2133256424 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2133256424 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3512696772_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LEXER_T1514038666_H
#define LEXER_T1514038666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer
struct  Lexer_t1514038666  : public RuntimeObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t2331368794 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t283511965 * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___fsm_context_5)); }
	inline FsmContext_t2331368794 * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t2331368794 ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t2331368794 * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_context_5), value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___reader_8)); }
	inline TextReader_t283511965 * get_reader_8() const { return ___reader_8; }
	inline TextReader_t283511965 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t283511965 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((&___reader_8), value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___string_buffer_10)); }
	inline StringBuilder_t * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___string_buffer_10), value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier((&___string_value_11), value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_t1514038666, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_t1514038666_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t385246372* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t1323790106* ___fsm_handler_table_1;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache0
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache0_14;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache1_15;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache2
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache2_16;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache3
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache3_17;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache4
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache4_18;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache5
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache5_19;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache6
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache6_20;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache7
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache7_21;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache8
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache8_22;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache9
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache9_23;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheA
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheA_24;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheB
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheB_25;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheC
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheC_26;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheD
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheD_27;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheE
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheE_28;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cacheF
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cacheF_29;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache10
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache10_30;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache11
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache11_31;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache12
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache12_32;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache13
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache13_33;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache14
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache14_34;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache15
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache15_35;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache16
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache16_36;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache17
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache17_37;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache18
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache18_38;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache19
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache19_39;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1A
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache1A_40;
	// LitJson.Lexer/StateHandler LitJson.Lexer::<>f__mg$cache1B
	StateHandler_t105866779 * ___U3CU3Ef__mgU24cache1B_41;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t385246372* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t385246372** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t385246372* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_return_table_0), value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t1323790106* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t1323790106** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t1323790106* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___fsm_handler_table_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_25() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheB_25)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheB_25() const { return ___U3CU3Ef__mgU24cacheB_25; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheB_25() { return &___U3CU3Ef__mgU24cacheB_25; }
	inline void set_U3CU3Ef__mgU24cacheB_25(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheB_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_26() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheC_26)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheC_26() const { return ___U3CU3Ef__mgU24cacheC_26; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheC_26() { return &___U3CU3Ef__mgU24cacheC_26; }
	inline void set_U3CU3Ef__mgU24cacheC_26(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheC_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_27() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheD_27)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheD_27() const { return ___U3CU3Ef__mgU24cacheD_27; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheD_27() { return &___U3CU3Ef__mgU24cacheD_27; }
	inline void set_U3CU3Ef__mgU24cacheD_27(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheD_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_28() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheE_28)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheE_28() const { return ___U3CU3Ef__mgU24cacheE_28; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheE_28() { return &___U3CU3Ef__mgU24cacheE_28; }
	inline void set_U3CU3Ef__mgU24cacheE_28(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheE_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_29() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cacheF_29)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cacheF_29() const { return ___U3CU3Ef__mgU24cacheF_29; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cacheF_29() { return &___U3CU3Ef__mgU24cacheF_29; }
	inline void set_U3CU3Ef__mgU24cacheF_29(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cacheF_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_30() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache10_30)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache10_30() const { return ___U3CU3Ef__mgU24cache10_30; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache10_30() { return &___U3CU3Ef__mgU24cache10_30; }
	inline void set_U3CU3Ef__mgU24cache10_30(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache10_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache11_31() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache11_31)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache11_31() const { return ___U3CU3Ef__mgU24cache11_31; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache11_31() { return &___U3CU3Ef__mgU24cache11_31; }
	inline void set_U3CU3Ef__mgU24cache11_31(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache11_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache11_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache12_32() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache12_32)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache12_32() const { return ___U3CU3Ef__mgU24cache12_32; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache12_32() { return &___U3CU3Ef__mgU24cache12_32; }
	inline void set_U3CU3Ef__mgU24cache12_32(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache12_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache12_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache13_33() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache13_33)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache13_33() const { return ___U3CU3Ef__mgU24cache13_33; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache13_33() { return &___U3CU3Ef__mgU24cache13_33; }
	inline void set_U3CU3Ef__mgU24cache13_33(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache13_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache13_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache14_34() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache14_34)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache14_34() const { return ___U3CU3Ef__mgU24cache14_34; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache14_34() { return &___U3CU3Ef__mgU24cache14_34; }
	inline void set_U3CU3Ef__mgU24cache14_34(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache14_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache14_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache15_35() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache15_35)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache15_35() const { return ___U3CU3Ef__mgU24cache15_35; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache15_35() { return &___U3CU3Ef__mgU24cache15_35; }
	inline void set_U3CU3Ef__mgU24cache15_35(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache15_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache15_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache16_36() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache16_36)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache16_36() const { return ___U3CU3Ef__mgU24cache16_36; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache16_36() { return &___U3CU3Ef__mgU24cache16_36; }
	inline void set_U3CU3Ef__mgU24cache16_36(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache16_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache16_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache17_37() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache17_37)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache17_37() const { return ___U3CU3Ef__mgU24cache17_37; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache17_37() { return &___U3CU3Ef__mgU24cache17_37; }
	inline void set_U3CU3Ef__mgU24cache17_37(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache17_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache17_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache18_38() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache18_38)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache18_38() const { return ___U3CU3Ef__mgU24cache18_38; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache18_38() { return &___U3CU3Ef__mgU24cache18_38; }
	inline void set_U3CU3Ef__mgU24cache18_38(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache18_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache18_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache19_39() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache19_39)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache19_39() const { return ___U3CU3Ef__mgU24cache19_39; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache19_39() { return &___U3CU3Ef__mgU24cache19_39; }
	inline void set_U3CU3Ef__mgU24cache19_39(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache19_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache19_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1A_40() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache1A_40)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache1A_40() const { return ___U3CU3Ef__mgU24cache1A_40; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache1A_40() { return &___U3CU3Ef__mgU24cache1A_40; }
	inline void set_U3CU3Ef__mgU24cache1A_40(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache1A_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1A_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1B_41() { return static_cast<int32_t>(offsetof(Lexer_t1514038666_StaticFields, ___U3CU3Ef__mgU24cache1B_41)); }
	inline StateHandler_t105866779 * get_U3CU3Ef__mgU24cache1B_41() const { return ___U3CU3Ef__mgU24cache1B_41; }
	inline StateHandler_t105866779 ** get_address_of_U3CU3Ef__mgU24cache1B_41() { return &___U3CU3Ef__mgU24cache1B_41; }
	inline void set_U3CU3Ef__mgU24cache1B_41(StateHandler_t105866779 * value)
	{
		___U3CU3Ef__mgU24cache1B_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1B_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEXER_T1514038666_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T386339177_H
#define ORDEREDDICTIONARYENUMERATOR_T386339177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t386339177  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t386339177, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T386339177_H
#ifndef FSMCONTEXT_T2331368794_H
#define FSMCONTEXT_T2331368794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.FsmContext
struct  FsmContext_t2331368794  : public RuntimeObject
{
public:
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_t1514038666 * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;

public:
	inline static int32_t get_offset_of_Return_0() { return static_cast<int32_t>(offsetof(FsmContext_t2331368794, ___Return_0)); }
	inline bool get_Return_0() const { return ___Return_0; }
	inline bool* get_address_of_Return_0() { return &___Return_0; }
	inline void set_Return_0(bool value)
	{
		___Return_0 = value;
	}

	inline static int32_t get_offset_of_NextState_1() { return static_cast<int32_t>(offsetof(FsmContext_t2331368794, ___NextState_1)); }
	inline int32_t get_NextState_1() const { return ___NextState_1; }
	inline int32_t* get_address_of_NextState_1() { return &___NextState_1; }
	inline void set_NextState_1(int32_t value)
	{
		___NextState_1 = value;
	}

	inline static int32_t get_offset_of_L_2() { return static_cast<int32_t>(offsetof(FsmContext_t2331368794, ___L_2)); }
	inline Lexer_t1514038666 * get_L_2() const { return ___L_2; }
	inline Lexer_t1514038666 ** get_address_of_L_2() { return &___L_2; }
	inline void set_L_2(Lexer_t1514038666 * value)
	{
		___L_2 = value;
		Il2CppCodeGenWriteBarrier((&___L_2), value);
	}

	inline static int32_t get_offset_of_StateStack_3() { return static_cast<int32_t>(offsetof(FsmContext_t2331368794, ___StateStack_3)); }
	inline int32_t get_StateStack_3() const { return ___StateStack_3; }
	inline int32_t* get_address_of_StateStack_3() { return &___StateStack_3; }
	inline void set_StateStack_3(int32_t value)
	{
		___StateStack_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FSMCONTEXT_T2331368794_H
#ifndef STACK_1_T1854483454_H
#define STACK_1_T1854483454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_t1854483454  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t1224381814* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____array_0)); }
	inline WriterContextU5BU5D_t1224381814* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t1224381814** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t1224381814* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t1854483454, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T1854483454_H
#ifndef WRITERCONTEXT_T1011093999_H
#define WRITERCONTEXT_T1011093999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.WriterContext
struct  WriterContext_t1011093999  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_t1011093999, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITERCONTEXT_T1011093999_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
#ifndef DICTIONARY_2_T3568926999_H
#define DICTIONARY_2_T3568926999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct  Dictionary_2_t3568926999  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5DU5BU5D_t3365920845* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___valueSlots_7)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3568926999_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2970259689 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3568926999_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2970259689 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2970259689 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2970259689 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3568926999_H
#ifndef DICTIONARY_2_T921491721_H
#define DICTIONARY_2_T921491721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct  Dictionary_2_t921491721  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IDictionary_2U5BU5D_t2726772819* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___valueSlots_7)); }
	inline IDictionary_2U5BU5D_t2726772819* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IDictionary_2U5BU5D_t2726772819** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IDictionary_2U5BU5D_t2726772819* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t921491721_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2331111663 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t921491721_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2331111663 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2331111663 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2331111663 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T921491721_H
#ifndef JSONWRITER_T3570089748_H
#define JSONWRITER_T3570089748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonWriter
struct  JsonWriter_t3570089748  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t1011093999 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t1854483454 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t3528271667* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t3478189236 * ___writer_10;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___context_1)); }
	inline WriterContext_t1011093999 * get_context_1() const { return ___context_1; }
	inline WriterContext_t1011093999 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t1011093999 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___ctx_stack_2)); }
	inline Stack_1_t1854483454 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t1854483454 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t1854483454 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_stack_2), value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___hex_seq_4)); }
	inline CharU5BU5D_t3528271667* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t3528271667** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t3528271667* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((&___hex_seq_4), value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((&___inst_string_builder_7), value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748, ___writer_10)); }
	inline TextWriter_t3478189236 * get_writer_10() const { return ___writer_10; }
	inline TextWriter_t3478189236 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(TextWriter_t3478189236 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((&___writer_10), value);
	}
};

struct JsonWriter_t3570089748_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t435877138 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t3570089748_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t435877138 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t435877138 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t435877138 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((&___number_format_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONWRITER_T3570089748_H
#ifndef DICTIONARY_2_T3692140024_H
#define DICTIONARY_2_T3692140024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t3692140024  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IList_1U5BU5D_t2778516417* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___valueSlots_7)); }
	inline IList_1U5BU5D_t2778516417* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IList_1U5BU5D_t2778516417** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IList_1U5BU5D_t2778516417* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3692140024_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3059011428 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3692140024_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3059011428 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3059011428 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3059011428 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3692140024_H
#ifndef DICTIONARY_2_T1715664290_H
#define DICTIONARY_2_T1715664290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t1715664290  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectMetadataU5BU5D_t543634991* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___valueSlots_7)); }
	inline ObjectMetadataU5BU5D_t543634991* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectMetadataU5BU5D_t543634991** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectMetadataU5BU5D_t543634991* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1715664290_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t824130002 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1715664290_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t824130002 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t824130002 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t824130002 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1715664290_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef DICTIONARY_2_T691233_H
#define DICTIONARY_2_T691233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t691233  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ExporterFuncU5BU5D_t3613872852* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___valueSlots_7)); }
	inline ExporterFuncU5BU5D_t3613872852* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ExporterFuncU5BU5D_t3613872852** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ExporterFuncU5BU5D_t3613872852* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t691233_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3894367863 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t691233_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3894367863 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3894367863 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3894367863 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T691233_H
#ifndef DICTIONARY_2_T2688515417_H
#define DICTIONARY_2_T2688515417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_t2688515417  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IDictionary_2U5BU5D_t369565116* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___valueSlots_7)); }
	inline IDictionary_2U5BU5D_t369565116* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IDictionary_2U5BU5D_t369565116** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IDictionary_2U5BU5D_t369565116* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2688515417_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t650060127 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2688515417_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t650060127 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t650060127 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t650060127 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2688515417_H
#ifndef DICTIONARY_2_T935204471_H
#define DICTIONARY_2_T935204471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t935204471  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IDictionary_2U5BU5D_t2609190502* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___valueSlots_7)); }
	inline IDictionary_2U5BU5D_t2609190502* get_valueSlots_7() const { return ___valueSlots_7; }
	inline IDictionary_2U5BU5D_t2609190502** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(IDictionary_2U5BU5D_t2609190502* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t935204471_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2889685513 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t935204471_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2889685513 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2889685513 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2889685513 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T935204471_H
#ifndef DICTIONARY_2_T3338636003_H
#define DICTIONARY_2_T3338636003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t3338636003  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TypeU5BU5D_t3940880105* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ArrayMetadataU5BU5D_t363333322* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___keySlots_6)); }
	inline TypeU5BU5D_t3940880105* get_keySlots_6() const { return ___keySlots_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TypeU5BU5D_t3940880105* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___valueSlots_7)); }
	inline ArrayMetadataU5BU5D_t363333322* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ArrayMetadataU5BU5D_t363333322** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ArrayMetadataU5BU5D_t363333322* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3338636003_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t643828333 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3338636003_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t643828333 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t643828333 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t643828333 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3338636003_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef JSONMAPPER_T3815285241_H
#define JSONMAPPER_T3815285241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonMapper
struct  JsonMapper_t3815285241  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_t3815285241_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t3570089748 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache0
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache0_16;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache1
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache1_17;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache2
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache2_18;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache3
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache3_19;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache4
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache4_20;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache5
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache5_21;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache6
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache6_22;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache7
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache7_23;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache8
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache8_24;
	// LitJson.ExporterFunc LitJson.JsonMapper::<>f__am$cache9
	ExporterFunc_t1851311465 * ___U3CU3Ef__amU24cache9_25;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheA
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheA_26;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheB
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheB_27;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheC
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheC_28;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheD
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheD_29;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheE
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheE_30;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cacheF
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cacheF_31;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache10
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache10_32;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache11
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache11_33;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache12
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache12_34;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache13
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache13_35;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache14
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache14_36;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache15
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache15_37;
	// LitJson.ImporterFunc LitJson.JsonMapper::<>f__am$cache16
	ImporterFunc_t3630937194 * ___U3CU3Ef__amU24cache16_38;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache17
	WrapperFactory_t2158548929 * ___U3CU3Ef__amU24cache17_39;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache18
	WrapperFactory_t2158548929 * ___U3CU3Ef__amU24cache18_40;
	// LitJson.WrapperFactory LitJson.JsonMapper::<>f__am$cache19
	WrapperFactory_t2158548929 * ___U3CU3Ef__amU24cache19_41;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((&___datetime_format_1), value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((&___base_exporters_table_2), value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((&___custom_exporters_table_3), value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_importers_table_4), value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((&___custom_importers_table_5), value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_6), value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_metadata_lock_7), value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_8), value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((&___conv_ops_lock_9), value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_10), value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((&___object_metadata_lock_11), value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_12), value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((&___type_properties_lock_13), value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___static_writer_14)); }
	inline JsonWriter_t3570089748 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_t3570089748 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_t3570089748 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_14), value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((&___static_writer_lock_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_21() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache5_21)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache5_21() const { return ___U3CU3Ef__amU24cache5_21; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache5_21() { return &___U3CU3Ef__amU24cache5_21; }
	inline void set_U3CU3Ef__amU24cache5_21(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache5_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_22() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache6_22)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache6_22() const { return ___U3CU3Ef__amU24cache6_22; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache6_22() { return &___U3CU3Ef__amU24cache6_22; }
	inline void set_U3CU3Ef__amU24cache6_22(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache6_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_23() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache7_23)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache7_23() const { return ___U3CU3Ef__amU24cache7_23; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache7_23() { return &___U3CU3Ef__amU24cache7_23; }
	inline void set_U3CU3Ef__amU24cache7_23(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache7_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_24() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache8_24)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache8_24() const { return ___U3CU3Ef__amU24cache8_24; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache8_24() { return &___U3CU3Ef__amU24cache8_24; }
	inline void set_U3CU3Ef__amU24cache8_24(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache8_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache8_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_25() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache9_25)); }
	inline ExporterFunc_t1851311465 * get_U3CU3Ef__amU24cache9_25() const { return ___U3CU3Ef__amU24cache9_25; }
	inline ExporterFunc_t1851311465 ** get_address_of_U3CU3Ef__amU24cache9_25() { return &___U3CU3Ef__amU24cache9_25; }
	inline void set_U3CU3Ef__amU24cache9_25(ExporterFunc_t1851311465 * value)
	{
		___U3CU3Ef__amU24cache9_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache9_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_26() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheA_26)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheA_26() const { return ___U3CU3Ef__amU24cacheA_26; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheA_26() { return &___U3CU3Ef__amU24cacheA_26; }
	inline void set_U3CU3Ef__amU24cacheA_26(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheA_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheA_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_27() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheB_27)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheB_27() const { return ___U3CU3Ef__amU24cacheB_27; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheB_27() { return &___U3CU3Ef__amU24cacheB_27; }
	inline void set_U3CU3Ef__amU24cacheB_27(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheB_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_28() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheC_28)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheC_28() const { return ___U3CU3Ef__amU24cacheC_28; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheC_28() { return &___U3CU3Ef__amU24cacheC_28; }
	inline void set_U3CU3Ef__amU24cacheC_28(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheC_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheC_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_29() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheD_29)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheD_29() const { return ___U3CU3Ef__amU24cacheD_29; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheD_29() { return &___U3CU3Ef__amU24cacheD_29; }
	inline void set_U3CU3Ef__amU24cacheD_29(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheD_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheD_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_30() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheE_30)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheE_30() const { return ___U3CU3Ef__amU24cacheE_30; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheE_30() { return &___U3CU3Ef__amU24cacheE_30; }
	inline void set_U3CU3Ef__amU24cacheE_30(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheE_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheE_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_31() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cacheF_31)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cacheF_31() const { return ___U3CU3Ef__amU24cacheF_31; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cacheF_31() { return &___U3CU3Ef__amU24cacheF_31; }
	inline void set_U3CU3Ef__amU24cacheF_31(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cacheF_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheF_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_32() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache10_32)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache10_32() const { return ___U3CU3Ef__amU24cache10_32; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache10_32() { return &___U3CU3Ef__amU24cache10_32; }
	inline void set_U3CU3Ef__amU24cache10_32(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache10_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache10_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_33() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache11_33)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache11_33() const { return ___U3CU3Ef__amU24cache11_33; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache11_33() { return &___U3CU3Ef__amU24cache11_33; }
	inline void set_U3CU3Ef__amU24cache11_33(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache11_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache11_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_34() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache12_34)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache12_34() const { return ___U3CU3Ef__amU24cache12_34; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache12_34() { return &___U3CU3Ef__amU24cache12_34; }
	inline void set_U3CU3Ef__amU24cache12_34(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache12_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache12_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_35() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache13_35)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache13_35() const { return ___U3CU3Ef__amU24cache13_35; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache13_35() { return &___U3CU3Ef__amU24cache13_35; }
	inline void set_U3CU3Ef__amU24cache13_35(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache13_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache13_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_36() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache14_36)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache14_36() const { return ___U3CU3Ef__amU24cache14_36; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache14_36() { return &___U3CU3Ef__amU24cache14_36; }
	inline void set_U3CU3Ef__amU24cache14_36(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache14_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache14_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_37() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache15_37)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache15_37() const { return ___U3CU3Ef__amU24cache15_37; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache15_37() { return &___U3CU3Ef__amU24cache15_37; }
	inline void set_U3CU3Ef__amU24cache15_37(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache15_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache15_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_38() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache16_38)); }
	inline ImporterFunc_t3630937194 * get_U3CU3Ef__amU24cache16_38() const { return ___U3CU3Ef__amU24cache16_38; }
	inline ImporterFunc_t3630937194 ** get_address_of_U3CU3Ef__amU24cache16_38() { return &___U3CU3Ef__amU24cache16_38; }
	inline void set_U3CU3Ef__amU24cache16_38(ImporterFunc_t3630937194 * value)
	{
		___U3CU3Ef__amU24cache16_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache16_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_39() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache17_39)); }
	inline WrapperFactory_t2158548929 * get_U3CU3Ef__amU24cache17_39() const { return ___U3CU3Ef__amU24cache17_39; }
	inline WrapperFactory_t2158548929 ** get_address_of_U3CU3Ef__amU24cache17_39() { return &___U3CU3Ef__amU24cache17_39; }
	inline void set_U3CU3Ef__amU24cache17_39(WrapperFactory_t2158548929 * value)
	{
		___U3CU3Ef__amU24cache17_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache17_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_40() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache18_40)); }
	inline WrapperFactory_t2158548929 * get_U3CU3Ef__amU24cache18_40() const { return ___U3CU3Ef__amU24cache18_40; }
	inline WrapperFactory_t2158548929 ** get_address_of_U3CU3Ef__amU24cache18_40() { return &___U3CU3Ef__amU24cache18_40; }
	inline void set_U3CU3Ef__amU24cache18_40(WrapperFactory_t2158548929 * value)
	{
		___U3CU3Ef__amU24cache18_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache18_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_41() { return static_cast<int32_t>(offsetof(JsonMapper_t3815285241_StaticFields, ___U3CU3Ef__amU24cache19_41)); }
	inline WrapperFactory_t2158548929 * get_U3CU3Ef__amU24cache19_41() const { return ___U3CU3Ef__amU24cache19_41; }
	inline WrapperFactory_t2158548929 ** get_address_of_U3CU3Ef__amU24cache19_41() { return &___U3CU3Ef__amU24cache19_41; }
	inline void set_U3CU3Ef__amU24cache19_41(WrapperFactory_t2158548929 * value)
	{
		___U3CU3Ef__amU24cache19_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache19_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONMAPPER_T3815285241_H
#ifndef U24ARRAYTYPEU3D12_T2488454196_H
#define U24ARRAYTYPEU3D12_T2488454196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454196 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454196__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454196_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DICTIONARYENTRY_T3123975638_H
#define DICTIONARYENTRY_T3123975638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t3123975638 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t3123975638, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t3123975638_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T3123975638_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_1;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_2;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_nextChar_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_2)); }
	inline int32_t get_nextChar_2() const { return ___nextChar_2; }
	inline int32_t* get_address_of_nextChar_2() { return &___nextChar_2; }
	inline void set_nextChar_2(int32_t value)
	{
		___nextChar_2 = value;
	}

	inline static int32_t get_offset_of_sourceLength_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_3)); }
	inline int32_t get_sourceLength_3() const { return ___sourceLength_3; }
	inline int32_t* get_address_of_sourceLength_3() { return &___sourceLength_3; }
	inline void set_sourceLength_3(int32_t value)
	{
		___sourceLength_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef STRINGWRITER_T802263757_H
#define STRINGWRITER_T802263757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t802263757  : public TextWriter_t3478189236
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t802263757, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T802263757_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef PROPERTYMETADATA_T3727440473_H
#define PROPERTYMETADATA_T3727440473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.PropertyMetadata
struct  PropertyMetadata_t3727440473 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((&___Info_0), value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t3727440473, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t3727440473_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t3727440473_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
#endif // PROPERTYMETADATA_T3727440473_H
#ifndef OBJECTMETADATA_T3566284522_H
#define OBJECTMETADATA_T3566284522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ObjectMetadata
struct  ObjectMetadata_t3566284522 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t3566284522, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t3566284522_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t3566284522_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
#endif // OBJECTMETADATA_T3566284522_H
#ifndef ARRAYMETADATA_T894288939_H
#define ARRAYMETADATA_T894288939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ArrayMetadata
struct  ArrayMetadata_t894288939 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___element_type_0), value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t894288939, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t894288939_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t894288939_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
#endif // ARRAYMETADATA_T894288939_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef KEYVALUEPAIR_2_T3707786873_H
#define KEYVALUEPAIR_2_T3707786873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct  KeyValuePair_2_t3707786873 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_t1524858407 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3707786873, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3707786873, ___value_1)); }
	inline JsonData_t1524858407 * get_value_1() const { return ___value_1; }
	inline JsonData_t1524858407 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_t1524858407 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3707786873_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef U24ARRAYTYPEU3D112_T1514025265_H
#define U24ARRAYTYPEU3D112_T1514025265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=112
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D112_t1514025265 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D112_t1514025265__padding[112];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D112_T1514025265_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef JSONEXCEPTION_T3682484112_H
#define JSONEXCEPTION_T3682484112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonException
struct  JsonException_t3682484112  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONEXCEPTION_T3682484112_H
#ifndef CONDITION_T3240125930_H
#define CONDITION_T3240125930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Condition
struct  Condition_t3240125930 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Condition_t3240125930, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITION_T3240125930_H
#ifndef PARSERTOKEN_T2380208742_H
#define PARSERTOKEN_T2380208742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ParserToken
struct  ParserToken_t2380208742 
{
public:
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParserToken_t2380208742, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERTOKEN_T2380208742_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef DATETIMEFORMATFLAGS_T1884407083_H
#define DATETIMEFORMATFLAGS_T1884407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t1884407083 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t1884407083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATFLAGS_T1884407083_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef JSONTOKEN_T3605538862_H
#define JSONTOKEN_T3605538862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonToken
struct  JsonToken_t3605538862 
{
public:
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t3605538862, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKEN_T3605538862_H
#ifndef JSONTYPE_T2731125707_H
#define JSONTYPE_T2731125707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonType
struct  JsonType_t2731125707 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonType_t2731125707, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTYPE_T2731125707_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-148E9E3E864CD628C70D3DC1D8309483BD8C0E89
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-AAF72C1002FDBCAE040DAE16A10D82184CE83679
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-5CF7299F6558A8AC3F821B4F2F65F23798D319D3
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-B67A7FB4648C62F6A1337CA473436D0E787E8633
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-FAD52931F5B79811D31566BB18B6E0B5D2E2A164
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5;
	// <PrivateImplementationDetails>/$ArrayType=112 <PrivateImplementationDetails>::$field-50B1635D1FB2907A171B71751E1A3FA79423CA17
	U24ArrayTypeU3D112_t1514025265  ___U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6;

public:
	inline static int32_t get_offset_of_U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() const { return ___U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() { return &___U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0; }
	inline void set_U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1() const { return ___U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1() { return &___U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1; }
	inline void set_U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() const { return ___U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() { return &___U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2; }
	inline void set_U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3() const { return ___U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3() { return &___U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3; }
	inline void set_U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4() const { return ___U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4() { return &___U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4; }
	inline void set_U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5() const { return ___U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5() { return &___U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5; }
	inline void set_U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6)); }
	inline U24ArrayTypeU3D112_t1514025265  get_U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6() const { return ___U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6; }
	inline U24ArrayTypeU3D112_t1514025265 * get_address_of_U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6() { return &___U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6; }
	inline void set_U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6(U24ArrayTypeU3D112_t1514025265  value)
	{
		___U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef JSONREADER_T836887441_H
#define JSONREADER_T836887441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonReader
struct  JsonReader_t836887441  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t3794335208 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_t1514038666 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t283511965 * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_12;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_13;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___automaton_stack_1)); }
	inline Stack_1_t3794335208 * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_t3794335208 ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_t3794335208 * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier((&___automaton_stack_1), value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___lexer_6)); }
	inline Lexer_t1514038666 * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_t1514038666 ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_t1514038666 * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier((&___lexer_6), value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___reader_10)); }
	inline TextReader_t283511965 * get_reader_10() const { return ___reader_10; }
	inline TextReader_t283511965 ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t283511965 * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((&___reader_10), value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_token_value_12() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___token_value_12)); }
	inline RuntimeObject * get_token_value_12() const { return ___token_value_12; }
	inline RuntimeObject ** get_address_of_token_value_12() { return &___token_value_12; }
	inline void set_token_value_12(RuntimeObject * value)
	{
		___token_value_12 = value;
		Il2CppCodeGenWriteBarrier((&___token_value_12), value);
	}

	inline static int32_t get_offset_of_token_13() { return static_cast<int32_t>(offsetof(JsonReader_t836887441, ___token_13)); }
	inline int32_t get_token_13() const { return ___token_13; }
	inline int32_t* get_address_of_token_13() { return &___token_13; }
	inline void set_token_13(int32_t value)
	{
		___token_13 = value;
	}
};

struct JsonReader_t836887441_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_t836887441_StaticFields, ___parse_table_0)); }
	inline RuntimeObject* get_parse_table_0() const { return ___parse_table_0; }
	inline RuntimeObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(RuntimeObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier((&___parse_table_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONREADER_T836887441_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef JSONDATA_T1524858407_H
#define JSONDATA_T1524858407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.JsonData
struct  JsonData_t1524858407  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((&___inst_array_0), value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((&___inst_object_5), value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((&___inst_string_6), value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((&___json_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_t1524858407, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((&___object_list_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONDATA_T1524858407_H
#ifndef DATETIMEFORMATINFO_T2405853701_H
#define DATETIMEFORMATINFO_T2405853701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t2405853701  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_10;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_11;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_13;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_14;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_15;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_16;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_17;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_18;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_19;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_20;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_21;
	// System.String System.Globalization.DateTimeFormatInfo::_RFC1123Pattern
	String_t* ____RFC1123Pattern_22;
	// System.String System.Globalization.DateTimeFormatInfo::_SortableDateTimePattern
	String_t* ____SortableDateTimePattern_23;
	// System.String System.Globalization.DateTimeFormatInfo::_UniversalSortableDateTimePattern
	String_t* ____UniversalSortableDateTimePattern_24;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_25;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t1661121569 * ___calendar_26;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t1281789340* ___abbreviatedDayNames_28;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t1281789340* ___dayNames_29;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t1281789340* ___monthNames_30;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t1281789340* ___abbreviatedMonthNames_31;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t1281789340* ___allShortDatePatterns_32;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t1281789340* ___allLongDatePatterns_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t1281789340* ___allShortTimePatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t1281789340* ___allLongTimePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthDayPatterns
	StringU5BU5D_t1281789340* ___monthDayPatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::yearMonthPatterns
	StringU5BU5D_t1281789340* ___yearMonthPatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::shortDayNames
	StringU5BU5D_t1281789340* ___shortDayNames_38;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_39;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_40;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_41;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_43;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_44;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_45;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t1281789340* ___m_eraNames_46;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEraNames_47;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t1281789340* ___m_abbrevEnglishEraNames_48;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t1281789340* ___m_dateWords_49;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t385246372* ___optionalCalendars_50;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t1281789340* ___m_superShortDayNames_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t1281789340* ___genitiveMonthNames_52;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t1281789340* ___m_genitiveAbbreviatedMonthNames_53;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t1281789340* ___leapYearMonthNames_54;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_55;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_56;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::all_date_time_patterns
	StringU5BU5D_t1281789340* ___all_date_time_patterns_57;

public:
	inline static int32_t get_offset_of_m_isReadOnly_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isReadOnly_10)); }
	inline bool get_m_isReadOnly_10() const { return ___m_isReadOnly_10; }
	inline bool* get_address_of_m_isReadOnly_10() { return &___m_isReadOnly_10; }
	inline void set_m_isReadOnly_10(bool value)
	{
		___m_isReadOnly_10 = value;
	}

	inline static int32_t get_offset_of_amDesignator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___amDesignator_11)); }
	inline String_t* get_amDesignator_11() const { return ___amDesignator_11; }
	inline String_t** get_address_of_amDesignator_11() { return &___amDesignator_11; }
	inline void set_amDesignator_11(String_t* value)
	{
		___amDesignator_11 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_11), value);
	}

	inline static int32_t get_offset_of_pmDesignator_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___pmDesignator_12)); }
	inline String_t* get_pmDesignator_12() const { return ___pmDesignator_12; }
	inline String_t** get_address_of_pmDesignator_12() { return &___pmDesignator_12; }
	inline void set_pmDesignator_12(String_t* value)
	{
		___pmDesignator_12 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_12), value);
	}

	inline static int32_t get_offset_of_dateSeparator_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dateSeparator_13)); }
	inline String_t* get_dateSeparator_13() const { return ___dateSeparator_13; }
	inline String_t** get_address_of_dateSeparator_13() { return &___dateSeparator_13; }
	inline void set_dateSeparator_13(String_t* value)
	{
		___dateSeparator_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_13), value);
	}

	inline static int32_t get_offset_of_timeSeparator_14() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___timeSeparator_14)); }
	inline String_t* get_timeSeparator_14() const { return ___timeSeparator_14; }
	inline String_t** get_address_of_timeSeparator_14() { return &___timeSeparator_14; }
	inline void set_timeSeparator_14(String_t* value)
	{
		___timeSeparator_14 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_14), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_15() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDatePattern_15)); }
	inline String_t* get_shortDatePattern_15() const { return ___shortDatePattern_15; }
	inline String_t** get_address_of_shortDatePattern_15() { return &___shortDatePattern_15; }
	inline void set_shortDatePattern_15(String_t* value)
	{
		___shortDatePattern_15 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_15), value);
	}

	inline static int32_t get_offset_of_longDatePattern_16() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longDatePattern_16)); }
	inline String_t* get_longDatePattern_16() const { return ___longDatePattern_16; }
	inline String_t** get_address_of_longDatePattern_16() { return &___longDatePattern_16; }
	inline void set_longDatePattern_16(String_t* value)
	{
		___longDatePattern_16 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_16), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortTimePattern_17)); }
	inline String_t* get_shortTimePattern_17() const { return ___shortTimePattern_17; }
	inline String_t** get_address_of_shortTimePattern_17() { return &___shortTimePattern_17; }
	inline void set_shortTimePattern_17(String_t* value)
	{
		___shortTimePattern_17 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_17), value);
	}

	inline static int32_t get_offset_of_longTimePattern_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___longTimePattern_18)); }
	inline String_t* get_longTimePattern_18() const { return ___longTimePattern_18; }
	inline String_t** get_address_of_longTimePattern_18() { return &___longTimePattern_18; }
	inline void set_longTimePattern_18(String_t* value)
	{
		___longTimePattern_18 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_18), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPattern_19)); }
	inline String_t* get_monthDayPattern_19() const { return ___monthDayPattern_19; }
	inline String_t** get_address_of_monthDayPattern_19() { return &___monthDayPattern_19; }
	inline void set_monthDayPattern_19(String_t* value)
	{
		___monthDayPattern_19 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_19), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPattern_20)); }
	inline String_t* get_yearMonthPattern_20() const { return ___yearMonthPattern_20; }
	inline String_t** get_address_of_yearMonthPattern_20() { return &___yearMonthPattern_20; }
	inline void set_yearMonthPattern_20(String_t* value)
	{
		___yearMonthPattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_20), value);
	}

	inline static int32_t get_offset_of_fullDateTimePattern_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___fullDateTimePattern_21)); }
	inline String_t* get_fullDateTimePattern_21() const { return ___fullDateTimePattern_21; }
	inline String_t** get_address_of_fullDateTimePattern_21() { return &___fullDateTimePattern_21; }
	inline void set_fullDateTimePattern_21(String_t* value)
	{
		___fullDateTimePattern_21 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_21), value);
	}

	inline static int32_t get_offset_of__RFC1123Pattern_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____RFC1123Pattern_22)); }
	inline String_t* get__RFC1123Pattern_22() const { return ____RFC1123Pattern_22; }
	inline String_t** get_address_of__RFC1123Pattern_22() { return &____RFC1123Pattern_22; }
	inline void set__RFC1123Pattern_22(String_t* value)
	{
		____RFC1123Pattern_22 = value;
		Il2CppCodeGenWriteBarrier((&____RFC1123Pattern_22), value);
	}

	inline static int32_t get_offset_of__SortableDateTimePattern_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____SortableDateTimePattern_23)); }
	inline String_t* get__SortableDateTimePattern_23() const { return ____SortableDateTimePattern_23; }
	inline String_t** get_address_of__SortableDateTimePattern_23() { return &____SortableDateTimePattern_23; }
	inline void set__SortableDateTimePattern_23(String_t* value)
	{
		____SortableDateTimePattern_23 = value;
		Il2CppCodeGenWriteBarrier((&____SortableDateTimePattern_23), value);
	}

	inline static int32_t get_offset_of__UniversalSortableDateTimePattern_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ____UniversalSortableDateTimePattern_24)); }
	inline String_t* get__UniversalSortableDateTimePattern_24() const { return ____UniversalSortableDateTimePattern_24; }
	inline String_t** get_address_of__UniversalSortableDateTimePattern_24() { return &____UniversalSortableDateTimePattern_24; }
	inline void set__UniversalSortableDateTimePattern_24(String_t* value)
	{
		____UniversalSortableDateTimePattern_24 = value;
		Il2CppCodeGenWriteBarrier((&____UniversalSortableDateTimePattern_24), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___firstDayOfWeek_25)); }
	inline int32_t get_firstDayOfWeek_25() const { return ___firstDayOfWeek_25; }
	inline int32_t* get_address_of_firstDayOfWeek_25() { return &___firstDayOfWeek_25; }
	inline void set_firstDayOfWeek_25(int32_t value)
	{
		___firstDayOfWeek_25 = value;
	}

	inline static int32_t get_offset_of_calendar_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendar_26)); }
	inline Calendar_t1661121569 * get_calendar_26() const { return ___calendar_26; }
	inline Calendar_t1661121569 ** get_address_of_calendar_26() { return &___calendar_26; }
	inline void set_calendar_26(Calendar_t1661121569 * value)
	{
		___calendar_26 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_26), value);
	}

	inline static int32_t get_offset_of_calendarWeekRule_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___calendarWeekRule_27)); }
	inline int32_t get_calendarWeekRule_27() const { return ___calendarWeekRule_27; }
	inline int32_t* get_address_of_calendarWeekRule_27() { return &___calendarWeekRule_27; }
	inline void set_calendarWeekRule_27(int32_t value)
	{
		___calendarWeekRule_27 = value;
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedDayNames_28)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedDayNames_28() const { return ___abbreviatedDayNames_28; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedDayNames_28() { return &___abbreviatedDayNames_28; }
	inline void set_abbreviatedDayNames_28(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedDayNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_28), value);
	}

	inline static int32_t get_offset_of_dayNames_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___dayNames_29)); }
	inline StringU5BU5D_t1281789340* get_dayNames_29() const { return ___dayNames_29; }
	inline StringU5BU5D_t1281789340** get_address_of_dayNames_29() { return &___dayNames_29; }
	inline void set_dayNames_29(StringU5BU5D_t1281789340* value)
	{
		___dayNames_29 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_29), value);
	}

	inline static int32_t get_offset_of_monthNames_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthNames_30)); }
	inline StringU5BU5D_t1281789340* get_monthNames_30() const { return ___monthNames_30; }
	inline StringU5BU5D_t1281789340** get_address_of_monthNames_30() { return &___monthNames_30; }
	inline void set_monthNames_30(StringU5BU5D_t1281789340* value)
	{
		___monthNames_30 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_30), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___abbreviatedMonthNames_31)); }
	inline StringU5BU5D_t1281789340* get_abbreviatedMonthNames_31() const { return ___abbreviatedMonthNames_31; }
	inline StringU5BU5D_t1281789340** get_address_of_abbreviatedMonthNames_31() { return &___abbreviatedMonthNames_31; }
	inline void set_abbreviatedMonthNames_31(StringU5BU5D_t1281789340* value)
	{
		___abbreviatedMonthNames_31 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_31), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortDatePatterns_32)); }
	inline StringU5BU5D_t1281789340* get_allShortDatePatterns_32() const { return ___allShortDatePatterns_32; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortDatePatterns_32() { return &___allShortDatePatterns_32; }
	inline void set_allShortDatePatterns_32(StringU5BU5D_t1281789340* value)
	{
		___allShortDatePatterns_32 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_32), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongDatePatterns_33)); }
	inline StringU5BU5D_t1281789340* get_allLongDatePatterns_33() const { return ___allLongDatePatterns_33; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongDatePatterns_33() { return &___allLongDatePatterns_33; }
	inline void set_allLongDatePatterns_33(StringU5BU5D_t1281789340* value)
	{
		___allLongDatePatterns_33 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_33), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allShortTimePatterns_34)); }
	inline StringU5BU5D_t1281789340* get_allShortTimePatterns_34() const { return ___allShortTimePatterns_34; }
	inline StringU5BU5D_t1281789340** get_address_of_allShortTimePatterns_34() { return &___allShortTimePatterns_34; }
	inline void set_allShortTimePatterns_34(StringU5BU5D_t1281789340* value)
	{
		___allShortTimePatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_34), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___allLongTimePatterns_35)); }
	inline StringU5BU5D_t1281789340* get_allLongTimePatterns_35() const { return ___allLongTimePatterns_35; }
	inline StringU5BU5D_t1281789340** get_address_of_allLongTimePatterns_35() { return &___allLongTimePatterns_35; }
	inline void set_allLongTimePatterns_35(StringU5BU5D_t1281789340* value)
	{
		___allLongTimePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_35), value);
	}

	inline static int32_t get_offset_of_monthDayPatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___monthDayPatterns_36)); }
	inline StringU5BU5D_t1281789340* get_monthDayPatterns_36() const { return ___monthDayPatterns_36; }
	inline StringU5BU5D_t1281789340** get_address_of_monthDayPatterns_36() { return &___monthDayPatterns_36; }
	inline void set_monthDayPatterns_36(StringU5BU5D_t1281789340* value)
	{
		___monthDayPatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPatterns_36), value);
	}

	inline static int32_t get_offset_of_yearMonthPatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___yearMonthPatterns_37)); }
	inline StringU5BU5D_t1281789340* get_yearMonthPatterns_37() const { return ___yearMonthPatterns_37; }
	inline StringU5BU5D_t1281789340** get_address_of_yearMonthPatterns_37() { return &___yearMonthPatterns_37; }
	inline void set_yearMonthPatterns_37(StringU5BU5D_t1281789340* value)
	{
		___yearMonthPatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPatterns_37), value);
	}

	inline static int32_t get_offset_of_shortDayNames_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___shortDayNames_38)); }
	inline StringU5BU5D_t1281789340* get_shortDayNames_38() const { return ___shortDayNames_38; }
	inline StringU5BU5D_t1281789340** get_address_of_shortDayNames_38() { return &___shortDayNames_38; }
	inline void set_shortDayNames_38(StringU5BU5D_t1281789340* value)
	{
		___shortDayNames_38 = value;
		Il2CppCodeGenWriteBarrier((&___shortDayNames_38), value);
	}

	inline static int32_t get_offset_of_nDataItem_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___nDataItem_39)); }
	inline int32_t get_nDataItem_39() const { return ___nDataItem_39; }
	inline int32_t* get_address_of_nDataItem_39() { return &___nDataItem_39; }
	inline void set_nDataItem_39(int32_t value)
	{
		___nDataItem_39 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_useUserOverride_40)); }
	inline bool get_m_useUserOverride_40() const { return ___m_useUserOverride_40; }
	inline bool* get_address_of_m_useUserOverride_40() { return &___m_useUserOverride_40; }
	inline void set_m_useUserOverride_40(bool value)
	{
		___m_useUserOverride_40 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_isDefaultCalendar_41)); }
	inline bool get_m_isDefaultCalendar_41() const { return ___m_isDefaultCalendar_41; }
	inline bool* get_address_of_m_isDefaultCalendar_41() { return &___m_isDefaultCalendar_41; }
	inline void set_m_isDefaultCalendar_41(bool value)
	{
		___m_isDefaultCalendar_41 = value;
	}

	inline static int32_t get_offset_of_CultureID_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___CultureID_42)); }
	inline int32_t get_CultureID_42() const { return ___CultureID_42; }
	inline int32_t* get_address_of_CultureID_42() { return &___CultureID_42; }
	inline void set_CultureID_42(int32_t value)
	{
		___CultureID_42 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_43() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___bUseCalendarInfo_43)); }
	inline bool get_bUseCalendarInfo_43() const { return ___bUseCalendarInfo_43; }
	inline bool* get_address_of_bUseCalendarInfo_43() { return &___bUseCalendarInfo_43; }
	inline void set_bUseCalendarInfo_43(bool value)
	{
		___bUseCalendarInfo_43 = value;
	}

	inline static int32_t get_offset_of_generalShortTimePattern_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalShortTimePattern_44)); }
	inline String_t* get_generalShortTimePattern_44() const { return ___generalShortTimePattern_44; }
	inline String_t** get_address_of_generalShortTimePattern_44() { return &___generalShortTimePattern_44; }
	inline void set_generalShortTimePattern_44(String_t* value)
	{
		___generalShortTimePattern_44 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_44), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___generalLongTimePattern_45)); }
	inline String_t* get_generalLongTimePattern_45() const { return ___generalLongTimePattern_45; }
	inline String_t** get_address_of_generalLongTimePattern_45() { return &___generalLongTimePattern_45; }
	inline void set_generalLongTimePattern_45(String_t* value)
	{
		___generalLongTimePattern_45 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_45), value);
	}

	inline static int32_t get_offset_of_m_eraNames_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_eraNames_46)); }
	inline StringU5BU5D_t1281789340* get_m_eraNames_46() const { return ___m_eraNames_46; }
	inline StringU5BU5D_t1281789340** get_address_of_m_eraNames_46() { return &___m_eraNames_46; }
	inline void set_m_eraNames_46(StringU5BU5D_t1281789340* value)
	{
		___m_eraNames_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_46), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEraNames_47)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEraNames_47() const { return ___m_abbrevEraNames_47; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEraNames_47() { return &___m_abbrevEraNames_47; }
	inline void set_m_abbrevEraNames_47(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEraNames_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_47), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_abbrevEnglishEraNames_48)); }
	inline StringU5BU5D_t1281789340* get_m_abbrevEnglishEraNames_48() const { return ___m_abbrevEnglishEraNames_48; }
	inline StringU5BU5D_t1281789340** get_address_of_m_abbrevEnglishEraNames_48() { return &___m_abbrevEnglishEraNames_48; }
	inline void set_m_abbrevEnglishEraNames_48(StringU5BU5D_t1281789340* value)
	{
		___m_abbrevEnglishEraNames_48 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_48), value);
	}

	inline static int32_t get_offset_of_m_dateWords_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_dateWords_49)); }
	inline StringU5BU5D_t1281789340* get_m_dateWords_49() const { return ___m_dateWords_49; }
	inline StringU5BU5D_t1281789340** get_address_of_m_dateWords_49() { return &___m_dateWords_49; }
	inline void set_m_dateWords_49(StringU5BU5D_t1281789340* value)
	{
		___m_dateWords_49 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_49), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___optionalCalendars_50)); }
	inline Int32U5BU5D_t385246372* get_optionalCalendars_50() const { return ___optionalCalendars_50; }
	inline Int32U5BU5D_t385246372** get_address_of_optionalCalendars_50() { return &___optionalCalendars_50; }
	inline void set_optionalCalendars_50(Int32U5BU5D_t385246372* value)
	{
		___optionalCalendars_50 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_50), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_superShortDayNames_51)); }
	inline StringU5BU5D_t1281789340* get_m_superShortDayNames_51() const { return ___m_superShortDayNames_51; }
	inline StringU5BU5D_t1281789340** get_address_of_m_superShortDayNames_51() { return &___m_superShortDayNames_51; }
	inline void set_m_superShortDayNames_51(StringU5BU5D_t1281789340* value)
	{
		___m_superShortDayNames_51 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_51), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___genitiveMonthNames_52)); }
	inline StringU5BU5D_t1281789340* get_genitiveMonthNames_52() const { return ___genitiveMonthNames_52; }
	inline StringU5BU5D_t1281789340** get_address_of_genitiveMonthNames_52() { return &___genitiveMonthNames_52; }
	inline void set_genitiveMonthNames_52(StringU5BU5D_t1281789340* value)
	{
		___genitiveMonthNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_52), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_genitiveAbbreviatedMonthNames_53)); }
	inline StringU5BU5D_t1281789340* get_m_genitiveAbbreviatedMonthNames_53() const { return ___m_genitiveAbbreviatedMonthNames_53; }
	inline StringU5BU5D_t1281789340** get_address_of_m_genitiveAbbreviatedMonthNames_53() { return &___m_genitiveAbbreviatedMonthNames_53; }
	inline void set_m_genitiveAbbreviatedMonthNames_53(StringU5BU5D_t1281789340* value)
	{
		___m_genitiveAbbreviatedMonthNames_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_53), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___leapYearMonthNames_54)); }
	inline StringU5BU5D_t1281789340* get_leapYearMonthNames_54() const { return ___leapYearMonthNames_54; }
	inline StringU5BU5D_t1281789340** get_address_of_leapYearMonthNames_54() { return &___leapYearMonthNames_54; }
	inline void set_leapYearMonthNames_54(StringU5BU5D_t1281789340* value)
	{
		___leapYearMonthNames_54 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_54), value);
	}

	inline static int32_t get_offset_of_formatFlags_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___formatFlags_55)); }
	inline int32_t get_formatFlags_55() const { return ___formatFlags_55; }
	inline int32_t* get_address_of_formatFlags_55() { return &___formatFlags_55; }
	inline void set_formatFlags_55(int32_t value)
	{
		___formatFlags_55 = value;
	}

	inline static int32_t get_offset_of_m_name_56() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___m_name_56)); }
	inline String_t* get_m_name_56() const { return ___m_name_56; }
	inline String_t** get_address_of_m_name_56() { return &___m_name_56; }
	inline void set_m_name_56(String_t* value)
	{
		___m_name_56 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_56), value);
	}

	inline static int32_t get_offset_of_all_date_time_patterns_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701, ___all_date_time_patterns_57)); }
	inline StringU5BU5D_t1281789340* get_all_date_time_patterns_57() const { return ___all_date_time_patterns_57; }
	inline StringU5BU5D_t1281789340** get_address_of_all_date_time_patterns_57() { return &___all_date_time_patterns_57; }
	inline void set_all_date_time_patterns_57(StringU5BU5D_t1281789340* value)
	{
		___all_date_time_patterns_57 = value;
		Il2CppCodeGenWriteBarrier((&___all_date_time_patterns_57), value);
	}
};

struct DateTimeFormatInfo_t2405853701_StaticFields
{
public:
	// System.String System.Globalization.DateTimeFormatInfo::MSG_READONLY
	String_t* ___MSG_READONLY_1;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_MONTH
	String_t* ___MSG_ARRAYSIZE_MONTH_2;
	// System.String System.Globalization.DateTimeFormatInfo::MSG_ARRAYSIZE_DAY
	String_t* ___MSG_ARRAYSIZE_DAY_3;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_DAY_NAMES_4;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_DAY_NAMES_5;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_ABBREVIATED_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_ABBREVIATED_MONTH_NAMES_6;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_MONTH_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_MONTH_NAMES_7;
	// System.String[] System.Globalization.DateTimeFormatInfo::INVARIANT_SHORT_DAY_NAMES
	StringU5BU5D_t1281789340* ___INVARIANT_SHORT_DAY_NAMES_8;
	// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::theInvariantDateTimeFormatInfo
	DateTimeFormatInfo_t2405853701 * ___theInvariantDateTimeFormatInfo_9;

public:
	inline static int32_t get_offset_of_MSG_READONLY_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_READONLY_1)); }
	inline String_t* get_MSG_READONLY_1() const { return ___MSG_READONLY_1; }
	inline String_t** get_address_of_MSG_READONLY_1() { return &___MSG_READONLY_1; }
	inline void set_MSG_READONLY_1(String_t* value)
	{
		___MSG_READONLY_1 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_1), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_MONTH_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_MONTH_2)); }
	inline String_t* get_MSG_ARRAYSIZE_MONTH_2() const { return ___MSG_ARRAYSIZE_MONTH_2; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_MONTH_2() { return &___MSG_ARRAYSIZE_MONTH_2; }
	inline void set_MSG_ARRAYSIZE_MONTH_2(String_t* value)
	{
		___MSG_ARRAYSIZE_MONTH_2 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_MONTH_2), value);
	}

	inline static int32_t get_offset_of_MSG_ARRAYSIZE_DAY_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___MSG_ARRAYSIZE_DAY_3)); }
	inline String_t* get_MSG_ARRAYSIZE_DAY_3() const { return ___MSG_ARRAYSIZE_DAY_3; }
	inline String_t** get_address_of_MSG_ARRAYSIZE_DAY_3() { return &___MSG_ARRAYSIZE_DAY_3; }
	inline void set_MSG_ARRAYSIZE_DAY_3(String_t* value)
	{
		___MSG_ARRAYSIZE_DAY_3 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_ARRAYSIZE_DAY_3), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_DAY_NAMES_4)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_DAY_NAMES_4() const { return ___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_DAY_NAMES_4() { return &___INVARIANT_ABBREVIATED_DAY_NAMES_4; }
	inline void set_INVARIANT_ABBREVIATED_DAY_NAMES_4(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_DAY_NAMES_4 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_DAY_NAMES_4), value);
	}

	inline static int32_t get_offset_of_INVARIANT_DAY_NAMES_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_DAY_NAMES_5)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_DAY_NAMES_5() const { return ___INVARIANT_DAY_NAMES_5; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_DAY_NAMES_5() { return &___INVARIANT_DAY_NAMES_5; }
	inline void set_INVARIANT_DAY_NAMES_5(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_DAY_NAMES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_DAY_NAMES_5), value);
	}

	inline static int32_t get_offset_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_ABBREVIATED_MONTH_NAMES_6)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_ABBREVIATED_MONTH_NAMES_6() const { return ___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_ABBREVIATED_MONTH_NAMES_6() { return &___INVARIANT_ABBREVIATED_MONTH_NAMES_6; }
	inline void set_INVARIANT_ABBREVIATED_MONTH_NAMES_6(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_ABBREVIATED_MONTH_NAMES_6 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_ABBREVIATED_MONTH_NAMES_6), value);
	}

	inline static int32_t get_offset_of_INVARIANT_MONTH_NAMES_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_MONTH_NAMES_7)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_MONTH_NAMES_7() const { return ___INVARIANT_MONTH_NAMES_7; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_MONTH_NAMES_7() { return &___INVARIANT_MONTH_NAMES_7; }
	inline void set_INVARIANT_MONTH_NAMES_7(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_MONTH_NAMES_7 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_MONTH_NAMES_7), value);
	}

	inline static int32_t get_offset_of_INVARIANT_SHORT_DAY_NAMES_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___INVARIANT_SHORT_DAY_NAMES_8)); }
	inline StringU5BU5D_t1281789340* get_INVARIANT_SHORT_DAY_NAMES_8() const { return ___INVARIANT_SHORT_DAY_NAMES_8; }
	inline StringU5BU5D_t1281789340** get_address_of_INVARIANT_SHORT_DAY_NAMES_8() { return &___INVARIANT_SHORT_DAY_NAMES_8; }
	inline void set_INVARIANT_SHORT_DAY_NAMES_8(StringU5BU5D_t1281789340* value)
	{
		___INVARIANT_SHORT_DAY_NAMES_8 = value;
		Il2CppCodeGenWriteBarrier((&___INVARIANT_SHORT_DAY_NAMES_8), value);
	}

	inline static int32_t get_offset_of_theInvariantDateTimeFormatInfo_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t2405853701_StaticFields, ___theInvariantDateTimeFormatInfo_9)); }
	inline DateTimeFormatInfo_t2405853701 * get_theInvariantDateTimeFormatInfo_9() const { return ___theInvariantDateTimeFormatInfo_9; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_theInvariantDateTimeFormatInfo_9() { return &___theInvariantDateTimeFormatInfo_9; }
	inline void set_theInvariantDateTimeFormatInfo_9(DateTimeFormatInfo_t2405853701 * value)
	{
		___theInvariantDateTimeFormatInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___theInvariantDateTimeFormatInfo_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T2405853701_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef STATEHANDLER_T105866779_H
#define STATEHANDLER_T105866779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.Lexer/StateHandler
struct  StateHandler_t105866779  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEHANDLER_T105866779_H
#ifndef IMPORTERFUNC_T3630937194_H
#define IMPORTERFUNC_T3630937194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ImporterFunc
struct  ImporterFunc_t3630937194  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMPORTERFUNC_T3630937194_H
#ifndef EXPORTERFUNC_T1851311465_H
#define EXPORTERFUNC_T1851311465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.ExporterFunc
struct  ExporterFunc_t1851311465  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPORTERFUNC_T1851311465_H
#ifndef WRAPPERFACTORY_T2158548929_H
#define WRAPPERFACTORY_T2158548929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LitJson.WrapperFactory
struct  WrapperFactory_t2158548929  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPERFACTORY_T2158548929_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t1323790106  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateHandler_t105866779 * m_Items[1];

public:
	inline StateHandler_t105866779 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t105866779 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t105866779 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StateHandler_t105866779 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t105866779 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t105866779 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
extern "C"  void Dictionary_2__ctor_m1364587687_gshared (Dictionary_2_t2241695223 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
extern "C"  void Dictionary_2__ctor_m1704891675_gshared (Dictionary_2_t618723510 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
extern "C"  void Dictionary_2__ctor_m254134071_gshared (Dictionary_2_t779879461 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
extern "C"  void List_1__ctor_m2609897742_gshared (List_1_t904547919 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
extern "C"  void Stack_1__ctor_m3860988293_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
extern "C"  void Stack_1_Push_m3289045699_gshared (Stack_1_t3794335208 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m252876485_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
extern "C"  void Stack_1_Clear_m3555801141_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
extern "C"  int32_t Stack_1_Peek_m4199064227_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
extern "C"  int32_t Stack_1_Pop_m316856375_gshared (Stack_1_t3794335208 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m3164958980_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C"  void Stack_1_Push_m1669856732_gshared (Stack_1_t3923495619 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
extern "C"  void Stack_1_Clear_m2967600_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  RuntimeObject * Stack_1_Pop_m756553478_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m1599740434_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C"  RuntimeObject * Stack_1_Peek_m326384648_gshared (Stack_1_t3923495619 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);

// System.Void System.ApplicationException::.ctor()
extern "C"  void ApplicationException__ctor_m2557611022 (ApplicationException_t2339761290 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C"  void ApplicationException__ctor_m2517758450 (ApplicationException_t2339761290 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C"  void ApplicationException__ctor_m692455299 (ApplicationException_t2339761290 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
#define Dictionary_2__ctor_m1261923765(__this, method) ((  void (*) (Dictionary_2_t3338636003 *, const RuntimeMethod*))Dictionary_2__ctor_m1364587687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
#define Dictionary_2__ctor_m2282114649(__this, method) ((  void (*) (Dictionary_2_t935204471 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
#define Dictionary_2__ctor_m2116125915(__this, method) ((  void (*) (Dictionary_2_t1715664290 *, const RuntimeMethod*))Dictionary_2__ctor_m1704891675_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
#define Dictionary_2__ctor_m819289856(__this, method) ((  void (*) (Dictionary_2_t3692140024 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m2430372819 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C"  DateTimeFormatInfo_t2405853701 * DateTimeFormatInfo_get_InvariantInfo_m2329875772 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
#define Dictionary_2__ctor_m1781376517(__this, method) ((  void (*) (Dictionary_2_t691233 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
#define Dictionary_2__ctor_m4208673122(__this, method) ((  void (*) (Dictionary_2_t2688515417 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m1811454598 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m1703037250 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
extern "C"  void ArrayMetadata_set_IsArray_m1354464776 (ArrayMetadata_t894288939 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetInterface(System.String)
extern "C"  Type_t * Type_GetInterface_m23870712 (Type_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
extern "C"  void ArrayMetadata_set_IsList_m643296649 (ArrayMetadata_t894288939 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
extern "C"  PropertyInfoU5BU5D_t1461822886* Type_GetProperties_m1538559489 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
extern "C"  void ArrayMetadata_set_ElementType_m2710734190 (ArrayMetadata_t894288939 * __this, Type_t * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
extern "C"  void ObjectMetadata_set_IsDictionary_m1516974793 (ObjectMetadata_t3566284522 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor()
#define Dictionary_2__ctor_m4280968370(__this, method) ((  void (*) (Dictionary_2_t3512696772 *, const RuntimeMethod*))Dictionary_2__ctor_m254134071_gshared)(__this, method)
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
extern "C"  void ObjectMetadata_set_Properties_m3418010702 (ObjectMetadata_t3566284522 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
extern "C"  void ObjectMetadata_set_ElementType_m3045200045 (ObjectMetadata_t3566284522 * __this, Type_t * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
extern "C"  RuntimeObject* ObjectMetadata_get_Properties_m2724230150 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C"  FieldInfoU5BU5D_t846150980* Type_GetFields_m3709891696 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
#define List_1__ctor_m2609897742(__this, method) ((  void (*) (List_1_t904547919 *, const RuntimeMethod*))List_1__ctor_m2609897742_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::.ctor()
#define Dictionary_2__ctor_m1449412172(__this, method) ((  void (*) (Dictionary_2_t27006016 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
extern "C"  MethodInfo_t * Type_GetMethod_m1479779718 (Type_t * __this, String_t* p0, TypeU5BU5D_t3940880105* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m315486126 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m1586234379 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m589177581 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m2460484000 (JsonException_t3682484112 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C"  RuntimeObject * JsonReader_get_Value_m151916214 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
extern "C"  RuntimeObject * ImporterFunc_Invoke_m2919400817 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m208091508 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
extern "C"  RuntimeObject * Enum_ToObject_m1628250250 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m572333597 (RuntimeObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1776411915 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m2523599081 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
extern "C"  bool ArrayMetadata_get_IsArray_m2039442176 (ArrayMetadata_t894288939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ArrayMetadata::get_IsList()
extern "C"  bool ArrayMetadata_get_IsList_m2025934198 (ArrayMetadata_t894288939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  RuntimeObject * Activator_CreateInstance_m3631483688 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type LitJson.ArrayMetadata::get_ElementType()
extern "C"  Type_t * ArrayMetadata_get_ElementType_m3611314300 (ArrayMetadata_t894288939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  RuntimeObject * JsonMapper_ReadValue_m4110536930 (RuntimeObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C"  RuntimeArray * Array_CreateInstance_m2750085942 (RuntimeObject * __this /* static, unused */, Type_t * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C"  void Array_SetValue_m3412255035 (RuntimeArray * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m3134886667 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
extern "C"  bool ObjectMetadata_get_IsDictionary_m2197140272 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type LitJson.ObjectMetadata::get_ElementType()
extern "C"  Type_t * ObjectMetadata_get_ElementType_m609016881 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C"  RuntimeObject* WrapperFactory_Invoke_m990385463 (WrapperFactory_t2158548929 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  RuntimeObject* JsonMapper_ReadValue_m1268729263 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void ExporterFunc__ctor_m2205533801 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void ImporterFunc__ctor_m1689585722 (ImporterFunc_t3630937194 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m907439251 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t3630937194 * ___importer3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
#define Dictionary_2__ctor_m1803091887(__this, method) ((  void (*) (Dictionary_2_t1780316962 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m3713362081 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C"  TextWriter_t3478189236 * JsonWriter_get_TextWriter_m4071896128 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m2002991247 (JsonWriter_t3570089748 * __this, double ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m1949814895 (JsonWriter_t3570089748 * __this, int32_t ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m3048574580 (JsonWriter_t3570089748 * __this, bool ___boolean0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m2693541440 (JsonWriter_t3570089748 * __this, int64_t ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C"  void JsonWriter_WriteArrayStart_m1053267913 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  RuntimeObject* Array_GetEnumerator_m4277730612 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C"  void JsonMapper_WriteValue_m75393811 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C"  void JsonWriter_WriteArrayEnd_m3303839937 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C"  void JsonWriter_WriteObjectStart_m993161475 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Key()
extern "C"  RuntimeObject * DictionaryEntry_get_Key_m3117378551 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m1382075963 (JsonWriter_t3570089748 * __this, String_t* ___property_name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.DictionaryEntry::get_Value()
extern "C"  RuntimeObject * DictionaryEntry_get_Value_m618120527 (DictionaryEntry_t3123975638 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C"  void JsonWriter_WriteObjectEnd_m1917228531 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C"  void ExporterFunc_Invoke_m1836225596 (ExporterFunc_t1851311465 * __this, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C"  Type_t * Enum_GetUnderlyingType_m2480312097 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m1455779780 (JsonWriter_t3570089748 * __this, uint64_t ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C"  void JsonMapper_AddTypeProperties_m3226067832 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Reset()
extern "C"  void JsonWriter_Reset_m3733384412 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void WrapperFactory__ctor_m2738494406 (WrapperFactory_t2158548929 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  RuntimeObject* JsonMapper_ToWrapper_m1081200657 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C"  void JsonReader__ctor_m54126749 (JsonReader_t836887441 * __this, TextReader_t283511965 * ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C"  RuntimeObject* JsonMapper_ToWrapper_m2542376132 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, String_t* ___json1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m514838367 (JsonReader_t836887441 * __this, String_t* ___json_text0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
extern "C"  int32_t Convert_ToInt32_m2505564049 (RuntimeObject * __this /* static, unused */, uint8_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Char)
extern "C"  String_t* Convert_ToString_m1553911740 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m41256750 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m4069484567 (JsonWriter_t3570089748 * __this, Decimal_t2948259380  ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
extern "C"  int32_t Convert_ToInt32_m1405693041 (RuntimeObject * __this /* static, unused */, int8_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
extern "C"  int32_t Convert_ToInt32_m1085744762 (RuntimeObject * __this /* static, unused */, int16_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C"  int32_t Convert_ToInt32_m1987758323 (RuntimeObject * __this /* static, unused */, uint16_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C"  uint64_t Convert_ToUInt64_m1745056470 (RuntimeObject * __this /* static, unused */, uint32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
extern "C"  uint8_t Convert_ToByte_m1734770211 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
extern "C"  uint64_t Convert_ToUInt64_m786726853 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
extern "C"  int8_t Convert_ToSByte_m2653418303 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
extern "C"  int16_t Convert_ToInt16_m4174308322 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
extern "C"  uint16_t Convert_ToUInt16_m3515425647 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
extern "C"  uint32_t Convert_ToUInt32_m2215525276 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
extern "C"  float Convert_ToSingle_m3635698920 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
extern "C"  float Convert_ToSingle_m835189399 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
extern "C"  double Convert_ToDouble_m2924063577 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m841368097 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
extern "C"  uint32_t Convert_ToUInt32_m2194577773 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String)
extern "C"  Il2CppChar Convert_ToChar_m85718752 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
extern "C"  DateTime_t3738529785  Convert_ToDateTime_m3802186295 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor()
extern "C"  void JsonData__ctor_m1261409369 (JsonData_t1524858407 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m2622870148 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m3464502831 (JsonReader_t836887441 * __this, TextReader_t283511965 * ___reader0, bool ___owned1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
#define Stack_1__ctor_m3860988293(__this, method) ((  void (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1__ctor_m3860988293_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
#define Stack_1_Push_m3289045699(__this, p0, method) ((  void (*) (Stack_1_t3794335208 *, int32_t, const RuntimeMethod*))Stack_1_Push_m3289045699_gshared)(__this, p0, method)
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m2815723357 (Lexer_t1514038666 * __this, TextReader_t283511965 * ___reader0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowComments()
extern "C"  bool Lexer_get_AllowComments_m2710340855 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
extern "C"  void Lexer_set_AllowComments_m1557685570 (Lexer_t1514038666 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
extern "C"  bool Lexer_get_AllowSingleQuotedStrings_m2593439945 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void Lexer_set_AllowSingleQuotedStrings_m1671508202 (Lexer_t1514038666 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
#define Dictionary_2__ctor_m3016042(__this, method) ((  void (*) (Dictionary_2_t921491721 *, const RuntimeMethod*))Dictionary_2__ctor_m252876485_gshared)(__this, method)
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m3148122067 (RuntimeObject * __this /* static, unused */, int32_t ___rule0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m1291145106 (RuntimeObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t385246372* ___symbols2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
#define Dictionary_2__ctor_m3560123610(__this, method) ((  void (*) (Dictionary_2_t3568926999 *, const RuntimeMethod*))Dictionary_2__ctor_m252876485_gshared)(__this, method)
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C"  bool Double_TryParse_m3021978240 (RuntimeObject * __this /* static, unused */, String_t* p0, double* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C"  bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C"  bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m2839494864 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m4013635903 (JsonReader_t836887441 * __this, String_t* ___number0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m764348600 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m496746040 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m1728773487 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m1271565888 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
#define Stack_1_Clear_m3555801141(__this, method) ((  void (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1_Clear_m3555801141_gshared)(__this, method)
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m532552140 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
#define Stack_1_Peek_m4199064227(__this, method) ((  int32_t (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1_Peek_m4199064227_gshared)(__this, method)
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
#define Stack_1_Pop_m316856375(__this, method) ((  int32_t (*) (Stack_1_t3794335208 *, const RuntimeMethod*))Stack_1_Pop_m316856375_gshared)(__this, method)
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m2373069323 (JsonReader_t836887441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m2934847451 (JsonException_t3682484112 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C"  NumberFormatInfo_t435877138 * NumberFormatInfo_get_InvariantInfo_m349577018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m1259274362 (StringWriter_t802263757 * __this, StringBuilder_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m4080872942 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonWriter__ctor_m2835923290 (JsonWriter_t3570089748 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
#define Stack_1__ctor_m3272105694(__this, method) ((  void (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1__ctor_m3164958980_gshared)(__this, method)
// System.Void LitJson.WriterContext::.ctor()
extern "C"  void WriterContext__ctor_m711484838 (WriterContext_t1011093999 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
#define Stack_1_Push_m2827801669(__this, p0, method) ((  void (*) (Stack_1_t1854483454 *, WriterContext_t1011093999 *, const RuntimeMethod*))Stack_1_Push_m1669856732_gshared)(__this, p0, method)
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m2487795455 (JsonWriter_t3570089748 * __this, bool ___add_comma0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m2335550369 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m713443415 (RuntimeObject * __this /* static, unused */, int32_t ___n0, CharU5BU5D_t3528271667* ___hex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
#define Stack_1_Clear_m534740393(__this, method) ((  void (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Clear_m2967600_gshared)(__this, method)
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Remove_m940064945 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m3745177799 (JsonWriter_t3570089748 * __this, int32_t ___cond0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m564527608 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m3734943936 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m1282703378 (RuntimeObject * __this /* static, unused */, double p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m2614817407 (RuntimeObject * __this /* static, unused */, int32_t p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m239190601 (RuntimeObject * __this /* static, unused */, int64_t p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m1784888055 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
extern "C"  String_t* Convert_ToString_m301771913 (RuntimeObject * __this /* static, unused */, uint64_t p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
#define Stack_1_Pop_m3422896867(__this, method) ((  WriterContext_t1011093999 * (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Pop_m756553478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
#define Stack_1_get_Count_m484768452(__this, method) ((  int32_t (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_get_Count_m1599740434_gshared)(__this, method)
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
#define Stack_1_Peek_m102127363(__this, method) ((  WriterContext_t1011093999 * (*) (Stack_1_t1854483454 *, const RuntimeMethod*))Stack_1_Peek_m326384648_gshared)(__this, method)
// System.Void LitJson.JsonWriter::Unindent()
extern "C"  void JsonWriter_Unindent_m457469223 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Indent()
extern "C"  void JsonWriter_Indent_m2972747467 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m1428324419 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.FsmContext::.ctor()
extern "C"  void FsmContext__ctor_m3773234278 (FsmContext_t2331368794 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateHandler__ctor_m1447033077 (StateHandler_t105866779 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C"  Il2CppChar Convert_ToChar_m4189066566 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m3174334169 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m357503604 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m3815213012 (RuntimeObject * __this /* static, unused */, int32_t ___esc_char0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m3751728081 (RuntimeObject * __this /* static, unused */, int32_t ___digit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m1305718086 (Lexer_t1514038666 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C"  bool StateHandler_Invoke_m1476994263 (StateHandler_t105866779 * __this, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m2928296746 (JsonException_t3682484112 * __this, int32_t ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C"  DictionaryEntry_t3123975638  OrderedDictionaryEnumerator_get_Entry_m67332516 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
#define KeyValuePair_2_get_Key_m4064315612(__this, method) ((  String_t* (*) (KeyValuePair_2_t3707786873 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
#define KeyValuePair_2_get_Value_m3703576749(__this, method) ((  JsonData_t1524858407 * (*) (KeyValuePair_2_t3707786873 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
extern "C"  void DictionaryEntry__ctor_m2585376310 (DictionaryEntry_t3123975638 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonException::.ctor()
extern "C"  void JsonException__ctor_m485244540 (JsonException_t3682484112 * __this, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m2557611022(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken)
extern "C"  void JsonException__ctor_m4285481251 (JsonException_t3682484112 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m4285481251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t2380208742_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral917256838, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_m2517758450(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m2934847451 (JsonException_t3682484112 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m2934847451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t2380208742_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral917256838, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m692455299(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m2928296746 (JsonException_t3682484112 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m2928296746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)(((int32_t)((uint16_t)L_0))));
		RuntimeObject * L_2 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4006081049, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_m2517758450(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32,System.Exception)
extern "C"  void JsonException__ctor_m3792137181 (JsonException_t3682484112 * __this, int32_t ___c0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m3792137181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)(((int32_t)((uint16_t)L_0))));
		RuntimeObject * L_2 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4006081049, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m692455299(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m2460484000 (JsonException_t3682484112 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_m2517758450(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String,System.Exception)
extern "C"  void JsonException__ctor_m859934914 (JsonException_t3682484112 * __this, String_t* ___message0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner_exception1;
		ApplicationException__ctor_m692455299(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper::.cctor()
extern "C"  void JsonMapper__cctor_m3602240641 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper__cctor_m3602240641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_2, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_3, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_4, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t3338636003 * L_5 = (Dictionary_2_t3338636003 *)il2cpp_codegen_object_new(Dictionary_2_t3338636003_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1261923765(L_5, /*hidden argument*/Dictionary_2__ctor_m1261923765_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t935204471 * L_6 = (Dictionary_2_t935204471 *)il2cpp_codegen_object_new(Dictionary_2_t935204471_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2282114649(L_6, /*hidden argument*/Dictionary_2__ctor_m2282114649_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t1715664290 * L_7 = (Dictionary_2_t1715664290 *)il2cpp_codegen_object_new(Dictionary_2_t1715664290_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2116125915(L_7, /*hidden argument*/Dictionary_2__ctor_m2116125915_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_t3692140024 * L_8 = (Dictionary_2_t3692140024 *)il2cpp_codegen_object_new(Dictionary_2_t3692140024_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m819289856(L_8, /*hidden argument*/Dictionary_2__ctor_m819289856_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_t3570089748 * L_9 = (JsonWriter_t3570089748 *)il2cpp_codegen_object_new(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m2430372819(L_9, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t2405853701_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t2405853701 * L_10 = DateTimeFormatInfo_get_InvariantInfo_m2329875772(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_t691233 * L_11 = (Dictionary_2_t691233 *)il2cpp_codegen_object_new(Dictionary_2_t691233_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1781376517(L_11, /*hidden argument*/Dictionary_2__ctor_m1781376517_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_t691233 * L_12 = (Dictionary_2_t691233 *)il2cpp_codegen_object_new(Dictionary_2_t691233_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1781376517(L_12, /*hidden argument*/Dictionary_2__ctor_m1781376517_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_t2688515417 * L_13 = (Dictionary_2_t2688515417 *)il2cpp_codegen_object_new(Dictionary_2_t2688515417_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4208673122(L_13, /*hidden argument*/Dictionary_2__ctor_m4208673122_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_t2688515417 * L_14 = (Dictionary_2_t2688515417 *)il2cpp_codegen_object_new(Dictionary_2_t2688515417_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4208673122(L_14, /*hidden argument*/Dictionary_2__ctor_m4208673122_RuntimeMethod_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_m1811454598(NULL /*static, unused*/, /*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m1703037250(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::.ctor()
extern "C"  void JsonMapper__ctor_m645588856 (JsonMapper_t3815285241 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
extern "C"  void JsonMapper_AddArrayMetadata_m2523599081 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddArrayMetadata_m2523599081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayMetadata_t894288939  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyInfo_t * V_1 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_2 = NULL;
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t390618515* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_array_metadata_6();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::ContainsKey(!0) */, IDictionary_2_t1802487394_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ArrayMetadata_t894288939 ));
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		bool L_4 = Type_get_IsArray_m2591212821(L_3, /*hidden argument*/NULL);
		ArrayMetadata_set_IsArray_m1354464776((&V_0), L_4, /*hidden argument*/NULL);
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6 = Type_GetInterface_m23870712(L_5, _stringLiteral2211611910, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ArrayMetadata_set_IsList_m643296649((&V_0), (bool)1, /*hidden argument*/NULL);
	}

IL_003e:
	{
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		PropertyInfoU5BU5D_t1461822886* L_8 = Type_GetProperties_m1538559489(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_00aa;
	}

IL_004c:
	{
		PropertyInfoU5BU5D_t1461822886* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		PropertyInfo_t * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_14, _stringLiteral1949155704, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		goto IL_00a6;
	}

IL_006a:
	{
		PropertyInfo_t * L_16 = V_1;
		NullCheck(L_16);
		ParameterInfoU5BU5D_t390618515* L_17 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(20 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_16);
		V_4 = L_17;
		ParameterInfoU5BU5D_t390618515* L_18 = V_4;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a6;
	}

IL_0081:
	{
		ParameterInfoU5BU5D_t390618515* L_19 = V_4;
		NullCheck(L_19);
		int32_t L_20 = 0;
		ParameterInfo_t1861056598 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Type_t * L_22 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_21);
		RuntimeTypeHandle_t3027515415  L_23 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_24 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_22) == ((RuntimeObject*)(Type_t *)L_24))))
		{
			goto IL_00a6;
		}
	}
	{
		PropertyInfo_t * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_25);
		ArrayMetadata_set_ElementType_m2710734190((&V_0), L_26, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00aa:
	{
		int32_t L_28 = V_3;
		PropertyInfoU5BU5D_t1461822886* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_30 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_array_metadata_lock_7();
		V_5 = L_30;
		RuntimeObject * L_31 = V_5;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
	}

IL_00c1:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_32 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_array_metadata_6();
			Type_t * L_33 = ___type0;
			ArrayMetadata_t894288939  L_34 = V_0;
			NullCheck(L_32);
			InterfaceActionInvoker2< Type_t *, ArrayMetadata_t894288939  >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::Add(!0,!1) */, IDictionary_2_t1802487394_il2cpp_TypeInfo_var, L_32, L_33, L_34);
			goto IL_00d8;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d2;
			throw e;
		}

CATCH_00d2:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0xE5, FINALLY_00dd);
		} // end catch (depth: 2)

IL_00d8:
		{
			IL2CPP_LEAVE(0xE5, FINALLY_00dd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dd;
	}

FINALLY_00dd:
	{ // begin finally (depth: 1)
		RuntimeObject * L_35 = V_5;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(221)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(221)
	{
		IL2CPP_JUMP_TBL(0xE5, IL_00e5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e5:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
extern "C"  void JsonMapper_AddObjectMetadata_m3134886667 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddObjectMetadata_m3134886667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectMetadata_t3566284522  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PropertyInfo_t * V_1 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_2 = NULL;
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t390618515* V_4 = NULL;
	PropertyMetadata_t3727440473  V_5;
	memset(&V_5, 0, sizeof(V_5));
	FieldInfo_t * V_6 = NULL;
	FieldInfoU5BU5D_t846150980* V_7 = NULL;
	int32_t V_8 = 0;
	PropertyMetadata_t3727440473  V_9;
	memset(&V_9, 0, sizeof(V_9));
	RuntimeObject * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_object_metadata_10();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::ContainsKey(!0) */, IDictionary_2_t179515681_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectMetadata_t3566284522 ));
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		Type_t * L_4 = Type_GetInterface_m23870712(L_3, _stringLiteral1480664753, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		ObjectMetadata_set_IsDictionary_m1516974793((&V_0), (bool)1, /*hidden argument*/NULL);
	}

IL_0031:
	{
		Dictionary_2_t3512696772 * L_5 = (Dictionary_2_t3512696772 *)il2cpp_codegen_object_new(Dictionary_2_t3512696772_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4280968370(L_5, /*hidden argument*/Dictionary_2__ctor_m4280968370_RuntimeMethod_var);
		ObjectMetadata_set_Properties_m3418010702((&V_0), L_5, /*hidden argument*/NULL);
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		PropertyInfoU5BU5D_t1461822886* L_7 = Type_GetProperties_m1538559489(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_00da;
	}

IL_004b:
	{
		PropertyInfoU5BU5D_t1461822886* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PropertyInfo_t * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		PropertyInfo_t * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral1949155704, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00a5;
		}
	}
	{
		PropertyInfo_t * L_15 = V_1;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t390618515* L_16 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(20 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		V_4 = L_16;
		ParameterInfoU5BU5D_t390618515* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00d6;
	}

IL_007b:
	{
		ParameterInfoU5BU5D_t390618515* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_t1861056598 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t * L_21 = VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_21) == ((RuntimeObject*)(Type_t *)L_23))))
		{
			goto IL_00a0;
		}
	}
	{
		PropertyInfo_t * L_24 = V_1;
		NullCheck(L_24);
		Type_t * L_25 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_24);
		ObjectMetadata_set_ElementType_m3045200045((&V_0), L_25, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		goto IL_00d6;
	}

IL_00a5:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(PropertyMetadata_t3727440473 ));
		PropertyInfo_t * L_26 = V_1;
		(&V_5)->set_Info_0(L_26);
		PropertyInfo_t * L_27 = V_1;
		NullCheck(L_27);
		Type_t * L_28 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_27);
		(&V_5)->set_Type_2(L_28);
		RuntimeObject* L_29 = ObjectMetadata_get_Properties_m2724230150((&V_0), /*hidden argument*/NULL);
		PropertyInfo_t * L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		PropertyMetadata_t3727440473  L_32 = V_5;
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t3727440473  >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(!0,!1) */, IDictionary_2_t1976548163_il2cpp_TypeInfo_var, L_29, L_31, L_32);
	}

IL_00d6:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00da:
	{
		int32_t L_34 = V_3;
		PropertyInfoU5BU5D_t1461822886* L_35 = V_2;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))))))
		{
			goto IL_004b;
		}
	}
	{
		Type_t * L_36 = ___type0;
		NullCheck(L_36);
		FieldInfoU5BU5D_t846150980* L_37 = Type_GetFields_m3709891696(L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		V_8 = 0;
		goto IL_013c;
	}

IL_00f3:
	{
		FieldInfoU5BU5D_t846150980* L_38 = V_7;
		int32_t L_39 = V_8;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		FieldInfo_t * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
		il2cpp_codegen_initobj((&V_9), sizeof(PropertyMetadata_t3727440473 ));
		FieldInfo_t * L_42 = V_6;
		(&V_9)->set_Info_0(L_42);
		(&V_9)->set_IsField_1((bool)1);
		FieldInfo_t * L_43 = V_6;
		NullCheck(L_43);
		Type_t * L_44 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_43);
		(&V_9)->set_Type_2(L_44);
		RuntimeObject* L_45 = ObjectMetadata_get_Properties_m2724230150((&V_0), /*hidden argument*/NULL);
		FieldInfo_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		PropertyMetadata_t3727440473  L_48 = V_9;
		NullCheck(L_45);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_t3727440473  >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(!0,!1) */, IDictionary_2_t1976548163_il2cpp_TypeInfo_var, L_45, L_47, L_48);
		int32_t L_49 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_013c:
	{
		int32_t L_50 = V_8;
		FieldInfoU5BU5D_t846150980* L_51 = V_7;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_51)->max_length)))))))
		{
			goto IL_00f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_52 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_object_metadata_lock_11();
		V_10 = L_52;
		RuntimeObject * L_53 = V_10;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
	}

IL_0155:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_54 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_object_metadata_10();
			Type_t * L_55 = ___type0;
			ObjectMetadata_t3566284522  L_56 = V_0;
			NullCheck(L_54);
			InterfaceActionInvoker2< Type_t *, ObjectMetadata_t3566284522  >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::Add(!0,!1) */, IDictionary_2_t179515681_il2cpp_TypeInfo_var, L_54, L_55, L_56);
			goto IL_016c;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0166;
			throw e;
		}

CATCH_0166:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0x179, FINALLY_0171);
		} // end catch (depth: 2)

IL_016c:
		{
			IL2CPP_LEAVE(0x179, FINALLY_0171);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0171;
	}

FINALLY_0171:
	{ // begin finally (depth: 1)
		RuntimeObject * L_57 = V_10;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(369)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(369)
	{
		IL2CPP_JUMP_TBL(0x179, IL_0179)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0179:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
extern "C"  void JsonMapper_AddTypeProperties_m3226067832 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddTypeProperties_m3226067832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyMetadata_t3727440473  V_4;
	memset(&V_4, 0, sizeof(V_4));
	FieldInfo_t * V_5 = NULL;
	FieldInfoU5BU5D_t846150980* V_6 = NULL;
	int32_t V_7 = 0;
	PropertyMetadata_t3727440473  V_8;
	memset(&V_8, 0, sizeof(V_8));
	RuntimeObject * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(!0) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		List_1_t904547919 * L_3 = (List_1_t904547919 *)il2cpp_codegen_object_new(List_1_t904547919_il2cpp_TypeInfo_var);
		List_1__ctor_m2609897742(L_3, /*hidden argument*/List_1__ctor_m2609897742_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_t1461822886* L_5 = Type_GetProperties_m1538559489(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_0067;
	}

IL_0025:
	{
		PropertyInfoU5BU5D_t1461822886* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		PropertyInfo_t * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral1949155704, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0063;
	}

IL_0043:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t3727440473 ));
		PropertyInfo_t * L_13 = V_1;
		(&V_4)->set_Info_0(L_13);
		(&V_4)->set_IsField_1((bool)0);
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t3727440473  L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t3727440473  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t2260625411_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0063:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_17 = V_3;
		PropertyInfoU5BU5D_t1461822886* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_t846150980* L_20 = Type_GetFields_m3709891696(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		V_7 = 0;
		goto IL_00ae;
	}

IL_0080:
	{
		FieldInfoU5BU5D_t846150980* L_21 = V_6;
		int32_t L_22 = V_7;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_5 = L_24;
		il2cpp_codegen_initobj((&V_8), sizeof(PropertyMetadata_t3727440473 ));
		FieldInfo_t * L_25 = V_5;
		(&V_8)->set_Info_0(L_25);
		(&V_8)->set_IsField_1((bool)1);
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t3727440473  L_27 = V_8;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t3727440473  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_t2260625411_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ae:
	{
		int32_t L_29 = V_7;
		FieldInfoU5BU5D_t846150980* L_30 = V_6;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_0080;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_31 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_lock_13();
		V_9 = L_31;
		RuntimeObject * L_32 = V_9;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
	}

IL_00c7:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_33 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
			Type_t * L_34 = ___type0;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(!0,!1) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_33, L_34, L_35);
			goto IL_00de;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00d8:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0xEB, FINALLY_00e3);
		} // end catch (depth: 2)

IL_00de:
		{
			IL2CPP_LEAVE(0xEB, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		RuntimeObject * L_36 = V_9;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(227)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00eb:
	{
		return;
	}
}
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
extern "C"  MethodInfo_t * JsonMapper_GetConvOp_m572333597 (RuntimeObject * __this /* static, unused */, Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_GetConvOp_m572333597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_lock_9();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_3 = ___t10;
			NullCheck(L_2);
			bool L_4 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::ContainsKey(!0) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_2, L_3);
			if (L_4)
			{
				goto IL_002c;
			}
		}

IL_001c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_5 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_6 = ___t10;
			Dictionary_2_t27006016 * L_7 = (Dictionary_2_t27006016 *)il2cpp_codegen_object_new(Dictionary_2_t27006016_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1449412172(L_7, /*hidden argument*/Dictionary_2__ctor_m1449412172_RuntimeMethod_var);
			NullCheck(L_5);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::Add(!0,!1) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
		Type_t * L_10 = ___t10;
		NullCheck(L_9);
		RuntimeObject* L_11 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_9, L_10);
		Type_t * L_12 = ___t21;
		NullCheck(L_11);
		bool L_13 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::ContainsKey(!0) */, IDictionary_2_t2785824703_il2cpp_TypeInfo_var, L_11, L_12);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
		Type_t * L_15 = ___t10;
		NullCheck(L_14);
		RuntimeObject* L_16 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_14, L_15);
		Type_t * L_17 = ___t21;
		NullCheck(L_16);
		MethodInfo_t * L_18 = InterfaceFuncInvoker1< MethodInfo_t *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(!0) */, IDictionary_2_t2785824703_il2cpp_TypeInfo_var, L_16, L_17);
		return L_18;
	}

IL_0060:
	{
		Type_t * L_19 = ___t10;
		TypeU5BU5D_t3940880105* L_20 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1));
		Type_t * L_21 = ___t21;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_21);
		NullCheck(L_19);
		MethodInfo_t * L_22 = Type_GetMethod_m1479779718(L_19, _stringLiteral3306367446, L_20, /*hidden argument*/NULL);
		V_1 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_23 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_lock_9();
		V_2 = L_23;
		RuntimeObject * L_24 = V_2;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
	}

IL_0082:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_25 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_26 = ___t10;
			NullCheck(L_25);
			RuntimeObject* L_27 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_25, L_26);
			Type_t * L_28 = ___t21;
			MethodInfo_t * L_29 = V_1;
			NullCheck(L_27);
			InterfaceActionInvoker2< Type_t *, MethodInfo_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::Add(!0,!1) */, IDictionary_2_t2785824703_il2cpp_TypeInfo_var, L_27, L_28, L_29);
			goto IL_00b1;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0099;
			throw e;
		}

CATCH_0099:
		{ // begin catch(System.ArgumentException)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			RuntimeObject* L_30 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_31 = ___t10;
			NullCheck(L_30);
			RuntimeObject* L_32 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_t3694023158_il2cpp_TypeInfo_var, L_30, L_31);
			Type_t * L_33 = ___t21;
			NullCheck(L_32);
			MethodInfo_t * L_34 = InterfaceFuncInvoker1< MethodInfo_t *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(!0) */, IDictionary_2_t2785824703_il2cpp_TypeInfo_var, L_32, L_33);
			V_3 = L_34;
			IL2CPP_LEAVE(0xBF, FINALLY_00b6);
		} // end catch (depth: 2)

IL_00b1:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00b6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b6;
	}

FINALLY_00b6:
	{ // begin finally (depth: 1)
		RuntimeObject * L_35 = V_2;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(182)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(182)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bd:
	{
		MethodInfo_t * L_36 = V_1;
		return L_36;
	}

IL_00bf:
	{
		MethodInfo_t * L_37 = V_3;
		return L_37;
	}
}
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
extern "C"  RuntimeObject * JsonMapper_ReadValue_m4110536930 (RuntimeObject * __this /* static, unused */, Type_t * ___inst_type0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadValue_m4110536930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ImporterFunc_t3630937194 * V_1 = NULL;
	ImporterFunc_t3630937194 * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	ArrayMetadata_t894288939  V_5;
	memset(&V_5, 0, sizeof(V_5));
	RuntimeObject* V_6 = NULL;
	Type_t * V_7 = NULL;
	RuntimeObject * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ObjectMetadata_t3566284522  V_11;
	memset(&V_11, 0, sizeof(V_11));
	String_t* V_12 = NULL;
	PropertyMetadata_t3727440473  V_13;
	memset(&V_13, 0, sizeof(V_13));
	PropertyInfo_t * V_14 = NULL;
	{
		JsonReader_t836887441 * L_0 = ___reader1;
		NullCheck(L_0);
		JsonReader_Read_m315486126(L_0, /*hidden argument*/NULL);
		JsonReader_t836887441 * L_1 = ___reader1;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_m1586234379(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		return NULL;
	}

IL_0015:
	{
		JsonReader_t836887441 * L_3 = ___reader1;
		NullCheck(L_3);
		int32_t L_4 = JsonReader_get_Token_m1586234379(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_5 = ___inst_type0;
		NullCheck(L_5);
		bool L_6 = Type_get_IsClass_m589177581(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_7 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2156791391, L_7, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_9 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_003e:
	{
		return NULL;
	}

IL_0040:
	{
		JsonReader_t836887441 * L_10 = ___reader1;
		NullCheck(L_10);
		int32_t L_11 = JsonReader_get_Token_m1586234379(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		JsonReader_t836887441 * L_12 = ___reader1;
		NullCheck(L_12);
		int32_t L_13 = JsonReader_get_Token_m1586234379(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)6)))
		{
			goto IL_007e;
		}
	}
	{
		JsonReader_t836887441 * L_14 = ___reader1;
		NullCheck(L_14);
		int32_t L_15 = JsonReader_get_Token_m1586234379(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)7)))
		{
			goto IL_007e;
		}
	}
	{
		JsonReader_t836887441 * L_16 = ___reader1;
		NullCheck(L_16);
		int32_t L_17 = JsonReader_get_Token_m1586234379(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)9))))
		{
			goto IL_007e;
		}
	}
	{
		JsonReader_t836887441 * L_18 = ___reader1;
		NullCheck(L_18);
		int32_t L_19 = JsonReader_get_Token_m1586234379(L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_017c;
		}
	}

IL_007e:
	{
		JsonReader_t836887441 * L_20 = ___reader1;
		NullCheck(L_20);
		RuntimeObject * L_21 = JsonReader_get_Value_m151916214(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Type_t * L_22 = Object_GetType_m88164663(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		Type_t * L_23 = ___inst_type0;
		Type_t * L_24 = V_0;
		NullCheck(L_23);
		bool L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_23, L_24);
		if (!L_25)
		{
			goto IL_009d;
		}
	}
	{
		JsonReader_t836887441 * L_26 = ___reader1;
		NullCheck(L_26);
		RuntimeObject * L_27 = JsonReader_get_Value_m151916214(L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_29 = V_0;
		NullCheck(L_28);
		bool L_30 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_28, L_29);
		if (!L_30)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_32 = V_0;
		NullCheck(L_31);
		RuntimeObject* L_33 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_31, L_32);
		Type_t * L_34 = ___inst_type0;
		NullCheck(L_33);
		bool L_35 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(!0) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_33, L_34);
		if (!L_35)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_36 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_37 = V_0;
		NullCheck(L_36);
		RuntimeObject* L_38 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_36, L_37);
		Type_t * L_39 = ___inst_type0;
		NullCheck(L_38);
		ImporterFunc_t3630937194 * L_40 = InterfaceFuncInvoker1< ImporterFunc_t3630937194 *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(!0) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_38, L_39);
		V_1 = L_40;
		ImporterFunc_t3630937194 * L_41 = V_1;
		JsonReader_t836887441 * L_42 = ___reader1;
		NullCheck(L_42);
		RuntimeObject * L_43 = JsonReader_get_Value_m151916214(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		RuntimeObject * L_44 = ImporterFunc_Invoke_m2919400817(L_41, L_43, /*hidden argument*/NULL);
		return L_44;
	}

IL_00e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_46 = V_0;
		NullCheck(L_45);
		bool L_47 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_45, L_46);
		if (!L_47)
		{
			goto IL_0127;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_48 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_49 = V_0;
		NullCheck(L_48);
		RuntimeObject* L_50 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_48, L_49);
		Type_t * L_51 = ___inst_type0;
		NullCheck(L_50);
		bool L_52 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(!0) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_50, L_51);
		if (!L_52)
		{
			goto IL_0127;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_53 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		RuntimeObject* L_55 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_53, L_54);
		Type_t * L_56 = ___inst_type0;
		NullCheck(L_55);
		ImporterFunc_t3630937194 * L_57 = InterfaceFuncInvoker1< ImporterFunc_t3630937194 *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(!0) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_55, L_56);
		V_2 = L_57;
		ImporterFunc_t3630937194 * L_58 = V_2;
		JsonReader_t836887441 * L_59 = ___reader1;
		NullCheck(L_59);
		RuntimeObject * L_60 = JsonReader_get_Value_m151916214(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		RuntimeObject * L_61 = ImporterFunc_Invoke_m2919400817(L_58, L_60, /*hidden argument*/NULL);
		return L_61;
	}

IL_0127:
	{
		Type_t * L_62 = ___inst_type0;
		NullCheck(L_62);
		bool L_63 = Type_get_IsEnum_m208091508(L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_013f;
		}
	}
	{
		Type_t * L_64 = ___inst_type0;
		JsonReader_t836887441 * L_65 = ___reader1;
		NullCheck(L_65);
		RuntimeObject * L_66 = JsonReader_get_Value_m151916214(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		RuntimeObject * L_67 = Enum_ToObject_m1628250250(NULL /*static, unused*/, L_64, L_66, /*hidden argument*/NULL);
		return L_67;
	}

IL_013f:
	{
		Type_t * L_68 = ___inst_type0;
		Type_t * L_69 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		MethodInfo_t * L_70 = JsonMapper_GetConvOp_m572333597(NULL /*static, unused*/, L_68, L_69, /*hidden argument*/NULL);
		V_3 = L_70;
		MethodInfo_t * L_71 = V_3;
		if (!L_71)
		{
			goto IL_0164;
		}
	}
	{
		MethodInfo_t * L_72 = V_3;
		ObjectU5BU5D_t2843939325* L_73 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		JsonReader_t836887441 * L_74 = ___reader1;
		NullCheck(L_74);
		RuntimeObject * L_75 = JsonReader_get_Value_m151916214(L_74, /*hidden argument*/NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_75);
		NullCheck(L_72);
		RuntimeObject * L_76 = MethodBase_Invoke_m1776411915(L_72, NULL, L_73, /*hidden argument*/NULL);
		return L_76;
	}

IL_0164:
	{
		JsonReader_t836887441 * L_77 = ___reader1;
		NullCheck(L_77);
		RuntimeObject * L_78 = JsonReader_get_Value_m151916214(L_77, /*hidden argument*/NULL);
		Type_t * L_79 = V_0;
		Type_t * L_80 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral57478429, L_78, L_79, L_80, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_82 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_82, L_81, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82);
	}

IL_017c:
	{
		V_4 = NULL;
		JsonReader_t836887441 * L_83 = ___reader1;
		NullCheck(L_83);
		int32_t L_84 = JsonReader_get_Token_m1586234379(L_83, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_84) == ((uint32_t)4))))
		{
			goto IL_0283;
		}
	}
	{
		Type_t * L_85 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_AddArrayMetadata_m2523599081(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		RuntimeObject* L_86 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_array_metadata_6();
		Type_t * L_87 = ___inst_type0;
		NullCheck(L_86);
		ArrayMetadata_t894288939  L_88 = InterfaceFuncInvoker1< ArrayMetadata_t894288939 , Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::get_Item(!0) */, IDictionary_2_t1802487394_il2cpp_TypeInfo_var, L_86, L_87);
		V_5 = L_88;
		bool L_89 = ArrayMetadata_get_IsArray_m2039442176((&V_5), /*hidden argument*/NULL);
		if (L_89)
		{
			goto IL_01c7;
		}
	}
	{
		bool L_90 = ArrayMetadata_get_IsList_m2025934198((&V_5), /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_01c7;
		}
	}
	{
		Type_t * L_91 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_92 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3271142035, L_91, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_93 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_93, L_92, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_93);
	}

IL_01c7:
	{
		bool L_94 = ArrayMetadata_get_IsArray_m2039442176((&V_5), /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_01ee;
		}
	}
	{
		Type_t * L_95 = ___inst_type0;
		RuntimeObject * L_96 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_96, IList_t2094931216_il2cpp_TypeInfo_var));
		Type_t * L_97 = ArrayMetadata_get_ElementType_m3611314300((&V_5), /*hidden argument*/NULL);
		V_7 = L_97;
		goto IL_01fd;
	}

IL_01ee:
	{
		ArrayList_t2718874744 * L_98 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_98, /*hidden argument*/NULL);
		V_6 = L_98;
		Type_t * L_99 = ___inst_type0;
		NullCheck(L_99);
		Type_t * L_100 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_99);
		V_7 = L_100;
	}

IL_01fd:
	{
		Type_t * L_101 = V_7;
		JsonReader_t836887441 * L_102 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_103 = JsonMapper_ReadValue_m4110536930(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		V_8 = L_103;
		JsonReader_t836887441 * L_104 = ___reader1;
		NullCheck(L_104);
		int32_t L_105 = JsonReader_get_Token_m1586234379(L_104, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_105) == ((uint32_t)5))))
		{
			goto IL_0218;
		}
	}
	{
		goto IL_0227;
	}

IL_0218:
	{
		RuntimeObject* L_106 = V_6;
		RuntimeObject * L_107 = V_8;
		NullCheck(L_106);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_106, L_107);
		goto IL_01fd;
	}

IL_0227:
	{
		bool L_108 = ArrayMetadata_get_IsArray_m2039442176((&V_5), /*hidden argument*/NULL);
		if (!L_108)
		{
			goto IL_027a;
		}
	}
	{
		RuntimeObject* L_109 = V_6;
		NullCheck(L_109);
		int32_t L_110 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_109);
		V_9 = L_110;
		Type_t * L_111 = V_7;
		int32_t L_112 = V_9;
		RuntimeArray * L_113 = Array_CreateInstance_m2750085942(NULL /*static, unused*/, L_111, L_112, /*hidden argument*/NULL);
		V_4 = L_113;
		V_10 = 0;
		goto IL_026c;
	}

IL_024f:
	{
		RuntimeObject * L_114 = V_4;
		RuntimeObject* L_115 = V_6;
		int32_t L_116 = V_10;
		NullCheck(L_115);
		RuntimeObject * L_117 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, L_115, L_116);
		int32_t L_118 = V_10;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_114, RuntimeArray_il2cpp_TypeInfo_var)));
		Array_SetValue_m3412255035(((RuntimeArray *)CastclassClass((RuntimeObject*)L_114, RuntimeArray_il2cpp_TypeInfo_var)), L_117, L_118, /*hidden argument*/NULL);
		int32_t L_119 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_026c:
	{
		int32_t L_120 = V_10;
		int32_t L_121 = V_9;
		if ((((int32_t)L_120) < ((int32_t)L_121)))
		{
			goto IL_024f;
		}
	}
	{
		goto IL_027e;
	}

IL_027a:
	{
		RuntimeObject* L_122 = V_6;
		V_4 = L_122;
	}

IL_027e:
	{
		goto IL_03ab;
	}

IL_0283:
	{
		JsonReader_t836887441 * L_123 = ___reader1;
		NullCheck(L_123);
		int32_t L_124 = JsonReader_get_Token_m1586234379(L_123, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_124) == ((uint32_t)1))))
		{
			goto IL_03ab;
		}
	}
	{
		Type_t * L_125 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_AddObjectMetadata_m3134886667(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		RuntimeObject* L_126 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_object_metadata_10();
		Type_t * L_127 = ___inst_type0;
		NullCheck(L_126);
		ObjectMetadata_t3566284522  L_128 = InterfaceFuncInvoker1< ObjectMetadata_t3566284522 , Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::get_Item(!0) */, IDictionary_2_t179515681_il2cpp_TypeInfo_var, L_126, L_127);
		V_11 = L_128;
		Type_t * L_129 = ___inst_type0;
		RuntimeObject * L_130 = Activator_CreateInstance_m3631483688(NULL /*static, unused*/, L_129, /*hidden argument*/NULL);
		V_4 = L_130;
	}

IL_02aa:
	{
		JsonReader_t836887441 * L_131 = ___reader1;
		NullCheck(L_131);
		JsonReader_Read_m315486126(L_131, /*hidden argument*/NULL);
		JsonReader_t836887441 * L_132 = ___reader1;
		NullCheck(L_132);
		int32_t L_133 = JsonReader_get_Token_m1586234379(L_132, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_133) == ((uint32_t)3))))
		{
			goto IL_02c2;
		}
	}
	{
		goto IL_03ab;
	}

IL_02c2:
	{
		JsonReader_t836887441 * L_134 = ___reader1;
		NullCheck(L_134);
		RuntimeObject * L_135 = JsonReader_get_Value_m151916214(L_134, /*hidden argument*/NULL);
		V_12 = ((String_t*)CastclassSealed((RuntimeObject*)L_135, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_136 = ObjectMetadata_get_Properties_m2724230150((&V_11), /*hidden argument*/NULL);
		String_t* L_137 = V_12;
		NullCheck(L_136);
		bool L_138 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKey(!0) */, IDictionary_2_t1976548163_il2cpp_TypeInfo_var, L_136, L_137);
		if (!L_138)
		{
			goto IL_036c;
		}
	}
	{
		RuntimeObject* L_139 = ObjectMetadata_get_Properties_m2724230150((&V_11), /*hidden argument*/NULL);
		String_t* L_140 = V_12;
		NullCheck(L_139);
		PropertyMetadata_t3727440473  L_141 = InterfaceFuncInvoker1< PropertyMetadata_t3727440473 , String_t* >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::get_Item(!0) */, IDictionary_2_t1976548163_il2cpp_TypeInfo_var, L_139, L_140);
		V_13 = L_141;
		bool L_142 = (&V_13)->get_IsField_1();
		if (!L_142)
		{
			goto IL_0323;
		}
	}
	{
		MemberInfo_t * L_143 = (&V_13)->get_Info_0();
		RuntimeObject * L_144 = V_4;
		Type_t * L_145 = (&V_13)->get_Type_2();
		JsonReader_t836887441 * L_146 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_147 = JsonMapper_ReadValue_m4110536930(NULL /*static, unused*/, L_145, L_146, /*hidden argument*/NULL);
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_143, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2460171138(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_143, FieldInfo_t_il2cpp_TypeInfo_var)), L_144, L_147, /*hidden argument*/NULL);
		goto IL_0367;
	}

IL_0323:
	{
		MemberInfo_t * L_148 = (&V_13)->get_Info_0();
		V_14 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_148, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_149 = V_14;
		NullCheck(L_149);
		bool L_150 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_149);
		if (!L_150)
		{
			goto IL_0359;
		}
	}
	{
		PropertyInfo_t * L_151 = V_14;
		RuntimeObject * L_152 = V_4;
		Type_t * L_153 = (&V_13)->get_Type_2();
		JsonReader_t836887441 * L_154 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_155 = JsonMapper_ReadValue_m4110536930(NULL /*static, unused*/, L_153, L_154, /*hidden argument*/NULL);
		NullCheck(L_151);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(24 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_151, L_152, L_155, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		goto IL_0367;
	}

IL_0359:
	{
		Type_t * L_156 = (&V_13)->get_Type_2();
		JsonReader_t836887441 * L_157 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_ReadValue_m4110536930(NULL /*static, unused*/, L_156, L_157, /*hidden argument*/NULL);
	}

IL_0367:
	{
		goto IL_03a6;
	}

IL_036c:
	{
		bool L_158 = ObjectMetadata_get_IsDictionary_m2197140272((&V_11), /*hidden argument*/NULL);
		if (L_158)
		{
			goto IL_038b;
		}
	}
	{
		Type_t * L_159 = ___inst_type0;
		String_t* L_160 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_161 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral888960820, L_159, L_160, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_162 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_162, L_161, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_162);
	}

IL_038b:
	{
		RuntimeObject * L_163 = V_4;
		String_t* L_164 = V_12;
		Type_t * L_165 = ObjectMetadata_get_ElementType_m609016881((&V_11), /*hidden argument*/NULL);
		JsonReader_t836887441 * L_166 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_167 = JsonMapper_ReadValue_m4110536930(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_163, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_163, IDictionary_t1363984059_il2cpp_TypeInfo_var)), L_164, L_167);
	}

IL_03a6:
	{
		goto IL_02aa;
	}

IL_03ab:
	{
		RuntimeObject * L_168 = V_4;
		return L_168;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  RuntimeObject* JsonMapper_ReadValue_m1268729263 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadValue_m1268729263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_t836887441 * L_0 = ___reader1;
		NullCheck(L_0);
		JsonReader_Read_m315486126(L_0, /*hidden argument*/NULL);
		JsonReader_t836887441 * L_1 = ___reader1;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_m1586234379(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0020;
		}
	}
	{
		JsonReader_t836887441 * L_3 = ___reader1;
		NullCheck(L_3);
		int32_t L_4 = JsonReader_get_Token_m1586234379(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (RuntimeObject*)NULL;
	}

IL_0022:
	{
		WrapperFactory_t2158548929 * L_5 = ___factory0;
		NullCheck(L_5);
		RuntimeObject* L_6 = WrapperFactory_Invoke_m990385463(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		JsonReader_t836887441 * L_7 = ___reader1;
		NullCheck(L_7);
		int32_t L_8 = JsonReader_get_Token_m1586234379(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		JsonReader_t836887441 * L_10 = ___reader1;
		NullCheck(L_10);
		RuntimeObject * L_11 = JsonReader_get_Value_m151916214(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(18 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_9, ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_12 = V_0;
		return L_12;
	}

IL_0049:
	{
		JsonReader_t836887441 * L_13 = ___reader1;
		NullCheck(L_13);
		int32_t L_14 = JsonReader_get_Token_m1586234379(L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		JsonReader_t836887441 * L_16 = ___reader1;
		NullCheck(L_16);
		RuntimeObject * L_17 = JsonReader_get_Value_m151916214(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< double >::Invoke(14 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_15, ((*(double*)((double*)UnBox(L_17, Double_t594665363_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_18 = V_0;
		return L_18;
	}

IL_0068:
	{
		JsonReader_t836887441 * L_19 = ___reader1;
		NullCheck(L_19);
		int32_t L_20 = JsonReader_get_Token_m1586234379(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)6))))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_21 = V_0;
		JsonReader_t836887441 * L_22 = ___reader1;
		NullCheck(L_22);
		RuntimeObject * L_23 = JsonReader_get_Value_m151916214(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(15 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_21, ((*(int32_t*)((int32_t*)UnBox(L_23, Int32_t2950945753_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_24 = V_0;
		return L_24;
	}

IL_0087:
	{
		JsonReader_t836887441 * L_25 = ___reader1;
		NullCheck(L_25);
		int32_t L_26 = JsonReader_get_Token_m1586234379(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)7))))
		{
			goto IL_00a6;
		}
	}
	{
		RuntimeObject* L_27 = V_0;
		JsonReader_t836887441 * L_28 = ___reader1;
		NullCheck(L_28);
		RuntimeObject * L_29 = JsonReader_get_Value_m151916214(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		InterfaceActionInvoker1< int64_t >::Invoke(17 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_27, ((*(int64_t*)((int64_t*)UnBox(L_29, Int64_t3736567304_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_30 = V_0;
		return L_30;
	}

IL_00a6:
	{
		JsonReader_t836887441 * L_31 = ___reader1;
		NullCheck(L_31);
		int32_t L_32 = JsonReader_get_Token_m1586234379(L_31, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeObject* L_33 = V_0;
		JsonReader_t836887441 * L_34 = ___reader1;
		NullCheck(L_34);
		RuntimeObject * L_35 = JsonReader_get_Value_m151916214(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_33, ((*(bool*)((bool*)UnBox(L_35, Boolean_t97287965_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_36 = V_0;
		return L_36;
	}

IL_00c6:
	{
		JsonReader_t836887441 * L_37 = ___reader1;
		NullCheck(L_37);
		int32_t L_38 = JsonReader_get_Token_m1586234379(L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_0104;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_39, 2);
	}

IL_00d9:
	{
		WrapperFactory_t2158548929 * L_40 = ___factory0;
		JsonReader_t836887441 * L_41 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_42 = JsonMapper_ReadValue_m1268729263(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		V_1 = L_42;
		JsonReader_t836887441 * L_43 = ___reader1;
		NullCheck(L_43);
		int32_t L_44 = JsonReader_get_Token_m1586234379(L_43, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)5))))
		{
			goto IL_00f2;
		}
	}
	{
		goto IL_00ff;
	}

IL_00f2:
	{
		RuntimeObject* L_45 = V_0;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_45, L_46);
		goto IL_00d9;
	}

IL_00ff:
	{
		goto IL_014e;
	}

IL_0104:
	{
		JsonReader_t836887441 * L_47 = ___reader1;
		NullCheck(L_47);
		int32_t L_48 = JsonReader_get_Token_m1586234379(L_47, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_014e;
		}
	}
	{
		RuntimeObject* L_49 = V_0;
		NullCheck(L_49);
		InterfaceActionInvoker1< int32_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, L_49, 1);
	}

IL_0117:
	{
		JsonReader_t836887441 * L_50 = ___reader1;
		NullCheck(L_50);
		JsonReader_Read_m315486126(L_50, /*hidden argument*/NULL);
		JsonReader_t836887441 * L_51 = ___reader1;
		NullCheck(L_51);
		int32_t L_52 = JsonReader_get_Token_m1586234379(L_51, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)3))))
		{
			goto IL_012f;
		}
	}
	{
		goto IL_014e;
	}

IL_012f:
	{
		JsonReader_t836887441 * L_53 = ___reader1;
		NullCheck(L_53);
		RuntimeObject * L_54 = JsonReader_get_Value_m151916214(L_53, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_54, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_55 = V_0;
		String_t* L_56 = V_2;
		WrapperFactory_t2158548929 * L_57 = ___factory0;
		JsonReader_t836887441 * L_58 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_59 = JsonMapper_ReadValue_m1268729263(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_55);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1363984059_il2cpp_TypeInfo_var, L_55, L_56, L_59);
		goto IL_0117;
	}

IL_014e:
	{
		RuntimeObject* L_60 = V_0;
		return L_60;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
extern "C"  void JsonMapper_RegisterBaseExporters_m1811454598 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseExporters_m1811454598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Type_t * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Type_t * G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Type_t * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Type_t * G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Type_t * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Type_t * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Type_t * G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Type_t * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Type_t * G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Type_t * G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	Type_t * G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	Type_t * G_B13_0 = NULL;
	RuntimeObject* G_B13_1 = NULL;
	Type_t * G_B16_0 = NULL;
	RuntimeObject* G_B16_1 = NULL;
	Type_t * G_B15_0 = NULL;
	RuntimeObject* G_B15_1 = NULL;
	Type_t * G_B18_0 = NULL;
	RuntimeObject* G_B18_1 = NULL;
	Type_t * G_B17_0 = NULL;
	RuntimeObject* G_B17_1 = NULL;
	Type_t * G_B20_0 = NULL;
	RuntimeObject* G_B20_1 = NULL;
	Type_t * G_B19_0 = NULL;
	RuntimeObject* G_B19_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0027;
		}
	}
	{
		intptr_t L_4 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__0_m1931573245_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_5 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_5, NULL, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_16(L_5);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_6 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_16();
		NullCheck(G_B2_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B2_1, G_B2_0, L_6);
		RuntimeObject* L_7 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_10 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_10)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0058;
		}
	}
	{
		intptr_t L_11 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__1_m3254454996_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_12 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_17(L_12);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_13 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_17();
		NullCheck(G_B4_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B4_1, G_B4_0, L_13);
		RuntimeObject* L_14 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_17 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_18();
		G_B5_0 = L_16;
		G_B5_1 = L_14;
		if (L_17)
		{
			G_B6_0 = L_16;
			G_B6_1 = L_14;
			goto IL_0089;
		}
	}
	{
		intptr_t L_18 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__2_m1010729477_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_19 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_19, NULL, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_18(L_19);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_20 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_18();
		NullCheck(G_B6_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B6_1, G_B6_0, L_20);
		RuntimeObject* L_21 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_24 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_19();
		G_B7_0 = L_23;
		G_B7_1 = L_21;
		if (L_24)
		{
			G_B8_0 = L_23;
			G_B8_1 = L_21;
			goto IL_00ba;
		}
	}
	{
		intptr_t L_25 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__3_m1720027564_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_26 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_26, NULL, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_19(L_26);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_27 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_19();
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_27);
		RuntimeObject* L_28 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_29 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_31 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_20();
		G_B9_0 = L_30;
		G_B9_1 = L_28;
		if (L_31)
		{
			G_B10_0 = L_30;
			G_B10_1 = L_28;
			goto IL_00eb;
		}
	}
	{
		intptr_t L_32 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__4_m3555118102_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_33 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_33, NULL, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache4_20(L_33);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
	}

IL_00eb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_34 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_20();
		NullCheck(G_B10_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B10_1, G_B10_0, L_34);
		RuntimeObject* L_35 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_36 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_38 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_21();
		G_B11_0 = L_37;
		G_B11_1 = L_35;
		if (L_38)
		{
			G_B12_0 = L_37;
			G_B12_1 = L_35;
			goto IL_011c;
		}
	}
	{
		intptr_t L_39 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__5_m2252457161_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_40 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_40, NULL, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache5_21(L_40);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
	}

IL_011c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_41 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_21();
		NullCheck(G_B12_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B12_1, G_B12_0, L_41);
		RuntimeObject* L_42 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_43 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_45 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_22();
		G_B13_0 = L_44;
		G_B13_1 = L_42;
		if (L_45)
		{
			G_B14_0 = L_44;
			G_B14_1 = L_42;
			goto IL_014d;
		}
	}
	{
		intptr_t L_46 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__6_m2872973994_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_47 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_47, NULL, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache6_22(L_47);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
	}

IL_014d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_48 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_22();
		NullCheck(G_B14_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B14_1, G_B14_0, L_48);
		RuntimeObject* L_49 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_50 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_52 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_23();
		G_B15_0 = L_51;
		G_B15_1 = L_49;
		if (L_52)
		{
			G_B16_0 = L_51;
			G_B16_1 = L_49;
			goto IL_017e;
		}
	}
	{
		intptr_t L_53 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__7_m742230771_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_54 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_54, NULL, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache7_23(L_54);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
	}

IL_017e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_55 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_23();
		NullCheck(G_B16_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B16_1, G_B16_0, L_55);
		RuntimeObject* L_56 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_59 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_24();
		G_B17_0 = L_58;
		G_B17_1 = L_56;
		if (L_59)
		{
			G_B18_0 = L_58;
			G_B18_1 = L_56;
			goto IL_01af;
		}
	}
	{
		intptr_t L_60 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__8_m2217235194_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_61 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_61, NULL, L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache8_24(L_61);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
	}

IL_01af:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_62 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_24();
		NullCheck(G_B18_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B18_1, G_B18_0, L_62);
		RuntimeObject* L_63 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t3027515415  L_64 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_65 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
		ExporterFunc_t1851311465 * L_66 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache9_25();
		G_B19_0 = L_65;
		G_B19_1 = L_63;
		if (L_66)
		{
			G_B20_0 = L_65;
			G_B20_1 = L_63;
			goto IL_01e0;
		}
	}
	{
		intptr_t L_67 = (intptr_t)JsonMapper_U3CRegisterBaseExportersU3Em__9_m846347913_RuntimeMethod_var;
		ExporterFunc_t1851311465 * L_68 = (ExporterFunc_t1851311465 *)il2cpp_codegen_object_new(ExporterFunc_t1851311465_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m2205533801(L_68, NULL, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache9_25(L_68);
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ExporterFunc_t1851311465 * L_69 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache9_25();
		NullCheck(G_B20_1);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t1851311465 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, G_B20_1, G_B20_0, L_69);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
extern "C"  void JsonMapper_RegisterBaseImporters_m1703037250 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseImporters_m1703037250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t3630937194 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheA_26();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__A_m4007510909_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_2 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheA_26(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheA_26();
		V_0 = L_3;
		RuntimeObject* L_4 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Byte_t1134296376_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_9 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_4, L_6, L_8, L_9, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_10 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheB_27();
		if (L_10)
		{
			goto IL_0055;
		}
	}
	{
		intptr_t L_11 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__B_m1626295066_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_12 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheB_27(L_12);
	}

IL_0055:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_13 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheB_27();
		V_0 = L_13;
		RuntimeObject* L_14 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_19 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_14, L_16, L_18, L_19, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_20 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheC_28();
		if (L_20)
		{
			goto IL_0092;
		}
	}
	{
		intptr_t L_21 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__C_m4231628127_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_22 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_22, NULL, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheC_28(L_22);
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_23 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheC_28();
		V_0 = L_23;
		RuntimeObject* L_24 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_25 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_27 = { reinterpret_cast<intptr_t> (SByte_t1669577662_0_0_0_var) };
		Type_t * L_28 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_29 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_24, L_26, L_28, L_29, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_30 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheD_29();
		if (L_30)
		{
			goto IL_00cf;
		}
	}
	{
		intptr_t L_31 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__D_m1424933668_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_32 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_32, NULL, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheD_29(L_32);
	}

IL_00cf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_33 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheD_29();
		V_0 = L_33;
		RuntimeObject* L_34 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_35 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_37 = { reinterpret_cast<intptr_t> (Int16_t2552820387_0_0_0_var) };
		Type_t * L_38 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_39 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_34, L_36, L_38, L_39, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_40 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheE_30();
		if (L_40)
		{
			goto IL_010c;
		}
	}
	{
		intptr_t L_41 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__E_m4004836201_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_42 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_42, NULL, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheE_30(L_42);
	}

IL_010c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_43 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheE_30();
		V_0 = L_43;
		RuntimeObject* L_44 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_45 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_47 = { reinterpret_cast<intptr_t> (UInt16_t2177724958_0_0_0_var) };
		Type_t * L_48 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_49 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_44, L_46, L_48, L_49, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_50 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheF_31();
		if (L_50)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_51 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__F_m107819350_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_52 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_52, NULL, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cacheF_31(L_52);
	}

IL_0149:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_53 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cacheF_31();
		V_0 = L_53;
		RuntimeObject* L_54 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_55 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_57 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		Type_t * L_58 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_59 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_54, L_56, L_58, L_59, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_60 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache10_32();
		if (L_60)
		{
			goto IL_0186;
		}
	}
	{
		intptr_t L_61 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__10_m3557821550_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_62 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_62, NULL, L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache10_32(L_62);
	}

IL_0186:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_63 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache10_32();
		V_0 = L_63;
		RuntimeObject* L_64 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_65 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_67 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		Type_t * L_68 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_69 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_64, L_66, L_68, L_69, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_70 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_33();
		if (L_70)
		{
			goto IL_01c3;
		}
	}
	{
		intptr_t L_71 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__11_m1356604216_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_72 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_72, NULL, L_71, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache11_33(L_72);
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_73 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache11_33();
		V_0 = L_73;
		RuntimeObject* L_74 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_75 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_77 = { reinterpret_cast<intptr_t> (Single_t1397266774_0_0_0_var) };
		Type_t * L_78 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_79 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_74, L_76, L_78, L_79, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_80 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_34();
		if (L_80)
		{
			goto IL_0200;
		}
	}
	{
		intptr_t L_81 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__12_m870996233_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_82 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_82, NULL, L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache12_34(L_82);
	}

IL_0200:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_83 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache12_34();
		V_0 = L_83;
		RuntimeObject* L_84 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_85 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_86 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_87 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		Type_t * L_88 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_89 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_84, L_86, L_88, L_89, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_90 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_35();
		if (L_90)
		{
			goto IL_023d;
		}
	}
	{
		intptr_t L_91 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__13_m177952352_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_92 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_92, NULL, L_91, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache13_35(L_92);
	}

IL_023d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_93 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache13_35();
		V_0 = L_93;
		RuntimeObject* L_94 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_95 = { reinterpret_cast<intptr_t> (Double_t594665363_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_97 = { reinterpret_cast<intptr_t> (Decimal_t2948259380_0_0_0_var) };
		Type_t * L_98 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_99 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_94, L_96, L_98, L_99, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_100 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_36();
		if (L_100)
		{
			goto IL_027a;
		}
	}
	{
		intptr_t L_101 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__14_m2551760457_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_102 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_102, NULL, L_101, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache14_36(L_102);
	}

IL_027a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_103 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache14_36();
		V_0 = L_103;
		RuntimeObject* L_104 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_105 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_107 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		Type_t * L_108 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_107, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_109 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_110 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_37();
		if (L_110)
		{
			goto IL_02b7;
		}
	}
	{
		intptr_t L_111 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__15_m3529765172_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_112 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_112, NULL, L_111, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache15_37(L_112);
	}

IL_02b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_113 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache15_37();
		V_0 = L_113;
		RuntimeObject* L_114 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_115 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_116 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_115, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_117 = { reinterpret_cast<intptr_t> (Char_t3634460470_0_0_0_var) };
		Type_t * L_118 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_119 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_114, L_116, L_118, L_119, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_120 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_38();
		if (L_120)
		{
			goto IL_02f4;
		}
	}
	{
		intptr_t L_121 = (intptr_t)JsonMapper_U3CRegisterBaseImportersU3Em__16_m1399567613_RuntimeMethod_var;
		ImporterFunc_t3630937194 * L_122 = (ImporterFunc_t3630937194 *)il2cpp_codegen_object_new(ImporterFunc_t3630937194_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m1689585722(L_122, NULL, L_121, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache16_38(L_122);
	}

IL_02f4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		ImporterFunc_t3630937194 * L_123 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache16_38();
		V_0 = L_123;
		RuntimeObject* L_124 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t3027515415  L_125 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_126 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_127 = { reinterpret_cast<intptr_t> (DateTime_t3738529785_0_0_0_var) };
		Type_t * L_128 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_127, /*hidden argument*/NULL);
		ImporterFunc_t3630937194 * L_129 = V_0;
		JsonMapper_RegisterImporter_m907439251(NULL /*static, unused*/, L_124, L_126, L_128, L_129, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
extern "C"  void JsonMapper_RegisterImporter_m907439251 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t3630937194 * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterImporter_m907439251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t1780316962 * L_5 = (Dictionary_2_t1780316962 *)il2cpp_codegen_object_new(Dictionary_2_t1780316962_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1803091887(L_5, /*hidden argument*/Dictionary_2__ctor_m1803091887_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0018:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t1152366808_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t3630937194 * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t3630937194 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t244168353_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
extern "C"  void JsonMapper_WriteValue_m75393811 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_WriteValue_m75393811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DictionaryEntry_t3123975638  V_6;
	memset(&V_6, 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Type_t * V_9 = NULL;
	ExporterFunc_t1851311465 * V_10 = NULL;
	ExporterFunc_t1851311465 * V_11 = NULL;
	Type_t * V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	PropertyMetadata_t3727440473  V_14;
	memset(&V_14, 0, sizeof(V_14));
	RuntimeObject* V_15 = NULL;
	PropertyInfo_t * V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___depth3;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_max_nesting_depth_0();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2854558491, L_3, /*hidden argument*/NULL);
		JsonException_t3682484112 * L_5 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0021:
	{
		RuntimeObject * L_6 = ___obj0;
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriter_t3570089748 * L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_m3713362081(L_7, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_002f:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		JsonWriter_t3570089748 * L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_t3478189236 * L_11 = JsonWriter_get_TextWriter_m4071896128(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(19 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		goto IL_0067;
	}

IL_005b:
	{
		RuntimeObject * L_14 = ___obj0;
		JsonWriter_t3570089748 * L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_t3570089748 * >::Invoke(20 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t1028825384_il2cpp_TypeInfo_var)), L_15);
	}

IL_0067:
	{
		return;
	}

IL_0068:
	{
		RuntimeObject * L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		JsonWriter_t3570089748 * L_17 = ___writer1;
		RuntimeObject * L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_m3713362081(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		RuntimeObject * L_19 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t594665363_il2cpp_TypeInfo_var)))
		{
			goto IL_0098;
		}
	}
	{
		JsonWriter_t3570089748 * L_20 = ___writer1;
		RuntimeObject * L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_m2002991247(L_20, ((*(double*)((double*)UnBox(L_21, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		RuntimeObject * L_22 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Int32_t2950945753_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		JsonWriter_t3570089748 * L_23 = ___writer1;
		RuntimeObject * L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_m1949814895(L_23, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Boolean_t97287965_il2cpp_TypeInfo_var)))
		{
			goto IL_00c8;
		}
	}
	{
		JsonWriter_t3570089748 * L_26 = ___writer1;
		RuntimeObject * L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_m3048574580(L_26, ((*(bool*)((bool*)UnBox(L_27, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00c8:
	{
		RuntimeObject * L_28 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Int64_t3736567304_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}
	{
		JsonWriter_t3570089748 * L_29 = ___writer1;
		RuntimeObject * L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m2693541440(L_29, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00e0:
	{
		RuntimeObject * L_31 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_013f;
		}
	}
	{
		JsonWriter_t3570089748 * L_32 = ___writer1;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_m1053267913(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_33 = ___obj0;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34 = Array_GetEnumerator_m4277730612(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_34;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0114;
		}

IL_0102:
		{
			RuntimeObject* L_35 = V_1;
			NullCheck(L_35);
			RuntimeObject * L_36 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_35);
			V_0 = L_36;
			RuntimeObject * L_37 = V_0;
			JsonWriter_t3570089748 * L_38 = ___writer1;
			bool L_39 = ___writer_is_private2;
			int32_t L_40 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_37, L_38, L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0114:
		{
			RuntimeObject* L_41 = V_1;
			NullCheck(L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0102;
			}
		}

IL_011f:
		{
			IL2CPP_LEAVE(0x138, FINALLY_0124);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0124;
	}

FINALLY_0124:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_1;
			RuntimeObject* L_44 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_2 = L_44;
			if (!L_44)
			{
				goto IL_0137;
			}
		}

IL_0131:
		{
			RuntimeObject* L_45 = V_2;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_45);
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(292)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(292)
	{
		IL2CPP_JUMP_TBL(0x138, IL_0138)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0138:
	{
		JsonWriter_t3570089748 * L_46 = ___writer1;
		NullCheck(L_46);
		JsonWriter_WriteArrayEnd_m3303839937(L_46, /*hidden argument*/NULL);
		return;
	}

IL_013f:
	{
		RuntimeObject * L_47 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_47, IList_t2094931216_il2cpp_TypeInfo_var)))
		{
			goto IL_01a4;
		}
	}
	{
		JsonWriter_t3570089748 * L_48 = ___writer1;
		NullCheck(L_48);
		JsonWriter_WriteArrayStart_m1053267913(L_48, /*hidden argument*/NULL);
		RuntimeObject * L_49 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t2094931216_il2cpp_TypeInfo_var)));
		RuntimeObject* L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IList_t2094931216_il2cpp_TypeInfo_var)));
		V_4 = L_50;
	}

IL_015d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0175;
		}

IL_0162:
		{
			RuntimeObject* L_51 = V_4;
			NullCheck(L_51);
			RuntimeObject * L_52 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_51);
			V_3 = L_52;
			RuntimeObject * L_53 = V_3;
			JsonWriter_t3570089748 * L_54 = ___writer1;
			bool L_55 = ___writer_is_private2;
			int32_t L_56 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_53, L_54, L_55, ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0175:
		{
			RuntimeObject* L_57 = V_4;
			NullCheck(L_57);
			bool L_58 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_57);
			if (L_58)
			{
				goto IL_0162;
			}
		}

IL_0181:
		{
			IL2CPP_LEAVE(0x19D, FINALLY_0186);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0186;
	}

FINALLY_0186:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_59 = V_4;
			RuntimeObject* L_60 = ((RuntimeObject*)IsInst((RuntimeObject*)L_59, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_5 = L_60;
			if (!L_60)
			{
				goto IL_019c;
			}
		}

IL_0195:
		{
			RuntimeObject* L_61 = V_5;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_61);
		}

IL_019c:
		{
			IL2CPP_END_FINALLY(390)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(390)
	{
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_019d:
	{
		JsonWriter_t3570089748 * L_62 = ___writer1;
		NullCheck(L_62);
		JsonWriter_WriteArrayEnd_m3303839937(L_62, /*hidden argument*/NULL);
		return;
	}

IL_01a4:
	{
		RuntimeObject * L_63 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_63, IDictionary_t1363984059_il2cpp_TypeInfo_var)))
		{
			goto IL_0227;
		}
	}
	{
		JsonWriter_t3570089748 * L_64 = ___writer1;
		NullCheck(L_64);
		JsonWriter_WriteObjectStart_m993161475(L_64, /*hidden argument*/NULL);
		RuntimeObject * L_65 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
		RuntimeObject* L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1363984059_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_65, IDictionary_t1363984059_il2cpp_TypeInfo_var)));
		V_7 = L_66;
	}

IL_01c2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01f8;
		}

IL_01c7:
		{
			RuntimeObject* L_67 = V_7;
			NullCheck(L_67);
			RuntimeObject * L_68 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_67);
			V_6 = ((*(DictionaryEntry_t3123975638 *)((DictionaryEntry_t3123975638 *)UnBox(L_68, DictionaryEntry_t3123975638_il2cpp_TypeInfo_var))));
			JsonWriter_t3570089748 * L_69 = ___writer1;
			RuntimeObject * L_70 = DictionaryEntry_get_Key_m3117378551((&V_6), /*hidden argument*/NULL);
			NullCheck(L_69);
			JsonWriter_WritePropertyName_m1382075963(L_69, ((String_t*)CastclassSealed((RuntimeObject*)L_70, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_71 = DictionaryEntry_get_Value_m618120527((&V_6), /*hidden argument*/NULL);
			JsonWriter_t3570089748 * L_72 = ___writer1;
			bool L_73 = ___writer_is_private2;
			int32_t L_74 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_71, L_72, L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_01f8:
		{
			RuntimeObject* L_75 = V_7;
			NullCheck(L_75);
			bool L_76 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_75);
			if (L_76)
			{
				goto IL_01c7;
			}
		}

IL_0204:
		{
			IL2CPP_LEAVE(0x220, FINALLY_0209);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0209;
	}

FINALLY_0209:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_77 = V_7;
			RuntimeObject* L_78 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_8 = L_78;
			if (!L_78)
			{
				goto IL_021f;
			}
		}

IL_0218:
		{
			RuntimeObject* L_79 = V_8;
			NullCheck(L_79);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_79);
		}

IL_021f:
		{
			IL2CPP_END_FINALLY(521)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(521)
	{
		IL2CPP_JUMP_TBL(0x220, IL_0220)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0220:
	{
		JsonWriter_t3570089748 * L_80 = ___writer1;
		NullCheck(L_80);
		JsonWriter_WriteObjectEnd_m1917228531(L_80, /*hidden argument*/NULL);
		return;
	}

IL_0227:
	{
		RuntimeObject * L_81 = ___obj0;
		NullCheck(L_81);
		Type_t * L_82 = Object_GetType_m88164663(L_81, /*hidden argument*/NULL);
		V_9 = L_82;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_83 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_84 = V_9;
		NullCheck(L_83);
		bool L_85 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_83, L_84);
		if (!L_85)
		{
			goto IL_0258;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_86 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_87 = V_9;
		NullCheck(L_86);
		ExporterFunc_t1851311465 * L_88 = InterfaceFuncInvoker1< ExporterFunc_t1851311465 *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_86, L_87);
		V_10 = L_88;
		ExporterFunc_t1851311465 * L_89 = V_10;
		RuntimeObject * L_90 = ___obj0;
		JsonWriter_t3570089748 * L_91 = ___writer1;
		NullCheck(L_89);
		ExporterFunc_Invoke_m1836225596(L_89, L_90, L_91, /*hidden argument*/NULL);
		return;
	}

IL_0258:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_93 = V_9;
		NullCheck(L_92);
		bool L_94 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_92, L_93);
		if (!L_94)
		{
			goto IL_0281;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_95 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_96 = V_9;
		NullCheck(L_95);
		ExporterFunc_t1851311465 * L_97 = InterfaceFuncInvoker1< ExporterFunc_t1851311465 *, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t2759509920_il2cpp_TypeInfo_var, L_95, L_96);
		V_11 = L_97;
		ExporterFunc_t1851311465 * L_98 = V_11;
		RuntimeObject * L_99 = ___obj0;
		JsonWriter_t3570089748 * L_100 = ___writer1;
		NullCheck(L_98);
		ExporterFunc_Invoke_m1836225596(L_98, L_99, L_100, /*hidden argument*/NULL);
		return;
	}

IL_0281:
	{
		RuntimeObject * L_101 = ___obj0;
		if (!((Enum_t4135868527 *)IsInstClass((RuntimeObject*)L_101, Enum_t4135868527_il2cpp_TypeInfo_var)))
		{
			goto IL_02e6;
		}
	}
	{
		Type_t * L_102 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		Type_t * L_103 = Enum_GetUnderlyingType_m2480312097(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		V_12 = L_103;
		Type_t * L_104 = V_12;
		RuntimeTypeHandle_t3027515415  L_105 = { reinterpret_cast<intptr_t> (Int64_t3736567304_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_104) == ((RuntimeObject*)(Type_t *)L_106)))
		{
			goto IL_02c8;
		}
	}
	{
		Type_t * L_107 = V_12;
		RuntimeTypeHandle_t3027515415  L_108 = { reinterpret_cast<intptr_t> (UInt32_t2560061978_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_109 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_108, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_107) == ((RuntimeObject*)(Type_t *)L_109)))
		{
			goto IL_02c8;
		}
	}
	{
		Type_t * L_110 = V_12;
		RuntimeTypeHandle_t3027515415  L_111 = { reinterpret_cast<intptr_t> (UInt64_t4134040092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_112 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_111, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_110) == ((RuntimeObject*)(Type_t *)L_112))))
		{
			goto IL_02d9;
		}
	}

IL_02c8:
	{
		JsonWriter_t3570089748 * L_113 = ___writer1;
		RuntimeObject * L_114 = ___obj0;
		NullCheck(L_113);
		JsonWriter_Write_m1455779780(L_113, ((*(uint64_t*)((uint64_t*)UnBox(L_114, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		goto IL_02e5;
	}

IL_02d9:
	{
		JsonWriter_t3570089748 * L_115 = ___writer1;
		RuntimeObject * L_116 = ___obj0;
		NullCheck(L_115);
		JsonWriter_Write_m1949814895(L_115, ((*(int32_t*)((int32_t*)UnBox(L_116, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_02e5:
	{
		return;
	}

IL_02e6:
	{
		Type_t * L_117 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m3226067832(NULL /*static, unused*/, L_117, /*hidden argument*/NULL);
		RuntimeObject* L_118 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_119 = V_9;
		NullCheck(L_118);
		RuntimeObject* L_120 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(!0) */, IDictionary_2_t2155991415_il2cpp_TypeInfo_var, L_118, L_119);
		V_13 = L_120;
		JsonWriter_t3570089748 * L_121 = ___writer1;
		NullCheck(L_121);
		JsonWriter_WriteObjectStart_m993161475(L_121, /*hidden argument*/NULL);
		RuntimeObject* L_122 = V_13;
		NullCheck(L_122);
		RuntimeObject* L_123 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_t2707293362_il2cpp_TypeInfo_var, L_122);
		V_15 = L_123;
	}

IL_030a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0396;
		}

IL_030f:
		{
			RuntimeObject* L_124 = V_15;
			NullCheck(L_124);
			PropertyMetadata_t3727440473  L_125 = InterfaceFuncInvoker0< PropertyMetadata_t3727440473  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t4160010941_il2cpp_TypeInfo_var, L_124);
			V_14 = L_125;
			bool L_126 = (&V_14)->get_IsField_1();
			if (!L_126)
			{
				goto IL_0357;
			}
		}

IL_0324:
		{
			JsonWriter_t3570089748 * L_127 = ___writer1;
			MemberInfo_t * L_128 = (&V_14)->get_Info_0();
			NullCheck(L_128);
			String_t* L_129 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_128);
			NullCheck(L_127);
			JsonWriter_WritePropertyName_m1382075963(L_127, L_129, /*hidden argument*/NULL);
			MemberInfo_t * L_130 = (&V_14)->get_Info_0();
			RuntimeObject * L_131 = ___obj0;
			NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)));
			RuntimeObject * L_132 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_130, FieldInfo_t_il2cpp_TypeInfo_var)), L_131);
			JsonWriter_t3570089748 * L_133 = ___writer1;
			bool L_134 = ___writer_is_private2;
			int32_t L_135 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_132, L_133, L_134, ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_0396;
		}

IL_0357:
		{
			MemberInfo_t * L_136 = (&V_14)->get_Info_0();
			V_16 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_136, PropertyInfo_t_il2cpp_TypeInfo_var));
			PropertyInfo_t * L_137 = V_16;
			NullCheck(L_137);
			bool L_138 = VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_137);
			if (!L_138)
			{
				goto IL_0396;
			}
		}

IL_0371:
		{
			JsonWriter_t3570089748 * L_139 = ___writer1;
			MemberInfo_t * L_140 = (&V_14)->get_Info_0();
			NullCheck(L_140);
			String_t* L_141 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_140);
			NullCheck(L_139);
			JsonWriter_WritePropertyName_m1382075963(L_139, L_141, /*hidden argument*/NULL);
			PropertyInfo_t * L_142 = V_16;
			RuntimeObject * L_143 = ___obj0;
			NullCheck(L_142);
			RuntimeObject * L_144 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(22 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_142, L_143, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
			JsonWriter_t3570089748 * L_145 = ___writer1;
			bool L_146 = ___writer_is_private2;
			int32_t L_147 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_144, L_145, L_146, ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0396:
		{
			RuntimeObject* L_148 = V_15;
			NullCheck(L_148);
			bool L_149 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_148);
			if (L_149)
			{
				goto IL_030f;
			}
		}

IL_03a2:
		{
			IL2CPP_LEAVE(0x3B6, FINALLY_03a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03a7;
	}

FINALLY_03a7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_150 = V_15;
			if (!L_150)
			{
				goto IL_03b5;
			}
		}

IL_03ae:
		{
			RuntimeObject* L_151 = V_15;
			NullCheck(L_151);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_151);
		}

IL_03b5:
		{
			IL2CPP_END_FINALLY(935)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(935)
	{
		IL2CPP_JUMP_TBL(0x3B6, IL_03b6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03b6:
	{
		JsonWriter_t3570089748 * L_152 = ___writer1;
		NullCheck(L_152);
		JsonWriter_WriteObjectEnd_m1917228531(L_152, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
extern "C"  String_t* JsonMapper_ToJson_m428591468 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToJson_m428591468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_lock_15();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonWriter_t3570089748 * L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_2);
		JsonWriter_Reset_m3733384412(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___obj0;
		JsonWriter_t3570089748 * L_4 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
		JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_3, L_4, (bool)1, 0, /*hidden argument*/NULL);
		JsonWriter_t3570089748 * L_5 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_1 = L_6;
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003a:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void LitJson.JsonMapper::ToJson(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_ToJson_m1987749589 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToJson_m1987749589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		JsonWriter_t3570089748 * L_1 = ___writer1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		JsonMapper_WriteValue_m75393811(NULL /*static, unused*/, L_0, L_1, (bool)0, 0, /*hidden argument*/NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(LitJson.JsonReader)
extern "C"  JsonData_t1524858407 * JsonMapper_ToObject_m3847968632 (RuntimeObject * __this /* static, unused */, JsonReader_t836887441 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToObject_m3847968632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_39();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)JsonMapper_U3CToObjectU3Em__17_m2519879843_RuntimeMethod_var;
		WrapperFactory_t2158548929 * L_2 = (WrapperFactory_t2158548929 *)il2cpp_codegen_object_new(WrapperFactory_t2158548929_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m2738494406(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache17_39(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache17_39();
		JsonReader_t836887441 * L_4 = ___reader0;
		RuntimeObject* L_5 = JsonMapper_ToWrapper_m1081200657(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return ((JsonData_t1524858407 *)CastclassClass((RuntimeObject*)L_5, JsonData_t1524858407_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.IO.TextReader)
extern "C"  JsonData_t1524858407 * JsonMapper_ToObject_m1395013517 (RuntimeObject * __this /* static, unused */, TextReader_t283511965 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToObject_m1395013517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t836887441 * V_0 = NULL;
	{
		TextReader_t283511965 * L_0 = ___reader0;
		JsonReader_t836887441 * L_1 = (JsonReader_t836887441 *)il2cpp_codegen_object_new(JsonReader_t836887441_il2cpp_TypeInfo_var);
		JsonReader__ctor_m54126749(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_40();
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)JsonMapper_U3CToObjectU3Em__18_m2519290019_RuntimeMethod_var;
		WrapperFactory_t2158548929 * L_4 = (WrapperFactory_t2158548929 *)il2cpp_codegen_object_new(WrapperFactory_t2158548929_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m2738494406(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache18_40(L_4);
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_5 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache18_40();
		JsonReader_t836887441 * L_6 = V_0;
		RuntimeObject* L_7 = JsonMapper_ToWrapper_m1081200657(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return ((JsonData_t1524858407 *)CastclassClass((RuntimeObject*)L_7, JsonData_t1524858407_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
extern "C"  JsonData_t1524858407 * JsonMapper_ToObject_m446676358 (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToObject_m446676358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_41();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)JsonMapper_U3CToObjectU3Em__19_m2519224483_RuntimeMethod_var;
		WrapperFactory_t2158548929 * L_2 = (WrapperFactory_t2158548929 *)il2cpp_codegen_object_new(WrapperFactory_t2158548929_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m2738494406(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache19_41(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		WrapperFactory_t2158548929 * L_3 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache19_41();
		String_t* L_4 = ___json0;
		RuntimeObject* L_5 = JsonMapper_ToWrapper_m2542376132(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return ((JsonData_t1524858407 *)CastclassClass((RuntimeObject*)L_5, JsonData_t1524858407_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
extern "C"  RuntimeObject* JsonMapper_ToWrapper_m1081200657 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, JsonReader_t836887441 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToWrapper_m1081200657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WrapperFactory_t2158548929 * L_0 = ___factory0;
		JsonReader_t836887441 * L_1 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = JsonMapper_ReadValue_m1268729263(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
extern "C"  RuntimeObject* JsonMapper_ToWrapper_m2542376132 (RuntimeObject * __this /* static, unused */, WrapperFactory_t2158548929 * ___factory0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToWrapper_m2542376132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t836887441 * V_0 = NULL;
	{
		String_t* L_0 = ___json1;
		JsonReader_t836887441 * L_1 = (JsonReader_t836887441 *)il2cpp_codegen_object_new(JsonReader_t836887441_il2cpp_TypeInfo_var);
		JsonReader__ctor_m514838367(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WrapperFactory_t2158548929 * L_2 = ___factory0;
		JsonReader_t836887441 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = JsonMapper_ReadValue_m1268729263(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonMapper::UnregisterExporters()
extern "C"  void JsonMapper_UnregisterExporters_m940177874 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_UnregisterExporters_m940177874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::Clear() */, ICollection_1_t931548338_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::UnregisterImporters()
extern "C"  void JsonMapper_UnregisterImporters_m587655374 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_UnregisterImporters_m587655374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>>::Clear() */, ICollection_1_t3619372522_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__0(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__0_m1931573245 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__0_m1931573245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m2505564049(NULL /*static, unused*/, ((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1949814895(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__1(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__1_m3254454996 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__1_m3254454996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1553911740(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3713362081(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__2(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__2_m1010729477 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__2_m1010729477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m41256750(NULL /*static, unused*/, ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_1, DateTime_t3738529785_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m3713362081(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__3(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__3_m1720027564 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__3_m1720027564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m4069484567(L_0, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_1, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__4(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__4_m3555118102 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__4_m3555118102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1405693041(NULL /*static, unused*/, ((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t1669577662_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1949814895(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__5(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__5_m2252457161 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__5_m2252457161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1085744762(NULL /*static, unused*/, ((*(int16_t*)((int16_t*)UnBox(L_1, Int16_t2552820387_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1949814895(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__6(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__6_m2872973994 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__6_m2872973994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m1987758323(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t2177724958_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1949814895(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__7(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__7_m742230771 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__7_m742230771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_m1745056470(NULL /*static, unused*/, ((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1455779780(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__8(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__8_m2217235194 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__8_m2217235194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m1455779780(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::<RegisterBaseExporters>m__9(System.Object,LitJson.JsonWriter)
extern "C"  void JsonMapper_U3CRegisterBaseExportersU3Em__9_m846347913 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, JsonWriter_t3570089748 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseExportersU3Em__9_m846347913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t3570089748 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m2002991247(L_0, (((double)((double)((*(float*)((float*)UnBox(L_1, Single_t1397266774_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__A(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__A_m4007510909 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__A_m4007510909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_m1734770211(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__B(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__B_m1626295066 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__B_m1626295066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m786726853(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__C(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__C_m4231628127 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__C_m4231628127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m2653418303(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t1669577662_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__D(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__D_m1424933668 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__D_m1424933668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m4174308322(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__E(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__E_m4004836201 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__E_m4004836201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m3515425647(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__F(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__F_m107819350 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__F_m107819350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m2215525276(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__10(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__10_m3557821550 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__10_m3557821550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m3635698920(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__11(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__11_m1356604216 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__11_m1356604216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m835189399(NULL /*static, unused*/, (((float)((float)((*(double*)((double*)UnBox(L_0, Double_t594665363_il2cpp_TypeInfo_var))))))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__12(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__12_m870996233 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__12_m870996233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_m2924063577(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__13(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__13_m177952352 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__13_m177952352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_1 = Convert_ToDecimal_m841368097(NULL /*static, unused*/, ((*(double*)((double*)UnBox(L_0, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2948259380  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2948259380_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__14(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__14_m2551760457 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__14_m2551760457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_m2194577773(NULL /*static, unused*/, ((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__15(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__15_m3529765172 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__15_m3529765172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_m85718752(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper::<RegisterBaseImporters>m__16(System.Object)
extern "C"  RuntimeObject * JsonMapper_U3CRegisterBaseImportersU3Em__16_m1399567613 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CRegisterBaseImportersU3Em__16_m1399567613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t3815285241_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t3815285241_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t3815285241_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = Convert_ToDateTime_m3802186295(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t3738529785  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__17()
extern "C"  RuntimeObject* JsonMapper_U3CToObjectU3Em__17_m2519879843 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CToObjectU3Em__17_m2519879843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t1524858407 * L_0 = (JsonData_t1524858407 *)il2cpp_codegen_object_new(JsonData_t1524858407_il2cpp_TypeInfo_var);
		JsonData__ctor_m1261409369(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__18()
extern "C"  RuntimeObject* JsonMapper_U3CToObjectU3Em__18_m2519290019 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CToObjectU3Em__18_m2519290019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t1524858407 * L_0 = (JsonData_t1524858407 *)il2cpp_codegen_object_new(JsonData_t1524858407_il2cpp_TypeInfo_var);
		JsonData__ctor_m1261409369(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::<ToObject>m__19()
extern "C"  RuntimeObject* JsonMapper_U3CToObjectU3Em__19_m2519224483 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_U3CToObjectU3Em__19_m2519224483_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_t1524858407 * L_0 = (JsonData_t1524858407 *)il2cpp_codegen_object_new(JsonData_t1524858407_il2cpp_TypeInfo_var);
		JsonData__ctor_m1261409369(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m2177566723 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		JsonReader_PopulateParseTable_m2622870148(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m514838367 (JsonReader_t836887441 * __this, String_t* ___json_text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m514838367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t3465604688 * L_1 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m3464502831(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader)
extern "C"  void JsonReader__ctor_m54126749 (JsonReader_t836887441 * __this, TextReader_t283511965 * ___reader0, const RuntimeMethod* method)
{
	{
		TextReader_t283511965 * L_0 = ___reader0;
		JsonReader__ctor_m3464502831(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m3464502831 (JsonReader_t836887441 * __this, TextReader_t283511965 * ___reader0, bool ___owned1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m3464502831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TextReader_t283511965 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3529812268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_read_started_9((bool)0);
		Stack_1_t3794335208 * L_2 = (Stack_1_t3794335208 *)il2cpp_codegen_object_new(Stack_1_t3794335208_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3860988293(L_2, /*hidden argument*/Stack_1__ctor_m3860988293_RuntimeMethod_var);
		__this->set_automaton_stack_1(L_2);
		Stack_1_t3794335208 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_m3289045699(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m3289045699_RuntimeMethod_var);
		Stack_1_t3794335208 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_m3289045699(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m3289045699_RuntimeMethod_var);
		TextReader_t283511965 * L_5 = ___reader0;
		Lexer_t1514038666 * L_6 = (Lexer_t1514038666 *)il2cpp_codegen_object_new(Lexer_t1514038666_il2cpp_TypeInfo_var);
		Lexer__ctor_m2815723357(L_6, L_5, /*hidden argument*/NULL);
		__this->set_lexer_6(L_6);
		__this->set_end_of_input_5((bool)0);
		__this->set_end_of_json_4((bool)0);
		TextReader_t283511965 * L_7 = ___reader0;
		__this->set_reader_10(L_7);
		bool L_8 = ___owned1;
		__this->set_reader_is_owned_11(L_8);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowComments()
extern "C"  bool JsonReader_get_AllowComments_m1110840944 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		Lexer_t1514038666 * L_0 = __this->get_lexer_6();
		NullCheck(L_0);
		bool L_1 = Lexer_get_AllowComments_m2710340855(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowComments(System.Boolean)
extern "C"  void JsonReader_set_AllowComments_m2512682263 (JsonReader_t836887441 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		Lexer_t1514038666 * L_0 = __this->get_lexer_6();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowComments_m1557685570(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_AllowSingleQuotedStrings()
extern "C"  bool JsonReader_get_AllowSingleQuotedStrings_m3827572095 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		Lexer_t1514038666 * L_0 = __this->get_lexer_6();
		NullCheck(L_0);
		bool L_1 = Lexer_get_AllowSingleQuotedStrings_m2593439945(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonReader::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void JsonReader_set_AllowSingleQuotedStrings_m1099036376 (JsonReader_t836887441 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		Lexer_t1514038666 * L_0 = __this->get_lexer_6();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Lexer_set_AllowSingleQuotedStrings_m1671508202(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfInput()
extern "C"  bool JsonReader_get_EndOfInput_m4087583389 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		return L_0;
	}
}
// System.Boolean LitJson.JsonReader::get_EndOfJson()
extern "C"  bool JsonReader_get_EndOfJson_m370708958 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_json_4();
		return L_0;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m1586234379 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_13();
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
extern "C"  RuntimeObject * JsonReader_get_Value_m151916214 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_12();
		return L_0;
	}
}
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m2622870148 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_PopulateParseTable_m2622870148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t921491721 * L_0 = (Dictionary_2_t921491721 *)il2cpp_codegen_object_new(Dictionary_2_t921491721_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3016042(L_0, /*hidden argument*/Dictionary_2__ctor_m3016042_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t836887441_il2cpp_TypeInfo_var);
		((JsonReader_t836887441_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t836887441_il2cpp_TypeInfo_var))->set_parse_table_0(L_0);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65548), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_1 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t385246372* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65548), ((int32_t)91), L_2, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65549), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_3 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, L_4, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)34), L_3, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_5 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)91), L_5, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_7 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)93), L_7, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_8 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)123), L_8, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_10 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65537), L_10, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_12 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_13 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, L_13, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65538), L_12, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_14 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65539), L_14, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_16 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65549), ((int32_t)65540), L_16, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65544), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_18 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t385246372* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65544), ((int32_t)123), L_19, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65545), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_20 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DAAF72C1002FDBCAE040DAE16A10D82184CE83679_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65545), ((int32_t)34), L_20, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_22 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65545), ((int32_t)125), L_22, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65546), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_23 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, L_24, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65546), ((int32_t)34), L_23, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65547), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_25 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DB67A7FB4648C62F6A1337CA473436D0E787E8633_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65547), ((int32_t)44), L_25, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_27 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65547), ((int32_t)125), L_27, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65552), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_28 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DC69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65552), ((int32_t)34), L_28, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65543), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_30 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65543), ((int32_t)91), L_30, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_31 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65543), ((int32_t)123), L_31, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65550), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_32 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)34), L_32, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_33 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)91), L_33, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_34 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)123), L_34, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_35 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65537), L_35, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_36 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65538), L_36, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_37 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65539), L_37, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_38 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65550), ((int32_t)65540), L_38, /*hidden argument*/NULL);
		JsonReader_TableAddRow_m3148122067(NULL /*static, unused*/, ((int32_t)65551), /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_39 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeFieldHandle_t1871169219  L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2DFAD52931F5B79811D31566BB18B6E0B5D2E2A164_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, L_40, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65551), ((int32_t)44), L_39, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_41 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m1291145106(NULL /*static, unused*/, ((int32_t)65551), ((int32_t)93), L_41, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m1291145106 (RuntimeObject * __this /* static, unused */, int32_t ___row0, int32_t ___col1, Int32U5BU5D_t385246372* ___symbols2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddCol_m1291145106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t836887441_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t836887441_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t836887441_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___row0;
		NullCheck(L_0);
		RuntimeObject* L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t3680310408_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col1;
		Int32U5BU5D_t385246372* L_4 = ___symbols2;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t385246372* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_t2032778390_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m3148122067 (RuntimeObject * __this /* static, unused */, int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddRow_m3148122067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t836887441_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonReader_t836887441_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t836887441_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_1 = ___rule0;
		Dictionary_2_t3568926999 * L_2 = (Dictionary_2_t3568926999 *)il2cpp_codegen_object_new(Dictionary_2_t3568926999_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3560123610(L_2, /*hidden argument*/Dictionary_2__ctor_m3560123610_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_t3680310408_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m4013635903 (JsonReader_t836887441 * __this, String_t* ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessNumber_m4013635903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m363431711(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m363431711(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)69), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_004b;
		}
	}

IL_002a:
	{
		String_t* L_6 = ___number0;
		bool L_7 = Double_TryParse_m3021978240(NULL /*static, unused*/, L_6, (&V_0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		__this->set_token_13(8);
		double L_8 = V_0;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_9);
		__this->set_token_value_12(L_10);
		return;
	}

IL_004b:
	{
		String_t* L_11 = ___number0;
		bool L_12 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_11, (&V_1), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		__this->set_token_13(6);
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		__this->set_token_value_12(L_15);
		return;
	}

IL_006c:
	{
		String_t* L_16 = ___number0;
		bool L_17 = Int64_TryParse_m2208578514(NULL /*static, unused*/, L_16, (&V_2), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		__this->set_token_13(7);
		int64_t L_18 = V_2;
		int64_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_12(L_20);
		return;
	}

IL_008d:
	{
		__this->set_token_13(6);
		int32_t L_21 = 0;
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		__this->set_token_value_12(L_22);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m2373069323 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessSymbol_m2373069323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0020;
		}
	}
	{
		__this->set_token_13(4);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0020:
	{
		int32_t L_1 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->set_token_13(5);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0040:
	{
		int32_t L_2 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0060;
		}
	}
	{
		__this->set_token_13(1);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0060:
	{
		int32_t L_3 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0080;
		}
	}
	{
		__this->set_token_13(3);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0080:
	{
		int32_t L_4 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00ca;
		}
	}
	{
		bool L_5 = __this->get_parser_in_string_7();
		if (!L_5)
		{
			goto IL_00ab;
		}
	}
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)1);
		goto IL_00c5;
	}

IL_00ab:
	{
		int32_t L_6 = __this->get_token_13();
		if (L_6)
		{
			goto IL_00be;
		}
	}
	{
		__this->set_token_13(((int32_t)9));
	}

IL_00be:
	{
		__this->set_parser_in_string_7((bool)1);
	}

IL_00c5:
	{
		goto IL_01b8;
	}

IL_00ca:
	{
		int32_t L_7 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00f0;
		}
	}
	{
		Lexer_t1514038666 * L_8 = __this->get_lexer_6();
		NullCheck(L_8);
		String_t* L_9 = Lexer_get_StringValue_m2839494864(L_8, /*hidden argument*/NULL);
		__this->set_token_value_12(L_9);
		goto IL_01b8;
	}

IL_00f0:
	{
		int32_t L_10 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_0120;
		}
	}
	{
		__this->set_token_13(((int32_t)10));
		bool L_11 = ((bool)0);
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		__this->set_token_value_12(L_12);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0120:
	{
		int32_t L_13 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0144;
		}
	}
	{
		__this->set_token_13(((int32_t)11));
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0144:
	{
		int32_t L_14 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0171;
		}
	}
	{
		Lexer_t1514038666 * L_15 = __this->get_lexer_6();
		NullCheck(L_15);
		String_t* L_16 = Lexer_get_StringValue_m2839494864(L_15, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_m4013635903(__this, L_16, /*hidden argument*/NULL);
		__this->set_parser_return_8((bool)1);
		goto IL_01b8;
	}

IL_0171:
	{
		int32_t L_17 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_018d;
		}
	}
	{
		__this->set_token_13(2);
		goto IL_01b8;
	}

IL_018d:
	{
		int32_t L_18 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_01b8;
		}
	}
	{
		__this->set_token_13(((int32_t)10));
		bool L_19 = ((bool)1);
		RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_12(L_20);
		__this->set_parser_return_8((bool)1);
	}

IL_01b8:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m532552140 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Lexer_t1514038666 * L_1 = __this->get_lexer_6();
		NullCheck(L_1);
		Lexer_NextToken_m764348600(L_1, /*hidden argument*/NULL);
		Lexer_t1514038666 * L_2 = __this->get_lexer_6();
		NullCheck(L_2);
		bool L_3 = Lexer_get_EndOfInput_m496746040(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		JsonReader_Close_m1728773487(__this, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0031:
	{
		Lexer_t1514038666 * L_4 = __this->get_lexer_6();
		NullCheck(L_4);
		int32_t L_5 = Lexer_get_Token_m1271565888(L_4, /*hidden argument*/NULL);
		__this->set_current_input_2(L_5);
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m1728773487 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->set_end_of_input_5((bool)1);
		__this->set_end_of_json_4((bool)1);
		bool L_1 = __this->get_reader_is_owned_11();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		TextReader_t283511965 * L_2 = __this->get_reader_10();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_2);
	}

IL_0030:
	{
		__this->set_reader_10((TextReader_t283511965 *)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m315486126 (JsonReader_t836887441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Read_m315486126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	KeyNotFoundException_t2292407383 * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = __this->get_end_of_json_4();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		__this->set_end_of_json_4((bool)0);
		Stack_1_t3794335208 * L_2 = __this->get_automaton_stack_1();
		NullCheck(L_2);
		Stack_1_Clear_m3555801141(L_2, /*hidden argument*/Stack_1_Clear_m3555801141_RuntimeMethod_var);
		Stack_1_t3794335208 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_m3289045699(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m3289045699_RuntimeMethod_var);
		Stack_1_t3794335208 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_m3289045699(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m3289045699_RuntimeMethod_var);
	}

IL_004a:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_token_13(0);
		__this->set_token_value_12(NULL);
		bool L_5 = __this->get_read_started_9();
		if (L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->set_read_started_9((bool)1);
		bool L_6 = JsonReader_ReadToken_m532552140(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		bool L_7 = __this->get_parser_return_8();
		if (!L_7)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t3794335208 * L_8 = __this->get_automaton_stack_1();
		NullCheck(L_8);
		int32_t L_9 = Stack_1_Peek_m4199064227(L_8, /*hidden argument*/Stack_1_Peek_m4199064227_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_00ac;
		}
	}
	{
		__this->set_end_of_json_4((bool)1);
	}

IL_00ac:
	{
		return (bool)1;
	}

IL_00ae:
	{
		Stack_1_t3794335208 * L_10 = __this->get_automaton_stack_1();
		NullCheck(L_10);
		int32_t L_11 = Stack_1_Pop_m316856375(L_10, /*hidden argument*/Stack_1_Pop_m316856375_RuntimeMethod_var);
		__this->set_current_symbol_3(L_11);
		JsonReader_ProcessSymbol_m2373069323(__this, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_current_symbol_3();
		int32_t L_13 = __this->get_current_input_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0115;
		}
	}
	{
		bool L_14 = JsonReader_ReadToken_m532552140(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0110;
		}
	}
	{
		Stack_1_t3794335208 * L_15 = __this->get_automaton_stack_1();
		NullCheck(L_15);
		int32_t L_16 = Stack_1_Peek_m4199064227(L_15, /*hidden argument*/Stack_1_Peek_m4199064227_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_0101;
		}
	}
	{
		JsonException_t3682484112 * L_17 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_17, _stringLiteral320911726, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0101:
	{
		bool L_18 = __this->get_parser_return_8();
		if (!L_18)
		{
			goto IL_010e;
		}
	}
	{
		return (bool)1;
	}

IL_010e:
	{
		return (bool)0;
	}

IL_0110:
	{
		goto IL_0085;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t836887441_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t836887441_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t836887441_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_20 = __this->get_current_symbol_3();
		NullCheck(L_19);
		RuntimeObject* L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t3680310408_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->get_current_input_2();
		NullCheck(L_21);
		Int32U5BU5D_t385246372* L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t385246372*, int32_t >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_t2032778390_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_0144;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0136;
		throw e;
	}

CATCH_0136:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_t2292407383 *)__exception_local);
		int32_t L_24 = __this->get_current_input_2();
		KeyNotFoundException_t2292407383 * L_25 = V_1;
		JsonException_t3682484112 * L_26 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2934847451(L_26, L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	} // end catch (depth: 1)

IL_0144:
	{
		Int32U5BU5D_t385246372* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)65554)))))
		{
			goto IL_0156;
		}
	}
	{
		goto IL_0085;
	}

IL_0156:
	{
		Int32U5BU5D_t385246372* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)1));
		goto IL_0173;
	}

IL_0161:
	{
		Stack_1_t3794335208 * L_31 = __this->get_automaton_stack_1();
		Int32U5BU5D_t385246372* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_m3289045699(L_31, L_35, /*hidden argument*/Stack_1_Push_m3289045699_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_0173:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0085;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m2512601580 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__cctor_m2512601580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatInfo_t435877138_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_0 = NumberFormatInfo_get_InvariantInfo_m349577018(NULL /*static, unused*/, /*hidden argument*/NULL);
		((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m2430372819 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m2430372819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t802263757 * L_2 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1259274362(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_10(L_2);
		JsonWriter_Init_m4080872942(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m2162687857 (JsonWriter_t3570089748 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m2162687857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = ___sb0;
		StringWriter_t802263757 * L_1 = (StringWriter_t802263757 *)il2cpp_codegen_object_new(StringWriter_t802263757_il2cpp_TypeInfo_var);
		StringWriter__ctor_m1259274362(L_1, L_0, /*hidden argument*/NULL);
		JsonWriter__ctor_m2835923290(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonWriter__ctor_m2835923290 (JsonWriter_t3570089748 * __this, TextWriter_t3478189236 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m2835923290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1980498921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		TextWriter_t3478189236 * L_2 = ___writer0;
		__this->set_writer_10(L_2);
		JsonWriter_Init_m4080872942(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LitJson.JsonWriter::get_IndentValue()
extern "C"  int32_t JsonWriter_get_IndentValue_m1910573466 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_indent_value_6();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_IndentValue(System.Int32)
extern "C"  void JsonWriter_set_IndentValue_m1175140865 (JsonWriter_t3570089748 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_indentation_5();
		int32_t L_1 = __this->get_indent_value_6();
		int32_t L_2 = ___value0;
		__this->set_indentation_5(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)L_1)), (int32_t)L_2)));
		int32_t L_3 = ___value0;
		__this->set_indent_value_6(L_3);
		return;
	}
}
// System.Boolean LitJson.JsonWriter::get_PrettyPrint()
extern "C"  bool JsonWriter_get_PrettyPrint_m1381011309 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_PrettyPrint(System.Boolean)
extern "C"  void JsonWriter_set_PrettyPrint_m2732339149 (JsonWriter_t3570089748 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_pretty_print_8(L_0);
		return;
	}
}
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
extern "C"  TextWriter_t3478189236 * JsonWriter_get_TextWriter_m4071896128 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t3478189236 * L_0 = __this->get_writer_10();
		return L_0;
	}
}
// System.Boolean LitJson.JsonWriter::get_Validate()
extern "C"  bool JsonWriter_get_Validate_m1352560713 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_validate_9();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
extern "C"  void JsonWriter_set_Validate_m3418302016 (JsonWriter_t3570089748 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m3745177799 (JsonWriter_t3570089748 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_DoValidation_m3745177799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriterContext_t1011093999 * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		WriterContext_t1011093999 * L_2 = __this->get_context_1();
		WriterContext_t1011093999 * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0023:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		JsonException_t3682484112 * L_7 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_7, _stringLiteral3717129058, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0045:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0064;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_00b4;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_0114;
			}
		}
	}
	{
		goto IL_0154;
	}

IL_0064:
	{
		WriterContext_t1011093999 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		bool L_10 = L_9->get_InArray_1();
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		JsonException_t3682484112 * L_11 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_11, _stringLiteral4103647921, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_007f:
	{
		goto IL_0154;
	}

IL_0084:
	{
		WriterContext_t1011093999 * L_12 = __this->get_context_1();
		NullCheck(L_12);
		bool L_13 = L_12->get_InObject_2();
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		WriterContext_t1011093999 * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_ExpectingValue_3();
		if (!L_15)
		{
			goto IL_00af;
		}
	}

IL_00a4:
	{
		JsonException_t3682484112 * L_16 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_16, _stringLiteral1740842079, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_00af:
	{
		goto IL_0154;
	}

IL_00b4:
	{
		WriterContext_t1011093999 * L_17 = __this->get_context_1();
		NullCheck(L_17);
		bool L_18 = L_17->get_InObject_2();
		if (!L_18)
		{
			goto IL_00df;
		}
	}
	{
		WriterContext_t1011093999 * L_19 = __this->get_context_1();
		NullCheck(L_19);
		bool L_20 = L_19->get_ExpectingValue_3();
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		JsonException_t3682484112 * L_21 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_21, _stringLiteral2856579791, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21);
	}

IL_00df:
	{
		goto IL_0154;
	}

IL_00e4:
	{
		WriterContext_t1011093999 * L_22 = __this->get_context_1();
		NullCheck(L_22);
		bool L_23 = L_22->get_InObject_2();
		if (!L_23)
		{
			goto IL_0104;
		}
	}
	{
		WriterContext_t1011093999 * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_ExpectingValue_3();
		if (!L_25)
		{
			goto IL_010f;
		}
	}

IL_0104:
	{
		JsonException_t3682484112 * L_26 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_26, _stringLiteral393113856, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}

IL_010f:
	{
		goto IL_0154;
	}

IL_0114:
	{
		WriterContext_t1011093999 * L_27 = __this->get_context_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_InArray_1();
		if (L_28)
		{
			goto IL_014f;
		}
	}
	{
		WriterContext_t1011093999 * L_29 = __this->get_context_1();
		NullCheck(L_29);
		bool L_30 = L_29->get_InObject_2();
		if (!L_30)
		{
			goto IL_0144;
		}
	}
	{
		WriterContext_t1011093999 * L_31 = __this->get_context_1();
		NullCheck(L_31);
		bool L_32 = L_31->get_ExpectingValue_3();
		if (L_32)
		{
			goto IL_014f;
		}
	}

IL_0144:
	{
		JsonException_t3682484112 * L_33 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2460484000(L_33, _stringLiteral4135352181, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33);
	}

IL_014f:
	{
		goto IL_0154;
	}

IL_0154:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m4080872942 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Init_m4080872942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		__this->set_hex_seq_4(((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)4)));
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		Stack_1_t1854483454 * L_0 = (Stack_1_t1854483454 *)il2cpp_codegen_object_new(Stack_1_t1854483454_il2cpp_TypeInfo_var);
		Stack_1__ctor_m3272105694(L_0, /*hidden argument*/Stack_1__ctor_m3272105694_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_0);
		WriterContext_t1011093999 * L_1 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m711484838(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m2827801669(L_2, L_3, /*hidden argument*/Stack_1_Push_m2827801669_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m713443415 (RuntimeObject * __this /* static, unused */, int32_t ___n0, CharU5BU5D_t3528271667* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0039;
	}

IL_0007:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0023;
		}
	}
	{
		CharU5BU5D_t3528271667* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4))))));
		goto IL_0030;
	}

IL_0023:
	{
		CharU5BU5D_t3528271667* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10)))))))));
	}

IL_0030:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
extern "C"  void JsonWriter_Indent_m2972747467 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m2335550369 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		TextWriter_t3478189236 * L_3 = __this->get_writer_10();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0022;
		}
	}

IL_003f:
	{
		TextWriter_t3478189236 * L_7 = __this->get_writer_10();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m564527608 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m2487795455(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m2487795455 (JsonWriter_t3570089748 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t3478189236 * L_5 = __this->get_writer_10();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_0034:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		WriterContext_t1011093999 * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t3478189236 * L_9 = __this->get_writer_10();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_005c:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m1784888055 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_PutString_m1784888055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		JsonWriter_Put_m2335550369(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_1 = __this->get_writer_10();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_015a;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00db;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_0063;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_00c6;
			}
			case 5:
			{
				goto IL_0078;
			}
		}
	}

IL_004e:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_00f0;
	}

IL_0063:
	{
		TextWriter_t3478189236 * L_10 = __this->get_writer_10();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral3454842868);
		goto IL_0156;
	}

IL_0078:
	{
		TextWriter_t3478189236 * L_11 = __this->get_writer_10();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteral3455629300);
		goto IL_0156;
	}

IL_008d:
	{
		TextWriter_t3478189236 * L_12 = __this->get_writer_10();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral3455498228);
		goto IL_0156;
	}

IL_00a2:
	{
		TextWriter_t3478189236 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t3478189236 * L_14 = __this->get_writer_10();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17 = String_get_Chars_m2986988803(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0156;
	}

IL_00c6:
	{
		TextWriter_t3478189236 * L_18 = __this->get_writer_10();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral3454318580);
		goto IL_0156;
	}

IL_00db:
	{
		TextWriter_t3478189236 * L_19 = __this->get_writer_10();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral3454580724);
		goto IL_0156;
	}

IL_00f0:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m2986988803(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25 = String_get_Chars_m2986988803(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		TextWriter_t3478189236 * L_26 = __this->get_writer_10();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29 = String_get_Chars_m2986988803(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0156;
	}

IL_0123:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32 = String_get_Chars_m2986988803(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m713443415(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t3478189236 * L_34 = __this->get_writer_10();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral3455432692);
		TextWriter_t3478189236 * L_35 = __this->get_writer_10();
		CharU5BU5D_t3528271667* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t3528271667* >::Invoke(9 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0156:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_015a:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t3478189236 * L_40 = __this->get_writer_10();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
extern "C"  void JsonWriter_Unindent_m457469223 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001e:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
extern "C"  String_t* JsonWriter_ToString_m477535688 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_ToString_m477535688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0011:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
extern "C"  void JsonWriter_Reset_m3733384412 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Reset_m3733384412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Clear_m534740393(L_0, /*hidden argument*/Stack_1_Clear_m534740393_RuntimeMethod_var);
		WriterContext_t1011093999 * L_1 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m711484838(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m2827801669(L_2, L_3, /*hidden argument*/Stack_1_Push_m2827801669_RuntimeMethod_var);
		StringBuilder_t * L_4 = __this->get_inst_string_builder_7();
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get_inst_string_builder_7();
		StringBuilder_t * L_6 = __this->get_inst_string_builder_7();
		NullCheck(L_6);
		int32_t L_7 = StringBuilder_get_Length_m3238060835(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Remove_m940064945(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m3048574580 (JsonWriter_t3570089748 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3048574580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_t3570089748 * G_B2_0 = NULL;
	JsonWriter_t3570089748 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_t3570089748 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = _stringLiteral4002445229;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_001e:
	{
		G_B3_0 = _stringLiteral3875954633;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m2335550369(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m4069484567 (JsonWriter_t3570089748 * __this, Decimal_t2948259380  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m4069484567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		Decimal_t2948259380  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m3734943936(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m2002991247 (JsonWriter_t3570089748 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2002991247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1282703378(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m2335550369(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m363431711(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t3478189236 * L_8 = __this->get_writer_10();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral3451565954);
	}

IL_004c:
	{
		WriterContext_t1011093999 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m1949814895 (JsonWriter_t3570089748 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1949814895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m2614817407(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m2693541440 (JsonWriter_t3570089748 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m2693541440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m239190601(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m3713362081 (JsonWriter_t3570089748 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m3713362081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		JsonWriter_Put_m2335550369(__this, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_m1784888055(__this, L_1, /*hidden argument*/NULL);
	}

IL_002a:
	{
		WriterContext_t1011093999 * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m1455779780 (JsonWriter_t3570089748 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m1455779780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t3570089748_il2cpp_TypeInfo_var);
		NumberFormatInfo_t435877138 * L_1 = ((JsonWriter_t3570089748_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t3570089748_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m301771913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
extern "C"  void JsonWriter_WriteArrayEnd_m3303839937 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayEnd_m3303839937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2487795455(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_m3422896867(L_0, /*hidden argument*/Stack_1_Pop_m3422896867_RuntimeMethod_var);
		Stack_1_t1854483454 * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_m484768452(L_1, /*hidden argument*/Stack_1_get_Count_m484768452_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t1854483454 * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t1011093999 * L_4 = Stack_1_Peek_m102127363(L_3, /*hidden argument*/Stack_1_Peek_m102127363_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t1011093999 * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_m457469223(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, _stringLiteral3452614643, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
extern "C"  void JsonWriter_WriteArrayStart_m1053267913 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayStart_m1053267913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, _stringLiteral3452614645, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_0 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m711484838(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m2827801669(L_2, L_3, /*hidden argument*/Stack_1_Push_m2827801669_RuntimeMethod_var);
		JsonWriter_Indent_m2972747467(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
extern "C"  void JsonWriter_WriteObjectEnd_m1917228531 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectEnd_m1917228531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m2487795455(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_t1854483454 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_m3422896867(L_0, /*hidden argument*/Stack_1_Pop_m3422896867_RuntimeMethod_var);
		Stack_1_t1854483454 * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_m484768452(L_1, /*hidden argument*/Stack_1_get_Count_m484768452_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_0054;
	}

IL_0037:
	{
		Stack_1_t1854483454 * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t1011093999 * L_4 = Stack_1_Peek_m102127363(L_3, /*hidden argument*/Stack_1_Peek_m102127363_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t1011093999 * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_0054:
	{
		JsonWriter_Unindent_m457469223(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
extern "C"  void JsonWriter_WriteObjectStart_m993161475 (JsonWriter_t3570089748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectStart_m993161475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3745177799(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m2335550369(__this, _stringLiteral3452614613, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_0 = (WriterContext_t1011093999 *)il2cpp_codegen_object_new(WriterContext_t1011093999_il2cpp_TypeInfo_var);
		WriterContext__ctor_m711484838(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t1011093999 * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_t1854483454 * L_2 = __this->get_ctx_stack_2();
		WriterContext_t1011093999 * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_m2827801669(L_2, L_3, /*hidden argument*/Stack_1_Push_m2827801669_RuntimeMethod_var);
		JsonWriter_Indent_m2972747467(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m1382075963 (JsonWriter_t3570089748 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WritePropertyName_m1382075963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JsonWriter_DoValidation_m3745177799(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m564527608(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		JsonWriter_PutString_m1784888055(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = __this->get_pretty_print_8();
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		WriterContext_t1011093999 * L_4 = __this->get_context_1();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Padding_4();
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		WriterContext_t1011093999 * L_6 = __this->get_context_1();
		String_t* L_7 = ___property_name0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_Padding_4(L_8);
	}

IL_0046:
	{
		WriterContext_t1011093999 * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		String_t* L_11 = ___property_name0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_12));
		goto IL_006f;
	}

IL_005e:
	{
		TextWriter_t3478189236 * L_13 = __this->get_writer_10();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)32));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		TextWriter_t3478189236 * L_16 = __this->get_writer_10();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, _stringLiteral3450517398);
		goto IL_0098;
	}

IL_008b:
	{
		TextWriter_t3478189236 * L_17 = __this->get_writer_10();
		NullCheck(L_17);
		VirtActionInvoker1< Il2CppChar >::Invoke(8 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)58));
	}

IL_0098:
	{
		WriterContext_t1011093999 * L_18 = __this->get_context_1();
		NullCheck(L_18);
		L_18->set_ExpectingValue_3((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.Lexer::.cctor()
extern "C"  void Lexer__cctor_m1328468719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		Lexer_PopulateFsmTables_m1428324419(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C"  void Lexer__ctor_m2815723357 (Lexer_t1514038666 * __this, TextReader_t283511965 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer__ctor_m2815723357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_allow_comments_2((bool)1);
		__this->set_allow_single_quoted_strings_3((bool)1);
		__this->set_input_buffer_6(0);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_string_buffer_10(L_0);
		__this->set_state_9(1);
		__this->set_end_of_input_4((bool)0);
		TextReader_t283511965 * L_1 = ___reader0;
		__this->set_reader_8(L_1);
		FsmContext_t2331368794 * L_2 = (FsmContext_t2331368794 *)il2cpp_codegen_object_new(FsmContext_t2331368794_il2cpp_TypeInfo_var);
		FsmContext__ctor_m3773234278(L_2, /*hidden argument*/NULL);
		__this->set_fsm_context_5(L_2);
		FsmContext_t2331368794 * L_3 = __this->get_fsm_context_5();
		NullCheck(L_3);
		L_3->set_L_2(__this);
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowComments()
extern "C"  bool Lexer_get_AllowComments_m2710340855 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allow_comments_2();
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowComments(System.Boolean)
extern "C"  void Lexer_set_AllowComments_m1557685570 (Lexer_t1514038666 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_allow_comments_2(L_0);
		return;
	}
}
// System.Boolean LitJson.Lexer::get_AllowSingleQuotedStrings()
extern "C"  bool Lexer_get_AllowSingleQuotedStrings_m2593439945 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allow_single_quoted_strings_3();
		return L_0;
	}
}
// System.Void LitJson.Lexer::set_AllowSingleQuotedStrings(System.Boolean)
extern "C"  void Lexer_set_AllowSingleQuotedStrings_m1671508202 (Lexer_t1514038666 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_allow_single_quoted_strings_3(L_0);
		return;
	}
}
// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C"  bool Lexer_get_EndOfInput_m496746040 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
extern "C"  int32_t Lexer_get_Token_m1271565888 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
extern "C"  String_t* Lexer_get_StringValue_m2839494864 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C"  int32_t Lexer_HexValue_m3751728081 (RuntimeObject * __this /* static, unused */, int32_t ___digit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)65))))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0056;
			}
		}
	}
	{
		int32_t L_1 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)97))))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0050;
			}
			case 4:
			{
				goto IL_0053;
			}
			case 5:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0047:
	{
		return ((int32_t)10);
	}

IL_004a:
	{
		return ((int32_t)11);
	}

IL_004d:
	{
		return ((int32_t)12);
	}

IL_0050:
	{
		return ((int32_t)13);
	}

IL_0053:
	{
		return ((int32_t)14);
	}

IL_0056:
	{
		return ((int32_t)15);
	}

IL_0059:
	{
		int32_t L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C"  void Lexer_PopulateFsmTables_m1428324419 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_PopulateFsmTables_m1428324419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B2_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B1_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B1_2 = NULL;
	int32_t G_B4_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B4_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B4_2 = NULL;
	int32_t G_B3_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B3_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B3_2 = NULL;
	int32_t G_B6_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B6_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B6_2 = NULL;
	int32_t G_B5_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B5_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B5_2 = NULL;
	int32_t G_B8_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B8_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B7_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B7_2 = NULL;
	int32_t G_B10_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B10_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B9_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B9_2 = NULL;
	int32_t G_B12_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B12_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B11_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B11_2 = NULL;
	int32_t G_B14_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B14_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B14_2 = NULL;
	int32_t G_B13_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B13_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B13_2 = NULL;
	int32_t G_B16_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B16_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B15_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B15_2 = NULL;
	int32_t G_B18_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B18_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B18_2 = NULL;
	int32_t G_B17_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B17_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B17_2 = NULL;
	int32_t G_B20_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B20_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B20_2 = NULL;
	int32_t G_B19_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B19_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B19_2 = NULL;
	int32_t G_B22_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B22_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B22_2 = NULL;
	int32_t G_B21_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B21_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B21_2 = NULL;
	int32_t G_B24_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B24_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B24_2 = NULL;
	int32_t G_B23_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B23_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B23_2 = NULL;
	int32_t G_B26_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B26_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B26_2 = NULL;
	int32_t G_B25_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B25_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B25_2 = NULL;
	int32_t G_B28_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B28_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B28_2 = NULL;
	int32_t G_B27_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B27_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B27_2 = NULL;
	int32_t G_B30_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B30_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B30_2 = NULL;
	int32_t G_B29_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B29_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B29_2 = NULL;
	int32_t G_B32_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B32_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B32_2 = NULL;
	int32_t G_B31_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B31_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B31_2 = NULL;
	int32_t G_B34_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B34_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B34_2 = NULL;
	int32_t G_B33_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B33_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B33_2 = NULL;
	int32_t G_B36_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B36_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B36_2 = NULL;
	int32_t G_B35_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B35_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B35_2 = NULL;
	int32_t G_B38_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B38_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B38_2 = NULL;
	int32_t G_B37_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B37_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B37_2 = NULL;
	int32_t G_B40_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B40_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B40_2 = NULL;
	int32_t G_B39_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B39_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B39_2 = NULL;
	int32_t G_B42_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B42_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B42_2 = NULL;
	int32_t G_B41_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B41_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B41_2 = NULL;
	int32_t G_B44_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B44_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B44_2 = NULL;
	int32_t G_B43_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B43_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B43_2 = NULL;
	int32_t G_B46_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B46_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B46_2 = NULL;
	int32_t G_B45_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B45_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B45_2 = NULL;
	int32_t G_B48_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B48_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B48_2 = NULL;
	int32_t G_B47_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B47_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B47_2 = NULL;
	int32_t G_B50_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B50_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B50_2 = NULL;
	int32_t G_B49_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B49_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B49_2 = NULL;
	int32_t G_B52_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B52_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B52_2 = NULL;
	int32_t G_B51_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B51_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B51_2 = NULL;
	int32_t G_B54_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B54_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B54_2 = NULL;
	int32_t G_B53_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B53_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B53_2 = NULL;
	int32_t G_B56_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B56_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B56_2 = NULL;
	int32_t G_B55_0 = 0;
	StateHandlerU5BU5D_t1323790106* G_B55_1 = NULL;
	StateHandlerU5BU5D_t1323790106* G_B55_2 = NULL;
	{
		StateHandlerU5BU5D_t1323790106* L_0 = ((StateHandlerU5BU5D_t1323790106*)SZArrayNew(StateHandlerU5BU5D_t1323790106_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28)));
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_1 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		G_B1_0 = 0;
		G_B1_1 = L_0;
		G_B1_2 = L_0;
		if (L_1)
		{
			G_B2_0 = 0;
			G_B2_1 = L_0;
			G_B2_2 = L_0;
			goto IL_0021;
		}
	}
	{
		intptr_t L_2 = (intptr_t)Lexer_State1_m1798213439_RuntimeMethod_var;
		StateHandler_t105866779 * L_3 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_3, NULL, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_14(L_3);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_4 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_14();
		NullCheck(G_B2_1);
		ArrayElementTypeCheck (G_B2_1, L_4);
		(G_B2_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_0), (StateHandler_t105866779 *)L_4);
		StateHandlerU5BU5D_t1323790106* L_5 = G_B2_2;
		StateHandler_t105866779 * L_6 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		G_B3_0 = 1;
		G_B3_1 = L_5;
		G_B3_2 = L_5;
		if (L_6)
		{
			G_B4_0 = 1;
			G_B4_1 = L_5;
			G_B4_2 = L_5;
			goto IL_0041;
		}
	}
	{
		intptr_t L_7 = (intptr_t)Lexer_State2_m3684245780_RuntimeMethod_var;
		StateHandler_t105866779 * L_8 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_8, NULL, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_15(L_8);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_9 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_15();
		NullCheck(G_B4_1);
		ArrayElementTypeCheck (G_B4_1, L_9);
		(G_B4_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_0), (StateHandler_t105866779 *)L_9);
		StateHandlerU5BU5D_t1323790106* L_10 = G_B4_2;
		StateHandler_t105866779 * L_11 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		G_B5_0 = 2;
		G_B5_1 = L_10;
		G_B5_2 = L_10;
		if (L_11)
		{
			G_B6_0 = 2;
			G_B6_1 = L_10;
			G_B6_2 = L_10;
			goto IL_0061;
		}
	}
	{
		intptr_t L_12 = (intptr_t)Lexer_State3_m3421380387_RuntimeMethod_var;
		StateHandler_t105866779 * L_13 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_13, NULL, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_16(L_13);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_14 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_16();
		NullCheck(G_B6_1);
		ArrayElementTypeCheck (G_B6_1, L_14);
		(G_B6_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_0), (StateHandler_t105866779 *)L_14);
		StateHandlerU5BU5D_t1323790106* L_15 = G_B6_2;
		StateHandler_t105866779 * L_16 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		G_B7_0 = 3;
		G_B7_1 = L_15;
		G_B7_2 = L_15;
		if (L_16)
		{
			G_B8_0 = 3;
			G_B8_1 = L_15;
			G_B8_2 = L_15;
			goto IL_0081;
		}
	}
	{
		intptr_t L_17 = (intptr_t)Lexer_State4_m2120686884_RuntimeMethod_var;
		StateHandler_t105866779 * L_18 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_18, NULL, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_17(L_18);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_19 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_17();
		NullCheck(G_B8_1);
		ArrayElementTypeCheck (G_B8_1, L_19);
		(G_B8_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_0), (StateHandler_t105866779 *)L_19);
		StateHandlerU5BU5D_t1323790106* L_20 = G_B8_2;
		StateHandler_t105866779 * L_21 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		G_B9_0 = 4;
		G_B9_1 = L_20;
		G_B9_2 = L_20;
		if (L_21)
		{
			G_B10_0 = 4;
			G_B10_1 = L_20;
			G_B10_2 = L_20;
			goto IL_00a1;
		}
	}
	{
		intptr_t L_22 = (intptr_t)Lexer_State5_m2304916419_RuntimeMethod_var;
		StateHandler_t105866779 * L_23 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_23, NULL, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache4_18(L_23);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_24 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache4_18();
		NullCheck(G_B10_1);
		ArrayElementTypeCheck (G_B10_1, L_24);
		(G_B10_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_0), (StateHandler_t105866779 *)L_24);
		StateHandlerU5BU5D_t1323790106* L_25 = G_B10_2;
		StateHandler_t105866779 * L_26 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		G_B11_0 = 5;
		G_B11_1 = L_25;
		G_B11_2 = L_25;
		if (L_26)
		{
			G_B12_0 = 5;
			G_B12_1 = L_25;
			G_B12_2 = L_25;
			goto IL_00c1;
		}
	}
	{
		intptr_t L_27 = (intptr_t)Lexer_State6_m4228892936_RuntimeMethod_var;
		StateHandler_t105866779 * L_28 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_28, NULL, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache5_19(L_28);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_29 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache5_19();
		NullCheck(G_B12_1);
		ArrayElementTypeCheck (G_B12_1, L_29);
		(G_B12_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_0), (StateHandler_t105866779 *)L_29);
		StateHandlerU5BU5D_t1323790106* L_30 = G_B12_2;
		StateHandler_t105866779 * L_31 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		G_B13_0 = 6;
		G_B13_1 = L_30;
		G_B13_2 = L_30;
		if (L_31)
		{
			G_B14_0 = 6;
			G_B14_1 = L_30;
			G_B14_2 = L_30;
			goto IL_00e1;
		}
	}
	{
		intptr_t L_32 = (intptr_t)Lexer_State7_m3966904031_RuntimeMethod_var;
		StateHandler_t105866779 * L_33 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_33, NULL, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache6_20(L_33);
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_00e1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_34 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache6_20();
		NullCheck(G_B14_1);
		ArrayElementTypeCheck (G_B14_1, L_34);
		(G_B14_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_0), (StateHandler_t105866779 *)L_34);
		StateHandlerU5BU5D_t1323790106* L_35 = G_B14_2;
		StateHandler_t105866779 * L_36 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		G_B15_0 = 7;
		G_B15_1 = L_35;
		G_B15_2 = L_35;
		if (L_36)
		{
			G_B16_0 = 7;
			G_B16_1 = L_35;
			G_B16_2 = L_35;
			goto IL_0101;
		}
	}
	{
		intptr_t L_37 = (intptr_t)Lexer_State8_m2667415049_RuntimeMethod_var;
		StateHandler_t105866779 * L_38 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_38, NULL, L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache7_21(L_38);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0101:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_39 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache7_21();
		NullCheck(G_B16_1);
		ArrayElementTypeCheck (G_B16_1, L_39);
		(G_B16_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_0), (StateHandler_t105866779 *)L_39);
		StateHandlerU5BU5D_t1323790106* L_40 = G_B16_2;
		StateHandler_t105866779 * L_41 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		G_B17_0 = 8;
		G_B17_1 = L_40;
		G_B17_2 = L_40;
		if (L_41)
		{
			G_B18_0 = 8;
			G_B18_1 = L_40;
			G_B18_2 = L_40;
			goto IL_0121;
		}
	}
	{
		intptr_t L_42 = (intptr_t)Lexer_State9_m1222018432_RuntimeMethod_var;
		StateHandler_t105866779 * L_43 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_43, NULL, L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache8_22(L_43);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_0121:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_44 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache8_22();
		NullCheck(G_B18_1);
		ArrayElementTypeCheck (G_B18_1, L_44);
		(G_B18_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_0), (StateHandler_t105866779 *)L_44);
		StateHandlerU5BU5D_t1323790106* L_45 = G_B18_2;
		StateHandler_t105866779 * L_46 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		G_B19_0 = ((int32_t)9);
		G_B19_1 = L_45;
		G_B19_2 = L_45;
		if (L_46)
		{
			G_B20_0 = ((int32_t)9);
			G_B20_1 = L_45;
			G_B20_2 = L_45;
			goto IL_0142;
		}
	}
	{
		intptr_t L_47 = (intptr_t)Lexer_State10_m1529890914_RuntimeMethod_var;
		StateHandler_t105866779 * L_48 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_48, NULL, L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache9_23(L_48);
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_0142:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_49 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache9_23();
		NullCheck(G_B20_1);
		ArrayElementTypeCheck (G_B20_1, L_49);
		(G_B20_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_0), (StateHandler_t105866779 *)L_49);
		StateHandlerU5BU5D_t1323790106* L_50 = G_B20_2;
		StateHandler_t105866779 * L_51 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		G_B21_0 = ((int32_t)10);
		G_B21_1 = L_50;
		G_B21_2 = L_50;
		if (L_51)
		{
			G_B22_0 = ((int32_t)10);
			G_B22_1 = L_50;
			G_B22_2 = L_50;
			goto IL_0163;
		}
	}
	{
		intptr_t L_52 = (intptr_t)Lexer_State11_m136640487_RuntimeMethod_var;
		StateHandler_t105866779 * L_53 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_53, NULL, L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheA_24(L_53);
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_54 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheA_24();
		NullCheck(G_B22_1);
		ArrayElementTypeCheck (G_B22_1, L_54);
		(G_B22_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_0), (StateHandler_t105866779 *)L_54);
		StateHandlerU5BU5D_t1323790106* L_55 = G_B22_2;
		StateHandler_t105866779 * L_56 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheB_25();
		G_B23_0 = ((int32_t)11);
		G_B23_1 = L_55;
		G_B23_2 = L_55;
		if (L_56)
		{
			G_B24_0 = ((int32_t)11);
			G_B24_1 = L_55;
			G_B24_2 = L_55;
			goto IL_0184;
		}
	}
	{
		intptr_t L_57 = (intptr_t)Lexer_State12_m3207237752_RuntimeMethod_var;
		StateHandler_t105866779 * L_58 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_58, NULL, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheB_25(L_58);
		G_B24_0 = G_B23_0;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
	}

IL_0184:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_59 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheB_25();
		NullCheck(G_B24_1);
		ArrayElementTypeCheck (G_B24_1, L_59);
		(G_B24_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_0), (StateHandler_t105866779 *)L_59);
		StateHandlerU5BU5D_t1323790106* L_60 = G_B24_2;
		StateHandler_t105866779 * L_61 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheC_26();
		G_B25_0 = ((int32_t)12);
		G_B25_1 = L_60;
		G_B25_2 = L_60;
		if (L_61)
		{
			G_B26_0 = ((int32_t)12);
			G_B26_1 = L_60;
			G_B26_2 = L_60;
			goto IL_01a5;
		}
	}
	{
		intptr_t L_62 = (intptr_t)Lexer_State13_m3116740413_RuntimeMethod_var;
		StateHandler_t105866779 * L_63 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_63, NULL, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheC_26(L_63);
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
	}

IL_01a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_64 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheC_26();
		NullCheck(G_B26_1);
		ArrayElementTypeCheck (G_B26_1, L_64);
		(G_B26_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B26_0), (StateHandler_t105866779 *)L_64);
		StateHandlerU5BU5D_t1323790106* L_65 = G_B26_2;
		StateHandler_t105866779 * L_66 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheD_27();
		G_B27_0 = ((int32_t)13);
		G_B27_1 = L_65;
		G_B27_2 = L_65;
		if (L_66)
		{
			G_B28_0 = ((int32_t)13);
			G_B28_1 = L_65;
			G_B28_2 = L_65;
			goto IL_01c6;
		}
	}
	{
		intptr_t L_67 = (intptr_t)Lexer_State14_m1291458963_RuntimeMethod_var;
		StateHandler_t105866779 * L_68 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_68, NULL, L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheD_27(L_68);
		G_B28_0 = G_B27_0;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
	}

IL_01c6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_69 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheD_27();
		NullCheck(G_B28_1);
		ArrayElementTypeCheck (G_B28_1, L_69);
		(G_B28_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_0), (StateHandler_t105866779 *)L_69);
		StateHandlerU5BU5D_t1323790106* L_70 = G_B28_2;
		StateHandler_t105866779 * L_71 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheE_28();
		G_B29_0 = ((int32_t)14);
		G_B29_1 = L_70;
		G_B29_2 = L_70;
		if (L_71)
		{
			G_B30_0 = ((int32_t)14);
			G_B30_1 = L_70;
			G_B30_2 = L_70;
			goto IL_01e7;
		}
	}
	{
		intptr_t L_72 = (intptr_t)Lexer_State15_m1787560179_RuntimeMethod_var;
		StateHandler_t105866779 * L_73 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_73, NULL, L_72, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheE_28(L_73);
		G_B30_0 = G_B29_0;
		G_B30_1 = G_B29_1;
		G_B30_2 = G_B29_2;
	}

IL_01e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_74 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheE_28();
		NullCheck(G_B30_1);
		ArrayElementTypeCheck (G_B30_1, L_74);
		(G_B30_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B30_0), (StateHandler_t105866779 *)L_74);
		StateHandlerU5BU5D_t1323790106* L_75 = G_B30_2;
		StateHandler_t105866779 * L_76 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheF_29();
		G_B31_0 = ((int32_t)15);
		G_B31_1 = L_75;
		G_B31_2 = L_75;
		if (L_76)
		{
			G_B32_0 = ((int32_t)15);
			G_B32_1 = L_75;
			G_B32_2 = L_75;
			goto IL_0208;
		}
	}
	{
		intptr_t L_77 = (intptr_t)Lexer_State16_m582896932_RuntimeMethod_var;
		StateHandler_t105866779 * L_78 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_78, NULL, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cacheF_29(L_78);
		G_B32_0 = G_B31_0;
		G_B32_1 = G_B31_1;
		G_B32_2 = G_B31_2;
	}

IL_0208:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_79 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cacheF_29();
		NullCheck(G_B32_1);
		ArrayElementTypeCheck (G_B32_1, L_79);
		(G_B32_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B32_0), (StateHandler_t105866779 *)L_79);
		StateHandlerU5BU5D_t1323790106* L_80 = G_B32_2;
		StateHandler_t105866779 * L_81 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache10_30();
		G_B33_0 = ((int32_t)16);
		G_B33_1 = L_80;
		G_B33_2 = L_80;
		if (L_81)
		{
			G_B34_0 = ((int32_t)16);
			G_B34_1 = L_80;
			G_B34_2 = L_80;
			goto IL_0229;
		}
	}
	{
		intptr_t L_82 = (intptr_t)Lexer_State17_m2954849257_RuntimeMethod_var;
		StateHandler_t105866779 * L_83 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_83, NULL, L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache10_30(L_83);
		G_B34_0 = G_B33_0;
		G_B34_1 = G_B33_1;
		G_B34_2 = G_B33_2;
	}

IL_0229:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_84 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache10_30();
		NullCheck(G_B34_1);
		ArrayElementTypeCheck (G_B34_1, L_84);
		(G_B34_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B34_0), (StateHandler_t105866779 *)L_84);
		StateHandlerU5BU5D_t1323790106* L_85 = G_B34_2;
		StateHandler_t105866779 * L_86 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache11_31();
		G_B35_0 = ((int32_t)17);
		G_B35_1 = L_85;
		G_B35_2 = L_85;
		if (L_86)
		{
			G_B36_0 = ((int32_t)17);
			G_B36_1 = L_85;
			G_B36_2 = L_85;
			goto IL_024a;
		}
	}
	{
		intptr_t L_87 = (intptr_t)Lexer_State18_m962707759_RuntimeMethod_var;
		StateHandler_t105866779 * L_88 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_88, NULL, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache11_31(L_88);
		G_B36_0 = G_B35_0;
		G_B36_1 = G_B35_1;
		G_B36_2 = G_B35_2;
	}

IL_024a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_89 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache11_31();
		NullCheck(G_B36_1);
		ArrayElementTypeCheck (G_B36_1, L_89);
		(G_B36_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B36_0), (StateHandler_t105866779 *)L_89);
		StateHandlerU5BU5D_t1323790106* L_90 = G_B36_2;
		StateHandler_t105866779 * L_91 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache12_32();
		G_B37_0 = ((int32_t)18);
		G_B37_1 = L_90;
		G_B37_2 = L_90;
		if (L_91)
		{
			G_B38_0 = ((int32_t)18);
			G_B38_1 = L_90;
			G_B38_2 = L_90;
			goto IL_026b;
		}
	}
	{
		intptr_t L_92 = (intptr_t)Lexer_State19_m37393664_RuntimeMethod_var;
		StateHandler_t105866779 * L_93 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_93, NULL, L_92, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache12_32(L_93);
		G_B38_0 = G_B37_0;
		G_B38_1 = G_B37_1;
		G_B38_2 = G_B37_2;
	}

IL_026b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_94 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache12_32();
		NullCheck(G_B38_1);
		ArrayElementTypeCheck (G_B38_1, L_94);
		(G_B38_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B38_0), (StateHandler_t105866779 *)L_94);
		StateHandlerU5BU5D_t1323790106* L_95 = G_B38_2;
		StateHandler_t105866779 * L_96 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache13_33();
		G_B39_0 = ((int32_t)19);
		G_B39_1 = L_95;
		G_B39_2 = L_95;
		if (L_96)
		{
			G_B40_0 = ((int32_t)19);
			G_B40_1 = L_95;
			G_B40_2 = L_95;
			goto IL_028c;
		}
	}
	{
		intptr_t L_97 = (intptr_t)Lexer_State20_m1657765573_RuntimeMethod_var;
		StateHandler_t105866779 * L_98 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_98, NULL, L_97, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache13_33(L_98);
		G_B40_0 = G_B39_0;
		G_B40_1 = G_B39_1;
		G_B40_2 = G_B39_2;
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_99 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache13_33();
		NullCheck(G_B40_1);
		ArrayElementTypeCheck (G_B40_1, L_99);
		(G_B40_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B40_0), (StateHandler_t105866779 *)L_99);
		StateHandlerU5BU5D_t1323790106* L_100 = G_B40_2;
		StateHandler_t105866779 * L_101 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache14_34();
		G_B41_0 = ((int32_t)20);
		G_B41_1 = L_100;
		G_B41_2 = L_100;
		if (L_101)
		{
			G_B42_0 = ((int32_t)20);
			G_B42_1 = L_100;
			G_B42_2 = L_100;
			goto IL_02ad;
		}
	}
	{
		intptr_t L_102 = (intptr_t)Lexer_State21_m264515146_RuntimeMethod_var;
		StateHandler_t105866779 * L_103 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_103, NULL, L_102, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache14_34(L_103);
		G_B42_0 = G_B41_0;
		G_B42_1 = G_B41_1;
		G_B42_2 = G_B41_2;
	}

IL_02ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_104 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache14_34();
		NullCheck(G_B42_1);
		ArrayElementTypeCheck (G_B42_1, L_104);
		(G_B42_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B42_0), (StateHandler_t105866779 *)L_104);
		StateHandlerU5BU5D_t1323790106* L_105 = G_B42_2;
		StateHandler_t105866779 * L_106 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache15_35();
		G_B43_0 = ((int32_t)21);
		G_B43_1 = L_105;
		G_B43_2 = L_105;
		if (L_106)
		{
			G_B44_0 = ((int32_t)21);
			G_B44_1 = L_105;
			G_B44_2 = L_105;
			goto IL_02ce;
		}
	}
	{
		intptr_t L_107 = (intptr_t)Lexer_State22_m3335112411_RuntimeMethod_var;
		StateHandler_t105866779 * L_108 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_108, NULL, L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache15_35(L_108);
		G_B44_0 = G_B43_0;
		G_B44_1 = G_B43_1;
		G_B44_2 = G_B43_2;
	}

IL_02ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_109 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache15_35();
		NullCheck(G_B44_1);
		ArrayElementTypeCheck (G_B44_1, L_109);
		(G_B44_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B44_0), (StateHandler_t105866779 *)L_109);
		StateHandlerU5BU5D_t1323790106* L_110 = G_B44_2;
		StateHandler_t105866779 * L_111 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache16_36();
		G_B45_0 = ((int32_t)22);
		G_B45_1 = L_110;
		G_B45_2 = L_110;
		if (L_111)
		{
			G_B46_0 = ((int32_t)22);
			G_B46_1 = L_110;
			G_B46_2 = L_110;
			goto IL_02ef;
		}
	}
	{
		intptr_t L_112 = (intptr_t)Lexer_State23_m3244615072_RuntimeMethod_var;
		StateHandler_t105866779 * L_113 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_113, NULL, L_112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache16_36(L_113);
		G_B46_0 = G_B45_0;
		G_B46_1 = G_B45_1;
		G_B46_2 = G_B45_2;
	}

IL_02ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_114 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache16_36();
		NullCheck(G_B46_1);
		ArrayElementTypeCheck (G_B46_1, L_114);
		(G_B46_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B46_0), (StateHandler_t105866779 *)L_114);
		StateHandlerU5BU5D_t1323790106* L_115 = G_B46_2;
		StateHandler_t105866779 * L_116 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache17_37();
		G_B47_0 = ((int32_t)23);
		G_B47_1 = L_115;
		G_B47_2 = L_115;
		if (L_116)
		{
			G_B48_0 = ((int32_t)23);
			G_B48_1 = L_115;
			G_B48_2 = L_115;
			goto IL_0310;
		}
	}
	{
		intptr_t L_117 = (intptr_t)Lexer_State24_m1419333622_RuntimeMethod_var;
		StateHandler_t105866779 * L_118 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_118, NULL, L_117, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache17_37(L_118);
		G_B48_0 = G_B47_0;
		G_B48_1 = G_B47_1;
		G_B48_2 = G_B47_2;
	}

IL_0310:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_119 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache17_37();
		NullCheck(G_B48_1);
		ArrayElementTypeCheck (G_B48_1, L_119);
		(G_B48_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B48_0), (StateHandler_t105866779 *)L_119);
		StateHandlerU5BU5D_t1323790106* L_120 = G_B48_2;
		StateHandler_t105866779 * L_121 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache18_38();
		G_B49_0 = ((int32_t)24);
		G_B49_1 = L_120;
		G_B49_2 = L_120;
		if (L_121)
		{
			G_B50_0 = ((int32_t)24);
			G_B50_1 = L_120;
			G_B50_2 = L_120;
			goto IL_0331;
		}
	}
	{
		intptr_t L_122 = (intptr_t)Lexer_State25_m1915434838_RuntimeMethod_var;
		StateHandler_t105866779 * L_123 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_123, NULL, L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache18_38(L_123);
		G_B50_0 = G_B49_0;
		G_B50_1 = G_B49_1;
		G_B50_2 = G_B49_2;
	}

IL_0331:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_124 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache18_38();
		NullCheck(G_B50_1);
		ArrayElementTypeCheck (G_B50_1, L_124);
		(G_B50_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B50_0), (StateHandler_t105866779 *)L_124);
		StateHandlerU5BU5D_t1323790106* L_125 = G_B50_2;
		StateHandler_t105866779 * L_126 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache19_39();
		G_B51_0 = ((int32_t)25);
		G_B51_1 = L_125;
		G_B51_2 = L_125;
		if (L_126)
		{
			G_B52_0 = ((int32_t)25);
			G_B52_1 = L_125;
			G_B52_2 = L_125;
			goto IL_0352;
		}
	}
	{
		intptr_t L_127 = (intptr_t)Lexer_State26_m710771591_RuntimeMethod_var;
		StateHandler_t105866779 * L_128 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_128, NULL, L_127, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache19_39(L_128);
		G_B52_0 = G_B51_0;
		G_B52_1 = G_B51_1;
		G_B52_2 = G_B51_2;
	}

IL_0352:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_129 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache19_39();
		NullCheck(G_B52_1);
		ArrayElementTypeCheck (G_B52_1, L_129);
		(G_B52_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B52_0), (StateHandler_t105866779 *)L_129);
		StateHandlerU5BU5D_t1323790106* L_130 = G_B52_2;
		StateHandler_t105866779 * L_131 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1A_40();
		G_B53_0 = ((int32_t)26);
		G_B53_1 = L_130;
		G_B53_2 = L_130;
		if (L_131)
		{
			G_B54_0 = ((int32_t)26);
			G_B54_1 = L_130;
			G_B54_2 = L_130;
			goto IL_0373;
		}
	}
	{
		intptr_t L_132 = (intptr_t)Lexer_State27_m3082723916_RuntimeMethod_var;
		StateHandler_t105866779 * L_133 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_133, NULL, L_132, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1A_40(L_133);
		G_B54_0 = G_B53_0;
		G_B54_1 = G_B53_1;
		G_B54_2 = G_B53_2;
	}

IL_0373:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_134 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1A_40();
		NullCheck(G_B54_1);
		ArrayElementTypeCheck (G_B54_1, L_134);
		(G_B54_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B54_0), (StateHandler_t105866779 *)L_134);
		StateHandlerU5BU5D_t1323790106* L_135 = G_B54_2;
		StateHandler_t105866779 * L_136 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1B_41();
		G_B55_0 = ((int32_t)27);
		G_B55_1 = L_135;
		G_B55_2 = L_135;
		if (L_136)
		{
			G_B56_0 = ((int32_t)27);
			G_B56_1 = L_135;
			G_B56_2 = L_135;
			goto IL_0394;
		}
	}
	{
		intptr_t L_137 = (intptr_t)Lexer_State28_m1090582418_RuntimeMethod_var;
		StateHandler_t105866779 * L_138 = (StateHandler_t105866779 *)il2cpp_codegen_object_new(StateHandler_t105866779_il2cpp_TypeInfo_var);
		StateHandler__ctor_m1447033077(L_138, NULL, L_137, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1B_41(L_138);
		G_B56_0 = G_B55_0;
		G_B56_1 = G_B55_1;
		G_B56_2 = G_B55_2;
	}

IL_0394:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandler_t105866779 * L_139 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1B_41();
		NullCheck(G_B56_1);
		ArrayElementTypeCheck (G_B56_1, L_139);
		(G_B56_1)->SetAt(static_cast<il2cpp_array_size_t>(G_B56_0), (StateHandler_t105866779 *)L_139);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_fsm_handler_table_1(G_B56_2);
		Int32U5BU5D_t385246372* L_140 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28)));
		RuntimeFieldHandle_t1871169219  L_141 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255365____U24fieldU2D50B1635D1FB2907A171B71751E1A3FA79423CA17_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_140, L_141, /*hidden argument*/NULL);
		((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->set_fsm_return_table_0(L_140);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C"  Il2CppChar Lexer_ProcessEscChar_m3815213012 (RuntimeObject * __this /* static, unused */, int32_t ___esc_char0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_ProcessEscChar_m3815213012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___esc_char0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_0015;
			}
			case 2:
			{
				goto IL_005c;
			}
		}
	}

IL_0015:
	{
		int32_t L_1 = ___esc_char0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_2 = ___esc_char0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)39))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_3 = ___esc_char0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)47))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = ___esc_char0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_5 = ___esc_char0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)98))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ___esc_char0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)102))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_7 = ___esc_char0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)110))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0067;
	}

IL_0052:
	{
		int32_t L_8 = ___esc_char0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_9 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0059:
	{
		return ((int32_t)10);
	}

IL_005c:
	{
		return ((int32_t)9);
	}

IL_005f:
	{
		return ((int32_t)13);
	}

IL_0062:
	{
		return 8;
	}

IL_0064:
	{
		return ((int32_t)12);
	}

IL_0067:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C"  bool Lexer_State1_m1798213439 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_01eb;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_003b;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t1514038666 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0040;
		}
	}
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t1514038666 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)13))))
		{
			goto IL_0040;
		}
	}

IL_003b:
	{
		goto IL_01eb;
	}

IL_0040:
	{
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t1514038666 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t2331368794 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t1514038666 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_008a;
		}
	}
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_string_buffer_10();
		FsmContext_t2331368794 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t1514038666 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		NullCheck(L_17);
		StringBuilder_Append_m2383614642(L_17, (((int32_t)((uint16_t)L_20))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_NextState_1(3);
		return (bool)1;
	}

IL_008a:
	{
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t1514038666 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_input_char_7();
		V_0 = L_24;
		int32_t L_25 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_0133;
			}
			case 2:
			{
				goto IL_00b3;
			}
			case 3:
			{
				goto IL_01cd;
			}
			case 4:
			{
				goto IL_0159;
			}
		}
	}

IL_00b3:
	{
		int32_t L_26 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00c8;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}

IL_00c8:
	{
		int32_t L_27 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_0123;
			}
			case 1:
			{
				goto IL_00dd;
			}
			case 2:
			{
				goto IL_0123;
			}
		}
	}

IL_00dd:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)58))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)102))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)110))))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)116))))
		{
			goto IL_0193;
		}
	}
	{
		goto IL_01e9;
	}

IL_0112:
	{
		FsmContext_t2331368794 * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_NextState_1(((int32_t)19));
		FsmContext_t2331368794 * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0123:
	{
		FsmContext_t2331368794 * L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->set_NextState_1(1);
		FsmContext_t2331368794 * L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0133:
	{
		FsmContext_t2331368794 * L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_t1514038666 * L_39 = L_38->get_L_2();
		NullCheck(L_39);
		StringBuilder_t * L_40 = L_39->get_string_buffer_10();
		FsmContext_t2331368794 * L_41 = ___ctx0;
		NullCheck(L_41);
		Lexer_t1514038666 * L_42 = L_41->get_L_2();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_input_char_7();
		NullCheck(L_40);
		StringBuilder_Append_m2383614642(L_40, (((int32_t)((uint16_t)L_43))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->set_NextState_1(2);
		return (bool)1;
	}

IL_0159:
	{
		FsmContext_t2331368794 * L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_t1514038666 * L_46 = L_45->get_L_2();
		NullCheck(L_46);
		StringBuilder_t * L_47 = L_46->get_string_buffer_10();
		FsmContext_t2331368794 * L_48 = ___ctx0;
		NullCheck(L_48);
		Lexer_t1514038666 * L_49 = L_48->get_L_2();
		NullCheck(L_49);
		int32_t L_50 = L_49->get_input_char_7();
		NullCheck(L_47);
		StringBuilder_Append_m2383614642(L_47, (((int32_t)((uint16_t)L_50))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_51 = ___ctx0;
		NullCheck(L_51);
		L_51->set_NextState_1(4);
		return (bool)1;
	}

IL_017f:
	{
		FsmContext_t2331368794 * L_52 = ___ctx0;
		NullCheck(L_52);
		L_52->set_NextState_1(((int32_t)12));
		return (bool)1;
	}

IL_0189:
	{
		FsmContext_t2331368794 * L_53 = ___ctx0;
		NullCheck(L_53);
		L_53->set_NextState_1(((int32_t)16));
		return (bool)1;
	}

IL_0193:
	{
		FsmContext_t2331368794 * L_54 = ___ctx0;
		NullCheck(L_54);
		L_54->set_NextState_1(((int32_t)9));
		return (bool)1;
	}

IL_019d:
	{
		FsmContext_t2331368794 * L_55 = ___ctx0;
		NullCheck(L_55);
		Lexer_t1514038666 * L_56 = L_55->get_L_2();
		NullCheck(L_56);
		bool L_57 = L_56->get_allow_single_quoted_strings_3();
		if (L_57)
		{
			goto IL_01af;
		}
	}
	{
		return (bool)0;
	}

IL_01af:
	{
		FsmContext_t2331368794 * L_58 = ___ctx0;
		NullCheck(L_58);
		Lexer_t1514038666 * L_59 = L_58->get_L_2();
		NullCheck(L_59);
		L_59->set_input_char_7(((int32_t)34));
		FsmContext_t2331368794 * L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->set_NextState_1(((int32_t)23));
		FsmContext_t2331368794 * L_61 = ___ctx0;
		NullCheck(L_61);
		L_61->set_Return_0((bool)1);
		return (bool)1;
	}

IL_01cd:
	{
		FsmContext_t2331368794 * L_62 = ___ctx0;
		NullCheck(L_62);
		Lexer_t1514038666 * L_63 = L_62->get_L_2();
		NullCheck(L_63);
		bool L_64 = L_63->get_allow_comments_2();
		if (L_64)
		{
			goto IL_01df;
		}
	}
	{
		return (bool)0;
	}

IL_01df:
	{
		FsmContext_t2331368794 * L_65 = ___ctx0;
		NullCheck(L_65);
		L_65->set_NextState_1(((int32_t)25));
		return (bool)1;
	}

IL_01e9:
	{
		return (bool)0;
	}

IL_01eb:
	{
		FsmContext_t2331368794 * L_66 = ___ctx0;
		NullCheck(L_66);
		Lexer_t1514038666 * L_67 = L_66->get_L_2();
		NullCheck(L_67);
		bool L_68 = Lexer_GetChar_m3174334169(L_67, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C"  bool Lexer_State2_m3684245780 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)49))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m2383614642(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(3);
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)48))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0095;
	}

IL_006f:
	{
		FsmContext_t2331368794 * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_t1514038666 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		StringBuilder_t * L_21 = L_20->get_string_buffer_10();
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_t1514038666 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_input_char_7();
		NullCheck(L_21);
		StringBuilder_Append_m2383614642(L_21, (((int32_t)((uint16_t)L_24))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_25 = ___ctx0;
		NullCheck(L_25);
		L_25->set_NextState_1(4);
		return (bool)1;
	}

IL_0095:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C"  bool Lexer_State3_m3421380387 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0140;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t1514038666 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t1514038666 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t1514038666 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m2383614642(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_004b:
	{
		FsmContext_t2331368794 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t1514038666 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t2331368794 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t1514038666 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t2331368794 * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t2331368794 * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t1514038666 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00d7;
			}
			case 1:
			{
				goto IL_00b2;
			}
			case 2:
			{
				goto IL_00f2;
			}
		}
	}

IL_00b2:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)69))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)101))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)125))))
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_013e;
	}

IL_00d7:
	{
		FsmContext_t2331368794 * L_31 = ___ctx0;
		NullCheck(L_31);
		Lexer_t1514038666 * L_32 = L_31->get_L_2();
		NullCheck(L_32);
		Lexer_UngetChar_m357503604(L_32, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_NextState_1(1);
		return (bool)1;
	}

IL_00f2:
	{
		FsmContext_t2331368794 * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t1514038666 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		StringBuilder_t * L_37 = L_36->get_string_buffer_10();
		FsmContext_t2331368794 * L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_t1514038666 * L_39 = L_38->get_L_2();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_input_char_7();
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, (((int32_t)((uint16_t)L_40))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->set_NextState_1(5);
		return (bool)1;
	}

IL_0118:
	{
		FsmContext_t2331368794 * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t1514038666 * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		StringBuilder_t * L_44 = L_43->get_string_buffer_10();
		FsmContext_t2331368794 * L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_t1514038666 * L_46 = L_45->get_L_2();
		NullCheck(L_46);
		int32_t L_47 = L_46->get_input_char_7();
		NullCheck(L_44);
		StringBuilder_Append_m2383614642(L_44, (((int32_t)((uint16_t)L_47))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_48 = ___ctx0;
		NullCheck(L_48);
		L_48->set_NextState_1(7);
		return (bool)1;
	}

IL_013e:
	{
		return (bool)0;
	}

IL_0140:
	{
		FsmContext_t2331368794 * L_49 = ___ctx0;
		NullCheck(L_49);
		Lexer_t1514038666 * L_50 = L_49->get_L_2();
		NullCheck(L_50);
		bool L_51 = Lexer_GetChar_m3174334169(L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C"  bool Lexer_State4_m2120686884 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) > ((int32_t)((int32_t)13))))
		{
			goto IL_0052;
		}
	}

IL_0042:
	{
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		L_11->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->set_NextState_1(1);
		return (bool)1;
	}

IL_0052:
	{
		FsmContext_t2331368794 * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_t1514038666 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		V_0 = L_15;
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_00b3;
			}
		}
	}

IL_0073:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)69))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)93))))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)101))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)125))))
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00ff;
	}

IL_0098:
	{
		FsmContext_t2331368794 * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_t1514038666 * L_22 = L_21->get_L_2();
		NullCheck(L_22);
		Lexer_UngetChar_m357503604(L_22, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_NextState_1(1);
		return (bool)1;
	}

IL_00b3:
	{
		FsmContext_t2331368794 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_t1514038666 * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		StringBuilder_t * L_27 = L_26->get_string_buffer_10();
		FsmContext_t2331368794 * L_28 = ___ctx0;
		NullCheck(L_28);
		Lexer_t1514038666 * L_29 = L_28->get_L_2();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_input_char_7();
		NullCheck(L_27);
		StringBuilder_Append_m2383614642(L_27, (((int32_t)((uint16_t)L_30))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_31 = ___ctx0;
		NullCheck(L_31);
		L_31->set_NextState_1(5);
		return (bool)1;
	}

IL_00d9:
	{
		FsmContext_t2331368794 * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t1514038666 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		StringBuilder_t * L_34 = L_33->get_string_buffer_10();
		FsmContext_t2331368794 * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t1514038666 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_input_char_7();
		NullCheck(L_34);
		StringBuilder_Append_m2383614642(L_34, (((int32_t)((uint16_t)L_37))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->set_NextState_1(7);
		return (bool)1;
	}

IL_00ff:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C"  bool Lexer_State5_m2304916419 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m2383614642(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(6);
		return (bool)1;
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C"  bool Lexer_State6_m4228892936 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_010d;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t1514038666 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t1514038666 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t1514038666 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m2383614642(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_010d;
	}

IL_004b:
	{
		FsmContext_t2331368794 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t1514038666 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t2331368794 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t1514038666 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t2331368794 * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t2331368794 * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t1514038666 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)101))))
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_010b;
	}

IL_00ca:
	{
		FsmContext_t2331368794 * L_31 = ___ctx0;
		NullCheck(L_31);
		Lexer_t1514038666 * L_32 = L_31->get_L_2();
		NullCheck(L_32);
		Lexer_UngetChar_m357503604(L_32, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_NextState_1(1);
		return (bool)1;
	}

IL_00e5:
	{
		FsmContext_t2331368794 * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t1514038666 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		StringBuilder_t * L_37 = L_36->get_string_buffer_10();
		FsmContext_t2331368794 * L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_t1514038666 * L_39 = L_38->get_L_2();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_input_char_7();
		NullCheck(L_37);
		StringBuilder_Append_m2383614642(L_37, (((int32_t)((uint16_t)L_40))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->set_NextState_1(7);
		return (bool)1;
	}

IL_010b:
	{
		return (bool)0;
	}

IL_010d:
	{
		FsmContext_t2331368794 * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t1514038666 * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		bool L_44 = Lexer_GetChar_m3174334169(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C"  bool Lexer_State7_m3966904031 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0056;
		}
	}
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		StringBuilder_t * L_10 = L_9->get_string_buffer_10();
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		NullCheck(L_10);
		StringBuilder_Append_m2383614642(L_10, (((int32_t)((uint16_t)L_13))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		L_14->set_NextState_1(8);
		return (bool)1;
	}

IL_0056:
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		V_0 = L_17;
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)43))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)45))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_009d;
	}

IL_0077:
	{
		FsmContext_t2331368794 * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t1514038666 * L_21 = L_20->get_L_2();
		NullCheck(L_21);
		StringBuilder_t * L_22 = L_21->get_string_buffer_10();
		FsmContext_t2331368794 * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t1514038666 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		NullCheck(L_22);
		StringBuilder_Append_m2383614642(L_22, (((int32_t)((uint16_t)L_25))), /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_26 = ___ctx0;
		NullCheck(L_26);
		L_26->set_NextState_1(8);
		return (bool)1;
	}

IL_009d:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C"  bool Lexer_State8_m2667415049 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00d7;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t1514038666 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_004b;
		}
	}
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t1514038666 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_t1514038666 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_Append_m2383614642(L_8, (((int32_t)((uint16_t)L_11))), /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_004b:
	{
		FsmContext_t2331368794 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_t1514038666 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}
	{
		FsmContext_t2331368794 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_t1514038666 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		if ((((int32_t)L_17) < ((int32_t)((int32_t)9))))
		{
			goto IL_0091;
		}
	}
	{
		FsmContext_t2331368794 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_t1514038666 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		if ((((int32_t)L_20) > ((int32_t)((int32_t)13))))
		{
			goto IL_0091;
		}
	}

IL_0081:
	{
		FsmContext_t2331368794 * L_21 = ___ctx0;
		NullCheck(L_21);
		L_21->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(1);
		return (bool)1;
	}

IL_0091:
	{
		FsmContext_t2331368794 * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_t1514038666 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d5;
	}

IL_00ba:
	{
		FsmContext_t2331368794 * L_29 = ___ctx0;
		NullCheck(L_29);
		Lexer_t1514038666 * L_30 = L_29->get_L_2();
		NullCheck(L_30);
		Lexer_UngetChar_m357503604(L_30, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_31 = ___ctx0;
		NullCheck(L_31);
		L_31->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->set_NextState_1(1);
		return (bool)1;
	}

IL_00d5:
	{
		return (bool)0;
	}

IL_00d7:
	{
		FsmContext_t2331368794 * L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_t1514038666 * L_34 = L_33->get_L_2();
		NullCheck(L_34);
		bool L_35 = Lexer_GetChar_m3174334169(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C"  bool Lexer_State9_m1222018432 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)114))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)10));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C"  bool Lexer_State10_m1529890914 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)11));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C"  bool Lexer_State11_m136640487 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C"  bool Lexer_State12_m3207237752 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)97))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)13));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C"  bool Lexer_State13_m3116740413 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)14));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C"  bool Lexer_State14_m1291458963 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)115))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)15));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C"  bool Lexer_State15_m1787560179 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)101))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C"  bool Lexer_State16_m582896932 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)117))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)17));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C"  bool Lexer_State17_m2954849257 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002f;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)18));
		return (bool)1;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C"  bool Lexer_State18_m962707759 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)108))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C"  bool Lexer_State19_m37393664 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_m357503604(L_6, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)20));
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)19));
		FsmContext_t2331368794 * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t1514038666 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t2331368794 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t1514038666 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_m3174334169(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C"  bool Lexer_State20_m1657765573 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C"  bool Lexer_State21_m264515146 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State21_m264515146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_006e;
			}
		}
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)47))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)98))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)102))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)110))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00a7;
	}

IL_006e:
	{
		FsmContext_t2331368794 * L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->set_NextState_1(((int32_t)22));
		return (bool)1;
	}

IL_0078:
	{
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t1514038666 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		StringBuilder_t * L_16 = L_15->get_string_buffer_10();
		FsmContext_t2331368794 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t1514038666 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		Il2CppChar L_20 = Lexer_ProcessEscChar_m3815213012(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m2383614642(L_16, L_20, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_21 = ___ctx0;
		FsmContext_t2331368794 * L_22 = ___ctx0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_StateStack_3();
		NullCheck(L_21);
		L_21->set_NextState_1(L_23);
		return (bool)1;
	}

IL_00a7:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C"  bool Lexer_State22_m3335112411 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State22_m3335112411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		L_1->set_unichar_13(0);
		goto IL_00ef;
	}

IL_0019:
	{
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_003d;
		}
	}
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0085;
		}
	}

IL_003d:
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0061;
		}
	}
	{
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0085;
		}
	}

IL_0061:
	{
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t1514038666 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00ed;
		}
	}
	{
		FsmContext_t2331368794 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t1514038666 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00ed;
		}
	}

IL_0085:
	{
		FsmContext_t2331368794 * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_t1514038666 * L_21 = L_20->get_L_2();
		Lexer_t1514038666 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_unichar_13();
		FsmContext_t2331368794 * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_t1514038666 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		int32_t L_27 = Lexer_HexValue_m3751728081(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->set_unichar_13(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00e8;
		}
	}
	{
		FsmContext_t2331368794 * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_t1514038666 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		StringBuilder_t * L_34 = L_33->get_string_buffer_10();
		FsmContext_t2331368794 * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_t1514038666 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_unichar_13();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_38 = Convert_ToChar_m4189066566(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_Append_m2383614642(L_34, L_38, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_39 = ___ctx0;
		FsmContext_t2331368794 * L_40 = ___ctx0;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_StateStack_3();
		NullCheck(L_39);
		L_39->set_NextState_1(L_41);
		return (bool)1;
	}

IL_00e8:
	{
		goto IL_00ef;
	}

IL_00ed:
	{
		return (bool)0;
	}

IL_00ef:
	{
		FsmContext_t2331368794 * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_t1514038666 * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		bool L_44 = Lexer_GetChar_m3174334169(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C"  bool Lexer_State23_m3244615072 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0076;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_0054;
	}

IL_0026:
	{
		FsmContext_t2331368794 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_t1514038666 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_m357503604(L_6, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)24));
		return (bool)1;
	}

IL_0042:
	{
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)23));
		FsmContext_t2331368794 * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0054:
	{
		FsmContext_t2331368794 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_t1514038666 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t2331368794 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_t1514038666 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_Append_m2383614642(L_13, (((int32_t)((uint16_t)L_16))), /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0076:
	{
		FsmContext_t2331368794 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_t1514038666 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		bool L_19 = Lexer_GetChar_m3174334169(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C"  bool Lexer_State24_m1419333622 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0042;
	}

IL_0025:
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_t1514038666 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		L_7->set_input_char_7(((int32_t)34));
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_Return_0((bool)1);
		FsmContext_t2331368794 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(1);
		return (bool)1;
	}

IL_0042:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C"  bool Lexer_State25_m1915434838 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m3174334169(L_1, /*hidden argument*/NULL);
		FsmContext_t2331368794 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_t1514038666 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)42))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0041;
	}

IL_002d:
	{
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)26));
		return (bool)1;
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C"  bool Lexer_State26_m710771591 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0020;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0020;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(1);
		return (bool)1;
	}

IL_0020:
	{
		FsmContext_t2331368794 * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t1514038666 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_m3174334169(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C"  bool Lexer_State27_m3082723916 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0021;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0021;
		}
	}
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(((int32_t)28));
		return (bool)1;
	}

IL_0021:
	{
		FsmContext_t2331368794 * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_t1514038666 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6 = Lexer_GetChar_m3174334169(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C"  bool Lexer_State28_m1090582418 (RuntimeObject * __this /* static, unused */, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0041;
	}

IL_0005:
	{
		FsmContext_t2331368794 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_t1514038666 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		FsmContext_t2331368794 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_t1514038666 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t2331368794 * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(1);
		return (bool)1;
	}

IL_0037:
	{
		FsmContext_t2331368794 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0041:
	{
		FsmContext_t2331368794 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_t1514038666 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		bool L_10 = Lexer_GetChar_m3174334169(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
extern "C"  bool Lexer_GetChar_m3174334169 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Lexer_NextChar_m1305718086(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_input_char_7(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		__this->set_end_of_input_4((bool)1);
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
extern "C"  int32_t Lexer_NextChar_m1305718086 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_input_buffer_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_input_buffer_6();
		V_0 = L_1;
		__this->set_input_buffer_6(0);
		int32_t L_2 = V_0;
		return L_2;
	}

IL_001b:
	{
		TextReader_t283511965 * L_3 = __this->get_reader_8();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
extern "C"  bool Lexer_NextToken_m764348600 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_NextToken_m764348600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t105866779 * V_0 = NULL;
	{
		FsmContext_t2331368794 * L_0 = __this->get_fsm_context_5();
		NullCheck(L_0);
		L_0->set_Return_0((bool)0);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t1323790106* L_1 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_fsm_handler_table_1();
		int32_t L_2 = __this->get_state_9();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		StateHandler_t105866779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t105866779 * L_5 = V_0;
		FsmContext_t2331368794 * L_6 = __this->get_fsm_context_5();
		NullCheck(L_5);
		bool L_7 = StateHandler_Invoke_m1476994263(L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_8 = __this->get_input_char_7();
		JsonException_t3682484112 * L_9 = (JsonException_t3682484112 *)il2cpp_codegen_object_new(JsonException_t3682484112_il2cpp_TypeInfo_var);
		JsonException__ctor_m2928296746(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0038:
	{
		bool L_10 = __this->get_end_of_input_4();
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)0;
	}

IL_0045:
	{
		FsmContext_t2331368794 * L_11 = __this->get_fsm_context_5();
		NullCheck(L_11);
		bool L_12 = L_11->get_Return_0();
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_13 = __this->get_string_buffer_10();
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		__this->set_string_value_11(L_14);
		StringBuilder_t * L_15 = __this->get_string_buffer_10();
		StringBuilder_t * L_16 = __this->get_string_buffer_10();
		NullCheck(L_16);
		int32_t L_17 = StringBuilder_get_Length_m3238060835(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Remove_m940064945(L_15, 0, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_t1514038666_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_18 = ((Lexer_t1514038666_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_t1514038666_il2cpp_TypeInfo_var))->get_fsm_return_table_0();
		int32_t L_19 = __this->get_state_9();
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->set_token_12(L_21);
		int32_t L_22 = __this->get_token_12();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_23 = __this->get_input_char_7();
		__this->set_token_12(L_23);
	}

IL_00ae:
	{
		FsmContext_t2331368794 * L_24 = __this->get_fsm_context_5();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_NextState_1();
		__this->set_state_9(L_25);
		return (bool)1;
	}

IL_00c1:
	{
		FsmContext_t2331368794 * L_26 = __this->get_fsm_context_5();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_NextState_1();
		__this->set_state_9(L_27);
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
extern "C"  void Lexer_UngetChar_m357503604 (Lexer_t1514038666 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_char_7();
		__this->set_input_buffer_6(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void StateHandler__ctor_m1447033077 (StateHandler_t105866779 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
extern "C"  bool StateHandler_Invoke_m1476994263 (StateHandler_t105866779 * __this, FsmContext_t2331368794 * ___ctx0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		StateHandler_Invoke_m1476994263((StateHandler_t105866779 *)__this->get_prev_9(), ___ctx0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			typedef bool (*FunctionPointerType) (RuntimeObject *, FsmContext_t2331368794 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, ___ctx0, targetMethod);
		}
		else
		{
			// closed
			typedef bool (*FunctionPointerType) (RuntimeObject *, void*, FsmContext_t2331368794 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___ctx0, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			typedef bool (*FunctionPointerType) (void*, FsmContext_t2331368794 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
		}
		else
		{
			// open
			typedef bool (*FunctionPointerType) (FsmContext_t2331368794 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* StateHandler_BeginInvoke_m3298710201 (StateHandler_t105866779 * __this, FsmContext_t2331368794 * ___ctx0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
extern "C"  bool StateHandler_EndInvoke_m3355839561 (StateHandler_t105866779 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke(const ObjectMetadata_t3566284522& unmarshaled, ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception);
}
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke_back(const ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled, ObjectMetadata_t3566284522& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_pinvoke_cleanup(ObjectMetadata_t3566284522_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_com(const ObjectMetadata_t3566284522& unmarshaled, ObjectMetadata_t3566284522_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception);
}
extern "C" void ObjectMetadata_t3566284522_marshal_com_back(const ObjectMetadata_t3566284522_marshaled_com& marshaled, ObjectMetadata_t3566284522& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
extern "C" void ObjectMetadata_t3566284522_marshal_com_cleanup(ObjectMetadata_t3566284522_marshaled_com& marshaled)
{
}
// System.Type LitJson.ObjectMetadata::get_ElementType()
extern "C"  Type_t * ObjectMetadata_get_ElementType_m609016881 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectMetadata_get_ElementType_m609016881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = __this->get_element_type_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (JsonData_t1524858407_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		Type_t * L_3 = __this->get_element_type_0();
		return L_3;
	}
}
extern "C"  Type_t * ObjectMetadata_get_ElementType_m609016881_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	return ObjectMetadata_get_ElementType_m609016881(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
extern "C"  void ObjectMetadata_set_ElementType_m3045200045 (ObjectMetadata_t3566284522 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_element_type_0(L_0);
		return;
	}
}
extern "C"  void ObjectMetadata_set_ElementType_m3045200045_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	ObjectMetadata_set_ElementType_m3045200045(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
extern "C"  bool ObjectMetadata_get_IsDictionary_m2197140272 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_dictionary_1();
		return L_0;
	}
}
extern "C"  bool ObjectMetadata_get_IsDictionary_m2197140272_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	return ObjectMetadata_get_IsDictionary_m2197140272(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
extern "C"  void ObjectMetadata_set_IsDictionary_m1516974793 (ObjectMetadata_t3566284522 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_is_dictionary_1(L_0);
		return;
	}
}
extern "C"  void ObjectMetadata_set_IsDictionary_m1516974793_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	ObjectMetadata_set_IsDictionary_m1516974793(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
extern "C"  RuntimeObject* ObjectMetadata_get_Properties_m2724230150 (ObjectMetadata_t3566284522 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_properties_2();
		return L_0;
	}
}
extern "C"  RuntimeObject* ObjectMetadata_get_Properties_m2724230150_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	return ObjectMetadata_get_Properties_m2724230150(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
extern "C"  void ObjectMetadata_set_Properties_m3418010702 (ObjectMetadata_t3566284522 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_properties_2(L_0);
		return;
	}
}
extern "C"  void ObjectMetadata_set_Properties_m3418010702_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	ObjectMetadata_t3566284522 * _thisAdjusted = reinterpret_cast<ObjectMetadata_t3566284522 *>(__this + 1);
	ObjectMetadata_set_Properties_m3418010702(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C"  void OrderedDictionaryEnumerator__ctor_m340820643 (OrderedDictionaryEnumerator_t386339177 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C"  RuntimeObject * OrderedDictionaryEnumerator_get_Current_m3310397926 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Current_m3310397926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t3123975638  L_0 = OrderedDictionaryEnumerator_get_Entry_m67332516(__this, /*hidden argument*/NULL);
		DictionaryEntry_t3123975638  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_t3123975638_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C"  DictionaryEntry_t3123975638  OrderedDictionaryEnumerator_get_Entry_m67332516 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Entry_m67332516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3707786873  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t3707786873  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t3707786873  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t4140357341_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m4064315612((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4064315612_RuntimeMethod_var);
		JsonData_t1524858407 * L_3 = KeyValuePair_2_get_Value_m3703576749((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3703576749_RuntimeMethod_var);
		DictionaryEntry_t3123975638  L_4;
		memset(&L_4, 0, sizeof(L_4));
		DictionaryEntry__ctor_m2585376310((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C"  RuntimeObject * OrderedDictionaryEnumerator_get_Key_m3958560648 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Key_m3958560648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3707786873  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t3707786873  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t3707786873  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t4140357341_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2 = KeyValuePair_2_get_Key_m4064315612((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m4064315612_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C"  RuntimeObject * OrderedDictionaryEnumerator_get_Value_m1806168108 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_get_Value_m1806168108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t3707786873  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t3707786873  L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t3707786873  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t4140357341_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_t1524858407 * L_2 = KeyValuePair_2_get_Value_m3703576749((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3703576749_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C"  bool OrderedDictionaryEnumerator_MoveNext_m939529015 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_MoveNext_m939529015_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C"  void OrderedDictionaryEnumerator_Reset_m2029359593 (OrderedDictionaryEnumerator_t386339177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrderedDictionaryEnumerator_Reset_m2029359593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke(const PropertyMetadata_t3727440473& unmarshaled, PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception);
}
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke_back(const PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled, PropertyMetadata_t3727440473& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_pinvoke_cleanup(PropertyMetadata_t3727440473_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_com(const PropertyMetadata_t3727440473& unmarshaled, PropertyMetadata_t3727440473_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception);
}
extern "C" void PropertyMetadata_t3727440473_marshal_com_back(const PropertyMetadata_t3727440473_marshaled_com& marshaled, PropertyMetadata_t3727440473& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
extern "C" void PropertyMetadata_t3727440473_marshal_com_cleanup(PropertyMetadata_t3727440473_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void WrapperFactory__ctor_m2738494406 (WrapperFactory_t2158548929 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C"  RuntimeObject* WrapperFactory_Invoke_m990385463 (WrapperFactory_t2158548929 * __this, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		WrapperFactory_Invoke_m990385463((WrapperFactory_t2158548929 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* WrapperFactory_BeginInvoke_m1363845795 (WrapperFactory_t2158548929 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C"  RuntimeObject* WrapperFactory_EndInvoke_m1522180485 (WrapperFactory_t2158548929 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
extern "C"  void WriterContext__ctor_m711484838 (WriterContext_t1011093999 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
