/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

// ============================================================================
// ACTION/BUTTON HANDLER MODULE - Side Button and F-Key Actions
// ============================================================================
//
// RESPONSIBILITIES:
//   - Process side button (SIDE1, SIDE2) key presses
//   - Execute configured F-key functions
//   - Dispatch to feature-specific action handlers
//   - Manage power level, monitor, scan, VOX, FM radio, alarm, etc.
//
// DEPENDENCIES:
//   - driver/keyboard.h: KEY_Code_t enum
//   - app/fm.h: FM radio control [ENABLE_FMRADIO]
//   - app/common.h: COMMON_SwitchVFOs(), COMMON_SwitchVFOMode()
//   - app/flashlight.h: ACTION_FlashLight() [ENABLE_FLASHLIGHT]
//   - app/scanner.h: Scanner control
//   - driver/backlight.h: Backlight control
//   - audio.h: Audio and beep control
//
// BUTTON CONFIGURATION:
//   - SIDE1: gEeprom.KEY_1_SHORT_PRESS_ACTION, gEeprom.KEY_1_LONG_PRESS_ACTION
//   - SIDE2: gEeprom.KEY_2_SHORT_PRESS_ACTION, gEeprom.KEY_2_LONG_PRESS_ACTION
//   - MENU: gEeprom.KEY_M_LONG_PRESS_ACTION (long press only)
//
// ACTION FUNCTION TABLE:
//   - action_opt_table[]: Maps ACTION_OPT_t enum to function pointers
//   - Dispatched from ProcessKey() in app.c when side buttons pressed
//   - Each action updates radio state and requests display/status update
//
// ============================================================================

#ifndef APP_ACTION_H
#define APP_ACTION_H

#include "driver/keyboard.h"

// ============================================================================
// ACTION HANDLER FUNCTIONS
// ============================================================================

// Standard actions
void ACTION_Power(void);        ///< Cycle TX power level (L1->L2->...->H->L1)
void ACTION_Monitor(void);      ///< Enable/disable monitor (squelch override)
void ACTION_Scan(bool bRestart); ///< Start/stop channel scanning

#ifdef ENABLE_VOX
void ACTION_Vox(void);          ///< Toggle voice activation
#endif

#ifdef ENABLE_FMRADIO
void ACTION_FM(void);           ///< Enter/exit FM radio mode
#endif

void ACTION_SwitchDemodul(void); ///< Cycle modulation (FM->AM->USB->...)

#ifdef ENABLE_BLMIN_TMP_OFF
void ACTION_BlminTmpOff(void);  ///< Temporary backlight off
#endif

// F4HWN custom actions
#ifdef ENABLE_FEAT_F4HWN
void ACTION_RxMode(void);        ///< Toggle dual-watch / crossband modes
void ACTION_MainOnly(void);      ///< Toggle single/dual VFO display
void ACTION_Ptt(void);           ///< Toggle PTT mode (session/one-push)
void ACTION_Wn(void);            ///< Toggle bandwidth (wide/narrow)
void ACTION_BackLightOnDemand(void); ///< Backlight on-demand control
void ACTION_BackLight(void);     ///< Restore backlight settings
void ACTION_Mute(void);          ///< Toggle mute
#endif

// Main action dispatcher
void ACTION_Handle(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld);

#endif
