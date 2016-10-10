#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseDialog
struct  PauseDialog_t3717064382  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GUIText PauseDialog::descriptionLabel
	GUIText_t3371372606 * ___descriptionLabel_2;
	// UnityEngine.GUIText PauseDialog::okButtonLabel
	GUIText_t3371372606 * ___okButtonLabel_3;
	// UnityEngine.GUIText PauseDialog::cancelButtonLabel
	GUIText_t3371372606 * ___cancelButtonLabel_4;

public:
	inline static int32_t get_offset_of_descriptionLabel_2() { return static_cast<int32_t>(offsetof(PauseDialog_t3717064382, ___descriptionLabel_2)); }
	inline GUIText_t3371372606 * get_descriptionLabel_2() const { return ___descriptionLabel_2; }
	inline GUIText_t3371372606 ** get_address_of_descriptionLabel_2() { return &___descriptionLabel_2; }
	inline void set_descriptionLabel_2(GUIText_t3371372606 * value)
	{
		___descriptionLabel_2 = value;
		Il2CppCodeGenWriteBarrier(&___descriptionLabel_2, value);
	}

	inline static int32_t get_offset_of_okButtonLabel_3() { return static_cast<int32_t>(offsetof(PauseDialog_t3717064382, ___okButtonLabel_3)); }
	inline GUIText_t3371372606 * get_okButtonLabel_3() const { return ___okButtonLabel_3; }
	inline GUIText_t3371372606 ** get_address_of_okButtonLabel_3() { return &___okButtonLabel_3; }
	inline void set_okButtonLabel_3(GUIText_t3371372606 * value)
	{
		___okButtonLabel_3 = value;
		Il2CppCodeGenWriteBarrier(&___okButtonLabel_3, value);
	}

	inline static int32_t get_offset_of_cancelButtonLabel_4() { return static_cast<int32_t>(offsetof(PauseDialog_t3717064382, ___cancelButtonLabel_4)); }
	inline GUIText_t3371372606 * get_cancelButtonLabel_4() const { return ___cancelButtonLabel_4; }
	inline GUIText_t3371372606 ** get_address_of_cancelButtonLabel_4() { return &___cancelButtonLabel_4; }
	inline void set_cancelButtonLabel_4(GUIText_t3371372606 * value)
	{
		___cancelButtonLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButtonLabel_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
