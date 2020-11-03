/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Orginál
 * Mùj autorský podíl: 100%
 * Poslední zmìna: 22. 12. 2019
 */


#ifndef SOURCES_MAIN_H_
#define SOURCES_MAIN_H_


#include "noviny.h"
#include "pwm.h"
#include "fit.h"

/* Mapping of LEDs  to specific port pins: */

#define LED_COL1  0x100      // pin 23, 8.bit
#define LED_ROW1  0x400      // pin 24, 10.bit
#define LED_COL2  0x40      // pin 25, 6.bit
#define LED_ROW2  0x800      // pin 26, 11.bit
#define LED_COL3  0x10000000      // pin 34, 28.bit PTE
#define LED_ROW3  0x2000      //   pin 20, 13.bit PTD
#define LED_COL4  0x4000      //  pin 21, 15.bit PTD
#define LED_ROW4  0x8000      // pin 22, 14.bit PTD
#define LED_COL5  0x80      // pin 27, 7.bit
#define LED_ROW5  0x200      // pin 28, 9.bit
#define LED_COL6  0x8000000      // pin 35, 27.bit
#define LED_ROW6  0x20000000      // pin 36, 29.bit
#define LED_COL7  0x4000000      // pin 37, 26.bit
#define LED_ROW7  0x10000000      // pin 38, 28.bit
#define LED_COL8  0x1000000      // pin 39, 24.bit
#define LED_ROW8  0x2000000      // pin 40, 25.bit


void shortWait(void);
void normalWait(void);
void longWait(void);
void delay(long long );

void MCUInit(void);

void PortsInit(void);
void reverse(void);
int main(void);

#endif /* SOURCES_MAIN_H_ */
