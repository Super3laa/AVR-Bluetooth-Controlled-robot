/*
 * main103.h
 *
 * Created: 9/24/2019 12:28:29 AM
 *  Author: Alaa
 */


#ifndef MAIN103_H_
#define MAIN103_H_

#include <avr/delay.h>
#include "motors.h"

void bluetoothInit(long BAUDRATE);
void transimit (char data);
unsigned char readData(void);
uint8_t bluetooth_available(void);

void manualControl(unsigned char data);

void motorInit(void);
void pwmInit(void);


#endif /* MAIN103_H_ */
