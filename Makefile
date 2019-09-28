MCU=atmega16a
TARGET=main103
OUTPUT = proj
DEBUG_PATH = /media/alaa/DeVoe3/AVR/main103/main103/debug/
all:
	avr-gcc -g -Os -mmcu=${MCU} -c ${TARGET}.c -o ${DEBUG_PATH}${TARGET}.o
	avr-gcc -g -Os -mmcu=${MCU} -c motors.c -o ${DEBUG_PATH}motors.o
	avr-gcc -g -Os -mmcu=${MCU} -c pwmInit.c -o ${DEBUG_PATH}pwmInit.o
	avr-gcc -g -Os -mmcu=${MCU} -c manualControl.c -o ${DEBUG_PATH}manualControl.o
	avr-gcc -g -Os -mmcu=${MCU} -c bluetooth.c -o ${DEBUG_PATH}bluetooth.o
	
	avr-gcc -g -mmcu=${MCU} ${DEBUG_PATH}${TARGET}.o ${DEBUG_PATH}motors.o ${DEBUG_PATH}pwmInit.o ${DEBUG_PATH}manualControl.o ${DEBUG_PATH}bluetooth.o -o ${DEBUG_PATH}${OUTPUT}.elf
	avr-objcopy -j .text -j .data -O ihex ${DEBUG_PATH}${OUTPUT}.elf ${DEBUG_PATH}${OUTPUT}.hex
flash:
	avrdude -c usbasp -p m16 -u -U flash:w:${DEBUG_PATH}${OUTPUT}.hex

clean:
	rm -f *.bin *.hex *.o *.elf
