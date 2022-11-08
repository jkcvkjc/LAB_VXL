/*
 * display7Segment.c
 *
 *  Created on: Nov 6, 2022
 *      Author: ACER
 */


#include "display7Segment.h"

void display7Segment12(int count){
	switch(count){
	case 0:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 0);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 1);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 1);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 1);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 1);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 0);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 1);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 1);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 1);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 1);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 1);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 1);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 0);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 1);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 1);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 0);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG12_0_GPIO_Port, SEG12_0_Pin, 0);
		HAL_GPIO_WritePin(SEG12_1_GPIO_Port, SEG12_1_Pin, 0);
		HAL_GPIO_WritePin(SEG12_2_GPIO_Port, SEG12_2_Pin, 0);
		HAL_GPIO_WritePin(SEG12_3_GPIO_Port, SEG12_3_Pin, 0);
		HAL_GPIO_WritePin(SEG12_4_GPIO_Port, SEG12_4_Pin, 1);
		HAL_GPIO_WritePin(SEG12_5_GPIO_Port, SEG12_5_Pin, 0);
		HAL_GPIO_WritePin(SEG12_6_GPIO_Port, SEG12_6_Pin, 0);
		break;
	default:
		break;
	}
}

void display7Segment34(int count){
	switch(count){
	case 0:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 0);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 1);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 1);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 1);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 1);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 0);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 1);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 1);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 1);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 1);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 1);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 1);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 0);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 1);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 1);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 0);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG34_0_GPIO_Port, SEG34_0_Pin, 0);
		HAL_GPIO_WritePin(SEG34_1_GPIO_Port, SEG34_1_Pin, 0);
		HAL_GPIO_WritePin(SEG34_2_GPIO_Port, SEG34_2_Pin, 0);
		HAL_GPIO_WritePin(SEG34_3_GPIO_Port, SEG34_3_Pin, 0);
		HAL_GPIO_WritePin(SEG34_4_GPIO_Port, SEG34_4_Pin, 1);
		HAL_GPIO_WritePin(SEG34_5_GPIO_Port, SEG34_5_Pin, 0);
		HAL_GPIO_WritePin(SEG34_6_GPIO_Port, SEG34_6_Pin, 0);
		break;
	default:
		break;
	}
}
