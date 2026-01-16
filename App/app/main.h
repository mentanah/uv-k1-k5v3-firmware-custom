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
// MAIN DISPLAY KEY HANDLER MODULE - Numeric Keys, EXIT, MENU, *
// ============================================================================
//
// RESPONSIBILITIES:
//   - Handle numeric key presses (0-9) for channel/frequency entry
//   - Process EXIT key for input cancellation / scanner stop
//   - Process MENU key for entering settings menu
//   - Process * key for DTMF input and CSS scanning
//   - Process UP/DOWN keys for channel/frequency stepping
//
// KEY BINDINGS (when gScreenToDisplay == DISPLAY_MAIN):
//   0-9: Channel/frequency digit entry (held=F-key functions)
//   UP/DOWN: Step frequency or change channel
//   MENU: Enter settings menu
//   EXIT: Cancel input / exit scanner
//   STAR: Enter DTMF input / CSS tone scan
//   F: Enable F-key functions (combined with other keys)
//   PTT: Push-to-talk (transmit)
//
// DEPENDENCIES:
//   - driver/keyboard.h: KEY_Code_t enum
//   - radio.h: RADIO functions, VFO_Info_t
//   - ui/inputbox.h: INPUTBOX_Append(), frequency input handling
//   - ui/ui.h: GUI_SelectNextDisplay()
//   - app/scanner.h: CHFRSCANNER_Start/Stop
//   - app/action.h: ACTION_Handle(), processFKeyFunction()
//   - frequencies.h: Frequency validation and stepping
//   - dtmf.h: DTMF input handling
//   - settings.h: VFO/channel save operations
//   - misc.h: Global state variables
//
// KEY HANDLING FLOW:
//   1. Numeric keys (0-9):
//      - Short press: Add digit to frequency/channel entry
//      - Held (F-key): Execute F-key function (F1-F9)
//   2. UP/DOWN keys:
//      - In frequency mode: Step frequency by current step size
//      - In channel mode: Jump to next valid channel
//      - With input active: Ignored (beep only)
//   3. MENU key:
//      - Released: Enter settings menu or exit submenu
//      - Long held: Execute F-key menu action
//   4. EXIT key:
//      - Short press: Delete last input digit / stop scanner
//      - Long held: Clear all input / exit menu
//   5. STAR key:
//      - Short press: Start DTMF input mode
//      - Long held: Start CSS tone scan (with F-key)
//
// ============================================================================

#ifndef APP_MAIN_H
#define APP_MAIN_H

#include "driver/keyboard.h"

void MAIN_ProcessKeys(KEY_Code_t Key, bool bKeyPressed, bool bKeyHeld);
void channelMoveSwitch(void);

#endif

