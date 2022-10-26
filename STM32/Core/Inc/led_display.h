/*
 * led_display.h
 *
 *  Created on: Oct 24, 2022
 *      Author: acer
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

#include "main.h"

void enableRed1();
void enableYellow1();
void enableGreen1();

void enableRed2();
void enableYellow2();
void enableGreen2();

void display7SEG1(int num);
void display7SEG2(int num);

#endif /* INC_LED_DISPLAY_H_ */
