/*_
 * AVR ELF.c
 *
 * Created: 04/04/2020 01:28:27 م
 * Author : ahmed.bakoush
 */ 

#include <avr/io.h>

#define 	F_CPU   1000000UL

#include <util/delay.h>


#include "LED.h"

int main(void)
{
    /* Replace with your application code */
	DDRA = 0xFF;
	LED_TYPE_t led1;
	LED_TYPE_t led2;
	led_Ctor(&led1,ON,RED,&PORTA,1);
	led_Ctor(&led2,ON,RED,&PORTA,0);
    while (1) 
    {
		led_SetState(&led1,ON);
		led_SetState(&led2,OFF);
	   _delay_ms(200);
	   led_SetState(&led1,OFF);
	   led_SetState(&led2,ON);	
	   _delay_ms(200);
    }
}

