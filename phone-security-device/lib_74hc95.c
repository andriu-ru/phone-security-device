/*
 * _74ср595.c
 *
 * Created: 24.12.2020 16:39:42
 *  Author: user
 */ 

#include "lib_74hc595.h"

void activationPort () //Функция инициализации портов управления сдвиговым регистром 74ch595
{
	PORTD &= ~(1<<PD7)|(1<<PD6)|(1<<PD5);
	DDRD |= (1<<PD7)|(1<<PD6)|(1<<PD5);
	
	PORTB &= ~(1<<PB6)|(1<<PB7);
	DDRD |= (1<<PB6)|(1<<PB7);
}

void test74hc595 () // функция для тестирвания работы сдвигового регистра 74hc595, актевирует один пин, номер пина зависит от переменной i в функции for
{
	OE_on;
	MR_on;
	
	DS_UP;
	for (int i = 0; i <= 4; i++)
	{
		SHCP_UP;
		SHCP_DOWN;
		if (DS_CHECK_UP) DS_DOWN;
		
	}
	STCP_UP;
	STCP_DOWN;
}