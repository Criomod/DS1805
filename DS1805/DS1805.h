/*****************************************************************************/
/*                          Copyright and License                            */
/*****************************************************************************/
/*
   DS1805 Addressable Single Digital Potentiometer Library for Arduino 

   Copyright 2012 Brandon Cochrane  <criomod@live.com> 

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
                                                                             */
/*****************************************************************************/

#ifndef DS1805_h
#define DS1805_h

/***********# Arduino 1.0 Support #************/
#if ARDUINO >= 100
#include "Arduino.h"       
#else
#include "WProgram.h"
#endif
/******************************************/

#include <Wire.h>

#define WIPER 0xA9 //10101001

class DS1805
{
  int8_t addr;
  public:
  DS1805(int8_t addr);
  void setPot(int value);
  int8_t *getValue();
};

#endif
