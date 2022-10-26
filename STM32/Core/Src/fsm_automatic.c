/*
 * fsm_automatic.c
 *
 *  Created on: Oct 5, 2022
 *      Author: acer
 */

#include "fsm_automatic.h"

//Each state will have 1s to perform task
void fsm_automatic_run(void){
	if (mode==MODE1){
		//For W-E direction
		switch (status1){
			case INIT:
				status1 = AUTO_RED;
				setTimer1(100);
				break;
			case AUTO_RED:
				if (timer1_flag == 1){
					enableRed1();
//					blink7SEG1(counterRed1/10, DOZEN);
//					blink7SEG1(counterRed1/10, UNIT);
					display7SEG1(counterRed1%10);
					counterRed1--;
					if (counterRed1 == THRESHOLD){
						counterRed1 = AUTO_RED;
						status1 = AUTO_GREEN;
					}
					setTimer1(100);
				}
				break;
			case AUTO_GREEN:
				if (timer1_flag == 1){
					enableGreen1();
//					blink7SEG1(counterGreen1/10, DOZEN);
//					blink7SEG1(counterGreen1/10, UNIT);
					display7SEG1(counterGreen1%10);
					counterGreen1--;
					if (counterGreen1 == THRESHOLD){
						counterGreen1 = AUTO_GREEN;
						status1 = AUTO_YELLOW;
					}
					setTimer1(100);
				}
				break;
			case AUTO_YELLOW:
				if (timer1_flag == 1){
					enableYellow1();
//					blink7SEG1(counterYellow1/10, DOZEN);
//					blink7SEG1(counterYellow1/10, UNIT);
					display7SEG1(counterYellow1%10);
					counterYellow1--;
					if (counterYellow1 == THRESHOLD){
						counterYellow1 = AUTO_YELLOW;
						status1 = AUTO_RED;
					}
					setTimer1(100);
				}
				break;
			default:
				break;
		}

		//For N-S direction
		switch (status2){
			case INIT:
				status2 = AUTO_GREEN;
				setTimer2(100);
				break;
			case AUTO_RED:
				if (timer2_flag == 1){
					enableRed2();
//					blink7SEG2(counterRed2/10, DOZEN);
//					blink7SEG2(counterRed2%10, UNIT);
					display7SEG2(counterRed2%10);
					counterRed2--;
					if (counterRed2 == THRESHOLD){
						counterRed2 = AUTO_RED;
						status2 = AUTO_GREEN;
					}
					setTimer2(100);
				}
				break;
			case AUTO_GREEN:
				if (timer2_flag == 1){
					enableGreen2();
//					blink7SEG2(counterGreen2/10, DOZEN);
//					blink7SEG2(counterGreen2%10, UNIT);
					display7SEG2(counterGreen2%10);
					counterGreen2--;
					if (counterGreen2 == THRESHOLD){
						counterGreen2 = AUTO_GREEN;
						status2 = AUTO_YELLOW;
					}
					setTimer2(100);
				}
				break;
			case AUTO_YELLOW:
				if (timer2_flag == 1){
					enableYellow2();
//					blink7SEG2(counterYellow2/10, DOZEN);
//					blink7SEG2(counterYellow2%10, UNIT);
					display7SEG2(counterYellow2%10);
					counterYellow2--;
					if (counterYellow2 == THRESHOLD){
						counterYellow2 = AUTO_YELLOW;
						status2 = AUTO_RED;
					}
					setTimer2(100);
				}
				break;
			default:
				break;
		}
	}
//	switch (status){
//		case INIT:
//			status = AUTO_RED;
//			setTimer1(500);
//			break;
//		case AUTO_RED:
//			if (timer1_flag == 1){
//				status = AUTO_GREEN;
//				setTimer1(300);
//			}
//			if (button1_flag == 1){
//				button1_flag = 0;
//				status = MAN_RED;
//				setTimer1(1000);
//			}
//			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
//			break;
//		case AUTO_GREEN:
//			if (timer1_flag == 1){
//				status = AUTO_YELLOW;
//				setTimer1(200);
//			}
//			break;
//		case AUTO_YELLOW:
//			if (timer1_flag == 1){
//				status = AUTO_RED;
//				setTimer1(500);
//			}
//			break;
//		default:
//			break;
//	}
}
