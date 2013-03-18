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

#include <DS1805.h>
#include <Wire.h>

//Create an instance of the class were 0x28 is the address of the DS1805.

DS1805 pot(0x28); 

void setup() 
{  
  //Begin serial connection at 9600 baud
  Serial.begin(9600) ;
} 

void loop() 
{
     
  //Set the potentiometer at 200 
  pot.setPot(200);
  
  //Read the value saved on the DS1805
  int8_t *value = pot.getValue();
  Serial.println(value[0], DEC);
}


