/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Pøi tvorbì tohoto souboru jsem využil:
 * "example for demonstrating basic principles of FITkit3 usage" a "IMP exercise 3".
 * Mùj autorský podíl: 50%
 * Poslední zmìna: 22. 12. 2019
 */

#include "pwm.h"
#include "MK60D10.h"

/*
 * Povoleni hodin do modulu, ktere budou pouzivany:
 */
void SysInit(void)
{
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK | SIM_SCGC5_PORTB_MASK | SIM_SCGC5_PORTE_MASK; // povoleni hodin do portu A
	SIM->SCGC6 |= SIM_SCGC6_FTM0_MASK; // povoleni hodin do casovace FTM0
}


/*
 * Function inits timer.
 */
void Timer0Init(void)
{

	FTM0_MODE = 0x4;
    FTM0_CNT = 0x0;
    FTM0_MOD = OVERFLOW;
    //Ftm0_cnsc(1)
    FTM0_CnSC(1) = 0x28; // zelena
    FTM0_SC = 0xB;

    FTM1_MODE = 0x4;
    FTM1_CNT = 0x0;
    FTM1_MOD = OVERFLOW;
    //Ftm1_cnsc(1)
    FTM1_CnSC(1) = 0x28; // zelena
    FTM1_SC = 0xB;

    FTM2_MODE = 0x4;
    FTM2_CNT = 0x0;
    FTM2_MOD = OVERFLOW;
    //Ftm2_cnsc(1)
    FTM2_CnSC(1) = 0x28; // zelena
    FTM2_SC = 0xB;

}


/*
 * Function inits ports for PWM.
 */
void PortsInitPWM(void)
{
    /* Turn on all port clocks */
	SIM->SCGC5 = SIM_SCGC5_PORTA_MASK;
    SIM->SCGC6 = SIM_SCGC6_FTM0_MASK  | SIM_SCGC6_FTM1_MASK;
    SIM->SCGC3 = SIM_SCGC3_FTM2_MASK;

    /* Set corresponding PTA pins (connected to LED's) */
    PORTA->PCR[8] = (0|PORT_PCR_MUX(0x03));	//23
    PORTA->PCR[10] = (0|PORT_PCR_MUX(0x03));//24

    PORTA->PCR[6] = (0|PORT_PCR_MUX(0x03));	//25
    PORTA->PCR[11] = (0|PORT_PCR_MUX(0x03));//26

    PORTA->PCR[7] = (0|PORT_PCR_MUX(0x03));	//27
    PORTA->PCR[9] = (0|PORT_PCR_MUX(0x03));	//28


    /* Change corresponding PTA, PTD, PTE port pins as outputs
    PTA->PDDR = PWM_PDDR_PDD(0x3F000FC0);
    PTD->PDDR = GPIO_PDDR_PDD(0x3F000);
    PTE->PDDR = GPIO_PDDR_PDD(0x10000000);

    PTA->PDOR |= GPIO_PDOR_PDO(0x100); // 2^8, 23
	PTA->PDOR &= GPIO_PDOR_PDO(~0x400); // 2^9, 24

    PTA->PDOR |= GPIO_PDOR_PDO(0x40); // 2^6, 25
	PTA->PDOR &= GPIO_PDOR_PDO(~0x800); // 2^11, 26

	PTA->PDOR |= GPIO_PDOR_PDO(0x80); // 2^7, 27
	PTA->PDOR &= GPIO_PDOR_PDO(~0x200); // 2^9, 28*/
}

/*
 * Function prints text to LED display.
 */
void blickPWM(void)
{

	delay(600000);

	for(int i = 0; i < 50; i++)
	{
		GPIOA_PDOR ^= LED_ROW1;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		delay(6000);
		PortsInitPWM();


		GPIOD_PDOR ^= LED_ROW2;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		delay(6000);
		PortsInitPWM();


		GPIOA_PDOR ^= LED_ROW5;
		GPIOA_PDOR ^= LED_COL1;
		GPIOA_PDOR ^= LED_COL2;
		GPIOA_PDOR ^= LED_COL5;
		delay(6000);
		PortsInitPWM();


	}

	delay(600000);


}


