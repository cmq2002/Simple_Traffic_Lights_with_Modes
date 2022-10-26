/*
 * fsm_manual.c
 *
 *  Created on: Oct 12, 2022
 *      Author: acer
 */

#include "fsm_manual.h"


void fsm_manual_run(){
	switch(mode){
		case MODE2:
			{
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
			}
			break;
		case MODE3:
			break;
		case MODE4:
			break;
		default:
			break;
	}
//	switch (status){
//		case MAN_RED:
//			if (timer1_flag == 1){
//				timer1_flag = 0;
//				status = AUTO_RED;
//				setTimer1(500);
//			}
//			if (button1_flag == 1){
//				button1_flag = 0;
//				status = MAN_GREEN;
//				setTimer1(1000);
//			}
//			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
//			break;
//		case MAN_GREEN:
//			break;
//		case MAN_YELLOW:
//			break;
//	}

}

