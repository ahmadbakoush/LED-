/*
 * LED.h
 *
 * Created: 15/05/2020 02:51:43 م
 *  Author: ahmed.bakoush
 */ 


#ifndef LED_H_
#define LED_H_

#include <stdint.h>

typedef enum {
	RED		= 0,
	GREEN	= 1,
	BLUE	= 2,
	YELLO	= 3,
	}LED_COLOR_t;


typedef enum {
	OFF = 0,
	ON  = 1,
	}LED_STATE_t;

typedef struct {
	LED_STATE_t state;
	LED_COLOR_t color;
	volatile uint8_t * LED_PORT;
	uint8_t LED_pin;
	}LED_TYPE_t;
	
void led_Ctor (LED_TYPE_t * me ,
			   LED_STATE_t _state ,
			   LED_COLOR_t _color ,
			   volatile uint8_t *   _LED_PORT,
			   uint8_t     _LED_pin );
void led_SetState(LED_TYPE_t * me ,LED_STATE_t _state);	
LED_STATE_t led_GetState(LED_TYPE_t *const me);	
	   	
#endif /* LED_H_ */