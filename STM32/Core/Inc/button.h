/*
 * button.h
 *
 *  Created on: Sep 21, 2022
 *      Author: KAI
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET


// not allow main to access flag
// extern int button1_flag;


int isButtonPressed();

int timeButtonPressed();

void clearButtonRecord();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
