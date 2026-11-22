/*
  M5keyboard - CGL Sord M5 PS/2 Keyboard
  Adapted by Ian Cudlip
  v0.1 09/09/2026

  PS/2 and Serial 9600,n,8,1 input

  Based on C64keyboard - Commodore Keyboard library by Hartland PC LLC
  Copyright (c) 2022 Hartland PC LLC
  Written by Robert VanHazinga

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <PS2KeyAdvanced.h>
#include "M5keyboard.h"

PS2KeyAdvanced keyboard;
M5keyboard ckey;
static volatile uint8_t  currkeymap = 1, flags ;
static const M5Keymap_t *keymap = NULL;
static const M5Serialmap_t *serialmap = NULL;
static volatile bool lshift=false, rshift=false, ctrl=false, capslock=false, M5break=false;

void setup() {
  // Configure the keyboard library
  keyboard.begin( DATA_PIN, IRQ_PIN );
  keyboard.setNoRepeat (1);
  keyboard.setNoBreak (0);
  ckey.begin();
  Serial.begin(9600,SERIAL_8N1);
  if (debug) {
   Serial.println("Startup..");
  }
}

void loop() {

 byte readByte=0;

  // PS/2 Input
  if ( keyboard.available() )
  {
    M5key(keyboard.read());  
  }

  // Serial Input
  if (Serial.available() > 0) {
    readByte=Serial.read();
    if (debug) {
      Serial.print("Read byte:");
      Serial.println(readByte,HEX);
    }
    serialKey(readByte);
    delay(50);
  }

}
