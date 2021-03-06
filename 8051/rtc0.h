#ifndef __RTC0_H
#define __RTC0_H

//using tmr0 as a rtc

//hardware configuration
//end hardware configuration

//predefined intervals for the rtc
#define RTC_ms				(F_CPU / 1000)			//1 ms - make sure that it doesn't overflow
#define RTC_10000ms			(RTC_ms * 10000)		//how many ticks to trigger in 10000ms
#define RTC_5000ms			(RTC_ms * 5000)			//how many ticks to trigger in 5000ms
#define RTC_2000ms			(RTC_ms * 2000)			//how many ticks to trigger in 2000ms
#define RTC_1000ms			(RTC_ms * 1000)			//how many ticks to trigger in 1000ms
#define RTC_500ms			(RTC_ms * 500)			//how many ticks to trigger in 500ms
#define RTC_250ms			(RTC_ms * 250)			//how many ticks to trigger in 250ms
#define RTC_100ms			(RTC_ms * 100)			//how many ticks to trigger in 100ms
//as we use the 16-bit timer, 64ms is the shortest you can go
//as _rtc0_trigger is a long time, the longest period is 4bn ticks -> ~4000 seconds

typedef struct {
	unsigned char half_sec;							//half second indicator - 0=1st half, 1=2nd half
	unsigned char sec;
	unsigned char min;
	unsigned char hour;
	unsigned char day;
} RTC_TIME;

#define RTC0_ERROR			0						//RTC0 error term

extern volatile RTC_TIME _rtc0;

//#define RTC0_TRIGGER		RTC_1000ms					//configure rtc0 to trigger
//initialize the timer
//prescaler not used - for compatability reasons only
//8-bit period

void rtc0_init(unsigned long trigger);				//how frequent is the rtc0_isr to be triggered

//set up the isr handler
void rtc0_act(void (*isr_ptr)(void));				//set up the isr pointer

void rtc0_update(void);								//update rtc0

#endif //rtc0_h
