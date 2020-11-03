/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Pøi tvorbì tohoto souboru jsem využil:
 * "example for demonstrating basic principles of FITkit3 usage" a "IMP exercise 3".
 * Mùj autorský podíl: 90%
 * Poslední zmìna: 22. 12. 2019
 */


#include "main.h"
#include "MK60D10.h"



/*
 * This function do delay.
 */
void delay(long long bound)
{
  long long i;
  for(i=0;i<bound;i++);
}


/*
 * Function make short delay.
 */
void shortWait(void)
{
	delay(6000);
	PortsInit();
	reverse();
}


/*
 * Function makes medium delay.
 */
void normalWait(void)
{
	delay(12000);
	PortsInit();
	reverse();
}


/*
 * Function makes long delay.
 */
void longWait(void)
{
	delay(15000);
	PortsInit();
	reverse();
}


/*
 * This function initialize the MCU - basic clock settings, turning the watchdog off.
 */
void MCUInit(void)
{
    MCG_C4 |= ( MCG_C4_DMX32_MASK | MCG_C4_DRST_DRS(0x01) );
    SIM_CLKDIV1 |= SIM_CLKDIV1_OUTDIV1(0x00);
    WDOG_STCTRLH &= ~WDOG_STCTRLH_WDOGEN_MASK;
}


/*
 * This function initialize ports for LED.
 */
void PortsInit(void)
{
    /* Turn on all port clocks */
    SIM->SCGC5 = SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTD_MASK | SIM_SCGC5_PORTE_MASK;

    /* Set corresponding PTA pins (connected to LED's) */
    PORTA->PCR[8] = (0|PORT_PCR_MUX(0x01));	//23
    PORTA->PCR[10] = (0|PORT_PCR_MUX(0x01));//24

    PORTA->PCR[6] = (0|PORT_PCR_MUX(0x01));	//25
    PORTA->PCR[11] = (0|PORT_PCR_MUX(0x01));//26

    PORTA->PCR[7] = (0|PORT_PCR_MUX(0x01));	//27
    PORTA->PCR[9] = (0|PORT_PCR_MUX(0x01));	//28

    PORTA->PCR[27] = (0|PORT_PCR_MUX(0x01));//35
    PORTA->PCR[29] = (0|PORT_PCR_MUX(0x01));//36

    PORTA->PCR[26] = (0|PORT_PCR_MUX(0x01));//37
    PORTA->PCR[28] = (0|PORT_PCR_MUX(0x01));//38

    PORTA->PCR[24] = (0|PORT_PCR_MUX(0x01));//39
    PORTA->PCR[25] = (0|PORT_PCR_MUX(0x01));//40

    PORTE->PCR[28] = (0|PORT_PCR_MUX(0x01));//34
    PORTD->PCR[13] = (0|PORT_PCR_MUX(0x01));//20

    PORTD->PCR[14] = (0|PORT_PCR_MUX(0x01));//21
    PORTD->PCR[15] = (0|PORT_PCR_MUX(0x01));//22

    /* Change corresponding PTA, PTD, PTE port pins as outputs */
    PTA->PDDR = GPIO_PDDR_PDD(0x3F000FC0);
    PTD->PDDR = GPIO_PDDR_PDD(0x3F000);
    PTE->PDDR = GPIO_PDDR_PDD(0x10000000);

    PTA->PDOR |= GPIO_PDOR_PDO(0x100); // 2^8, 23
	PTA->PDOR &= GPIO_PDOR_PDO(~0x400); // 2^9, 24

    PTA->PDOR |= GPIO_PDOR_PDO(0x40); // 2^6, 25
	PTA->PDOR &= GPIO_PDOR_PDO(~0x800); // 2^11, 26

	PTA->PDOR |= GPIO_PDOR_PDO(0x80); // 2^7, 27
	PTA->PDOR &= GPIO_PDOR_PDO(~0x200); // 2^9, 28

	PTA->PDOR |= GPIO_PDOR_PDO(0x8000000); // 2^27, 35
	PTA->PDOR &= GPIO_PDOR_PDO(~0x20000000); // 2^29, 36

	PTA->PDOR |= GPIO_PDOR_PDO(0x4000000); // 2^26, 37
	PTA->PDOR &= GPIO_PDOR_PDO(~0x10000000); // 2^28, 38

	PTA->PDOR |= GPIO_PDOR_PDO(0x1000000); // 2^24, 39
	PTA->PDOR &= GPIO_PDOR_PDO(~0x2000000); // 2^25, 40

	PTE->PDOR |= GPIO_PDOR_PDO(0x10000000); // 2^28, 34
	PTD->PDOR &= GPIO_PDOR_PDO(~0x2000); // 2^13, 20

	PTD->PDOR |= GPIO_PDOR_PDO(0x4000); // 2^14, 21
	PTD->PDOR &= GPIO_PDOR_PDO(~0x8000); // 2^15, 22
}


/*
 * Function revert state of LED.
 * From active to inactive and others.
 */
void reverse(void)
{
	GPIOA_PDOR ^= LED_ROW1;
	GPIOA_PDOR ^= LED_ROW2;
	GPIOD_PDOR ^= LED_ROW3;
	GPIOD_PDOR ^= LED_ROW4;
	GPIOA_PDOR ^= LED_ROW5;
	GPIOA_PDOR ^= LED_ROW6;
	GPIOA_PDOR ^= LED_ROW7;
	GPIOA_PDOR ^= LED_ROW8;

	GPIOA_PDOR ^= LED_COL1;
	GPIOA_PDOR ^= LED_COL2;
	GPIOE_PDOR ^= LED_COL3;
	GPIOD_PDOR ^= LED_COL4;
	GPIOA_PDOR ^= LED_COL5;
	GPIOA_PDOR ^= LED_COL6;
	GPIOA_PDOR ^= LED_COL7;
	GPIOA_PDOR ^= LED_COL8;
}


/*
 * Main function performs two visual efects.
 */
int main(void)
{
    MCUInit();
    PortsInit();
    reverse();

    int increment = 1; // Priznak zvysovani (1) ci snizovani (0) hodnoty compare
	unsigned int compare = 0; // Hodnota pro komparacni registr (urcujici stridu PWM).

    SysInit();
    //Timer0Init();

    //PortsInitPWM();
    //blickPWM();
    while (1)
    {
		/*delay(100000);

		if (increment)
		{
			compare++;
			increment = !(compare >= OVERFLOW);
		}
		else
		{
			compare--;
			increment = (compare == 0x00);
		}



		*FTM0_CnV(1) = compare;
		FTM1_CnV(1) = compare;
		FTM2_CnV(1) = compare;

		delay(10000);*/

    	printFIT();
    	printText();


	}

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
