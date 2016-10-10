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

// System.WeakReference
struct WeakReference_t2199479497;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t2185673872;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Void2863195528MethodDeclarations.h"
#include "mscorlib_System_WeakReference2199479497.h"
#include "mscorlib_System_WeakReference2199479497MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_ArgumentNullException3573189601MethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892MethodDeclarations.h"
#include "mscorlib_System_Type2863145774MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_ArgumentNullException3573189601.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030MethodDeclarations.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1812538030.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandleTy1621876744.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_WindowsConsoleDriver2185673872.h"
#include "mscorlib_System_WindowsConsoleDriver2185673872MethodDeclarations.h"
#include "mscorlib_System_ConsoleScreenBufferInfo1990999783.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Handles1104890401.h"
#include "mscorlib_System_Int161153838442.h"
#include "mscorlib_System_ConsoleKeyInfo265972618.h"
#include "mscorlib_System_Runtime_InteropServices_Marshal87536056MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException1589641621MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_InputRecord3889994513.h"
#include "mscorlib_System_InvalidOperationException1589641621.h"
#include "mscorlib_System_Char2862622538.h"
#include "mscorlib_System_ConsoleKeyInfo265972618MethodDeclarations.h"
#include "mscorlib_System_ConsoleKey2761899580.h"
#include "mscorlib_System_ConsoleScreenBufferInfo1990999783MethodDeclarations.h"
#include "mscorlib_System_InputRecord3889994513MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m1824216406 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___target0;
		WeakReference__ctor_m1724966759(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1724966759 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, bool ___trackResurrection1, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		Il2CppObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m3300556457(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* Il2CppObject_0_0_0_var;
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3237038;
extern Il2CppCodeGenString* _stringLiteral949150354;
extern Il2CppCodeGenString* _stringLiteral3186495209;
extern const uint32_t WeakReference__ctor_m1465778495_MetadataUsageId;
extern "C"  void WeakReference__ctor_m1465778495 (WeakReference_t2199479497 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1465778495_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject * V_0 = NULL;
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		SerializationInfo_t2185721892 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3237038, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		SerializationInfo_t2185721892 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m1462266865(L_2, _stringLiteral949150354, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t2185721892 * L_4 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Il2CppObject_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		Il2CppObject * L_6 = SerializationInfo_GetValue_m4125471336(L_4, _stringLiteral3186495209, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Il2CppObject * L_7 = V_0;
		WeakReference_AllocateHandle_m3300556457(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m3300556457 (WeakReference_t2199479497 * __this, Il2CppObject * ___target0, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Il2CppObject * L_1 = ___target0;
		GCHandle_t1812538030  L_2 = GCHandle_Alloc_m4018232088(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		Il2CppObject * L_3 = ___target0;
		GCHandle_t1812538030  L_4 = GCHandle_Alloc_m4018232088(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C"  bool WeakReference_get_IsAlive_m281655028 (WeakReference_t2199479497 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = VirtFuncInvoker0< Il2CppObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((((int32_t)((((Il2CppObject*)(Il2CppObject *)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C"  Il2CppObject * WeakReference_get_Target_m2183973397 (WeakReference_t2199479497 * __this, const MethodInfo* method)
{
	{
		GCHandle_t1812538030 * L_0 = __this->get_address_of_gcHandle_1();
		Il2CppObject * L_1 = GCHandle_get_Target_m1356841761(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m2498111523 (WeakReference_t2199479497 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m3030916772 (WeakReference_t2199479497 * __this, const MethodInfo* method)
{
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t1812538030 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m2878302728(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m3027285644(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppClass* ArgumentNullException_t3573189601_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t3991598821_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3237038;
extern Il2CppCodeGenString* _stringLiteral949150354;
extern Il2CppCodeGenString* _stringLiteral3186495209;
extern const uint32_t WeakReference_GetObjectData_m1524996508_MetadataUsageId;
extern "C"  void WeakReference_GetObjectData_m1524996508 (WeakReference_t2199479497 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m1524996508_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2185721892 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3573189601 * L_1 = (ArgumentNullException_t3573189601 *)il2cpp_codegen_object_new(ArgumentNullException_t3573189601_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3237038, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		SerializationInfo_t2185721892 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3573408328(L_2, _stringLiteral949150354, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t2185721892 * L_4 = ___info0;
		Il2CppObject * L_5 = VirtFuncInvoker0< Il2CppObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m469120675(L_4, _stringLiteral3186495209, L_5, /*hidden argument*/NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t3991598821 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t3991598821_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		SerializationInfo_t2185721892 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m469120675(L_6, _stringLiteral3186495209, NULL, /*hidden argument*/NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
	{
		return;
	}
}
// System.Void System.WindowsConsoleDriver::.ctor()
extern Il2CppClass* ConsoleScreenBufferInfo_t1990999783_il2cpp_TypeInfo_var;
extern const uint32_t WindowsConsoleDriver__ctor_m3567726553_MetadataUsageId;
extern "C"  void WindowsConsoleDriver__ctor_m3567726553 (WindowsConsoleDriver_t2185673872 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver__ctor_m3567726553_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ConsoleScreenBufferInfo_t1990999783  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = WindowsConsoleDriver_GetStdHandle_m2710701471(NULL /*static, unused*/, ((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1(L_0);
		IntPtr_t L_1 = WindowsConsoleDriver_GetStdHandle_m2710701471(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0(L_1);
		Initobj (ConsoleScreenBufferInfo_t1990999783_il2cpp_TypeInfo_var, (&V_0));
		IntPtr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m4057528648(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		int16_t L_3 = (&V_0)->get_Attribute_2();
		__this->set_defaultAttribute_2(L_3);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern Il2CppClass* InputRecord_t3889994513_il2cpp_TypeInfo_var;
extern Il2CppClass* Marshal_t87536056_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* InvalidOperationException_t1589641621_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1114402996;
extern const uint32_t WindowsConsoleDriver_ReadKey_m1393188309_MetadataUsageId;
extern "C"  ConsoleKeyInfo_t265972618  WindowsConsoleDriver_ReadKey_m1393188309 (WindowsConsoleDriver_t2185673872 * __this, bool ___intercept0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_m1393188309_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_t3889994513  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		Initobj (InputRecord_t3889994513_il2cpp_TypeInfo_var, (&V_1));
	}

IL_0008:
	{
		IntPtr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_m9651400(NULL /*static, unused*/, L_0, (&V_1), 1, (&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t87536056_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_m701978199(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral1114402996, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t1589641621 * L_6 = (InvalidOperationException_t1589641621 *)il2cpp_codegen_object_new(InvalidOperationException_t1589641621_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1485483280(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0037:
	{
		int16_t L_7 = (&V_1)->get_EventType_0();
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		bool L_8 = (&V_1)->get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}

IL_0050:
	{
		int32_t L_9 = (&V_1)->get_ControlKeyState_6();
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_10 = (&V_1)->get_ControlKeyState_6();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)12)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_11 = (&V_1)->get_ControlKeyState_6();
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Il2CppChar L_12 = (&V_1)->get_Character_5();
		int16_t L_13 = (&V_1)->get_VirtualKeyCode_3();
		bool L_14 = V_4;
		bool L_15 = V_2;
		bool L_16 = V_3;
		ConsoleKeyInfo_t265972618  L_17;
		memset(&L_17, 0, sizeof(L_17));
		ConsoleKeyInfo__ctor_m3416959802(&L_17, L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m2710701471 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"));
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)returnValue));

	return _returnValue_unmarshaled;
}
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m4057528648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ConsoleScreenBufferInfo_t1990999783 * ___info1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_t1990999783_marshaled_pinvoke*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IntPtr_t) + sizeof(ConsoleScreenBufferInfo_t1990999783_marshaled_pinvoke*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"));
		}
	}

	// Marshaling of parameter '___info1' to native representation
	ConsoleScreenBufferInfo_t1990999783_marshaled_pinvoke ____info1_empty = { };
	ConsoleScreenBufferInfo_t1990999783_marshaled_pinvoke* ____info1_marshaled = &____info1_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>(___handle0.get_m_value_0()), ____info1_marshaled);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___info1' back from native representation
	ConsoleScreenBufferInfo_t1990999783  _____info1_marshaled_unmarshaled_dereferenced;
	memset(&_____info1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____info1_marshaled_unmarshaled_dereferenced));
	ConsoleScreenBufferInfo_t1990999783_marshal_pinvoke_back(*____info1_marshaled, _____info1_marshaled_unmarshaled_dereferenced);
	*___info1 = _____info1_marshaled_unmarshaled_dereferenced;;

	// Marshaling cleanup of parameter '___info1' native representation
	ConsoleScreenBufferInfo_t1990999783_marshal_pinvoke_cleanup(*____info1_marshaled);

	return returnValue;
}
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m9651400 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, InputRecord_t3889994513 * ___record1, int32_t ___length2, int32_t* ___nread3, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_t3889994513_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IntPtr_t) + sizeof(InputRecord_t3889994513_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"));
		}
	}

	// Marshaling of parameter '___record1' to native representation
	InputRecord_t3889994513_marshaled_pinvoke ____record1_empty = { };
	InputRecord_t3889994513_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Marshaling of parameter '___nread3' to native representation
	int32_t ____nread3_empty = 0;
	int32_t* ____nread3_marshaled = &____nread3_empty;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>(___handle0.get_m_value_0()), ____record1_marshaled, ___length2, ____nread3_marshaled);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_t3889994513  _____record1_marshaled_unmarshaled_dereferenced;
	memset(&_____record1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_t3889994513_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_t3889994513_marshal_pinvoke_cleanup(*____record1_marshaled);

	// Marshaling of parameter '___nread3' back from native representation
	int32_t _____nread3_marshaled_unmarshaled_dereferenced = 0;
	_____nread3_marshaled_unmarshaled_dereferenced = *____nread3_marshaled;
	*___nread3 = _____nread3_marshaled_unmarshaled_dereferenced;;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
