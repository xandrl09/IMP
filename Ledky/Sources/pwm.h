/*
 * Author: Ondøej Andrla
 * Login: xandrl09
 * Orginál
 * Mùj autorský podíl: 100%
 * Poslední zmìna: 22. 12. 2019
 */


#ifndef SOURCES_PWM_H_
#define SOURCES_PWM_H_

#include "main.h"

#define OVERFLOW 0xFF// Doporucena hodnota preteceni casovace

void SysInit(void);
void Timer0Init(void);

void PortsInitPWM(void);
void blickPWM(void);

#endif /* SOURCES_PWM_H_ */
