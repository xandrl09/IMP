/*
 * Author: Ond�ej Andrla
 * Login: xandrl09
 * Orgin�l
 * M�j autorsk� pod�l: 100%
 * Posledn� zm�na: 22. 12. 2019
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
