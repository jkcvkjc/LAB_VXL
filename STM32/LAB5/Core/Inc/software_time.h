/*
 * software_time.h
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */

#ifndef INC_SOFTWARE_TIME_H_
#define INC_SOFTWARE_TIME_H_

#define TICK 10
extern int timer1_flag;
void setTimer1(int duration);
void timerRun();

#endif /* INC_SOFTWARE_TIME_H_ */
