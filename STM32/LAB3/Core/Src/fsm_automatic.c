/*
 * fsm_automatic.c
 *
 *  Created on: Nov 7, 2022
 *      Author: ACER
 */
#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch(mode){
	case INIT:
		setValueLocalModeNormal();
		mode=NORMAL;
		setTimer3(1000);
		break;
	case NORMAL:
		if(timer3_flag==1){
			normal_mode();
			setTimer3(500);
		}
		if(button_flag[0]==1){
			button_flag[0]=0;
			clear_all_traffic_led=0;
			mode=RED;
			setTimer3(1000);
		}
		break;
	case RED:
		red_mode();
		if(button_flag[0]==1){
			button_flag[0]=0;
			clear_all_traffic_led=0;
			mode=GREEN;
			setTimer3(1000);
		}
		if(button_flag[2]==1){
			button_flag[2]=0;
			setValueRed();
			mode=INIT;
		}
		break;
	case GREEN:
		green_mode();
		if(button_flag[0]==1){
			button_flag[0]=0;
			clear_all_traffic_led=0;
			mode=YELLOW;
			setTimer3(1000);
		}
		if(button_flag[2]==1){
			button_flag[2]=0;
			setValueGreen();
			mode=INIT;
		}
		break;
	case YELLOW:
		yellow_mode();
		if(button_flag[0]==1){
			button_flag[0]=0;
			mode=INIT;
			setTimer3(1000);
		}
		if(button_flag[2]==1){
			button_flag[2]=0;
			setValueGreen();
			mode=INIT;
		}
		break;
	default:
		break;
	}
}
