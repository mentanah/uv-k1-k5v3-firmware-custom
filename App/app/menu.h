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
// MENU SYSTEM MODULE - Settings Navigation and Configuration
// ============================================================================
//
// RESPONSIBILITIES:
//   - Render menu items with current settings
//   - Handle menu navigation (up/down through items)
//   - Process submenu entry/exit for value editing
//   - Accept and save setting changes
//   - Validate input ranges
//   - Handle special menus (CSS scan, memory name edit, channel delete)
//
// DEPENDENCIES:
//   - ui/menu.h: UI_DisplayMenu(), menu rendering
//   - radio.h: VFO configuration functions
//   - settings.h: EEPROM save/load functions
//   - frequencies.h: Frequency validation
//   - driver/bk4819.h: Radio register access
//   - audio.h: Audio configuration
//   - driver/backlight.h: Backlight control
//   - misc.h: Global settings variables
//
// MENU STRUCTURE:
//   - MenuList[]: Array of menu item definitions
//   - Each item has: name, voice_id, menu_id, limits
//   - gMenuCursor: Current menu position
//   - gIsInSubMenu: Navigation level (menu or submenu)
//   - gSubMenuSelection: Currently edited value
//   - gInputBoxIndex: Digit input position in submenu
//
// KEY HANDLING (when gScreenToDisplay == DISPLAY_MENU):
//   0-9: Enter numeric value in submenu
//   UP/DOWN: Navigate menu / adjust values in submenu
//   MENU: Enter submenu or exit with save
//   EXIT: Cancel edit / go back to menu list
//   STAR: Start CSS tone scan (R_CTCS or R_DCS menus only)
//
// SPECIAL MENUS:
//   - MENU_MEM_NAME: Character-by-character name editor
//   - MENU_R_CTCS, MENU_R_DCS: CSS tone scan enabled
//   - MENU_RESET: Factory reset with double confirm
//   - MENU_DEL_CH: Delete channel with confirm
//   - MENU_MEM_CH: Select channel by number
//
// ============================================================================

#ifndef APP_MENU_H
#define APP_MENU_H

#include "driver/keyboard.h"

#ifdef ENABLE_F_CAL_MENU
    void writeXtalFreqCal(const int32_t value, const bool update_eeprom);
#endif

extern uint8_t gUnlockAllTxConfCnt;

int MENU_GetLimits(uint8_t menu_id, int32_t *pMin, int32_t *pMax);
void MENU_AcceptSetting(void);
void MENU_ShowCurrentSetting(void);
void MENU_StartCssScan(void);
void MENU_CssScanFound(void);
void MENU_StopCssScan(void);
void MENU_ProcessKeys(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld);

#endif

