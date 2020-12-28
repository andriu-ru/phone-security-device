/*
 * setupCPU.c
 *
 * Created: 24.12.2020 11:56:44
 *  Author: user
 */ 

#include "setupCPU.h"

void setupCPU () //функция первоначальной настройки процессора
{
	
	PORTD = 0x00;
	DDRD = 0xFF;
	
	PORTB = 0x00;
	DDRB = 0xFF;
	
	PORTC = 0x00;
	DDRC = 0x3F;
}

