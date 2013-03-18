
#include "DS1805.h"
#include <Wire.h>

/***********# Arduino 1.0 Support #************/
extern "C" {
#if ARDUINO >= 100
#include "Arduino.h"       
#else
#include "WProgram.h"
#endif
}
/******************************************/

DS1805::DS1805(int8_t addr)
{
  this->addr=addr;
  Wire.begin();
}

/* Set the values of the wiper (potentiometer)
    WIPER is pot1
    Value is between 0 and 255
*/
void DS1805::setPot(int value)
{
  Wire.beginTransmission(this->addr);
  
  #if ARDUINO >= 100
    Wire.write(WIPER);
    Wire.write(value);     
  #else
    Wire.send(WIPER);
    Wire.send(value);
  #endif 

  Wire.endTransmission();  
}

// Return an array of one value read from the IC
int8_t *DS1805::getValue()
{
	Wire.requestFrom(this->addr, 1);
	int8_t *values=(int8_t*)malloc(sizeof(int8_t));
	
	int k=0;
	while (Wire.available()) 
    {
      #if ARDUINO >= 100  
      values[k]=Wire.read();
      #else  
	  values[k]=Wire.receive();
	  #endif
	}

	return values;
}
