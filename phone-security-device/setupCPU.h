/*
 * setupCPU.h
 *
 * Created: 24.12.2020 11:56:16
 *  Author: user
 */ 


#ifndef SETUPCPU_H_
#define SETUPCPU_H_

#define  F_CPU 1000000UL // Настройка частоты процессора

/****************** Библиотеки ***********************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/io.h>



/*********************** Функции начальной настройки портов микроконтроллера ********************************/
void setupCPU (); //функция первоначальной настройки процессора
void activationPort (); //Функция инициализации портов управления сдвиговым регистром 74ch595




#endif /* SETUPCPU_H_ */