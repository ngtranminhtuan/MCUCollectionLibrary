/*
 * tmr32b1.h
 *
 *  Created on: May 15, 2016
 *      Author: Ken
 */

#ifndef TMR32B1_H_
#define TMR32B1_H_

//#include <lpc122x.h>				//we use lpc122x
#include "gpio.h"					//we use F_CPU + gpio functions

//hardware configuration
	//tmr32b1_init(1000);							//set the prescaler
	//tmr32b1_match0(TMR16B_1ms, CTxMR_EINT | CTxMR_RESET);				//set match/reset and enable interrupt = overflow isr
	//tmr32b1_act0(led_set);
	//tmr32b1_match3(TMR16B_1ms / 20, CTxMR_EINT);				//set match and enable interrupt
	//tmr32b1_act3(led_clr);
//end hardware configuration

//global defines
#define F_PCLK			(F_CPU)
#define TMR32B_ms		(F_PCLK / 1000)
#define TMR32B_1ms		(TMR32B_ms * 1)
#define TMR32B_2ms		(TMR32B_ms * 2)
#define TMR32B_5ms		(TMR32B_ms * 5)
#define TMR32B_10ms		(TMR32B_ms * 10)
#define TMR32B_20ms		(TMR32B_ms * 20)
#define TMR32B_50ms		(TMR32B_ms * 50)
#define TMR32B_100ms	(TMR32B_ms * 100)
#define TMR32B_200ms	(TMR32B_ms * 200)
#define TMR32B_500ms	(TMR32B_ms * 500)
#define TMR32B_1000ms	(TMR32B_ms * 1000)

#define CTxMR_EINT		0b001		//enable interrupt on match
#define CTxMR_RESET		0b010		//reset tc on match
#define CTxMR_STOP		0b100		//stop on match

//global variable

//pointer to user handler


//set up tmr
void tmr32b1_init(uint32_t prescaler);

//set up match register - ch0
void tmr32b1_match0(uint32_t match, uint32_t config);

//set up match register - ch1
void tmr32b1_match1(uint32_t match, uint32_t config);

//set up match register - ch2
void tmr32b1_match2(uint32_t match, uint32_t config);

//set up match register - ch3
void tmr32b1_match3(uint32_t match, uint32_t config);

//set up tmr handler, channel 0
void tmr32b1_act0(void (*isr_ptr)(void));

//set up tmr handler, channel 1
void tmr32b1_act1(void (*isr_ptr)(void));

//set up tmr handler, channel 2
void tmr32b1_act2(void (*isr_ptr)(void));

//set up tmr handler, channel 3
void tmr32b1_act3(void (*isr_ptr)(void));

#endif /* TMR32B1_H_ */
