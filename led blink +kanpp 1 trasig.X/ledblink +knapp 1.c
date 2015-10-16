/*
 * File:   ledblink +knapp 1.c
 * Author: test
 *
 * Created on den 13 oktober 2015, 12:07
 */


#include <htc.h>    // brings in specific definitions for this PIC

#include <xc.h>  


#define LED_ON      1       // LED is connected cathode to ground
#define LED_OFF     0
 
#define BUTTON_ON   0       // Button input is low when button pressed
#define BUTTON_OFF  1       // (this is how a pull-up resistor button works)
 
#define I_O_OUT     0       // standard TRIS definitions
#define I_O_IN      1       // zero is 0ut, one is 1n
 
#define SW_A        RB0     // switch A is on PORTB.0
#define SW_B        RB1
#define SW_A_TRIS   TRISB0  // switch B is on PORTB.1
#define SW_B_TRIS   TRISB1
 
#define LED_A       RB2     // LED A is on PORTB.2
#define LED_B       RB3     // LED B is on PORTB.3
#define LED_A_TRIS  TRISB2
#define LED_B_TRIS  TRISB3
 

#define FOSC_INTOSCCLK  0xFFFD
#define FOSC_INTOSCIO   0xFFFC


//CMCON = 0x07;  // ;Turn comparators off and enable pins for I/O functions


void main(void)
{
  SW_A_TRIS  = I_O_IN;    // set up I/O pin directions
  SW_B_TRIS  = I_O_IN;
  LED_A_TRIS = I_O_OUT;
  LED_B_TRIS = I_O_OUT;
 
   // now loop forever to sense buttons
  while(1)
  {
    if (SW_A == BUTTON_ON) // test the first switch
      LED_A = LED_ON;
    else
      LED_A = LED_OFF;
     
    if (SW_B == BUTTON_ON) // test the second switch
      LED_B = LED_ON;
    else
      LED_B = LED_OFF;
     
  }
}