/*
 * software_time.c
 *
 *  Created on: Dec 7, 2022
 *      Author: ACER
 */

	#include "software_time.h"
	int timer1_counter=0;
	int timer1_flag=0;
	void setTimer1(int duration){
		timer1_counter=duration/TICK;
		timer1_flag=0;
	}
	void timerRun(){
		if(timer1_counter>0){
			timer1_counter--;
			if(timer1_counter<=0){
				timer1_flag=1;
			}
		}
	}