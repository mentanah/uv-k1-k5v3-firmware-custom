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

#ifndef GUI_H
#define GUI_H

#include <stdbool.h>
#include <stdint.h>

/**
 * @enum GUI_DisplayType_t
 * @brief Display screens available in the radio UI
 */
enum GUI_DisplayType_t
{
    DISPLAY_MAIN = 0,              ///< Main frequency/channel display
    DISPLAY_MENU,                  ///< Menu system
    DISPLAY_SCANNER,               ///< Channel/frequency scanner

#ifdef ENABLE_FMRADIO
    DISPLAY_FM,                    ///< FM radio receiver
#endif

#ifdef ENABLE_AIRCOPY
    DISPLAY_AIRCOPY,               ///< Air copy (channel transfer) mode
#endif

    DISPLAY_N_ELEM,                ///< Total number of display modes
    DISPLAY_INVALID = 0xFFu        ///< Invalid/uninitialized display
};

typedef enum GUI_DisplayType_t GUI_DisplayType_t;

/// Currently displayed screen
extern GUI_DisplayType_t gScreenToDisplay;

/// Next screen to display (queued request)
extern GUI_DisplayType_t gRequestDisplayScreen;

/// Confirmation dialog counter (0=no confirmation, >0=show confirmation)
extern uint8_t           gAskForConfirmation;

/// Flag to prompt user to save changes
extern bool              gAskToSave;

/// Flag to prompt user to confirm deletion
extern bool              gAskToDelete;

// ============================================================================
// DISPLAY RENDERING
// ============================================================================

/**
 * @brief Render the current display to the LCD
 * Dispatches to the appropriate display function based on gScreenToDisplay
 */
void GUI_DisplayScreen(void);

/**
 * @brief Request a screen change
 * @param Display Target display type to show
 * 
 * Transitions to a new display mode with proper state cleanup:
 * - Clears input boxes and menus
 * - Resets DTMF and scanning states
 * - Triggers display update
 * 
 * Prevents flickering by batching state changes before display update
 */
void GUI_SelectNextDisplay(GUI_DisplayType_t Display);

#endif
