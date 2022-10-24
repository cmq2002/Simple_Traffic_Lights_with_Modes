/*
 * fsm_manual.c
 *
 *  Created on: Oct 12, 2022
 *      Author: acer
 */

#include "fsm_manual.h"


void fsm_manual_run(){
	switch (status){
		case MAN_RED:
			if (timer1_flag == 1){
				timer1_flag = 0;
				status = AUTO_RED;
				setTimer1(500);
			}
			if (button1_flag == 1){
				button1_flag = 0;
				status = MAN_GREEN;
				setTimer1(1000);
			}
			HAL_GPIO_TogglePin(LED_RED1_GPIO_Port, LED_RED1_Pin);
			break;
		case MAN_GREEN:
			break;
		case MAN_YELLOW:
			break;
	}
}

