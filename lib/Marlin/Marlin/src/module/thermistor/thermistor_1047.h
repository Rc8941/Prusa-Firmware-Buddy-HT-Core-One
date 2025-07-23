/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Pt1000 with 4k7 pullup, also edited because I orinally thought that the Nextruder had a 4.7k resistor (1k was listed as "Non-standard"). If you mod your board for such, just know you'll be set without having to change stuff here!
const int32_t temptable_1047[][2] PROGMEM = {
  PtLine(  0, 1000.00, 4700),
  PtLine( 10, 1003.90, 4700),
  PtLine( 20, 1007.79, 4700),
  PtLine( 30, 1011.69, 4700),
  PtLine( 40, 1015.58, 4700),
  PtLine( 50, 1019.48, 4700),
  PtLine( 60, 1023.37, 4700),
  PtLine( 70, 1027.26, 4700),
  PtLine( 80, 1031.15, 4700),
  PtLine( 90, 1035.04, 4700),
  PtLine(100, 1038.92, 4700),
  PtLine(110, 1042.81, 4700),
  PtLine(120, 1046.69, 4700),
  PtLine(130, 1050.58, 4700),
  PtLine(140, 1054.46, 4700),
  PtLine(150, 1058.35, 4700),
  PtLine(160, 1062.23, 4700),
  PtLine(170, 1066.11, 4700),
  PtLine(180, 1069.99, 4700),
  PtLine(190, 1073.87, 4700),
  PtLine(200, 1077.75, 4700),
  PtLine(210, 1081.63, 4700),
  PtLine(220, 1085.51, 4700),
  PtLine(230, 1089.38, 4700),
  PtLine(240, 1093.26, 4700),
  PtLine(250, 1097.13, 4700),
  PtLine(260, 1101.01, 4700),
  PtLine(270, 1104.88, 4700),
  PtLine(280, 1108.75, 4700),
  PtLine(290, 1112.62, 4700),
  PtLine(300, 1116.49, 4700),
  PtLine(310, 1120.36, 4700),
  PtLine(320, 1124.23, 4700),
  PtLine(330, 1128.09, 4700),
  PtLine(340, 1131.96, 4700),
  PtLine(350, 1135.82, 4700),
  PtLine(360, 1139.68, 4700),
  PtLine(370, 1143.54, 4700),
  PtLine(380, 1147.40, 4700),
  PtLine(390, 1151.26, 4700),
  PtLine(400, 1155.11, 4700),
  PtLine(410, 1158.97, 4700),
  PtLine(420, 1162.82, 4700),
  PtLine(430, 1166.67, 4700),
  PtLine(440, 1170.52, 4700),
  PtLine(450, 1174.36, 4700),
  PtLine(460, 1178.21, 4700),
  PtLine(470, 1182.05, 4700),
  PtLine(480, 1185.89, 4700),
  PtLine(490, 1189.74, 4700),
  PtLine(500, 1193.58, 4700)
};