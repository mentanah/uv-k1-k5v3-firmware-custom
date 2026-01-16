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
// DISPLAY FUNCTION TABLE
// ============================================================================

/**
 * @brief Function pointer table mapping display types to rendering functions
 * Allows dynamic dispatch of display rendering based on current mode
 */
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
// DISPLAY RENDERING
// ============================================================================

/**
 * @brief Render the currently selected display mode to LCD
 * 
 * Dispatches to the appropriate display function based on gScreenToDisplay
 * Does nothing if gScreenToDisplay is DISPLAY_INVALID
 */
void GUI_DisplayScreen(void)
{
    // Only render if a valid display mode is selected
    if (gScreenToDisplay != DISPLAY_INVALID)
    {
        UI_DisplayFunctions[gScreenToDisplay]();
    }
}

/**
 * @brief Request a display mode change with automatic state cleanup
 * @param Display Target display mode to transition to
 * 
 * Prevents duplicate updates by checking if display is already active.
 * Clears all transient UI state to prevent state leakage between displays:
 * - Input box data (menu/frequency entry)
 * - Menu navigation state
 * - Scanning state
 * - DTMF state
 * - Confirmation dialogs
 * 
 * Batches state changes before triggering display update to minimize
 * flickering and ensure consistent rendering.
 */
void GUI_SelectNextDisplay(GUI_DisplayType_t Display)
{
    // Reject invalid display requests
    if (Display == DISPLAY_INVALID)
        return;

    // Only perform state cleanup if switching to a different display
    if (gScreenToDisplay != Display)
    {
        // Clear DTMF input box
        DTMF_clear_input_box();

        // ============================================================
        // RESET TRANSIENT UI STATE
        // ============================================================
        
        // Clear menu/frequency input state
        gInputBoxIndex       = 0;
        
        // Exit submenu navigation
        gIsInSubMenu         = false;
        
        // Stop any active scans (CSS tone scanning)
        gCssBackgroundScan   = false;
        gScanStateDir        = SCAN_OFF;
        
#ifdef ENABLE_FMRADIO
        // Reset FM radio scanning state
        gFM_ScanState        = FM_SCAN_OFF;
#endif
        
        // Clear confirmation dialogs
        gAskForConfirmation  = 0;
        gAskToSave           = false;
        gAskToDelete         = false;
        
        // Clear special key press flags
        gWasFKeyPressed      = false;

        // Signal that display and status need refresh
        gUpdateStatus        = true;
    }

    // Update display mode and request full screen redraw
    gScreenToDisplay = Display;
    gUpdateDisplay   = true;
}
