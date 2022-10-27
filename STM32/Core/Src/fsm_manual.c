/*
 * fsm_manual.c
 *
 *  Created on: Oct 12, 2022
 *      Author: acer
 */

#include "fsm_manual.h"


void fsm_manual_run(){
	if (mode == MODE2){
		//Blink LEDs
		switch (statusMODE2_1){
			case INIT:
				statusMODE2_1 = ON;
				setTimer4(1);
				break;
			case ON:
				if (timer4_flag == 1){
					toggleREDs();
					setTimer4(25);
				}
				break;
			case OFF:
				if (timer4_flag == 1){
					toggleREDs();
					setTimer4(25);
				}
			default:
				break;
		}

		//Show mode and value
		switch (statusMODE2_2){
			case INIT:
				statusMODE2_2 = DOZEN;
				setTimer5(1);
				break;
			case DOZEN:
				if (timer5_flag == 1){
					blinkDigit1(mode, AUTO_RED);
					statusMODE2_2 = UNIT;
					setTimer5(25);
				}
				break;
			case UNIT:
				if (timer5_flag == 1){
					blinkDigit2(mode, AUTO_RED);
					statusMODE2_2 = DOZEN;
					setTimer5(25);
				}
				break;
			default:
				break;
		}

		// Changing Red Light Waiting Time
		switch(statusMODE2_3){
			case INIT:
				if (isButtonPressed(BUTTON2)==1)
					statusMODE2_3 = CHANGE;
				break;
			case CHANGE:
				if (isButtonPressed(BUTTON2)==1) AUTO_RED++;
				if (isButtonPressed(BUTTON1)==1
					&& timeButtonPressed(BUTTON1)%NUM_OF_BUTTON==2){
					mode = MODE3;
					clearLEDs();
				}
				if (isButtonPressed(BUTTON4)==1) statusMODE2_3 = SAVE;
				break;
			case SAVE:
				mode = MODE1;
				clearLEDs();
				break;
			default:
				break;
		}
	}
}

