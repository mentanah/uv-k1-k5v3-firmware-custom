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

#include <assert.h>
#include <string.h>

#include "app/chFrScanner.h"
#include "app/dtmf.h"
#ifdef ENABLE_FMRADIO
    #include "app/fm.h"
#endif
#include "driver/keyboard.h"
#include "misc.h"
#ifdef ENABLE_AIRCOPY
    #include "ui/aircopy.h"
#endif
#ifdef ENABLE_FMRADIO
    #include "ui/fmradio.h"
#endif
#include "ui/inputbox.h"
#include "ui/main.h"
#include "ui/menu.h"
#include "ui/scanner.h"
#include "ui/ui.h"
#include "../misc.h"

// ============================================================================
// DISPLAY STATE VARIABLES
// ============================================================================

/// Current display mode being rendered
GUI_DisplayType_t gScreenToDisplay;

/// Requested display mode (queued for next update)
GUI_DisplayType_t gRequestDisplayScreen = DISPLAY_INVALID;

/// Confirmation counter: 0=none, 1=first confirm, 2=second confirm
uint8_t           gAskForConfirmation;

/// Save changes dialog flag
bool              gAskToSave;

/// Delete confirmation dialog flag
bool              gAskToDelete;

// ============================================================================
// DISPLAY FUNCTION DISPATCH TABLE
// ============================================================================
// Maps display mode enums to rendering functions
// Used by GUI_DisplayScreen() to call the appropriate display renderer
// Each function is responsible for:
//   1. Clearing/initializing frame buffer
//   2. Rendering all UI elements
//   3. Calling ST7565_BlitFullScreen() to update LCD
//
// DEPENDENCIES:
//   - ui/main.h: UI_DisplayMain() - VFO frequency display
//   - ui/menu.h: UI_DisplayMenu() - Settings menu
//   - ui/scanner.h: UI_DisplayScanner() - Channel scanner
//   - ui/fmradio.h: UI_DisplayFM() - FM radio [ENABLE_FMRADIO]
//   - ui/aircopy.h: UI_DisplayAircopy() - Air copy [ENABLE_AIRCOPY]
// ============================================================================

void (*UI_DisplayFunctions[])(void) = {
    [DISPLAY_MAIN] = &UI_DisplayMain,
    [DISPLAY_MENU] = &UI_DisplayMenu,
    [DISPLAY_SCANNER] = &UI_DisplayScanner,
#ifdef ENABLE_FMRADIO
    [DISPLAY_FM] = &UI_DisplayFM,
#endif
#ifdef ENABLE_AIRCOPY
    [DISPLAY_AIRCOPY] = &UI_DisplayAircopy,
#endif
};

// Compile-time assertion: ensure table size matches enum count
static_assert(ARRAY_SIZE(UI_DisplayFunctions) == DISPLAY_N_ELEM);

// ============================================================================
// DISPLAY RENDERING DISPATCHER
// ============================================================================
// Called by APP_TimeSlice10ms() when gUpdateDisplay flag is set
// Renders the current display to LCD via frame buffer
//
// FLOW:
//   1. Check if valid display mode is selected
//   2. Call appropriate renderer from dispatch table
//   3. Renderer updates gFrameBuffer[][]
//   4. Renderer calls ST7565_BlitFullScreen() to push to LCD
// ============================================================================
void GUI_DisplayScreen(void)
{
    if (gScreenToDisplay != DISPLAY_INVALID)
    {
        UI_DisplayFunctions[gScreenToDisplay]();
    }
}

// ============================================================================
// DISPLAY MODE TRANSITION HANDLER
// ============================================================================
// Transitions between display modes with automatic state cleanup
//
// CALLED FROM:
//   - app/app.c: ProcessKey() - User navigation
//   - app/action.c: ACTION_FM(), ACTION_Monitor() - Feature activation
//   - main.c: BOOT_ProcessMode() - Boot mode selection
//   - Various ProcessKeys handlers - Navigation actions
//
// STATE CLEANUP SEQUENCE (executed only on display change):
//   1. Clear DTMF input box (gDTMF_InputBox, gDTMF_InputBox_Index)
//   2. Reset menu input state (gInputBoxIndex, gIsInSubMenu)
//   3. Stop active scans (gCssBackgroundScan, gScanStateDir, gFM_ScanState)
//   4. Clear dialogs (gAskForConfirmation, gAskToSave, gAskToDelete)
//   5. Reset special keys (gWasFKeyPressed)
//   6. Set update flags (gUpdateStatus, gUpdateDisplay)
//
// DEPENDENCIES (state management):
//   - dtmf.h: DTMF_clear_input_box()
//   - app/chFrScanner.h: CHFRSCANNER_Start(), CHFRSCANNER_Stop()
//   - app/scanner.h: SCANNER state variables
//   - app/fm.h: FM state variables [ENABLE_FMRADIO]
//   - misc.h: Global state variables
// ============================================================================
void GUI_SelectNextDisplay(GUI_DisplayType_t Display)
{
    if (Display == DISPLAY_INVALID)
        return;

    // Only cleanup state if actually changing displays
    if (gScreenToDisplay != Display)
    {
        // ====================================================================
        // CLEAR DTMF INPUT STATE
        // ====================================================================
        // Remove any pending DTMF characters from input box
        DTMF_clear_input_box();

        // ====================================================================
        // RESET MENU/FREQUENCY INPUT STATE
        // ====================================================================
        gInputBoxIndex       = 0;      // Clear frequency/channel entry
        gIsInSubMenu         = false;  // Exit submenu navigation
        
        // ====================================================================
        // STOP ALL ACTIVE SCANS
        // ====================================================================
        gCssBackgroundScan   = false;  // Stop CSS tone scan
        gScanStateDir        = SCAN_OFF; // Stop channel scan
        
#ifdef ENABLE_FMRADIO
        gFM_ScanState        = FM_SCAN_OFF; // Stop FM scan
#endif
        
        // ====================================================================
        // CLEAR CONFIRMATION DIALOGS
        // ====================================================================
        gAskForConfirmation  = 0;      // Clear confirm/delete prompts
        gAskToSave           = false;  // Clear save changes dialog
        gAskToDelete         = false;  // Clear delete confirmation
        
        // ====================================================================
        // RESET SPECIAL KEY STATES
        // ====================================================================
        gWasFKeyPressed      = false;  // Clear F-key state

        // Signal display refresh needed
        gUpdateStatus        = true;
    }

    // Update display mode and request full screen redraw
    gScreenToDisplay = Display;
    gUpdateDisplay   = true;
}
