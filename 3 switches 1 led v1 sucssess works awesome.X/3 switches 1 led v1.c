/*
 * File:   3 switches 1 led v1.c
 * Author: test
 *
 * Created on den 16 oktober 2015, 17:36
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
  TRISB = 0b00000000; //RB0 as Output PIN
  TRISA0 = 1; //RA0 as Input PIN
  TRISA1 = 1; //RA1 as Input PIN
  CMCON = 0x07;  // ;Turn comparators off and enable pins for I/O functions
  
  
  RB0 = 0; //LED Off
  RB1 = 0;
  RB2 = 0;
  RB3 = 0;

    while(1)
  {
    if(RA1 == 0) //If Switch Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(3000); //3 Second Delay
       RB0 = 0; //LED OFF
    }
  
if(RA2 == 0) //If Switch Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(1000); //3 Second Delay
       RB0 = 0; //LED OFF
    }

 
  
    if(RA0 == 0) //If Switch Pressed
    {
      RB0 = 1; //LED ON
      __delay_ms(6000); //3 Second Delay
       RB0 = 0; //LED OFF
    }
  }
  return 0;
}
