/*
 * EEPROM Clear
 *
 * Sets all of the bytes of the EEPROM to 0.
 * This example code is in the public domain.

 */

#include <EEPROM.h>
#define L2 7
#define L1 8
void setup()
{
  pinMode(L2, OUTPUT);
  pinMode(L1, OUTPUT);

  digitalWrite(L2, HIGH);
  // write a 0 to all 512 bytes of the EEPROM
  for (int i = 0; i < 512; i++)
  {
    EEPROM.write(i, 0);
  }  
  // turn the LED on when we're done
  digitalWrite(L2, LOW);
  digitalWrite(L1, HIGH);
}

void loop()
{
}
