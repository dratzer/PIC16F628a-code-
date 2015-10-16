/*
 * File:   led blink 1 knapp v3 kombination.c
 * Author: test
 *
 * Created on den 16 oktober 2015, 13:28
 */


#include <xc.h>
#include <htc.h>
 
#define _XTAL_FREQ 4000000
 
#define FOSC_INTOSCCLK  0xFFFD
#define FOSC_INTOSCIO   0xFFFC
         
         
/* Configuration */
 
__CONFIG(INTIO & WDTDIS & PWRTDIS & BORDIS & LVPDIS );


int main()
{
  TRISB0 = 0; //RB0 as Output PIN
  TRISA0 = 1; //RA0 as Input PIN
  CMCON = 0x07;  // ;Turn comparators off and enable pins for I/O functions
  
  
  RB0 = 0; //LED Off

  while(1)
  {
    if(RA0 == 0) //If Switch Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(3000); //3 Second Delay
       RB0 = 0; //LED OFF
    }
  }
  return 0;
}