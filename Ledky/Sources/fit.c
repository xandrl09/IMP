/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Pøi tvorbì tohoto souboru jsem využil:
 * "example for demonstrating basic principles of FITkit3 usage" a "IMP exercise 2".
 * Mùj autorský podíl: 90%
 * Poslední zmìna: 22. 12. 2019
 */

#include "fit.h"
#include "MK60D10.h"



/*
 * Function first frame of FIT on LED display.
 */
void firstFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();
	}
}


/*
 * Function second frame of FIT on LED display.
 */
void secondFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();
	}
}


/*
 * Function third frame of FIT on LED display.
 */
void thirdFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();
	}
}


/*
 * Function fourth frame of FIT on LED display.
 */
void fourthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		normalWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();
	}
}


/*
 * Function fifth frame of FIT on LED display.
 */
void fifthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();
	}
}


/*
 * Function sixth frame of FIT on LED display.
 */
void sixthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL7;
		normalWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL7;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();
	}
}


/*
 * Function seventh frame of FIT on LED display.
 */
void seventhFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL6;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();
	}
}


/*
 * Function eighth frame of FIT on LED display.
 */
void eighthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL8;
		shortWait();
	}
}


/*
 * Function ninth frame of FIT on LED display.
 */
void ninthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		GPIOA_PDOR ^= LED_COL8;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL7;
		shortWait();
	}
}


/*
 * Function tenth frame of FIT on LED display.
 */
void tenthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		GPIOA_PDOR ^= LED_COL7;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL1;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		normalWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOE_PDOR ^= LED_COL3;
		GPIOA_PDOR ^= LED_COL6;
		shortWait();
	}
}


/*
 * Function eleventh frame of FIT on LED display.
 */
void eleventhFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		GPIOA_PDOR ^= LED_COL6;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		shortWait();
	}
}


/*
 * Function twelfth frame of FIT on LED display.
 */
void twelfthFrame(void)
{

	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		GPIOA_PDOR ^= LED_COL5;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL1;
		GPIOD_PDOR ^= LED_COL4;
		shortWait();
	}
}

/*
 * Function thirteenth frame of FIT on LED display.
 */
void thirteenthFrame(void)
{
	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		GPIOD_PDOR ^= LED_COL4;
		longWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();
	}
}


/*
* Function fourteenth frame of FIT on LED display.
*/
void fourteenthFrame(void)
{
	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOE_PDOR ^= LED_COL3;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();
	}
}


/*
* Function fifteenth frame of FIT on LED display.
*/
void fifteenthFrame(void)
{
	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		shortWait();

		GPIOA_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOD_PDOR ^= LED_ROW3;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOD_PDOR ^= LED_ROW4;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOA_PDOR ^= LED_ROW6;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOA_PDOR ^= LED_ROW7;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();

		GPIOA_PDOR ^= LED_ROW8;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();
	}
}


/*
* Function sixteenth frame of FIT on LED display.
*/
void sixteenthFrame(void)
{
	delay(10000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		shortWait();
	}
}


/*
* Function print FIT on LED display.
*/
void printFIT(void)
{
	firstFrame();
	secondFrame();
	thirdFrame();
	fourthFrame();
	fifthFrame();
	sixthFrame();
	seventhFrame();
	eighthFrame();
	ninthFrame();
	tenthFrame();
	eleventhFrame();
	twelfthFrame();
	thirteenthFrame();
	fourteenthFrame();
	fifteenthFrame();
	sixteenthFrame();
}
