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
 
 
/* Functions */
void lightLED()
{
    PORTA = 0b11111111;
    PORTB = 0b11111111;
 

 
}
 
void turnoffLED()
{
    PORTA = 0b00000000;
    PORTB = 0b00000000;
 

 
}
 
 
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
lightLED();
__delay_ms(150);
turnoffLED();
 __delay_ms(150);
 lightLED();
__delay_ms(250);
turnoffLED();
 __delay_ms(250);
 lightLED();
__delay_ms(120);
turnoffLED();
 __delay_ms(120);
 lightLED();
__delay_ms(50);
turnoffLED();
 __delay_ms(50);
 lightLED();
__delay_ms(25);
turnoffLED();
 __delay_ms(25);
 lightLED();
__delay_ms(100);
turnoffLED();
 __delay_ms(100);
 lightLED();
__delay_ms(5);
turnoffLED();
 __delay_ms(5);
 lightLED();
__delay_ms(2);
turnoffLED();
 __delay_ms(2);
 lightLED();
__delay_ms(57);
turnoffLED();
 __delay_ms(57);
 lightLED();
__delay_ms(50);
turnoffLED();
 __delay_ms(50);
 lightLED();
__delay_ms(100);
turnoffLED();
 __delay_ms(100);
 lightLED();
__delay_ms(25);
turnoffLED();
 __delay_ms(25);
} // end while
 
}  //end main
