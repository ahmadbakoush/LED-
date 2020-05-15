/*
 * Led.c
 *
 * Created: 15/05/2020 02:51:30 م
 *  Author: ahmed.bakoush
 */ 


#include "LED.h"

void led_Ctor (LED_TYPE_t * me ,
			   LED_STATE_t _state ,
			   LED_COLOR_t _color ,
			   volatile uint8_t *   _LED_PORT,
			   uint8_t     _LED_pin )
{
	me->color	 = _color;
	me->state	 = _state;
	me->LED_pin	 = _LED_pin;
	me->LED_PORT = _LED_PORT;
	* (me->LED_PORT) |= (_state << me->LED_pin);
}


void led_SetState(LED_TYPE_t * me ,LED_STATE_t _state)
{
	me->state = _state;
	if (_state == ON)
	{
		* (me->LED_PORT) |=  (1 << me->LED_pin); 
	}else{
		* (me->LED_PORT) &= ~(1 << me->LED_pin);
	}
	
}