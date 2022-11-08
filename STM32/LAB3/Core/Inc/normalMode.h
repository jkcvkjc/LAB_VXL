/*
 * normalMode.h
 *
 *  Created on: Nov 6, 2022
 *      Author: ACER
 */

#ifndef INC_NORMALMODE_H_
#define INC_NORMALMODE_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"
#include "display7Segment.h"

void normal_mode();
void setValueLocalModeNormal();
//status of traffic light
int state_led;
//the time of status of traffic light
int counter_second;
//countdown the time of led_red
int counter_red;
//countdown the time of led_green
int counter_green;
//countdown the time of led_yellow
int counter_yellow;
//turn on or turn off 4 led7segment
int status_led7segment;
//count the time of led_green or led_yellow
int counter_second1;

#endif /* INC_NORMALMODE_H_ */
