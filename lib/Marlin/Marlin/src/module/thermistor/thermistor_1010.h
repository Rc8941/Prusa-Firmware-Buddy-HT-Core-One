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

// Pt1000 with 1k0 pullup, the one used in this mod. Decided to go from 0 to 500c in steps of 10c with the exact resistances from each part wrote down for the standard PT1000 for extra accuracy!
const int32_t temptable_1010[][2] PROGMEM = {
  PtLine(  0, 1000.00, 1000),
  PtLine( 10, 1003.90, 1000),
  PtLine( 20, 1007.79, 1000),
  PtLine( 30, 1011.69, 1000),
  PtLine( 40, 1015.58, 1000),
  PtLine( 50, 1019.48, 1000),
  PtLine( 60, 1023.37, 1000),
  PtLine( 70, 1027.26, 1000),
  PtLine( 80, 1031.15, 1000),
  PtLine( 90, 1035.04, 1000),
  PtLine(100, 1038.92, 1000),
  PtLine(110, 1042.81, 1000),
  PtLine(120, 1046.69, 1000),
  PtLine(130, 1050.58, 1000),
  PtLine(140, 1054.46, 1000),
  PtLine(150, 1058.35, 1000),
  PtLine(160, 1062.23, 1000),
  PtLine(170, 1066.11, 1000),
  PtLine(180, 1069.99, 1000),
  PtLine(190, 1073.87, 1000),
  PtLine(200, 1077.75, 1000),
  PtLine(210, 1081.63, 1000),
  PtLine(220, 1085.51, 1000),
  PtLine(230, 1089.38, 1000),
  PtLine(240, 1093.26, 1000),
  PtLine(250, 1097.13, 1000),
  PtLine(260, 1101.01, 1000),
  PtLine(270, 1104.88, 1000),
  PtLine(280, 1108.75, 1000),
  PtLine(290, 1112.62, 1000),
  PtLine(300, 1116.49, 1000),
  PtLine(310, 1120.36, 1000),
  PtLine(320, 1124.23, 1000),
  PtLine(330, 1128.09, 1000),
  PtLine(340, 1131.96, 1000),
  PtLine(350, 1135.82, 1000),
  PtLine(360, 1139.68, 1000),
  PtLine(370, 1143.54, 1000),
  PtLine(380, 1147.40, 1000),
  PtLine(390, 1151.26, 1000),
  PtLine(400, 1155.11, 1000),
  PtLine(410, 1158.97, 1000),
  PtLine(420, 1162.82, 1000),
  PtLine(430, 1166.67, 1000),
  PtLine(440, 1170.52, 1000),
  PtLine(450, 1174.36, 1000),
  PtLine(460, 1178.21, 1000),
  PtLine(470, 1182.05, 1000),
  PtLine(480, 1185.89, 1000),
  PtLine(490, 1189.74, 1000),
  PtLine(500, 1193.58, 1000),
  PtLine(510, 1197.42, 1000),
  PtLine(520, 1201.25, 1000),
  PtLine(530, 1205.07, 1000),
  PtLine(540, 1208.89, 1000),
  PtLine(550, 1212.70, 1000)
};
