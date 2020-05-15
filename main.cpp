/*
 * AVR CPP.cpp
 *
 * Created: 15/05/2020 12:33:11 م
 * Author : ahmed.bakoush
 */ 

#include <avr/io.h>
#include "LEDCPP.h"

#define 	F_CPU   1000000UL

#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRA  = 0xFF;
    LED led1(ON,RED,&PORTA,1);
	LED led2(OFF,RED,&PORTA,0);
    while (1) 
    {
			led1.led_SetState(ON);
			led2.led_SetState(OFF);
			_delay_ms(200);
			led1.led_SetState(OFF);
			led2.led_SetState(ON);
			_delay_ms(200);
    }
}

