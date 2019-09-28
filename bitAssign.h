/*
 * bitAssign.h
 *
 * Created: 9/24/2019 12:28:48 AM
 *  Author: Alaa
 */ 


#ifndef BITASSIGN_H_
#define BITASSIGN_H_


#define BV(bit)               (1 << bit)
#define setBit(byte, bit)     (byte |= BV(bit))
#define clearBit(byte, bit)   (byte &= ~BV(bit))
#define toggleBit(byte, bit)  (byte ^= BV(bit)


#endif /* BITASSIGN_H_ */