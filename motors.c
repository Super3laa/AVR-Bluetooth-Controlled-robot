/*
 * motors.c
 *
 * Created: 9/24/2019 12:30:32 AM
 *  Author: Alaa
 */

#include "motors.h"

void motorInit(void){
	setBit(DDRC,IN1);
	setBit(DDRC,IN2);
	setBit(DDRC,IN3);
	setBit(DDRC,IN4);
	setBit(DDRD,greenLed);
	setBit(DDRD,redLed);
	Stop();
}
void forward(void){
	clearBit(PORTC,IN2);
	setBit(PORTC,IN1);
	setBit(PORTC,IN3);
	clearBit(PORTC,IN4);
	ENA = 255;
	ENB = 255;
	setBit(PORTD,greenLed);	
	clearBit(PORTD,redLed);
}
void backward(void){
	setBit(PORTC,IN2);
	clearBit(PORTC,IN1);
	clearBit(PORTC,IN3);
	setBit(PORTC,IN4);
	ENA = 255;
	ENB = 255;
	setBit(PORTD,greenLed);
	clearBit(PORTD,redLed);
}
void right(void){
	setBit(PORTC,IN2);
	clearBit(PORTC,IN1);
	setBit(PORTC,IN3);
	clearBit(PORTC,IN4);
	ENA = 255;
	ENB = 255;
	setBit(PORTD,greenLed);
	clearBit(PORTD,redLed);
}void left(void){
	clearBit(PORTC,IN2);
	setBit(PORTC,IN1);
	clearBit(PORTC,IN3);
	setBit(PORTC,IN4);
	ENA = 255;
	ENB = 255;
	setBit(PORTD,greenLed);
	clearBit(PORTD,redLed);
}
void Stop(void){
	clearBit(PORTC,IN2);
	clearBit(PORTC,IN1);
	clearBit(PORTC,IN3);
	clearBit(PORTC,IN4);
	ENA = 0;
	ENB = 0;
	clearBit(PORTD,greenLed);
	setBit(PORTD,redLed);
}
