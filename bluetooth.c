/*
 * bluetooth.c
 *
 * Created: 9/24/2019 7:01:43 PM
 *  Author: Alaa
 */
#include <math.h>

#define BAUDRATE 8
#include <avr/io.h>

void bluetoothInit(long BAUD){
	UBRRH = (BAUDRATE>>8);
	UBRRL = BAUDRATE;
	UCSRB |= (1 << RXEN) | (1 << TXEN);
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1);
}

void transimit (unsigned char data){
	while (!( UCSRA & (1<<UDRE)));
	UDR = data;
}

unsigned char readData(void){
	while ( !(UCSRA & (1 << RXC)) );
	return (UDR);
}

uint8_t bluetooth_available(void){
  if (UCSRA&(1<<RXC)){
    return 1;
  }else{
    return 0;
  }
}
