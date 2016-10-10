#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Panel>
struct List_1_t1445065908;
// Mode
struct Mode_t2403779;
// ScreenManager
struct ScreenManager_t3015837057;
// PropertyManager
struct PropertyManager_t3594401784;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// StageDialog
struct StageDialog_t1237884358;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager
struct  StageManager_t3194912495  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<Panel> StageManager::panels
	List_1_t1445065908 * ___panels_2;
	// Mode StageManager::mode
	Mode_t2403779 * ___mode_3;
	// ScreenManager StageManager::screenManager
	ScreenManager_t3015837057 * ___screenManager_4;
	// PropertyManager StageManager::propertyManager
	PropertyManager_t3594401784 * ___propertyManager_5;
	// UnityEngine.GameObject StageManager::panelPrefab
	GameObject_t3674682005 * ___panelPrefab_6;
	// UnityEngine.GameObject StageManager::stageDialogPrefab
	GameObject_t3674682005 * ___stageDialogPrefab_7;
	// StageDialog StageManager::stageDialog
	StageDialog_t1237884358 * ___stageDialog_8;

public:
	inline static int32_t get_offset_of_panels_2() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___panels_2)); }
	inline List_1_t1445065908 * get_panels_2() const { return ___panels_2; }
	inline List_1_t1445065908 ** get_address_of_panels_2() { return &___panels_2; }
	inline void set_panels_2(List_1_t1445065908 * value)
	{
		___panels_2 = value;
		Il2CppCodeGenWriteBarrier(&___panels_2, value);
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___mode_3)); }
	inline Mode_t2403779 * get_mode_3() const { return ___mode_3; }
	inline Mode_t2403779 ** get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(Mode_t2403779 * value)
	{
		___mode_3 = value;
		Il2CppCodeGenWriteBarrier(&___mode_3, value);
	}

	inline static int32_t get_offset_of_screenManager_4() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___screenManager_4)); }
	inline ScreenManager_t3015837057 * get_screenManager_4() const { return ___screenManager_4; }
	inline ScreenManager_t3015837057 ** get_address_of_screenManager_4() { return &___screenManager_4; }
	inline void set_screenManager_4(ScreenManager_t3015837057 * value)
	{
		___screenManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___screenManager_4, value);
	}

	inline static int32_t get_offset_of_propertyManager_5() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___propertyManager_5)); }
	inline PropertyManager_t3594401784 * get_propertyManager_5() const { return ___propertyManager_5; }
	inline PropertyManager_t3594401784 ** get_address_of_propertyManager_5() { return &___propertyManager_5; }
	inline void set_propertyManager_5(PropertyManager_t3594401784 * value)
	{
		___propertyManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___propertyManager_5, value);
	}

	inline static int32_t get_offset_of_panelPrefab_6() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___panelPrefab_6)); }
	inline GameObject_t3674682005 * get_panelPrefab_6() const { return ___panelPrefab_6; }
	inline GameObject_t3674682005 ** get_address_of_panelPrefab_6() { return &___panelPrefab_6; }
	inline void set_panelPrefab_6(GameObject_t3674682005 * value)
	{
		___panelPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___panelPrefab_6, value);
	}

	inline static int32_t get_offset_of_stageDialogPrefab_7() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___stageDialogPrefab_7)); }
	inline GameObject_t3674682005 * get_stageDialogPrefab_7() const { return ___stageDialogPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of_stageDialogPrefab_7() { return &___stageDialogPrefab_7; }
	inline void set_stageDialogPrefab_7(GameObject_t3674682005 * value)
	{
		___stageDialogPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___stageDialogPrefab_7, value);
	}

	inline static int32_t get_offset_of_stageDialog_8() { return static_cast<int32_t>(offsetof(StageManager_t3194912495, ___stageDialog_8)); }
	inline StageDialog_t1237884358 * get_stageDialog_8() const { return ___stageDialog_8; }
	inline StageDialog_t1237884358 ** get_address_of_stageDialog_8() { return &___stageDialog_8; }
	inline void set_stageDialog_8(StageDialog_t1237884358 * value)
	{
		___stageDialog_8 = value;
		Il2CppCodeGenWriteBarrier(&___stageDialog_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
