/*
 * File:   led blink 1 knapp v4.c
 * Author: test
 *
 * Created on den 16 oktober 2015, 15:03
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
  CMCON = 0x07;  // ;Turn comparators off and enable pins for I/O functions
  
  
  RB0 = 0; //LED Off


  while(1)
  {
    if(RA0 == 0) //If Switch Pressed
    {
      PORTB = 0b00001000;
        __delay_ms(8);
        PORTB = 0b00000100;
        __delay_ms(8);
        PORTB = 0b10100010;
        __delay_ms(8);
        PORTB = 0b00000001;
        __delay_ms(8);
    }
    else
    {
        PORTB = 0b00000001;
        __delay_ms(19);
        PORTB = 0b00000010;
        __delay_ms(19);
        PORTB = 0b10100100;
        __delay_ms(19);
        PORTB = 0b00001000;
        __delay_ms(19);          
    }           
  }
  return 0;
}