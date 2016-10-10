#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameController
struct GameController_t2782302542;
// PanelTouchInfo
struct PanelTouchInfo_t2644240137;
// TouchInfo
struct TouchInfo_t2367430765;
// System.String
struct String_t;
// Panel
struct Panel_t76880356;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.WWW
struct WWW_t3134621005;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PanelTouchInfo2644240137.h"
#include "AssemblyU2DCSharp_TouchInfo2367430765.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Panel76880356.h"
#include "UnityEngine_UnityEngine_WWW3134621005.h"

// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C"  void GameController_Start_m3115412493 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C"  void GameController_Update_m2094358944 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnGUI()
extern "C"  void GameController_OnGUI_m3663673351 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnPanelTouchDown(PanelTouchInfo)
extern "C"  void GameController_OnPanelTouchDown_m2151432138 (GameController_t2782302542 * __this, PanelTouchInfo_t2644240137 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnPanelTouching(PanelTouchInfo)
extern "C"  void GameController_OnPanelTouching_m2514941194 (GameController_t2782302542 * __this, PanelTouchInfo_t2644240137 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnPanelTouchUp(PanelTouchInfo)
extern "C"  void GameController_OnPanelTouchUp_m2011913155 (GameController_t2782302542 * __this, PanelTouchInfo_t2644240137 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnTouchDown(TouchInfo)
extern "C"  void GameController_OnTouchDown_m767484024 (GameController_t2782302542 * __this, TouchInfo_t2367430765 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnTouching(TouchInfo)
extern "C"  void GameController_OnTouching_m780558508 (GameController_t2782302542 * __this, TouchInfo_t2367430765 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::OnTouchUp(TouchInfo)
extern "C"  void GameController_OnTouchUp_m258666079 (GameController_t2782302542 * __this, TouchInfo_t2367430765 * ___touchInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::FlickAmbientColor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  void GameController_FlickAmbientColor_m343811011 (GameController_t2782302542 * __this, float ___time0, float ___flickPace1, float ___rValue2, float ___gValue3, float ___bValue4, float ___aValue5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ChangePanelColors(UnityEngine.Color)
extern "C"  void GameController_ChangePanelColors_m2817046295 (GameController_t2782302542 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::InitSeconds()
extern "C"  void GameController_InitSeconds_m901235770 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::InitPoint()
extern "C"  void GameController_InitPoint_m1603413387 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::AddPoint(System.Int32)
extern "C"  void GameController_AddPoint_m1874169751 (GameController_t2782302542 * __this, int32_t ___addPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::SaveRecord()
extern "C"  bool GameController_SaveRecord_m388024697 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameController::GetRecordPoint(System.String)
extern "C"  int32_t GameController_GetRecordPoint_m1981917780 (GameController_t2782302542 * __this, String_t* ___modeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameController::GetRecordStage(System.String)
extern "C"  int32_t GameController_GetRecordStage_m2694509350 (GameController_t2782302542 * __this, String_t* ___modeId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::RecordQuestCompleted()
extern "C"  void GameController_RecordQuestCompleted_m2532959313 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameController::IsQuestCompleted()
extern "C"  bool GameController_IsQuestCompleted_m3699584990 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SaveStage()
extern "C"  void GameController_SaveStage_m3772067436 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameController::GetSavedStage()
extern "C"  int32_t GameController_GetSavedStage_m338635722 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DeleteSaveStage()
extern "C"  void GameController_DeleteSaveStage_m2790252609 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SaveTutorialLevel(System.Int32)
extern "C"  void GameController_SaveTutorialLevel_m2277101189 (GameController_t2782302542 * __this, int32_t ___addLv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameController::GetTutorialLevel()
extern "C"  int32_t GameController_GetTutorialLevel_m1425823029 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameController::LoadUserKey()
extern "C"  String_t* GameController_LoadUserKey_m665155766 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SweepPanel(Panel)
extern "C"  void GameController_SweepPanel_m3601405471 (GameController_t2782302542 * __this, Panel_t76880356 * ___touchPanel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Toast(System.String,System.Single)
extern "C"  void GameController_Toast_m2534085269 (GameController_t2782302542 * __this, String_t* ___msg0, float ___displayTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplayGameInit()
extern "C"  void GameController_DisplayGameInit_m2461110703 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CloseGameInit()
extern "C"  void GameController_CloseGameInit_m741567973 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplayHelpBoard()
extern "C"  void GameController_DisplayHelpBoard_m2599161946 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplayRecordBoard()
extern "C"  void GameController_DisplayRecordBoard_m2585023562 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CloseSlideBoards()
extern "C"  void GameController_CloseSlideBoards_m1841088605 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplaySettingBoard()
extern "C"  void GameController_DisplaySettingBoard_m4156386563 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CloseSettingBoard()
extern "C"  void GameController_CloseSettingBoard_m132791865 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplayPauseDialog()
extern "C"  void GameController_DisplayPauseDialog_m1537976275 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ClosePauseDialog()
extern "C"  void GameController_ClosePauseDialog_m715446237 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DisplayConfirmQuitAppDialog()
extern "C"  void GameController_DisplayConfirmQuitAppDialog_m1077134311 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CloseConfirmQuitAppDialog()
extern "C"  void GameController_CloseConfirmQuitAppDialog_m2305752861 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::JudgeCurrectPanelTouch(Panel,System.Boolean)
extern "C"  void GameController_JudgeCurrectPanelTouch_m4071154830 (GameController_t2782302542 * __this, Panel_t76880356 * ___touchPanel0, bool ___isKeepingTouch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::InitilizeGame()
extern "C"  void GameController_InitilizeGame_m39229246 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::InitilizeStage()
extern "C"  void GameController_InitilizeStage_m3809206036 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::AsyncRecordBoard()
extern "C"  Il2CppObject * GameController_AsyncRecordBoard_m3315581592 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::CountTimeBonus(System.Boolean)
extern "C"  Il2CppObject * GameController_CountTimeBonus_m1613611417 (GameController_t2782302542 * __this, bool ___isCompleted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<OnTouchDown>m__0()
extern "C"  void GameController_U3COnTouchDownU3Em__0_m3495127238 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<OnTouchDown>m__1()
extern "C"  void GameController_U3COnTouchDownU3Em__1_m3495128199 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<SaveRecord>m__3(UnityEngine.WWW)
extern "C"  void GameController_U3CSaveRecordU3Em__3_m2967331489 (Il2CppObject * __this /* static, unused */, WWW_t3134621005 * ___www0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<Toast>m__4()
extern "C"  void GameController_U3CToastU3Em__4_m2720472037 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::<OnTouchDown>m__5()
extern "C"  void GameController_U3COnTouchDownU3Em__5_m3495132043 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
