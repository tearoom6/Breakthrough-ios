#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenManager
struct ScreenManager_t3015837057;
// TouchHandler
struct TouchHandler_t3514404651;
// StageManager
struct StageManager_t3194912495;
// PropertyManager
struct PropertyManager_t3594401784;
// NetworkManager
struct NetworkManager_t2424564159;
// LocalDataStore
struct LocalDataStore_t1293846604;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// StepJudgeInfo
struct StepJudgeInfo_t611062489;
// Panel
struct Panel_t76880356;
// UnityEngine.GUIText
struct GUIText_t3371372606;
// UnityEngine.GUISkin
struct GUISkin_t3371348110;
// System.String
struct String_t;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t3530437141;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_StateManager_State1294552734.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// ScreenManager GameController::screenManager
	ScreenManager_t3015837057 * ___screenManager_2;
	// TouchHandler GameController::touchHandler
	TouchHandler_t3514404651 * ___touchHandler_3;
	// StageManager GameController::stageManager
	StageManager_t3194912495 * ___stageManager_4;
	// PropertyManager GameController::propertyManager
	PropertyManager_t3594401784 * ___propertyManager_5;
	// NetworkManager GameController::networkManager
	NetworkManager_t2424564159 * ___networkManager_6;
	// LocalDataStore GameController::localDataStore
	LocalDataStore_t1293846604 * ___localDataStore_7;
	// UnityEngine.GameObject GameController::touchEffectPrefab
	GameObject_t3674682005 * ___touchEffectPrefab_8;
	// UnityEngine.GameObject GameController::twinkleEffectPrefab
	GameObject_t3674682005 * ___twinkleEffectPrefab_9;
	// UnityEngine.GameObject GameController::settingBoardPrefab
	GameObject_t3674682005 * ___settingBoardPrefab_10;
	// UnityEngine.GameObject GameController::pauseDialogPrefab
	GameObject_t3674682005 * ___pauseDialogPrefab_11;
	// UnityEngine.GameObject GameController::initIconsPrefab
	GameObject_t3674682005 * ___initIconsPrefab_12;
	// UnityEngine.GameObject GameController::simpleTextPrefab
	GameObject_t3674682005 * ___simpleTextPrefab_13;
	// UnityEngine.GameObject GameController::crownPrefab
	GameObject_t3674682005 * ___crownPrefab_14;
	// UnityEngine.GameObject GameController::customButtonPrefab
	GameObject_t3674682005 * ___customButtonPrefab_15;
	// UnityEngine.GameObject GameController::customLabelPrefab
	GameObject_t3674682005 * ___customLabelPrefab_16;
	// UnityEngine.GameObject GameController::customBgPanelPrefab
	GameObject_t3674682005 * ___customBgPanelPrefab_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::helpBoardPrefabs
	List_1_t747900261 * ___helpBoardPrefabs_18;
	// UnityEngine.GameObject GameController::slideBoards
	GameObject_t3674682005 * ___slideBoards_19;
	// UnityEngine.GameObject GameController::settingBoard
	GameObject_t3674682005 * ___settingBoard_20;
	// UnityEngine.GameObject GameController::tutorialBoard
	GameObject_t3674682005 * ___tutorialBoard_21;
	// UnityEngine.GameObject GameController::pauseDialog
	GameObject_t3674682005 * ___pauseDialog_22;
	// UnityEngine.GameObject GameController::quitAppConfirmDialog
	GameObject_t3674682005 * ___quitAppConfirmDialog_23;
	// UnityEngine.GameObject GameController::initIcons
	GameObject_t3674682005 * ___initIcons_24;
	// UnityEngine.GameObject GameController::infoText
	GameObject_t3674682005 * ___infoText_25;
	// UnityEngine.GameObject GameController::infoUrl
	GameObject_t3674682005 * ___infoUrl_26;
	// UnityEngine.GameObject GameController::selectMenu
	GameObject_t3674682005 * ___selectMenu_27;
	// UnityEngine.GameObject GameController::backButton
	GameObject_t3674682005 * ___backButton_28;
	// UnityEngine.GameObject GameController::autoButton
	GameObject_t3674682005 * ___autoButton_29;
	// UnityEngine.Color GameController::originalAmbientColor
	Color_t4194546905  ___originalAmbientColor_30;
	// StateManager/State GameController::stateOnTouchDown
	int32_t ___stateOnTouchDown_31;
	// System.Single GameController::secondsOnTouchDown
	float ___secondsOnTouchDown_32;
	// System.Int32 GameController::playingTutorialLv
	int32_t ___playingTutorialLv_33;
	// StepJudgeInfo GameController::stepJudgeInfo
	StepJudgeInfo_t611062489 * ___stepJudgeInfo_34;
	// Panel GameController::currentPanel
	Panel_t76880356 * ___currentPanel_35;
	// System.Int32 GameController::currentStepIndex
	int32_t ___currentStepIndex_36;
	// System.Int32 GameController::slideBoardPos
	int32_t ___slideBoardPos_37;
	// System.Int32 GameController::maxBoardPos
	int32_t ___maxBoardPos_38;
	// UnityEngine.GUIText GameController::message
	GUIText_t3371372606 * ___message_39;
	// UnityEngine.GUIText GameController::toast
	GUIText_t3371372606 * ___toast_40;
	// UnityEngine.GUIText GameController::pointText
	GUIText_t3371372606 * ___pointText_41;
	// UnityEngine.GUIText GameController::secondsText
	GUIText_t3371372606 * ___secondsText_42;
	// UnityEngine.GUISkin GameController::customGUISkin
	GUISkin_t3371348110 * ___customGUISkin_43;
	// System.Int32 GameController::point
	int32_t ___point_44;
	// System.Single GameController::seconds
	float ___seconds_45;
	// System.String GameController::nameFieldValue
	String_t* ___nameFieldValue_46;
	// System.String GameController::userKey
	String_t* ___userKey_47;

