/*
 * LEDCPP.h
 *
 * Created: 15/05/2020 04:39:35 م
 *  Author: ahmed.bakoush
 */ 


#ifndef LEDCPP_H_
#define LEDCPP_H_

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

class LED {
private:	
	LED_STATE_t state;
	LED_COLOR_t color;
	volatile uint8_t * LED_PORT;
	uint8_t LED_pin;
public:
	LED (LED_STATE_t _state ,LED_COLOR_t _color ,
		volatile uint8_t *   _LED_PORT,	uint8_t     _LED_pin );
	void led_SetState(LED_STATE_t _state);
	LED_STATE_t led_GetState() const;

};

#endif /* LEDCPP_H_ */