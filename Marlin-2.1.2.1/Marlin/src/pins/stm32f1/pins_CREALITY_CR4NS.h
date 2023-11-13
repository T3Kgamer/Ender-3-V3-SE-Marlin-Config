/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Creality CR4NS200320C13 (GD32F303RET6) as found in the Ender-3 V3 SE
 */

#define BOARD_INFO_NAME      "Creality CR4NS"
#define DEFAULT_MACHINE_NAME "Creality3D"
//
// Differences
//
// #define CLK_AUTO_Z_OFFSET       PA4
// #define SDO_AUTO_Z_OFFSET       PC6
#define FIL_RUNOUT_PIN                      PC15
#define SERVO0_PIN                          PC14
#define Z_MIN_PROBE_PIN                     PC13
#define FAN1_PIN                            PC1 //Heater Fan
//
// Heaters
//
#define HEATER_BED_PIN                      PB2  // HOT BED

#include "pins_CREALITY_V4.h"

#if HAS_TMC_UART
  //Hardware serial communication ports.
  #define X_SERIAL_TX_PIN                   PB12
  #define X_SERIAL_RX_PIN                   PB12

  #define Y_SERIAL_TX_PIN                   PB13
  #define Y_SERIAL_RX_PIN                   PB13

  #define Z_SERIAL_TX_PIN                   PB14
  #define Z_SERIAL_RX_PIN                   PB14

  //#define E0_SERIAL_TX_PIN                  PB15 //Not connected (but if yours is it's this one)
  //#define E0_SERIAL_RX_PIN                  PB15 //Not connected

  // Reduce baud rate to improve software serial reliability
  #define TMC_BAUD_RATE                    19200
#endif