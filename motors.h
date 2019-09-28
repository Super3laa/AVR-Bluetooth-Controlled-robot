/*
 * motors.h
 *
 * Created: 9/24/2019 12:30:48 AM
 *  Author: Alaa
 */ 


#ifndef MOTORS_H_
#define MOTORS_H_
#include <avr/delay.h>
#include <avr/io.h>
#include "bitAssign.h"

#define IN1 0
#define IN2 1
#define IN3 2
#define IN4 3
#define ENA OCR2 
#define ENB OCR1A
 
#define greenLed PIND3 
#define redLed PIND4 

#endif /* MOTORS_H_ */