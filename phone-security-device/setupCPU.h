/*
 * setupCPU.h
 *
 * Created: 24.12.2020 11:56:16
 *  Author: user
 */ 


#ifndef SETUPCPU_H_
#define SETUPCPU_H_

#define  F_CPU 1000000UL // ��������� ������� ����������

/****************** ���������� ***********************/
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/io.h>



/*********************** ������� ��������� ��������� ������ ���������������� ********************************/
void setupCPU (); //������� �������������� ��������� ����������
void activationPort (); //������� ������������� ������ ���������� ��������� ��������� 74ch595




#endif /* SETUPCPU_H_ */