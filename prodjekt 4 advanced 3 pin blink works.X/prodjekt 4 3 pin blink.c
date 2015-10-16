/*
 * File:   blink allot.c
 * Author: test
 *
 * Created on den 11 oktober 2015, 22:18
 */


#include <xc.h>
#include <htc.h>
 
#define _XTAL_FREQ 4000000
 
#define FOSC_INTOSCCLK  0xFFFD
#define FOSC_INTOSCIO   0xFFFC
         
         
/* Configuration */
 
__CONFIG(INTIO & WDTDIS & PWRTDIS & BORDIS & LVPDIS );
 
/* Prototyping the functions */
void lightLED();
void turnoffLED();
 
 
/* Global variables */
 
  
/* Main program */
void main()
{
TRISA = 0b00000000;    // Setting all bits on port a to output
TRISB = 0b00000000;    // Setting all bits on port b to output
 
PORTA = 0b00000000; // Setting all bits on port a to LOW
PORTB = 0b00000000;    // Setting all bits on port b to LOW
 
CMCON = 0x07;    // Disabling the analogue comparators
 
 
 
while (1)
{
 PORTA = 0b00000000;
__delay_ms(1500);
 PORTA = 0b11111111;
 __delay_ms(1500);
 PORTA = 0b00000011;
 __delay_ms(1500);
 PORTA = 0b10100101;
 __delay_ms(1500);
 PORTA = 0b00001001;
 __delay_ms(1500);
 


} // end while
 
}  //end main