public:
	inline static int32_t get_offset_of_screenManager_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___screenManager_2)); }
	inline ScreenManager_t3015837057 * get_screenManager_2() const { return ___screenManager_2; }
	inline ScreenManager_t3015837057 ** get_address_of_screenManager_2() { return &___screenManager_2; }
	inline void set_screenManager_2(ScreenManager_t3015837057 * value)
	{
		___screenManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___screenManager_2, value);
	}

	inline static int32_t get_offset_of_touchHandler_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___touchHandler_3)); }
	inline TouchHandler_t3514404651 * get_touchHandler_3() const { return ___touchHandler_3; }
	inline TouchHandler_t3514404651 ** get_address_of_touchHandler_3() { return &___touchHandler_3; }
	inline void set_touchHandler_3(TouchHandler_t3514404651 * value)
	{
		___touchHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&___touchHandler_3, value);
	}

	inline static int32_t get_offset_of_stageManager_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___stageManager_4)); }
	inline StageManager_t3194912495 * get_stageManager_4() const { return ___stageManager_4; }
	inline StageManager_t3194912495 ** get_address_of_stageManager_4() { return &___stageManager_4; }
	inline void set_stageManager_4(StageManager_t3194912495 * value)
	{
		___stageManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___stageManager_4, value);
	}

	inline static int32_t get_offset_of_propertyManager_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___propertyManager_5)); }
	inline PropertyManager_t3594401784 * get_propertyManager_5() const { return ___propertyManager_5; }
	inline PropertyManager_t3594401784 ** get_address_of_propertyManager_5() { return &___propertyManager_5; }
	inline void set_propertyManager_5(PropertyManager_t3594401784 * value)
	{
		___propertyManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___propertyManager_5, value);
	}

	inline static int32_t get_offset_of_networkManager_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___networkManager_6)); }
	inline NetworkManager_t2424564159 * get_networkManager_6() const { return ___networkManager_6; }
	inline NetworkManager_t2424564159 ** get_address_of_networkManager_6() { return &___networkManager_6; }
	inline void set_networkManager_6(NetworkManager_t2424564159 * value)
	{
		___networkManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___networkManager_6, value);
	}

	inline static int32_t get_offset_of_localDataStore_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___localDataStore_7)); }
	inline LocalDataStore_t1293846604 * get_localDataStore_7() const { return ___localDataStore_7; }
	inline LocalDataStore_t1293846604 ** get_address_of_localDataStore_7() { return &___localDataStore_7; }
	inline void set_localDataStore_7(LocalDataStore_t1293846604 * value)
	{
		___localDataStore_7 = value;
		Il2CppCodeGenWriteBarrier(&___localDataStore_7, value);
	}

	inline static int32_t get_offset_of_touchEffectPrefab_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___touchEffectPrefab_8)); }
	inline GameObject_t3674682005 * get_touchEffectPrefab_8() const { return ___touchEffectPrefab_8; }
	inline GameObject_t3674682005 ** get_address_of_touchEffectPrefab_8() { return &___touchEffectPrefab_8; }
	inline void set_touchEffectPrefab_8(GameObject_t3674682005 * value)
	{
		___touchEffectPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchEffectPrefab_8, value);
	}

	inline static int32_t get_offset_of_twinkleEffectPrefab_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___twinkleEffectPrefab_9)); }
	inline GameObject_t3674682005 * get_twinkleEffectPrefab_9() const { return ___twinkleEffectPrefab_9; }
	inline GameObject_t3674682005 ** get_address_of_twinkleEffectPrefab_9() { return &___twinkleEffectPrefab_9; }
	inline void set_twinkleEffectPrefab_9(GameObject_t3674682005 * value)
	{
		___twinkleEffectPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___twinkleEffectPrefab_9, value);
	}

	inline static int32_t get_offset_of_settingBoardPrefab_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___settingBoardPrefab_10)); }
	inline GameObject_t3674682005 * get_settingBoardPrefab_10() const { return ___settingBoardPrefab_10; }
	inline GameObject_t3674682005 ** get_address_of_settingBoardPrefab_10() { return &___settingBoardPrefab_10; }
	inline void set_settingBoardPrefab_10(GameObject_t3674682005 * value)
	{
		___settingBoardPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___settingBoardPrefab_10, value);
	}

	inline static int32_t get_offset_of_pauseDialogPrefab_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___pauseDialogPrefab_11)); }
	inline GameObject_t3674682005 * get_pauseDialogPrefab_11() const { return ___pauseDialogPrefab_11; }
	inline GameObject_t3674682005 ** get_address_of_pauseDialogPrefab_11() { return &___pauseDialogPrefab_11; }
	inline void set_pauseDialogPrefab_11(GameObject_t3674682005 * value)
	{
		___pauseDialogPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___pauseDialogPrefab_11, value);
	}

	inline static int32_t get_offset_of_initIconsPrefab_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___initIconsPrefab_12)); }
	inline GameObject_t3674682005 * get_initIconsPrefab_12() const { return ___initIconsPrefab_12; }
	inline GameObject_t3674682005 ** get_address_of_initIconsPrefab_12() { return &___initIconsPrefab_12; }
	inline void set_initIconsPrefab_12(GameObject_t3674682005 * value)
	{
		___initIconsPrefab_12 = value;
		Il2CppCodeGenWriteBarrier(&___initIconsPrefab_12, value);
	}

	inline static int32_t get_offset_of_simpleTextPrefab_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___simpleTextPrefab_13)); }
	inline GameObject_t3674682005 * get_simpleTextPrefab_13() const { return ___simpleTextPrefab_13; }
	inline GameObject_t3674682005 ** get_address_of_simpleTextPrefab_13() { return &___simpleTextPrefab_13; }
	inline void set_simpleTextPrefab_13(GameObject_t3674682005 * value)
	{
		___simpleTextPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___simpleTextPrefab_13, value);
	}

	inline static int32_t get_offset_of_crownPrefab_14() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___crownPrefab_14)); }
	inline GameObject_t3674682005 * get_crownPrefab_14() const { return ___crownPrefab_14; }
	inline GameObject_t3674682005 ** get_address_of_crownPrefab_14() { return &___crownPrefab_14; }
	inline void set_crownPrefab_14(GameObject_t3674682005 * value)
	{
		___crownPrefab_14 = value;
		Il2CppCodeGenWriteBarrier(&___crownPrefab_14, value);
	}

	inline static int32_t get_offset_of_customButtonPrefab_15() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___customButtonPrefab_15)); }
	inline GameObject_t3674682005 * get_customButtonPrefab_15() const { return ___customButtonPrefab_15; }
	inline GameObject_t3674682005 ** get_address_of_customButtonPrefab_15() { return &___customButtonPrefab_15; }
	inline void set_customButtonPrefab_15(GameObject_t3674682005 * value)
	{
		___customButtonPrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&___customButtonPrefab_15, value);
	}

	inline static int32_t get_offset_of_customLabelPrefab_16() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___customLabelPrefab_16)); }
	inline GameObject_t3674682005 * get_customLabelPrefab_16() const { return ___customLabelPrefab_16; }
	inline GameObject_t3674682005 ** get_address_of_customLabelPrefab_16() { return &___customLabelPrefab_16; }
	inline void set_customLabelPrefab_16(GameObject_t3674682005 * value)
	{
		___customLabelPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&___customLabelPrefab_16, value);
	}

	inline static int32_t get_offset_of_customBgPanelPrefab_17() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___customBgPanelPrefab_17)); }
	inline GameObject_t3674682005 * get_customBgPanelPrefab_17() const { return ___customBgPanelPrefab_17; }
	inline GameObject_t3674682005 ** get_address_of_customBgPanelPrefab_17() { return &___customBgPanelPrefab_17; }
	inline void set_customBgPanelPrefab_17(GameObject_t3674682005 * value)
	{
		___customBgPanelPrefab_17 = value;
		Il2CppCodeGenWriteBarrier(&___customBgPanelPrefab_17, value);
	}

	inline static int32_t get_offset_of_helpBoardPrefabs_18() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___helpBoardPrefabs_18)); }
	inline List_1_t747900261 * get_helpBoardPrefabs_18() const { return ___helpBoardPrefabs_18; }
	inline List_1_t747900261 ** get_address_of_helpBoardPrefabs_18() { return &___helpBoardPrefabs_18; }
	inline void set_helpBoardPrefabs_18(List_1_t747900261 * value)
	{
		___helpBoardPrefabs_18 = value;
		Il2CppCodeGenWriteBarrier(&___helpBoardPrefabs_18, value);
	}

	inline static int32_t get_offset_of_slideBoards_19() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___slideBoards_19)); }
	inline GameObject_t3674682005 * get_slideBoards_19() const { return ___slideBoards_19; }
	inline GameObject_t3674682005 ** get_address_of_slideBoards_19() { return &___slideBoards_19; }
	inline void set_slideBoards_19(GameObject_t3674682005 * value)
	{
		___slideBoards_19 = value;
		Il2CppCodeGenWriteBarrier(&___slideBoards_19, value);
	}

	inline static int32_t get_offset_of_settingBoard_20() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___settingBoard_20)); }
	inline GameObject_t3674682005 * get_settingBoard_20() const { return ___settingBoard_20; }
	inline GameObject_t3674682005 ** get_address_of_settingBoard_20() { return &___settingBoard_20; }
	inline void set_settingBoard_20(GameObject_t3674682005 * value)
	{
		___settingBoard_20 = value;
		Il2CppCodeGenWriteBarrier(&___settingBoard_20, value);
	}

	inline static int32_t get_offset_of_tutorialBoard_21() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___tutorialBoard_21)); }
	inline GameObject_t3674682005 * get_tutorialBoard_21() const { return ___tutorialBoard_21; }
	inline GameObject_t3674682005 ** get_address_of_tutorialBoard_21() { return &___tutorialBoard_21; }
	inline void set_tutorialBoard_21(GameObject_t3674682005 * value)
	{
		___tutorialBoard_21 = value;
		Il2CppCodeGenWriteBarrier(&___tutorialBoard_21, value);
	}

	inline static int32_t get_offset_of_pauseDialog_22() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___pauseDialog_22)); }
	inline GameObject_t3674682005 * get_pauseDialog_22() const { return ___pauseDialog_22; }
	inline GameObject_t3674682005 ** get_address_of_pauseDialog_22() { return &___pauseDialog_22; }
	inline void set_pauseDialog_22(GameObject_t3674682005 * value)
	{
		___pauseDialog_22 = value;
		Il2CppCodeGenWriteBarrier(&___pauseDialog_22, value);
	}

	inline static int32_t get_offset_of_quitAppConfirmDialog_23() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___quitAppConfirmDialog_23)); }
	inline GameObject_t3674682005 * get_quitAppConfirmDialog_23() const { return ___quitAppConfirmDialog_23; }
	inline GameObject_t3674682005 ** get_address_of_quitAppConfirmDialog_23() { return &___quitAppConfirmDialog_23; }
	inline void set_quitAppConfirmDialog_23(GameObject_t3674682005 * value)
	{
		___quitAppConfirmDialog_23 = value;
		Il2CppCodeGenWriteBarrier(&___quitAppConfirmDialog_23, value);
	}

	inline static int32_t get_offset_of_initIcons_24() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___initIcons_24)); }
	inline GameObject_t3674682005 * get_initIcons_24() const { return ___initIcons_24; }
	inline GameObject_t3674682005 ** get_address_of_initIcons_24() { return &___initIcons_24; }
	inline void set_initIcons_24(GameObject_t3674682005 * value)
	{
		___initIcons_24 = value;
		Il2CppCodeGenWriteBarrier(&___initIcons_24, value);
	}

	inline static int32_t get_offset_of_infoText_25() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___infoText_25)); }
	inline GameObject_t3674682005 * get_infoText_25() const { return ___infoText_25; }
	inline GameObject_t3674682005 ** get_address_of_infoText_25() { return &___infoText_25; }
	inline void set_infoText_25(GameObject_t3674682005 * value)
	{
		___infoText_25 = value;
		Il2CppCodeGenWriteBarrier(&___infoText_25, value);
	}

	inline static int32_t get_offset_of_infoUrl_26() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___infoUrl_26)); }
	inline GameObject_t3674682005 * get_infoUrl_26() const { return ___infoUrl_26; }
	inline GameObject_t3674682005 ** get_address_of_infoUrl_26() { return &___infoUrl_26; }
	inline void set_infoUrl_26(GameObject_t3674682005 * value)
	{
		___infoUrl_26 = value;
		Il2CppCodeGenWriteBarrier(&___infoUrl_26, value);
	}

	inline static int32_t get_offset_of_selectMenu_27() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___selectMenu_27)); }
	inline GameObject_t3674682005 * get_selectMenu_27() const { return ___selectMenu_27; }
	inline GameObject_t3674682005 ** get_address_of_selectMenu_27() { return &___selectMenu_27; }
	inline void set_selectMenu_27(GameObject_t3674682005 * value)
	{
		___selectMenu_27 = value;
		Il2CppCodeGenWriteBarrier(&___selectMenu_27, value);
	}

	inline static int32_t get_offset_of_backButton_28() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___backButton_28)); }
	inline GameObject_t3674682005 * get_backButton_28() const { return ___backButton_28; }
	inline GameObject_t3674682005 ** get_address_of_backButton_28() { return &___backButton_28; }
	inline void set_backButton_28(GameObject_t3674682005 * value)
	{
		___backButton_28 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_28, value);
	}

	inline static int32_t get_offset_of_autoButton_29() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___autoButton_29)); }
	inline GameObject_t3674682005 * get_autoButton_29() const { return ___autoButton_29; }
	inline GameObject_t3674682005 ** get_address_of_autoButton_29() { return &___autoButton_29; }
	inline void set_autoButton_29(GameObject_t3674682005 * value)
	{
		___autoButton_29 = value;
		Il2CppCodeGenWriteBarrier(&___autoButton_29, value);
	}

	inline static int32_t get_offset_of_originalAmbientColor_30() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___originalAmbientColor_30)); }
	inline Color_t4194546905  get_originalAmbientColor_30() const { return ___originalAmbientColor_30; }
	inline Color_t4194546905 * get_address_of_originalAmbientColor_30() { return &___originalAmbientColor_30; }
	inline void set_originalAmbientColor_30(Color_t4194546905  value)
	{
		___originalAmbientColor_30 = value;
	}

	inline static int32_t get_offset_of_stateOnTouchDown_31() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___stateOnTouchDown_31)); }
	inline int32_t get_stateOnTouchDown_31() const { return ___stateOnTouchDown_31; }
	inline int32_t* get_address_of_stateOnTouchDown_31() { return &___stateOnTouchDown_31; }
	inline void set_stateOnTouchDown_31(int32_t value)
	{
		___stateOnTouchDown_31 = value;
	}

	inline static int32_t get_offset_of_secondsOnTouchDown_32() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___secondsOnTouchDown_32)); }
	inline float get_secondsOnTouchDown_32() const { return ___secondsOnTouchDown_32; }
	inline float* get_address_of_secondsOnTouchDown_32() { return &___secondsOnTouchDown_32; }
	inline void set_secondsOnTouchDown_32(float value)
	{
		___secondsOnTouchDown_32 = value;
	}

	inline static int32_t get_offset_of_playingTutorialLv_33() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___playingTutorialLv_33)); }
	inline int32_t get_playingTutorialLv_33() const { return ___playingTutorialLv_33; }
	inline int32_t* get_address_of_playingTutorialLv_33() { return &___playingTutorialLv_33; }
	inline void set_playingTutorialLv_33(int32_t value)
	{
		___playingTutorialLv_33 = value;
	}

	inline static int32_t get_offset_of_stepJudgeInfo_34() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___stepJudgeInfo_34)); }
	inline StepJudgeInfo_t611062489 * get_stepJudgeInfo_34() const { return ___stepJudgeInfo_34; }
	inline StepJudgeInfo_t611062489 ** get_address_of_stepJudgeInfo_34() { return &___stepJudgeInfo_34; }
	inline void set_stepJudgeInfo_34(StepJudgeInfo_t611062489 * value)
	{
		___stepJudgeInfo_34 = value;
		Il2CppCodeGenWriteBarrier(&___stepJudgeInfo_34, value);
	}

	inline static int32_t get_offset_of_currentPanel_35() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___currentPanel_35)); }
	inline Panel_t76880356 * get_currentPanel_35() const { return ___currentPanel_35; }
	inline Panel_t76880356 ** get_address_of_currentPanel_35() { return &___currentPanel_35; }
	inline void set_currentPanel_35(Panel_t76880356 * value)
	{
		___currentPanel_35 = value;
		Il2CppCodeGenWriteBarrier(&___currentPanel_35, value);
	}

	inline static int32_t get_offset_of_currentStepIndex_36() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___currentStepIndex_36)); }
	inline int32_t get_currentStepIndex_36() const { return ___currentStepIndex_36; }
	inline int32_t* get_address_of_currentStepIndex_36() { return &___currentStepIndex_36; }
	inline void set_currentStepIndex_36(int32_t value)
	{
		___currentStepIndex_36 = value;
	}

	inline static int32_t get_offset_of_slideBoardPos_37() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___slideBoardPos_37)); }
	inline int32_t get_slideBoardPos_37() const { return ___slideBoardPos_37; }
	inline int32_t* get_address_of_slideBoardPos_37() { return &___slideBoardPos_37; }
	inline void set_slideBoardPos_37(int32_t value)
	{
		___slideBoardPos_37 = value;
	}

	inline static int32_t get_offset_of_maxBoardPos_38() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___maxBoardPos_38)); }
	inline int32_t get_maxBoardPos_38() const { return ___maxBoardPos_38; }
	inline int32_t* get_address_of_maxBoardPos_38() { return &___maxBoardPos_38; }
	inline void set_maxBoardPos_38(int32_t value)
	{
		___maxBoardPos_38 = value;
	}

	inline static int32_t get_offset_of_message_39() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___message_39)); }
	inline GUIText_t3371372606 * get_message_39() const { return ___message_39; }
	inline GUIText_t3371372606 ** get_address_of_message_39() { return &___message_39; }
	inline void set_message_39(GUIText_t3371372606 * value)
	{
		___message_39 = value;
		Il2CppCodeGenWriteBarrier(&___message_39, value);
	}

	inline static int32_t get_offset_of_toast_40() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___toast_40)); }
	inline GUIText_t3371372606 * get_toast_40() const { return ___toast_40; }
	inline GUIText_t3371372606 ** get_address_of_toast_40() { return &___toast_40; }
	inline void set_toast_40(GUIText_t3371372606 * value)
	{
		___toast_40 = value;
		Il2CppCodeGenWriteBarrier(&___toast_40, value);
	}

	inline static int32_t get_offset_of_pointText_41() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___pointText_41)); }
	inline GUIText_t3371372606 * get_pointText_41() const { return ___pointText_41; }
	inline GUIText_t3371372606 ** get_address_of_pointText_41() { return &___pointText_41; }
	inline void set_pointText_41(GUIText_t3371372606 * value)
	{
		___pointText_41 = value;
		Il2CppCodeGenWriteBarrier(&___pointText_41, value);
	}

	inline static int32_t get_offset_of_secondsText_42() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___secondsText_42)); }
	inline GUIText_t3371372606 * get_secondsText_42() const { return ___secondsText_42; }
	inline GUIText_t3371372606 ** get_address_of_secondsText_42() { return &___secondsText_42; }
	inline void set_secondsText_42(GUIText_t3371372606 * value)
	{
		___secondsText_42 = value;
		Il2CppCodeGenWriteBarrier(&___secondsText_42, value);
	}

	inline static int32_t get_offset_of_customGUISkin_43() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___customGUISkin_43)); }
	inline GUISkin_t3371348110 * get_customGUISkin_43() const { return ___customGUISkin_43; }
	inline GUISkin_t3371348110 ** get_address_of_customGUISkin_43() { return &___customGUISkin_43; }
	inline void set_customGUISkin_43(GUISkin_t3371348110 * value)
	{
		___customGUISkin_43 = value;
		Il2CppCodeGenWriteBarrier(&___customGUISkin_43, value);
	}

	inline static int32_t get_offset_of_point_44() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___point_44)); }
	inline int32_t get_point_44() const { return ___point_44; }
	inline int32_t* get_address_of_point_44() { return &___point_44; }
	inline void set_point_44(int32_t value)
	{
		___point_44 = value;
	}

	inline static int32_t get_offset_of_seconds_45() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___seconds_45)); }
	inline float get_seconds_45() const { return ___seconds_45; }
	inline float* get_address_of_seconds_45() { return &___seconds_45; }
	inline void set_seconds_45(float value)
	{
		___seconds_45 = value;
	}

	inline static int32_t get_offset_of_nameFieldValue_46() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___nameFieldValue_46)); }
	inline String_t* get_nameFieldValue_46() const { return ___nameFieldValue_46; }
	inline String_t** get_address_of_nameFieldValue_46() { return &___nameFieldValue_46; }
	inline void set_nameFieldValue_46(String_t* value)
	{
		___nameFieldValue_46 = value;
		Il2CppCodeGenWriteBarrier(&___nameFieldValue_46, value);
	}

	inline static int32_t get_offset_of_userKey_47() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___userKey_47)); }
	inline String_t* get_userKey_47() const { return ___userKey_47; }
	inline String_t** get_address_of_userKey_47() { return &___userKey_47; }
	inline void set_userKey_47(String_t* value)
	{
		___userKey_47 = value;
		Il2CppCodeGenWriteBarrier(&___userKey_47, value);
	}
};

struct GameController_t2782302542_StaticFields
{
public:
	// System.Action`1<UnityEngine.WWW> GameController::<>f__am$cache2E
	Action_1_t3530437141 * ___U3CU3Ef__amU24cache2E_48;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2E_48() { return static_cast<int32_t>(offsetof(GameController_t2782302542_StaticFields, ___U3CU3Ef__amU24cache2E_48)); }
	inline Action_1_t3530437141 * get_U3CU3Ef__amU24cache2E_48() const { return ___U3CU3Ef__amU24cache2E_48; }
	inline Action_1_t3530437141 ** get_address_of_U3CU3Ef__amU24cache2E_48() { return &___U3CU3Ef__amU24cache2E_48; }
	inline void set_U3CU3Ef__amU24cache2E_48(Action_1_t3530437141 * value)
	{
		___U3CU3Ef__amU24cache2E_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2E_48, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
