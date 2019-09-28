/*
 * pwmInit.c
 *
 * Created: 9/24/2019 8:38:45 AM
 *  Author: Alaa
 */ 
#include <avr/io.h>

void pwmInit(void){
	DDRD|=(1<<PIND7);
	DDRD|= (1<<PIND5);
	
	TCCR0 |= (1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	
	TCCR1A|=(1<<COM1A1)|(1<<WGM10);
	TCCR1B|=(1<<CS10)|(1<<WGM12);
	
	TCCR2 |= (1<<WGM20)|(1<<WGM21)|(1<<COM21)|(1<<CS20);
	
	
}