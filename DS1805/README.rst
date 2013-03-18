                  DS1805 Library for Arduino
           (*Addressable Single Digital Potentiometer*)
=====================================================================

::

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

::
                         
Need a Addressable Duel Digital Potentiometer for you project?

The DS1803 is what your looking for.

Check out the work of Federico & Riccardo Galli @ [http://www.sideralis.org]


