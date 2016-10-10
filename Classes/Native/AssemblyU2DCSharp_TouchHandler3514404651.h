#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StageManager
struct StageManager_t3194912495;
// System.Collections.Generic.List`1<PanelTouchListener>
struct List_1_t2804251743;
// System.Collections.Generic.List`1<TouchListener>
struct List_1_t4284638147;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchHandler
struct  TouchHandler_t3514404651  : public MonoBehaviour_t667441552
{
public:
	// StageManager TouchHandler::stageManager
	StageManager_t3194912495 * ___stageManager_2;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchDownListeners
	List_1_t2804251743 * ___panelTouchDownListeners_3;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchingListeners
	List_1_t2804251743 * ___panelTouchingListeners_4;
	// System.Collections.Generic.List`1<PanelTouchListener> TouchHandler::panelTouchUpListeners
	List_1_t2804251743 * ___panelTouchUpListeners_5;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchDownListeners
	List_1_t4284638147 * ___touchDownListeners_6;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchingListeners
	List_1_t4284638147 * ___touchingListeners_7;
	// System.Collections.Generic.List`1<TouchListener> TouchHandler::touchUpListeners
	List_1_t4284638147 * ___touchUpListeners_8;
	// System.Boolean TouchHandler::isTouching
	bool ___isTouching_9;
	// System.Boolean TouchHandler::isFirstTouch
	bool ___isFirstTouch_10;
	// UnityEngine.Vector3 TouchHandler::touchOrigin
	Vector3_t4282066566  ___touchOrigin_11;
	// UnityEngine.Vector3 TouchHandler::touchOriginViewport
	Vector3_t4282066566  ___touchOriginViewport_12;

public:
	inline static int32_t get_offset_of_stageManager_2() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___stageManager_2)); }
	inline StageManager_t3194912495 * get_stageManager_2() const { return ___stageManager_2; }
	inline StageManager_t3194912495 ** get_address_of_stageManager_2() { return &___stageManager_2; }
	inline void set_stageManager_2(StageManager_t3194912495 * value)
	{
		___stageManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___stageManager_2, value);
	}

	inline static int32_t get_offset_of_panelTouchDownListeners_3() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___panelTouchDownListeners_3)); }
	inline List_1_t2804251743 * get_panelTouchDownListeners_3() const { return ___panelTouchDownListeners_3; }
	inline List_1_t2804251743 ** get_address_of_panelTouchDownListeners_3() { return &___panelTouchDownListeners_3; }
	inline void set_panelTouchDownListeners_3(List_1_t2804251743 * value)
	{
		___panelTouchDownListeners_3 = value;
		Il2CppCodeGenWriteBarrier(&___panelTouchDownListeners_3, value);
	}

	inline static int32_t get_offset_of_panelTouchingListeners_4() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___panelTouchingListeners_4)); }
	inline List_1_t2804251743 * get_panelTouchingListeners_4() const { return ___panelTouchingListeners_4; }
	inline List_1_t2804251743 ** get_address_of_panelTouchingListeners_4() { return &___panelTouchingListeners_4; }
	inline void set_panelTouchingListeners_4(List_1_t2804251743 * value)
	{
		___panelTouchingListeners_4 = value;
		Il2CppCodeGenWriteBarrier(&___panelTouchingListeners_4, value);
	}

	inline static int32_t get_offset_of_panelTouchUpListeners_5() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___panelTouchUpListeners_5)); }
	inline List_1_t2804251743 * get_panelTouchUpListeners_5() const { return ___panelTouchUpListeners_5; }
	inline List_1_t2804251743 ** get_address_of_panelTouchUpListeners_5() { return &___panelTouchUpListeners_5; }
	inline void set_panelTouchUpListeners_5(List_1_t2804251743 * value)
	{
		___panelTouchUpListeners_5 = value;
		Il2CppCodeGenWriteBarrier(&___panelTouchUpListeners_5, value);
	}

	inline static int32_t get_offset_of_touchDownListeners_6() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___touchDownListeners_6)); }
	inline List_1_t4284638147 * get_touchDownListeners_6() const { return ___touchDownListeners_6; }
	inline List_1_t4284638147 ** get_address_of_touchDownListeners_6() { return &___touchDownListeners_6; }
	inline void set_touchDownListeners_6(List_1_t4284638147 * value)
	{
		___touchDownListeners_6 = value;
		Il2CppCodeGenWriteBarrier(&___touchDownListeners_6, value);
	}

	inline static int32_t get_offset_of_touchingListeners_7() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___touchingListeners_7)); }
	inline List_1_t4284638147 * get_touchingListeners_7() const { return ___touchingListeners_7; }
	inline List_1_t4284638147 ** get_address_of_touchingListeners_7() { return &___touchingListeners_7; }
	inline void set_touchingListeners_7(List_1_t4284638147 * value)
	{
		___touchingListeners_7 = value;
		Il2CppCodeGenWriteBarrier(&___touchingListeners_7, value);
	}

	inline static int32_t get_offset_of_touchUpListeners_8() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___touchUpListeners_8)); }
	inline List_1_t4284638147 * get_touchUpListeners_8() const { return ___touchUpListeners_8; }
	inline List_1_t4284638147 ** get_address_of_touchUpListeners_8() { return &___touchUpListeners_8; }
	inline void set_touchUpListeners_8(List_1_t4284638147 * value)
	{
		___touchUpListeners_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchUpListeners_8, value);
	}

	inline static int32_t get_offset_of_isTouching_9() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___isTouching_9)); }
	inline bool get_isTouching_9() const { return ___isTouching_9; }
	inline bool* get_address_of_isTouching_9() { return &___isTouching_9; }
	inline void set_isTouching_9(bool value)
	{
		___isTouching_9 = value;
	}

	inline static int32_t get_offset_of_isFirstTouch_10() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___isFirstTouch_10)); }
	inline bool get_isFirstTouch_10() const { return ___isFirstTouch_10; }
	inline bool* get_address_of_isFirstTouch_10() { return &___isFirstTouch_10; }
	inline void set_isFirstTouch_10(bool value)
	{
		___isFirstTouch_10 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_11() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___touchOrigin_11)); }
	inline Vector3_t4282066566  get_touchOrigin_11() const { return ___touchOrigin_11; }
	inline Vector3_t4282066566 * get_address_of_touchOrigin_11() { return &___touchOrigin_11; }
	inline void set_touchOrigin_11(Vector3_t4282066566  value)
	{
		___touchOrigin_11 = value;
	}

	inline static int32_t get_offset_of_touchOriginViewport_12() { return static_cast<int32_t>(offsetof(TouchHandler_t3514404651, ___touchOriginViewport_12)); }
	inline Vector3_t4282066566  get_touchOriginViewport_12() const { return ___touchOriginViewport_12; }
	inline Vector3_t4282066566 * get_address_of_touchOriginViewport_12() { return &___touchOriginViewport_12; }
	inline void set_touchOriginViewport_12(Vector3_t4282066566  value)
	{
		___touchOriginViewport_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
