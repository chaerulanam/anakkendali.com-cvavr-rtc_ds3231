#ifndef _RTCLIB_INCLUDED_
#define _RTCLIB_INCLUDED_

#include <i2c.h>
#include <stdint.h>
#include <stdbool.h>

#pragma used+
// static uint8_t read_i2c_register(uint8_t addr, uint8_t reg);
// static void write_i2c_register(uint8_t addr, uint8_t reg, uint8_t val);

unsigned char rtc_read(unsigned char address);

void rtc_write(unsigned char address,unsigned char data);

void rtc_init(unsigned char rs,unsigned char sqwe,unsigned char out);

void rtc_get_time(unsigned char *hour,unsigned char *min,unsigned char *sec);

void rtc_set_time(unsigned char hour,unsigned char min,unsigned char sec);

void rtc_get_date(unsigned char *week_day, unsigned char *day,unsigned char *month,unsigned char *year);

void rtc_set_date(unsigned char week_day, unsigned char day,unsigned char month,unsigned char year);
uint8_t conv2d(const char* p);
bool *setDateTime(const char* date, const char* time);

bool rtc_lostPower(void);
uint8_t read_i2c_register(uint8_t addr, uint8_t reg);

#pragma used-

#pragma library RTCLib.lib

#endif