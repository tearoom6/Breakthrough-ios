#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_StateManager_State1294552734.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateManager
struct  StateManager_t1172840956  : public Il2CppObject
{
public:

public:
};

struct StateManager_t1172840956_StaticFields
{
public:
	// StateManager/State StateManager::state
	int32_t ___state_0;
	// System.Boolean StateManager::pause
	bool ___pause_1;
	// System.Action StateManager::<>f__am$cache2
	Action_t3771233898 * ___U3CU3Ef__amU24cache2_2;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StateManager_t1172840956_StaticFields, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_pause_1() { return static_cast<int32_t>(offsetof(StateManager_t1172840956_StaticFields, ___pause_1)); }
	inline bool get_pause_1() const { return ___pause_1; }
	inline bool* get_address_of_pause_1() { return &___pause_1; }
	inline void set_pause_1(bool value)
	{
		___pause_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(StateManager_t1172840956_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Action_t3771233898 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Action_t3771233898 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Action_t3771233898 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
