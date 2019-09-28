/*
 * main103.c
 *
 * Created: 9/24/2019 12:25:03 AM
 *  Author: Alaa
 */
#define F_CPU 16000000UL
#include "main103.h"
int main(void)
{
	bluetoothInit(115200);
	pwmInit();
	motorInit();
	unsigned char data ;
    while(1)
    {
			if (bluetooth_available()){
				data= readData();
				manualControl(data);
			}

	}
}
