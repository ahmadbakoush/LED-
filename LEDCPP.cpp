/*
 * LEDCPP.cpp
 *
 * Created: 15/05/2020 04:39:13 م
 *  Author: ahmed.bakoush
 */


#include "LEDCPP.h"

LED::LED (LED_STATE_t _state ,LED_COLOR_t _color ,
		 volatile uint8_t *   _LED_PORT,uint8_t     _LED_pin )
{
	this->color	 = _color;
	this->state	 = _state;
	this->LED_pin	 = _LED_pin;
	this->LED_PORT = _LED_PORT;
	* (this->LED_PORT) |= (_state << this->LED_pin);
}


void LED::led_SetState(LED_STATE_t _state)
{
	this->state = _state;
	if (_state == ON)
	{
		* (this->LED_PORT) |=  (1 << this->LED_pin);
		}else{
		* (this->LED_PORT) &= ~(1 << this->LED_pin);
	}
	
}