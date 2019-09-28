/*
 * manualControl.c
 *
 * Created: 9/27/2019 3:42:27 PM
 *  Author: Alaa
 */ 
#include "manualControl.h"
void manualControl(unsigned char data){
	if (data=='f'){
		forward();
	}else if (data =='l'){
		left();
	}else if (data =='r'){
		right();
	}else if (data =='b'){
		backward();
	}else if (data =='s'){
		Stop();
	}
}
