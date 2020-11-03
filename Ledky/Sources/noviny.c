/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Pøi tvorbì tohoto souboru jsem využil:
 * "example for demonstrating basic principles of FITkit3 usage" a "IMP exercise 2".
 * Mùj autorský podíl: 90%
 * Poslední zmìna: 22. 12. 2019
 */

#include "noviny.h"
#include "MK60D10.h"

/*
 * Function makes A on LED display.
 */
void blickA(void)
{

	delay(600000);

	for(int i = 0; i < 100; i++)
	{
		GPIOA_PDOR ^= LED_ROW2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		longWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();
	}

	delay(600000);


}


/*
 * Function makes H on LED display.
 */
void blickH(void)
{

	delay(600000);

	for(int i = 0; i < 100; i++)
	{
		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		longWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();
	}

	delay(600000);
}


/*
 * Function makes O on LED display.
 */
void blickO(void)
{

	delay(600000);

	for(int i = 0; i < 100; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();
	}

	delay(600000);
}


/*
 * Function makes J on LED display.
 */
void blickJ(void)
{

	delay(600000);

	for(int i = 0; i < 100; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();
	}

	delay(600000);
}

/*
 * Function prints text to LED display.
 */
void printText(void)
{
	blickA();
	blickH();
	blickO();
	blickJ();
}



////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////



