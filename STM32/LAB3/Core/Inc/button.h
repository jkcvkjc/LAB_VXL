/*
 * button.h
 *
 *  Created on: Nov 6, 2022
 *      Author: ACER
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define NUMBER_OF_BUTTONS 3

extern int button_flag[];
extern int button_flag_press_1s[];

void getKeyInput();
void subKeyProcess(int index);

#endif /* INC_BUTTON_H_ */
