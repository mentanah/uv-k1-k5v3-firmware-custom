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

#ifndef UI_MAIN_H
#define UI_MAIN_H

/**
 * @enum center_line_t
 * @brief Enumeration for center display line usage
 * The center line (line 3) is shared between multiple features:
 * - AUDIO_BAR: Microphone level during transmission
 * - RSSI: Receive signal strength indicator
 * - DTMF_DEC: Live DTMF decoder output
 * - CHARGE_DATA: Battery charging information
 */
enum center_line_t {
    CENTER_LINE_NONE = 0,           ///< Center line is available for use
    CENTER_LINE_IN_USE,              ///< Center line reserved for feature output
    CENTER_LINE_AUDIO_BAR,           ///< Audio level bar displayed
    CENTER_LINE_RSSI,                ///< RSSI level bar displayed
    CENTER_LINE_AM_FIX_DATA,         ///< AM fix debug data displayed
    CENTER_LINE_DTMF_DEC,            ///< Live DTMF decoder output
    CENTER_LINE_CHARGE_DATA          ///< Battery charging data displayed
};

/**
 * @enum Vfo_txtr_mode
 * @brief VFO transmission/reception mode indicator
 */
enum Vfo_txtr_mode {
    VFO_MODE_NONE = 0,              ///< No active TX/RX
    VFO_MODE_TX = 1,                ///< Transmitting on this VFO
    VFO_MODE_RX = 2,                ///< Receiving on this VFO
};

typedef enum center_line_t center_line_t;

/// Current center line allocation status
extern center_line_t center_line;

/// RSSI correction table for different frequency bands (in dBm)
extern const int8_t dBmCorrTable[7];

// ============================================================================
// AUDIO AND SIGNAL LEVEL DISPLAY
// ============================================================================

/**
 * @brief Display microphone audio level bar during transmission
 * Shows visual representation of audio input levels while user is transmitting
 */
void UI_DisplayAudioBar(void);

/**
 * @brief 500ms timeslice update for main display
 * Updates RSSI bar, audio bar, LED indicators
 */
void UI_MAIN_TimeSlice500ms(void);

// ============================================================================
// MAIN FREQUENCY DISPLAY
// ============================================================================

/**
 * @brief Render the main VFO frequency/channel display
 * Displays:
 * - VFO A and VFO B frequencies/channels
 * - TX/RX status indicators
 * - Signal strength and modulation
 * - TX power level and offset information
 * - Scan list participation symbols
 */
void UI_DisplayMain(void);

#ifdef ENABLE_AGC_SHOW_DATA
/**
 * @brief Debug display for AGC (Automatic Gain Control) data
 * @param force Force immediate screen update
 * Shows AGC gain index, signal strength, and RSSI values
 */
void UI_MAIN_PrintAGC(bool force);
#endif

#endif
