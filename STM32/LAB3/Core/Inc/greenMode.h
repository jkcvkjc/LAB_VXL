/*
 * greenMode.h
 *
 *  Created on: Nov 7, 2022
 *      Author: ACER
 */

#ifndef INC_GREENMODE_H_
#define INC_GREENMODE_H_

#include "main.h"
#include "button.h"
#include "software_timer.h"
#include "display7Segment.h"
#include "global.h"

//display single LEDs and led7Segment when mode=3
void green_mode();
//set the time of led when press button 3(button_flag[2]=1)
void setValueGreen();

#endif /* INC_GREENMODE_H_ */
