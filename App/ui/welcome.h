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

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

// ============================================================================
// BOOT AND WELCOME DISPLAYS
// ============================================================================

/**
 * @brief Display "Release Keys" prompt during boot
 * 
 * Shown when user is holding down buttons/PTT during power-on.
 * Prompts user to release all keys before radio initialization completes.
 * Blocks startup sequence until keys are released.
 */
void UI_DisplayReleaseKeys(void);

/**
 * @brief Display welcome/splash screen at power-on
 * 
 * Shows radio version, serial number, or custom message.
 * Displayed during boot countdown if POWER_ON_DISPLAY_MODE is enabled.
 * Automatically hidden after 2.55 seconds or on any key press.
 */
void UI_DisplayWelcome(void);

#endif

